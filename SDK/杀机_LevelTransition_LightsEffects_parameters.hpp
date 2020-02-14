#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_LevelTransition_LightsEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveBeginPlay
struct ALevelTransition_LightsEffects_C_ReceiveBeginPlay_Params
{
};

// Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveTick
struct ALevelTransition_LightsEffects_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ExecuteUbergraph_LevelTransition_LightsEffects
struct ALevelTransition_LightsEffects_C_ExecuteUbergraph_LevelTransition_LightsEffects_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
