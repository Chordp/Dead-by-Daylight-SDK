#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_Engine_classes.hpp"
#include "杀机_NetworkUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SystemUtilities.ETimerState
enum class ETimerState : uint8_t
{
	Cleared                        = 0,
	Started                        = 1,
	Paused                         = 2,
	ETimerState_MAX                = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SystemUtilities.ReplicationTimerData
// 0x0014
struct FReplicationTimerData
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFloat_NetQuantize8                         RemainingTimePercent;                                     // 0x0008(0x0008)
	ETimerState                                        State;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct SystemUtilities.FastTimer
// 0x0028
struct FFastTimer
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
