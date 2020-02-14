#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_ConsecutiveWakeUpPenaltyProficiency_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeadByDaylight.InteractionProficiency.GetValue
struct UConsecutiveWakeUpPenaltyProficiency_C_GetValue_Params
{
	class UChargeableInteractionDefinition**           chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionProficiency.GetType
struct UConsecutiveWakeUpPenaltyProficiency_C_GetType_Params
{
	float*                                             value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EStatusEffectType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionProficiency.GetLevel
struct UConsecutiveWakeUpPenaltyProficiency_C_GetLevel_Params
{
	class UChargeableInteractionDefinition**           chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionProficiency.GetIsActive
struct UConsecutiveWakeUpPenaltyProficiency_C_GetIsActive_Params
{
	class UChargeableInteractionDefinition**           chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
