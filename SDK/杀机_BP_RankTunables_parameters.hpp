#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_RankTunables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RankTunables.BP_RankTunables_C.ReceiveBeginPlay
struct UBP_RankTunables_C_ReceiveBeginPlay_Params
{
};

// Function BP_RankTunables.BP_RankTunables_C.ReceiveTick
struct UBP_RankTunables_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RankTunables.BP_RankTunables_C.ExecuteUbergraph_BP_RankTunables
struct UBP_RankTunables_C_ExecuteUbergraph_BP_RankTunables_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
