#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_Engine_classes.hpp"
#include "杀机_CoreUObject_classes.hpp"
#include "杀机_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NetworkUtilities.Float_NetQuantize8
// 0x0008
struct FFloat_NetQuantize8
{
	float                                              _value;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct NetworkUtilities.SpeedBasedNetSyncedValue
// 0x0040
struct FSpeedBasedNetSyncedValue
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	float                                              _replicatedValue;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	float                                              _replicatedSpeed;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	float                                              _replicatedLastUpdateTimestamp;                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	unsigned char                                      _replicatedVersionCount;                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
};

// ScriptStruct NetworkUtilities.YawAndPitchRotator_NetQuantize16
// 0x000C
struct FYawAndPitchRotator_NetQuantize16
{
	struct FRotator                                    _value;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NetworkUtilities.YawAndPitchRotator_NetQuantize32
// 0x000C
struct FYawAndPitchRotator_NetQuantize32
{
	struct FRotator                                    _value;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
