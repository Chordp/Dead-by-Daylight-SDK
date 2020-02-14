#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_DBDGameplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DBDGameplay.FadeComponent.GetFadePercent
struct UFadeComponent_GetFadePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction
struct UInteractionStarterComponent_OnRep_ShouldStartInteraction_Params
{
};

// Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted
struct UInteractionStarterComponent_OnInteractionStarted_Params
{
};

// Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge
struct UPowerChargeComponent_OnRep_CurrentCharge_Params
{
	float*                                             previousCharge;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDGameplay.PowerChargeComponent.Debug_Server_SetForceFullCharge
struct UPowerChargeComponent_Debug_Server_SetForceFullCharge_Params
{
	bool*                                              forceFullCharge;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower
struct UPowerToggleComponent_OnRep_IsInPower_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
