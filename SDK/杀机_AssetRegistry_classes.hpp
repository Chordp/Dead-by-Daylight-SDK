#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AssetRegistry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AssetRegistry.AssetRegistryImpl
// 0x0750 (0x0780 - 0x0030)
class UAssetRegistryImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x750];                                     // 0x0030(0x0750) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AssetRegistry.AssetRegistryImpl"));

		return ptr;
	}

};


// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (0x0030 - 0x0030)
class UAssetRegistryHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AssetRegistry.AssetRegistryHelpers"));

		return ptr;
	}

};


// Class AssetRegistry.AssetRegistry
// 0x0000 (0x0030 - 0x0030)
class UAssetRegistry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AssetRegistry.AssetRegistry"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
