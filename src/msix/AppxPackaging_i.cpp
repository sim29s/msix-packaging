//
//  Copyright (C) 2017 Microsoft.  All rights reserved.
//  See LICENSE file in the project root for full license information.
// 
/* link this file in with the server and any clients */
/* File based on the header created by MIDL compiler version 8.01.0622 of AppxPackaging.idl */
/* @@MIDL_FILE_HEADING(  ) */

// Changes made to the original AppxPackaging.h file:
// - Add IUnknown, ISequentialStream and IStream GUIDs
// - Remove CLSIDs and LIBID_APPXPACKAGING
// - Add internal interfaces
extern "C"{

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef WIN32
#define MIDL_PUBLIC_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        __attribute__((visibility("default"))) extern "C" const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}
#else
#define MIDL_PUBLIC_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        extern "C" const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}


MIDL_PUBLIC_GUID(IID, IID_IUnknown,0x00000000,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
MIDL_PUBLIC_GUID(IID, IID_ISequentialStream,0x0c733a30,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);
MIDL_PUBLIC_GUID(IID, IID_IStream,0x0000000c,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);
MIDL_PUBLIC_GUID(IID, IID_IAppxFactory,0xbeb94909,0xe451,0x438b,0xb5,0xa7,0xd7,0x9e,0x76,0x7b,0x75,0xd8);
MIDL_PUBLIC_GUID(IID, IID_IAppxPackageReader,0xb5c49650,0x99bc,0x481c,0x9a,0x34,0x3d,0x53,0xa4,0x10,0x67,0x08);
MIDL_PUBLIC_GUID(IID, IID_IAppxPackageWriter,0x9099e33b,0x246f,0x41e4,0x88,0x1a,0x00,0x8e,0xb6,0x13,0xf8,0x58);
MIDL_PUBLIC_GUID(IID, IID_IAppxFile,0x91df827b,0x94fd,0x468f,0x82,0x7b,0x57,0xf4,0x1b,0x2f,0x6f,0x2e);
MIDL_PUBLIC_GUID(IID, IID_IAppxFilesEnumerator,0xf007eeaf,0x9831,0x411c,0x98,0x47,0x91,0x7c,0xdc,0x62,0xd1,0xfe);
MIDL_PUBLIC_GUID(IID, IID_IAppxBlockMapReader,0x5efec991,0xbca3,0x42d1,0x9e,0xc2,0xe9,0x2d,0x60,0x9e,0xc2,0x2a);
MIDL_PUBLIC_GUID(IID, IID_IAppxBlockMapFile,0x277672ac,0x4f63,0x42c1,0x8a,0xbc,0xbe,0xae,0x36,0x00,0xeb,0x59);
MIDL_PUBLIC_GUID(IID, IID_IAppxBlockMapFilesEnumerator,0x02b856a2,0x4262,0x4070,0xba,0xcb,0x1a,0x8c,0xbb,0xc4,0x23,0x05);
MIDL_PUBLIC_GUID(IID, IID_IAppxBlockMapBlock,0x75cf3930,0x3244,0x4fe0,0xa8,0xc8,0xe0,0xbc,0xb2,0x70,0xb8,0x89);
MIDL_PUBLIC_GUID(IID, IID_IAppxBlockMapBlocksEnumerator,0x6b429b5b,0x36ef,0x479e,0xb9,0xeb,0x0c,0x14,0x82,0xb4,0x9e,0x16);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestReader,0x4e1bd148,0x55a0,0x4480,0xa3,0xd1,0x15,0x54,0x47,0x10,0x63,0x7c);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestReader2,0xd06f67bc,0xb31d,0x4eba,0xa8,0xaf,0x63,0x8e,0x73,0xe7,0x7b,0x4d);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestReader3,0xC43825AB,0x69B7,0x400A,0x97,0x09,0xCC,0x37,0xF5,0xA7,0x2D,0x24);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestPackageId,0x283ce2d7,0x7153,0x4a91,0x96,0x49,0x7a,0x0f,0x72,0x40,0x94,0x5f);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestProperties,0x03faf64d,0xf26f,0x4b2c,0xaa,0xf7,0x8f,0xe7,0x78,0x9b,0x8b,0xca);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestTargetDeviceFamiliesEnumerator,0x36537F36,0x27A4,0x4788,0x88,0xC0,0x73,0x38,0x19,0x57,0x50,0x17);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestTargetDeviceFamily,0x9091B09B,0xC8D5,0x4F31,0x86,0x87,0xA3,0x38,0x25,0x9F,0xAE,0xFB);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestPackageDependenciesEnumerator,0xb43bbcf9,0x65a6,0x42dd,0xba,0xc0,0x8c,0x67,0x41,0xe7,0xf5,0xa4);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestPackageDependency,0xe4946b59,0x733e,0x43f0,0xa7,0x24,0x3b,0xde,0x4c,0x12,0x85,0xa0);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestResourcesEnumerator,0xde4dfbbd,0x881a,0x48bb,0x85,0x8c,0xd6,0xf2,0xba,0xea,0xe6,0xed);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestDeviceCapabilitiesEnumerator,0x30204541,0x427b,0x4a1c,0xba,0xcf,0x65,0x5b,0xf4,0x63,0xa5,0x40);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestCapabilitiesEnumerator,0x11D22258,0xF470,0x42C1,0xB2,0x91,0x83,0x61,0xC5,0x43,0x7E,0x41);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestApplicationsEnumerator,0x9eb8a55a,0xf04b,0x4d0d,0x80,0x8d,0x68,0x61,0x85,0xd4,0x84,0x7a);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestApplication,0x5da89bf4,0x3773,0x46be,0xb6,0x50,0x7e,0x74,0x48,0x63,0xb7,0xe8);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestQualifiedResourcesEnumerator,0x8ef6adfe,0x3762,0x4a8f,0x93,0x73,0x2f,0xc5,0xd4,0x44,0xc8,0xd2);
MIDL_PUBLIC_GUID(IID, IID_IAppxManifestQualifiedResource,0x3b53a497,0x3c5c,0x48d1,0x9e,0xa3,0xbb,0x7e,0xac,0x8c,0xd7,0xd4);
MIDL_PUBLIC_GUID(IID, IID_IAppxBundleFactory,0xBBA65864,0x965F,0x4A5F,0x85,0x5F,0xF0,0x74,0xBD,0xBF,0x3A,0x7B);
MIDL_PUBLIC_GUID(IID, IID_IAppxBundleWriter,0xEC446FE8,0xBFEC,0x4C64,0xAB,0x4F,0x49,0xF0,0x38,0xF0,0xC6,0xD2);
MIDL_PUBLIC_GUID(IID, IID_IAppxBundleReader,0xDD75B8C0,0xBA76,0x43B0,0xAE,0x0F,0x68,0x65,0x6A,0x1D,0xC5,0xC8);
MIDL_PUBLIC_GUID(IID, IID_IAppxBundleManifestReader,0xCF0EBBC1,0xCC99,0x4106,0x91,0xEB,0xE6,0x74,0x62,0xE0,0x4F,0xB0);
MIDL_PUBLIC_GUID(IID, IID_IAppxBundleManifestPackageInfoEnumerator,0xF9B856EE,0x49A6,0x4E19,0xB2,0xB0,0x6A,0x24,0x06,0xD6,0x3A,0x32);
MIDL_PUBLIC_GUID(IID, IID_IAppxBundleManifestPackageInfo,0x54CD06C1,0x268F,0x40BB,0x8E,0xD2,0x75,0x7A,0x9E,0xBA,0xEC,0x8D);

