#pragma once

#include <memory>
#include <vector>
#include <functional>
#include <initializer_list>
#include "Exceptions.hpp"
#include "StreamBase.hpp"

namespace xPlat {

    class ObjectBase
    {
    public:
        ObjectBase(void* value) : v(value) {}
        virtual ~ObjectBase() { }

        virtual void Write() = 0;
        virtual void Read() = 0;
        virtual void Validate() = 0;
        virtual size_t Size() = 0;

        template <class T>
        static T* GetValue(ObjectBase* o)
        {
            return reinterpret_cast<T*>(o->v);
        }

        template <class T>
        static void SetValue(ObjectBase* o, T& value)
        {
            *reinterpret_cast<T*>(o->v) = value;
        }

    protected:
        void* value() { return v; }
        void* v = nullptr;
    };

    class StructuredObject : public ObjectBase
    {
    public:
        StructuredObject(std::initializer_list<std::shared_ptr<ObjectBase>> list) : fields(list), ObjectBase(&fields) { }

        virtual void Write()
        {
            for (auto field : fields)
            {
                field->Write();
            }
        }

        virtual void Read()
        {
            for (auto field : fields)
            {
                field->Read();
                field->Validate();
            }
        }

        virtual void Validate() {}

        virtual size_t Size()
        {
            size_t result = 0;
            for (auto field : fields)
            {
                result += field->Size();
            }
            return result;
        }

        ObjectBase* Field(size_t index) { return fields[index].get(); }

    protected:
        std::vector<std::shared_ptr<ObjectBase>> fields;
    };

    namespace Meta {
        template <class T>
        class FieldBase : public ObjectBase
        {
        public:
            using Lambda = std::function<void(T& v)>;

            FieldBase(StreamBase* stream, Lambda validator) : stream(stream), validate(validator), ObjectBase(&value) {}

            virtual T&   GetValue()     { return value; }
            virtual void SetValue(T& v) { value = v; }

            virtual void Write()
            {
                stream->Write(sizeof(T), reinterpret_cast<std::uint8_t*>(const_cast<T*>(&value)));
            }

            virtual void Read()
            {
                stream->Read(sizeof(T), reinterpret_cast<std::uint8_t*>(const_cast<T*>(&value)));
                Validate();
            }

            void Validate() { validate(GetValue()); }

            virtual size_t Size() { return sizeof(T); }

        protected:
            T value;
            StreamBase* stream;
            Lambda validate;
        };

        class Field2Bytes : public FieldBase<std::uint16_t>
        {
        public:
            Field2Bytes(StreamBase* stream, Lambda&& validator) : FieldBase<std::uint16_t>(stream, validator) {}
        };

        class Field4Bytes : public FieldBase<std::uint32_t>
        {
        public:
            Field4Bytes(StreamBase* stream, Lambda&& validator) : FieldBase<std::uint32_t>(stream, validator) {}
        };

        class Field8Bytes : public FieldBase<std::uint64_t>
        {
        public:
            Field8Bytes(StreamBase* stream, Lambda&& validator) : FieldBase<std::uint64_t>(stream, validator) {}
        };

        class FieldNBytes : public ObjectBase
        {
        public:
            using Lambda = std::function<void(std::vector<std::uint8_t>& v)>;
            FieldNBytes(StreamBase* stream, Lambda validator) : stream(stream), validate(validator), ObjectBase(&value) {}

            size_t Size() { return value.size(); }

            virtual void Write()
            {
                stream->Write(Size(), value.data());
            }

            virtual void Read()
            {
                stream->Read(Size(), value.data());
                Validate();
            }

            void Validate() { validate(value); }

        protected:
            std::vector<std::uint8_t> value;
            StreamBase* stream;
            Lambda validate;
        };
    }
}