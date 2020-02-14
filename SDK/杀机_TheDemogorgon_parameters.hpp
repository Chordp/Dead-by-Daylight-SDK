#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheDemogorgon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
struct UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params
{
	bool*                                              isHunting;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
struct UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params
{
};

// Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
struct UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params
{
	bool*                                              Ready;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
struct UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
