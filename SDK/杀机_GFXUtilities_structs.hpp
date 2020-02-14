#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_Engine_classes.hpp"
#include "杀机_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GFXUtilities.MaterialMap
// 0x0010
struct FMaterialMap
{
	class UMaterialInterface*                          SrcMaterial;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DstMaterial;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GFXUtilities.MaterialNamedGroup
// 0x0020
struct FMaterialNamedGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMaterialMap>                        Maps;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct GFXUtilities.MaterialHelperOriginalMeshState
// 0x0048
struct FMaterialHelperOriginalMeshState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  _originalMaterials;                                       // 0x0008(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInterface*>                  _originalDynamicMaterials;                                // 0x0018(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct GFXUtilities.LightUpdate
// 0x0010
struct FLightUpdate
{
	class ULightComponent*                             Light;                                                    // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GFXUtilities.LightMaterialUpdate
// 0x0018
struct FLightMaterialUpdate
{
	class UMaterialHelper*                             Material;                                                 // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       PropertyName;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Multiplier;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