// Exclusive to the MSIX SDK
MIDL_PUBLIC_GUID(IID, IID_IMsixDocumentElement,0xE8900E0E,0x1DFD,0x4728,0x83,0x52,0xAA,0xDA,0xEB,0xBF,0x00,0x65);
MIDL_PUBLIC_GUID(IID, IID_IMsixElement,0x5B6786FF,0x6145,0x4F0E,0xB8,0xC9,0x8E,0x03,0xAA,0xCB,0x60,0xD0);
MIDL_PUBLIC_GUID(IID, IID_IMsixElementEnumerator,0x7E7EA105,0xA4F9,0x4C12,0x9E,0xFA,0x98,0xEF,0x18,0x95,0x41,0x8A);
MIDL_PUBLIC_GUID(IID, IID_IMsixFactoryOverrides,0x0ACEDBDB,0x57CD,0x4ACA,0X8C,0XEE,0X33,0XFA,0X52,0X39,0X43,0X16);
MIDL_PUBLIC_GUID(IID, IID_IMsixStreamFactory,0XC74F4821,0X3B82,0X4AD5,0X98,0XEA,0X3D,0X52,0X68,0X1A,0XFF,0X56);
MIDL_PUBLIC_GUID(IID, IID_IMsixApplicabilityLanguagesEnumerator,0xbfc4655a,0xbe7a,0x456a,0xbc,0x4e,0x2a,0xf9,0x48,0x1e,0x84,0x32);

