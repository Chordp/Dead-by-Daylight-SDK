#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_MKW01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MKW01.BP_MKW01_C.GetChainVelocity
struct ABP_MKW01_C_GetChainVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MKW01.BP_MKW01_C.ConvertVelocityToRTPC
struct ABP_MKW01_C_ConvertVelocityToRTPC_Params
{
	float*                                             Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MKW01.BP_MKW01_C.UserConstructionScript
struct ABP_MKW01_C_UserConstructionScript_Params
{
};

// Function BP_MKW01.BP_MKW01_C.ReceiveTick
struct ABP_MKW01_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MKW01.BP_MKW01_C.ReceiveBeginPlay
struct ABP_MKW01_C_ReceiveBeginPlay_Params
{
};

// Function BP_MKW01.BP_MKW01_C.ExecuteUbergraph_BP_MKW01
struct ABP_MKW01_C_ExecuteUbergraph_BP_MKW01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
