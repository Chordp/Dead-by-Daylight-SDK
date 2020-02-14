#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_BloodwebGenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ReceiveBeginPlay
struct UBP_BloodwebGenerator_C_ReceiveBeginPlay_Params
{
};

// Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ReceiveActorBeginOverlap
struct UBP_BloodwebGenerator_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ReceiveTick
struct UBP_BloodwebGenerator_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ExecuteUbergraph_BP_BloodwebGenerator
struct UBP_BloodwebGenerator_C_ExecuteUbergraph_BP_BloodwebGenerator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