// internal interfaces.
MIDL_DEFINE_GUID(IID, IID_IPackage,              0x51B2C456,0xAAA9,0x46D6,0x8E,0xC9,0x29,0x82,0x20,0x55,0x91,0x89);
MIDL_DEFINE_GUID(IID, IID_IStorageObject,        0xEC25B96E,0x0DB1,0x4483,0xBD,0xB1,0xCA,0xB1,0x10,0x9C,0xB7,0x41);
MIDL_DEFINE_GUID(IID, IID_IMsixFactory,          0x1f850db4,0x32b8,0x4db6,0x8b,0xf4,0x5a,0x89,0x7e,0xb6,0x11,0xf1);
MIDL_DEFINE_GUID(IID, IID_IVerifierObject,       0xcb0a105c,0x3a6c,0x4e48,0x93,0x51,0x37,0x7c,0x4d,0xcc,0xd8,0x90);
MIDL_DEFINE_GUID(IID, IID_IXmlElement,           0xac94449e,0x442d,0x4bed,0x8f,0xca,0x83,0x77,0x0c,0x0f,0x7e,0xe9);
MIDL_DEFINE_GUID(IID, IID_IXmlDom,               0x0e7a446e,0xbaf7,0x44c1,0xb3,0x8a,0x21,0x6b,0xfa,0x18,0xa1,0xa8);
MIDL_DEFINE_GUID(IID, IID_IXmlFactory,           0xf82a60ec,0xfbfc,0x4cb9,0xbc,0x04,0x1a,0x0f,0xe2,0xb4,0xd5,0xbe);
MIDL_DEFINE_GUID(IID, IID_IAppxBlockMapInternal, 0x67fed21a,0x70ef,0x4175,0x8f,0x12,0x41,0x5b,0x21,0x3a,0xb6,0xd2);
MIDL_DEFINE_GUID(IID, IID_IAppxManifestObject,   0xeff6d561,0xa236,0x4058,0x9f,0x1d,0x8f,0x93,0x63,0x3f,0xba,0x4b);
MIDL_DEFINE_GUID(IID, IID_IAppxManifestPackageIdInternal, 0x76b7d3e1,0x768a,0x45cb,0x96,0x26,0xba,0x64,0x52,0xbe,0xd2,0xde);
MIDL_DEFINE_GUID(IID, IID_IStreamInternal,            0x44d2a7a8,0xa165,0x4a6e,0xa5,0x6f,0xc7,0xc2,0x4d,0xe7,0x50,0x5c);

// Internal bundle interfaces
#ifdef BUNDLE_SUPPORT
MIDL_DEFINE_GUID(IID, IID_IBundleInfo,           0xff82ffcd,0x747a,0x4df9,0x88,0x79,0x85,0x3a,0xb9,0xdd,0x15,0xa1);
MIDL_DEFINE_GUID(IID, IID_IAppxBundleManifestPackageInfoInternal, 0x32e6fcf0,0x729b,0x401d,0x9d,0xbc,0xf9,0x27,0xb4,0x94,0xf9,0xaf);
#endif

// internal XML PAL interfaces
#ifdef USING_XERCES
MIDL_DEFINE_GUID(IID, IID_IXercesElement,  0x07d6ee0e,0x2165,0x4b90,0x80,0x24,0xe1,0x76,0x29,0x1e,0x77,0xdd);
#endif

#ifdef USING_JAVAXML
// {69AB3660-398D-4CD6-A131-E73106040E3B}
MIDL_DEFINE_GUID(IID, IID_IJavaXmlElement,  0x69ab3660,0x398d,0x4cd6,0xa1,0x31,0xe7,0x31,0x6,0x4,0xe,0x3b);
#endif

#ifdef USING_APPLE_XML
// {8FBC0096-E87D-406A-95D9-203ADEFBF9AF}
MIDL_DEFINE_GUID(IID, IID_IAppleXmlElement,  0x8fbc0096, 0xe87d, 0x406a, 0x95, 0xd9, 0x20, 0x3a, 0xde, 0xfb, 0xf9, 0xaf);
#endif

#ifdef USING_MSXML
MIDL_DEFINE_GUID(IID, IID_IMSXMLElement,  0x2730f595,0x0c80,0x4f3e,0x88,0x91,0x75,0x3b,0x2e,0x8c,0x30,0x5d);
MIDL_DEFINE_GUID(IID, IID_IMSXMLDom,      0xb6bca5f0,0xc6c1,0x4409,0x85,0xbe,0xe4,0x76,0xaa,0xbe,0xc1,0x9a);
#endif

#undef MIDL_DEFINE_GUID

}
