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

// ScriptStruct AnimationUtilities.SocketOrBoneCache
// 0x0060
struct FSocketOrBoneCache
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty AnimationUtilities.SocketOrBoneCache._sourceAnimation
	struct FName                                       _socketName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0030(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       _notifyName;                                              // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     _location;                                                // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    _rotation;                                                // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
