#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_LevelGenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LevelGenerator.LevelGenerator_C.OfferingAdjustFog
struct ALevelGenerator_C_OfferingAdjustFog_Params
{
	float*                                             Modifier;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator
struct ALevelGenerator_C_ExecuteUbergraph_LevelGenerator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
