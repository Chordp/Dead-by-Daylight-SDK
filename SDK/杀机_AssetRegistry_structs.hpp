#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AssetRegistry.ARFilter
// 0x00E8
struct FARFilter
{
	TArray<struct FName>                               PackageNames;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FName>                               PackagePaths;                                             // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FName>                               ObjectPaths;                                              // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FName>                               ClassNames;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty AssetRegistry.ARFilter.RecursiveClassesExclusionSet
	bool                                               bRecursivePaths;                                          // 0x00E0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRecursiveClasses;                                        // 0x00E1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // 0x00E2(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x00E3(0x0005) MISSED OFFSET
};

// ScriptStruct AssetRegistry.AssetBundleEntry
// 0x0038
struct FAssetBundleEntry
{
	struct FPrimaryAssetId                             BundleScope;                                              // 0x0000(0x0018) (ZeroConstructor)
	struct FName                                       BundleName;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FSoftObjectPath>                     BundleAssets;                                             // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AssetRegistry.AssetBundleData
// 0x0010
struct FAssetBundleData
{
	TArray<struct FAssetBundleEntry>                   Bundles;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AssetRegistry.AssetData
// 0x0068
struct FAssetData
{
	struct FName                                       ObjectPath;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       PackageName;                                              // 0x000C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       PackagePath;                                              // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0018(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       AssetName;                                                // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       AssetClass;                                               // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0030(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData05[0x2C];                                      // 0x003C(0x002C) MISSED OFFSET
};

// ScriptStruct AssetRegistry.TagAndValue
// 0x0020
struct FTagAndValue
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     value;                                                    // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
