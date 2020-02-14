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

// ScriptStruct Projectile.ImpactInfo
// 0x0040
struct FImpactInfo
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     SurfaceName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     ImpactNormal;                                             // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Projectile.LaunchInfo
// 0x001C
struct FLaunchInfo
{
	struct FVector_NetQuantize                         startPosition;                                            // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly)
	struct FVector_NetQuantizeNormal                   Direction;                                                // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly)
	float                                              Speed;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
