// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheDemogorgon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          isHunting                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UDemogorgonPounceInteraction::TriggerHuntingAudioEvent(bool* isHunting)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent"));

	UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params params;
	params.isHunting = isHunting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UDemogorgonPounceInteraction::TriggerChargeCancelAudioEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent"));

	UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Ready                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UDemogorgonPounceInteraction::OnChargedAttackReadyChanged(bool* Ready)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged"));

	UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF68068D970              		 offset:157d970                       

void UDemogorgonPounceInteraction::OnCancelCooldownComplete()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete"));

	UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
