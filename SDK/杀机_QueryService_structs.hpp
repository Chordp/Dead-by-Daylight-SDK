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

// ScriptStruct QueryService.DistanceTrackerCase
// 0x0020
struct FDistanceTrackerCase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	float                                              _distanceToTrackSquared;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               _inRange;                                                 // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct QueryService.ActorPairQuery
// 0x0068
struct FActorPairQuery
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TMap<uint32_t, struct FDistanceTrackerCase>        _distanceTrackerCases;                                    // 0x0010(0x0050) (ZeroConstructor)
	uint32_t                                           _caseIndex;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
