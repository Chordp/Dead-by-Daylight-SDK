// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_DBDInteraction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DBDInteraction.ActivePhaseWalkInteraction.ResetMovementSpeedMultipliers
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF68010BD80              		 offset:ffbd80                        

void UActivePhaseWalkInteraction::ResetMovementSpeedMultipliers()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.ActivePhaseWalkInteraction.ResetMovementSpeedMultipliers"));

	UActivePhaseWalkInteraction_ResetMovementSpeedMultipliers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDInteraction.ActivePhaseWalkInteraction.ResetChargeVFX
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UActivePhaseWalkInteraction::ResetChargeVFX(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.ActivePhaseWalkInteraction.ResetChargeVFX"));

	UActivePhaseWalkInteraction_ResetChargeVFX_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDInteraction.ActivePhaseWalkInteraction.Local_SendPhaseWalkInfo
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool*                          startActivePhaseWalk           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TeleportToHusk                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68010BC70              		 offset:ffbc70                        

void UActivePhaseWalkInteraction::Local_SendPhaseWalkInfo(bool* startActivePhaseWalk, bool* TeleportToHusk, class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.ActivePhaseWalkInteraction.Local_SendPhaseWalkInfo"));

	UActivePhaseWalkInteraction_Local_SendPhaseWalkInfo_Params params;
	params.startActivePhaseWalk = startActivePhaseWalk;
	params.TeleportToHusk = TeleportToHusk;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680717D50              		 offset:1607d50                       

bool UBaseStalkModeInteraction::ShouldStartUpdateMontageDuringEnter(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter"));

	UBaseStalkModeInteraction_ShouldStartUpdateMontageDuringEnter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EInputInteractionType*         inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680717C50              		 offset:1607c50                       

void UBaseStalkModeInteraction::SetSecondaryActionInputType(EInputInteractionType* inputType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetSecondaryActionInputType"));

	UBaseStalkModeInteraction_SetSecondaryActionInputType_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionButtonType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EButtonType*                   ButtonType                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680717BD0              		 offset:1607bd0                       

void UBaseStalkModeInteraction::SetSecondaryActionButtonType(EButtonType* ButtonType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetSecondaryActionButtonType"));

	UBaseStalkModeInteraction_SetSecondaryActionButtonType_Params params;
	params.ButtonType = ButtonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.SetCancelButtonType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EButtonType*                   ButtonType                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680717A90              		 offset:1607a90                       

void UBaseStalkModeInteraction::SetCancelButtonType(EButtonType* ButtonType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetCancelButtonType"));

	UBaseStalkModeInteraction_SetCancelButtonType_Params params;
	params.ButtonType = ButtonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnUpdateMontageStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnUpdateMontageStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnUpdateMontageStart"));

	UBaseStalkModeInteraction_OnUpdateMontageStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInterruptionDefinition** currentInterruption            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             interruptor                    (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             interruptee                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInterruptorUpdateStart(class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptor, class ADBDPlayer** interruptee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart"));

	UBaseStalkModeInteraction_OnInterruptorUpdateStart_Params params;
	params.currentInterruption = currentInterruption;
	params.interruptor = interruptor;
	params.interruptee = interruptee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionUpdateTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick"));

	UBaseStalkModeInteraction_OnInteractionUpdateTick_Params params;
	params.Player = Player;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionUpdateStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart"));

	UBaseStalkModeInteraction_OnInteractionUpdateStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionUpdateMontageReachedMiddle(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle"));

	UBaseStalkModeInteraction_OnInteractionUpdateMontageReachedMiddle_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionUpdateEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd"));

	UBaseStalkModeInteraction_OnInteractionUpdateEnd_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class UInterruptionDefinition** currentInterruption            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             interruptingPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionInterruptStarted(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted"));

	UBaseStalkModeInteraction_OnInteractionInterruptStarted_Params params;
	params.Player = Player;
	params.currentInterruption = currentInterruption;
	params.interruptingPlayer = interruptingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class UInterruptionDefinition** currentInterruption            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             interruptingPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionInterruptStart(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart"));

	UBaseStalkModeInteraction_OnInteractionInterruptStart_Params params;
	params.Player = Player;
	params.currentInterruption = currentInterruption;
	params.interruptingPlayer = interruptingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class UInterruptionDefinition** currentInterruption            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             interruptingPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionInterruptEnd(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd"));

	UBaseStalkModeInteraction_OnInteractionInterruptEnd_Params params;
	params.Player = Player;
	params.currentInterruption = currentInterruption;
	params.interruptingPlayer = interruptingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionInit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionInit(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInit"));

	UBaseStalkModeInteraction_OnInteractionInit_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          hasInteractionStarted          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionFinished(class ADBDPlayer** Player, bool* hasInteractionStarted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionFinished"));

	UBaseStalkModeInteraction_OnInteractionFinished_Params params;
	params.Player = Player;
	params.hasInteractionStarted = hasInteractionStarted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionExitTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionExitTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitTick"));

	UBaseStalkModeInteraction_OnInteractionExitTick_Params params;
	params.Player = Player;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionExitStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart"));

	UBaseStalkModeInteraction_OnInteractionExitStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionExitEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd"));

	UBaseStalkModeInteraction_OnInteractionExitEnd_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionEnterTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick"));

	UBaseStalkModeInteraction_OnInteractionEnterTick_Params params;
	params.Player = Player;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         actualSnapTime                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionEnterStart(class ADBDPlayer** Player, float* actualSnapTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart"));

	UBaseStalkModeInteraction_OnInteractionEnterStart_Params params;
	params.Player = Player;
	params.actualSnapTime = actualSnapTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionEnterFailed(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed"));

	UBaseStalkModeInteraction_OnInteractionEnterFailed_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionEnterEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd"));

	UBaseStalkModeInteraction_OnInteractionEnterEnd_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionCancelled(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled"));

	UBaseStalkModeInteraction_OnInteractionCancelled_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyId                       (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBaseStalkModeInteraction::OnInteractionAnimNotifyEvent(struct FName* NotifyId, class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent"));

	UBaseStalkModeInteraction_OnInteractionAnimNotifyEvent_Params params;
	params.NotifyId = NotifyId;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807178C0              		 offset:16078c0                       

bool UBaseStalkModeInteraction::IsSupportedCharacterType(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType"));

	UBaseStalkModeInteraction_IsSupportedCharacterType_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             interruptor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             interruptee                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInterruptionDefinition** interruption                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807177B0              		 offset:16077b0                       

bool UBaseStalkModeInteraction::IsInterruptionPossible(class ADBDPlayer** interruptor, class ADBDPlayer** interruptee, class UInterruptionDefinition** interruption)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible"));

	UBaseStalkModeInteraction_IsInterruptionPossible_Params params;
	params.interruptor = interruptor;
	params.interruptee = interruptee;
	params.interruption = interruption;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInteractionUsingOffering
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680717570              		 offset:1607570                       

bool UBaseStalkModeInteraction::IsInteractionUsingOffering(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionUsingOffering"));

	UBaseStalkModeInteraction_IsInteractionUsingOffering_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInputInteractionType*         InteractionType                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680717350              		 offset:1607350                       

bool UBaseStalkModeInteraction::IsInteractionPossibleClient(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient"));

	UBaseStalkModeInteraction_IsInteractionPossibleClient_Params params;
	params.Player = Player;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInputInteractionType*         InteractionType                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680717280              		 offset:1607280                       

bool UBaseStalkModeInteraction::IsInteractionPossibleBP(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP"));

	UBaseStalkModeInteraction_IsInteractionPossibleBP_Params params;
	params.Player = Player;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInteractionDone
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInputInteractionType*         InteractionType                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807171B0              		 offset:16071b0                       

bool UBaseStalkModeInteraction::IsInteractionDone(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionDone"));

	UBaseStalkModeInteraction_IsInteractionDone_Params params;
	params.Player = Player;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInputPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716F40              		 offset:1606f40                       

bool UBaseStalkModeInteraction::IsInputPressed(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInputPressed"));

	UBaseStalkModeInteraction_IsInputPressed_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716EB0              		 offset:1606eb0                       

bool UBaseStalkModeInteraction::IsCharacterFacingInteractorDirection(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection"));

	UBaseStalkModeInteraction_IsCharacterFacingInteractorDirection_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsCancelable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716E10              		 offset:1606e10                       

bool UBaseStalkModeInteraction::IsCancelable(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsCancelable"));

	UBaseStalkModeInteraction_IsCancelable_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetUpdateMontage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimationMontageDescriptor ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680716D30              		 offset:1606d30                       

struct FAnimationMontageDescriptor UBaseStalkModeInteraction::GetUpdateMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateMontage"));

	UBaseStalkModeInteraction_GetUpdateMontage_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetUpdateHighlightOpacityUsingCharge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716D10              		 offset:1606d10                       

bool UBaseStalkModeInteraction::GetUpdateHighlightOpacityUsingCharge()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateHighlightOpacityUsingCharge"));

	UBaseStalkModeInteraction_GetUpdateHighlightOpacityUsingCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716C70              		 offset:1606c70                       

float UBaseStalkModeInteraction::GetUpdateAnimationPlayRate(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate"));

	UBaseStalkModeInteraction_GetUpdateAnimationPlayRate_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Follower                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FMontagePlaybackDefinition ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680716B70              		 offset:1606b70                       

struct FMontagePlaybackDefinition UBaseStalkModeInteraction::GetUpdateAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition"));

	UBaseStalkModeInteraction_GetUpdateAnimationPlayBackDefinition_Params params;
	params.Player = Player;
	params.Follower = Follower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716AD0              		 offset:1606ad0                       

float UBaseStalkModeInteraction::GetSnapTimeAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart"));

	UBaseStalkModeInteraction_GetSnapTimeAtStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716A30              		 offset:1606a30                       

float UBaseStalkModeInteraction::GetSnapTime(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapTime"));

	UBaseStalkModeInteraction_GetSnapTime_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapSocketName
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716980              		 offset:1606980                       

struct FName UBaseStalkModeInteraction::GetSnapSocketName(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapSocketName"));

	UBaseStalkModeInteraction_GetSnapSocketName_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807168E0              		 offset:16068e0                       

struct FVector UBaseStalkModeInteraction::GetSnapPointPositionAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart"));

	UBaseStalkModeInteraction_GetSnapPointPositionAtStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716830              		 offset:1606830                       

struct FVector UBaseStalkModeInteraction::GetSnapPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition"));

	UBaseStalkModeInteraction_GetSnapPointPosition_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716790              		 offset:1606790                       

float UBaseStalkModeInteraction::GetSnapDistanceAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart"));

	UBaseStalkModeInteraction_GetSnapDistanceAtStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807166F0              		 offset:16066f0                       

float UBaseStalkModeInteraction::GetSnapDistance(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapDistance"));

	UBaseStalkModeInteraction_GetSnapDistance_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EInputInteractionType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807166C0              		 offset:16066c0                       

EInputInteractionType UBaseStalkModeInteraction::GetSecondaryActionInputType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSecondaryActionInputType"));

	UBaseStalkModeInteraction_GetSecondaryActionInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionButtonType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EButtonType                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716690              		 offset:1606690                       

EButtonType UBaseStalkModeInteraction::GetSecondaryActionButtonType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSecondaryActionButtonType"));

	UBaseStalkModeInteraction_GetSecondaryActionButtonType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPointAtStart
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807165F0              		 offset:16065f0                       

struct FRotator UBaseStalkModeInteraction::GetRotationToSnapPointAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPointAtStart"));

	UBaseStalkModeInteraction_GetRotationToSnapPointAtStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPoint
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716540              		 offset:1606540                       

struct FRotator UBaseStalkModeInteraction::GetRotationToSnapPoint(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPoint"));

	UBaseStalkModeInteraction_GetRotationToSnapPoint_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetPowerProgressBar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPowerProgressBar              ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716520              		 offset:1606520                       

EPowerProgressBar UBaseStalkModeInteraction::GetPowerProgressBar()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetPowerProgressBar"));

	UBaseStalkModeInteraction_GetPowerProgressBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             interactingPlayer              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716450              		 offset:1606450                       

class ADBDPlayer* UBaseStalkModeInteraction::GetPlayerDependancy(class ADBDPlayer** interactingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy"));

	UBaseStalkModeInteraction_GetPlayerDependancy_Params params;
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UInterruptionDefinition*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF680716390              		 offset:1606390                       

TArray<class UInterruptionDefinition*> UBaseStalkModeInteraction::GetInterruptionDefinitions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions"));

	UBaseStalkModeInteraction_GetInterruptionDefinitions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInteractor*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68068DCE0              		 offset:157dce0                       

class UInteractor* UBaseStalkModeInteraction::GetInteractor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractor"));

	UBaseStalkModeInteraction_GetInteractor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractionTimeMultiplier
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807162F0              		 offset:16062f0                       

float UBaseStalkModeInteraction::GetInteractionTimeMultiplier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionTimeMultiplier"));

	UBaseStalkModeInteraction_GetInteractionTimeMultiplier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractionTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716250              		 offset:1606250                       

float UBaseStalkModeInteraction::GetInteractionTime(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionTime"));

	UBaseStalkModeInteraction_GetInteractionTime_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractionText
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF680716170              		 offset:1606170                       

struct FString UBaseStalkModeInteraction::GetInteractionText(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionText"));

	UBaseStalkModeInteraction_GetInteractionText_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807160D0              		 offset:16060d0                       

float UBaseStalkModeInteraction::GetInteractionExitTime(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime"));

	UBaseStalkModeInteraction_GetInteractionExitTime_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6807160A0              		 offset:16060a0                       

struct FText UBaseStalkModeInteraction::GetInteractionDescriptionText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText"));

	UBaseStalkModeInteraction_GetInteractionDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AInteractable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715FF0              		 offset:1605ff0                       

class AInteractable* UBaseStalkModeInteraction::GetInteractable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractable"));

	UBaseStalkModeInteraction_GetInteractable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715F40              		 offset:1605f40                       

struct FVector UBaseStalkModeInteraction::GetFocalPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition"));

	UBaseStalkModeInteraction_GetFocalPointPosition_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetExitMontage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimationMontageDescriptor ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680715DB0              		 offset:1605db0                       

struct FAnimationMontageDescriptor UBaseStalkModeInteraction::GetExitMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetExitMontage"));

	UBaseStalkModeInteraction_GetExitMontage_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Follower                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FMontagePlaybackDefinition ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680715CB0              		 offset:1605cb0                       

struct FMontagePlaybackDefinition UBaseStalkModeInteraction::GetExitAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition"));

	UBaseStalkModeInteraction_GetExitAnimationPlayBackDefinition_Params params;
	params.Player = Player;
	params.Follower = Follower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetEnterMontage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimationMontageDescriptor ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680715C00              		 offset:1605c00                       

struct FAnimationMontageDescriptor UBaseStalkModeInteraction::GetEnterMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetEnterMontage"));

	UBaseStalkModeInteraction_GetEnterMontage_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Follower                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FMontagePlaybackDefinition ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680715B00              		 offset:1605b00                       

struct FMontagePlaybackDefinition UBaseStalkModeInteraction::GetEnterAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition"));

	UBaseStalkModeInteraction_GetEnterAnimationPlayBackDefinition_Params params;
	params.Player = Player;
	params.Follower = Follower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetChargePercent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715AC0              		 offset:1605ac0                       

float UBaseStalkModeInteraction::GetChargePercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetChargePercent"));

	UBaseStalkModeInteraction_GetChargePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetCancelButtonType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EButtonType                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715A90              		 offset:1605a90                       

EButtonType UBaseStalkModeInteraction::GetCancelButtonType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetCancelButtonType"));

	UBaseStalkModeInteraction_GetCancelButtonType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetAllowNavigation
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807159F0              		 offset:16059f0                       

bool UBaseStalkModeInteraction::GetAllowNavigation(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetAllowNavigation"));

	UBaseStalkModeInteraction_GetAllowNavigation_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715950              		 offset:1605950                       

struct FVector UBaseStalkModeInteraction::GetActualSnapPointPositionAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart"));

	UBaseStalkModeInteraction_GetActualSnapPointPositionAtStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807158B0              		 offset:16058b0                       

struct FVector UBaseStalkModeInteraction::GetActualSnapPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition"));

	UBaseStalkModeInteraction_GetActualSnapPointPosition_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF680715830              		 offset:1605830                       

TArray<class AActor*> UBaseStalkModeInteraction::GetActorsToIgnoreOverlap()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap"));

	UBaseStalkModeInteraction_GetActorsToIgnoreOverlap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715790              		 offset:1605790                       

float UBaseStalkModeInteraction::GetActorHeightDelta(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta"));

	UBaseStalkModeInteraction_GetActorHeightDelta_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715700              		 offset:1605700                       

bool UBaseStalkModeInteraction::DoesPlayerHaveClearPath(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath"));

	UBaseStalkModeInteraction_DoesPlayerHaveClearPath_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.CompleteCharge
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class ADBDPlayer**             Character                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680715670              		 offset:1605670                       

void UBaseStalkModeInteraction::CompleteCharge(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CompleteCharge"));

	UBaseStalkModeInteraction_CompleteCharge_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UInteractionDefinition** Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807155D0              		 offset:16055d0                       

bool UBaseStalkModeInteraction::CanOverrideInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction"));

	UBaseStalkModeInteraction_CanOverrideInteraction_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715500              		 offset:1605500                       

float UBaseStalkModeInteraction::CalculateSnapTimeForConstantSpeed(class ADBDPlayer** Player, float* Speed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantSpeed"));

	UBaseStalkModeInteraction_CalculateSnapTimeForConstantSpeed_Params params;
	params.Player = Player;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantMaxNormalMovementSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         speedBoost                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715430              		 offset:1605430                       

float UBaseStalkModeInteraction::CalculateSnapTimeForConstantMaxNormalMovementSpeed(class ADBDPlayer** Player, float* speedBoost)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantMaxNormalMovementSpeed"));

	UBaseStalkModeInteraction_CalculateSnapTimeForConstantMaxNormalMovementSpeed_Params params;
	params.Player = Player;
	params.speedBoost = speedBoost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.AttachToZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    zone                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680715190              		 offset:1605190                       

void UBaseStalkModeInteraction::AttachToZone(class UPrimitiveComponent** zone)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AttachToZone"));

	UBaseStalkModeInteraction_AttachToZone_Params params;
	params.zone = zone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.AttachToInteractor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInteractor**            Interactor                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680715110              		 offset:1605110                       

void UBaseStalkModeInteraction::AttachToInteractor(class UInteractor** Interactor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AttachToInteractor"));

	UBaseStalkModeInteraction_AttachToInteractor_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.AtlantaItemUseToggleState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715060              		 offset:1605060                       

bool UBaseStalkModeInteraction::AtlantaItemUseToggleState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AtlantaItemUseToggleState"));

	UBaseStalkModeInteraction_AtlantaItemUseToggleState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.AtlantaGetPowerButtonImageID
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715020              		 offset:1605020                       

struct FName UBaseStalkModeInteraction::AtlantaGetPowerButtonImageID()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AtlantaGetPowerButtonImageID"));

	UBaseStalkModeInteraction_AtlantaGetPowerButtonImageID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInteractionDefinition** Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680714FA0              		 offset:1604fa0                       

void UBaseStalkModeInteraction::AddMutuallyExclusiveInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction"));

	UBaseStalkModeInteraction_AddMutuallyExclusiveInteraction_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDInteraction.CollectItemInteraction.GetItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ACollectable*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68010C260              		 offset:ffc260                        

class ACollectable* UCollectItemInteraction::GetItem()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.CollectItemInteraction.GetItem"));

	UCollectItemInteraction_GetItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied
// (Final, Native, Private)
// Parameters:
// float*                         IndividualChargeAmount         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalChargeAmount              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ChargeInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          WasCoop                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68010C420              		 offset:ffc420                        

void UDestroyDemogorgonPortalInteraction::Authority_OnChargeApplied(float* IndividualChargeAmount, float* TotalChargeAmount, class AActor** ChargeInstigator, bool* WasCoop, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied"));

	UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Params params;
	params.IndividualChargeAmount = IndividualChargeAmount;
	params.TotalChargeAmount = TotalChargeAmount;
	params.ChargeInstigator = ChargeInstigator;
	params.WasCoop = WasCoop;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.ShouldShowSpeedProficiencyForMultipleInteractors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680689650              		 offset:1579650                       

bool UGeneratorDamageInteraction::ShouldShowSpeedProficiencyForMultipleInteractors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.ShouldShowSpeedProficiencyForMultipleInteractors"));

	UGeneratorDamageInteraction_ShouldShowSpeedProficiencyForMultipleInteractors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.SetSpeedBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         speedBase                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806895D0              		 offset:15795d0                       

void UGeneratorDamageInteraction::SetSpeedBase(float* speedBase)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.SetSpeedBase"));

	UGeneratorDamageInteraction_SetSpeedBase_Params params;
	params.speedBase = speedBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.SetChargeableComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UChargeableComponent**   ChargeableComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680689450              		 offset:1579450                       

void UGeneratorDamageInteraction::SetChargeableComponent(class UChargeableComponent** ChargeableComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.SetChargeableComponent"));

	UGeneratorDamageInteraction_SetChargeableComponent_Params params;
	params.ChargeableComponent = ChargeableComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthorityBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Bonus                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          hadInput                       (Parm, ZeroConstructor, IsPlainOldData)
// ESkillCheckCustomType*         Type                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGeneratorDamageInteraction::OnSkillCheckResponseAuthorityBP(class ADBDPlayer** Player, bool* success, bool* Bonus, bool* hadInput, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthorityBP"));

	UGeneratorDamageInteraction_OnSkillCheckResponseAuthorityBP_Params params;
	params.Player = Player;
	params.success = success;
	params.Bonus = Bonus;
	params.hadInput = hadInput;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthority
// (Final, Native, Private)
// Parameters:
// bool*                          success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Bonus                          (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TriggerLoudNoise               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          hadInput                       (Parm, ZeroConstructor, IsPlainOldData)
// ESkillCheckCustomType*         Type                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680689100              		 offset:1579100                       

void UGeneratorDamageInteraction::OnSkillCheckResponseAuthority(bool* success, bool* Bonus, class ADBDPlayer** Player, bool* TriggerLoudNoise, bool* hadInput, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthority"));

	UGeneratorDamageInteraction_OnSkillCheckResponseAuthority_Params params;
	params.success = success;
	params.Bonus = Bonus;
	params.Player = Player;
	params.TriggerLoudNoise = TriggerLoudNoise;
	params.hadInput = hadInput;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAestheticBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Bonus                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          hadInput                       (Parm, ZeroConstructor, IsPlainOldData)
// ESkillCheckCustomType*         Type                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGeneratorDamageInteraction::OnSkillCheckResponseAestheticBP(class ADBDPlayer** Player, bool* success, bool* Bonus, bool* hadInput, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAestheticBP"));

	UGeneratorDamageInteraction_OnSkillCheckResponseAestheticBP_Params params;
	params.Player = Player;
	params.success = success;
	params.Bonus = Bonus;
	params.hadInput = hadInput;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAesthetic
// (Native, Protected)
// Parameters:
// bool*                          success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Bonus                          (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TriggerLoudNoise               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          hadInput                       (Parm, ZeroConstructor, IsPlainOldData)
// ESkillCheckCustomType*         Type                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680688F20              		 offset:1578f20                       

void UGeneratorDamageInteraction::OnSkillCheckResponseAesthetic(bool* success, bool* Bonus, class ADBDPlayer** Player, bool* TriggerLoudNoise, bool* hadInput, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAesthetic"));

	UGeneratorDamageInteraction_OnSkillCheckResponseAesthetic_Params params;
	params.success = success;
	params.Bonus = Bonus;
	params.Player = Player;
	params.TriggerLoudNoise = TriggerLoudNoise;
	params.hadInput = hadInput;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.OnInteractionCompletionStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          complete                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGeneratorDamageInteraction::OnInteractionCompletionStateChanged(class ADBDPlayer** Player, bool* complete)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnInteractionCompletionStateChanged"));

	UGeneratorDamageInteraction_OnInteractionCompletionStateChanged_Params params;
	params.Player = Player;
	params.complete = complete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.OnChargeableChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChargeableComponent**   oldChargeable                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UChargeableComponent**   newChargeable                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGeneratorDamageInteraction::OnChargeableChangedBP(class UChargeableComponent** oldChargeable, class UChargeableComponent** newChargeable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnChargeableChangedBP"));

	UGeneratorDamageInteraction_OnChargeableChangedBP_Params params;
	params.oldChargeable = oldChargeable;
	params.newChargeable = newChargeable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.HasSkillCheckHappened
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688AE0              		 offset:1578ae0                       

bool UGeneratorDamageInteraction::HasSkillCheckHappened(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.HasSkillCheckHappened"));

	UGeneratorDamageInteraction_HasSkillCheckHappened_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetTunableValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  TunableValueID                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         defaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688960              		 offset:1578960                       

float UGeneratorDamageInteraction::GetTunableValue(struct FName* TunableValueID, float* defaultValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetTunableValue"));

	UGeneratorDamageInteraction_GetTunableValue_Params params;
	params.TunableValueID = TunableValueID;
	params.defaultValue = defaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetSuccessProbability
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688870              		 offset:1578870                       

float UGeneratorDamageInteraction::GetSuccessProbability()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSuccessProbability"));

	UGeneratorDamageInteraction_GetSuccessProbability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckProbability
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688830              		 offset:1578830                       

float UGeneratorDamageInteraction::GetSkillCheckProbability()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckProbability"));

	UGeneratorDamageInteraction_GetSkillCheckProbability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailureTimePenalty
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806887F0              		 offset:15787f0                       

float UGeneratorDamageInteraction::GetSkillCheckFailureTimePenalty()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailureTimePenalty"));

	UGeneratorDamageInteraction_GetSkillCheckFailureTimePenalty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailurePercentPenalty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688750              		 offset:1578750                       

float UGeneratorDamageInteraction::GetSkillCheckFailurePercentPenalty(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailurePercentPenalty"));

	UGeneratorDamageInteraction_GetSkillCheckFailurePercentPenalty_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckDifficulityModifier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806886B0              		 offset:15786b0                       

float UGeneratorDamageInteraction::GetSkillCheckDifficulityModifier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckDifficulityModifier"));

	UGeneratorDamageInteraction_GetSkillCheckDifficulityModifier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckCharge
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Bonus                          (Parm, ZeroConstructor, IsPlainOldData)
// ESkillCheckCustomType*         Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688540              		 offset:1578540                       

float UGeneratorDamageInteraction::GetSkillCheckCharge(class ADBDPlayer** Player, bool* success, bool* Bonus, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckCharge"));

	UGeneratorDamageInteraction_GetSkillCheckCharge_Params params;
	params.Player = Player;
	params.success = success;
	params.Bonus = Bonus;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetPipsPassed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688480              		 offset:1578480                       

int UGeneratorDamageInteraction::GetPipsPassed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetPipsPassed"));

	UGeneratorDamageInteraction_GetPipsPassed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetPerkMultiplier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806883E0              		 offset:15783e0                       

float UGeneratorDamageInteraction::GetPerkMultiplier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetPerkMultiplier"));

	UGeneratorDamageInteraction_GetPerkMultiplier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetMultiplicativeLuckBonus
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688310              		 offset:1578310                       

float UGeneratorDamageInteraction::GetMultiplicativeLuckBonus(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetMultiplicativeLuckBonus"));

	UGeneratorDamageInteraction_GetMultiplicativeLuckBonus_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetMaxCharge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806882E0              		 offset:15782e0                       

float UGeneratorDamageInteraction::GetMaxCharge()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetMaxCharge"));

	UGeneratorDamageInteraction_GetMaxCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetItemEfficiencyModifier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688210              		 offset:1578210                       

float UGeneratorDamageInteraction::GetItemEfficiencyModifier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetItemEfficiencyModifier"));

	UGeneratorDamageInteraction_GetItemEfficiencyModifier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetGoodSkillCheckSuccessPercentReward
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688170              		 offset:1578170                       

float UGeneratorDamageInteraction::GetGoodSkillCheckSuccessPercentReward(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetGoodSkillCheckSuccessPercentReward"));

	UGeneratorDamageInteraction_GetGoodSkillCheckSuccessPercentReward_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeSpeedModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680688070              		 offset:1578070                       

float UGeneratorDamageInteraction::GetChargeSpeedModifier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeSpeedModifier"));

	UGeneratorDamageInteraction_GetChargeSpeedModifier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeAmountForTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680687F70              		 offset:1577f70                       

float UGeneratorDamageInteraction::GetChargeAmountForTime(float* DeltaSeconds, class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeAmountForTime"));

	UGeneratorDamageInteraction_GetChargeAmountForTime_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeableComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UChargeableComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680688110              		 offset:1578110                       

class UChargeableComponent* UGeneratorDamageInteraction::GetChargeableComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeableComponent"));

	UGeneratorDamageInteraction_GetChargeableComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckZoneSizeModifier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680687ED0              		 offset:1577ed0                       

float UGeneratorDamageInteraction::GetBonusSkillCheckZoneSizeModifier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckZoneSizeModifier"));

	UGeneratorDamageInteraction_GetBonusSkillCheckZoneSizeModifier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckSuccessPercentReward
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680687E30              		 offset:1577e30                       

float UGeneratorDamageInteraction::GetBonusSkillCheckSuccessPercentReward(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckSuccessPercentReward"));

	UGeneratorDamageInteraction_GetBonusSkillCheckSuccessPercentReward_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetBlueprintChargeSpeedMultiplier
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680687D90              		 offset:1577d90                       

float UGeneratorDamageInteraction::GetBlueprintChargeSpeedMultiplier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetBlueprintChargeSpeedMultiplier"));

	UGeneratorDamageInteraction_GetBlueprintChargeSpeedMultiplier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveLuckBonus
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680687CF0              		 offset:1577cf0                       

float UGeneratorDamageInteraction::GetAdditiveLuckBonus(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveLuckBonus"));

	UGeneratorDamageInteraction_GetAdditiveLuckBonus_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveChargeTimeReductionAsMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680687C50              		 offset:1577c50                       

float UGeneratorDamageInteraction::GetAdditiveChargeTimeReductionAsMultiplier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveChargeTimeReductionAsMultiplier"));

	UGeneratorDamageInteraction_GetAdditiveChargeTimeReductionAsMultiplier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.Authority_ChargeWithItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// class ACollectable**           Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             Character                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680687B40              		 offset:1577b40                       

void UGeneratorDamageInteraction::Authority_ChargeWithItem(float* DeltaSeconds, class ACollectable** Item, class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.Authority_ChargeWithItem"));

	UGeneratorDamageInteraction_Authority_ChargeWithItem_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Item = Item;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ChargeableInteractionDefinition.AddCharge
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             Character                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806879A0              		 offset:15779a0                       

void UGeneratorDamageInteraction::AddCharge(float* DeltaSeconds, class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.AddCharge"));

	UGeneratorDamageInteraction_AddCharge_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680717D50              		 offset:1607d50                       

bool UGhostChargeStalkModeInteraction::ShouldStartUpdateMontageDuringEnter(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter"));

	UGhostChargeStalkModeInteraction_ShouldStartUpdateMontageDuringEnter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EInputInteractionType*         inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680717C50              		 offset:1607c50                       

void UGhostChargeStalkModeInteraction::SetSecondaryActionInputType(EInputInteractionType* inputType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetSecondaryActionInputType"));

	UGhostChargeStalkModeInteraction_SetSecondaryActionInputType_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionButtonType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EButtonType*                   ButtonType                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680717BD0              		 offset:1607bd0                       

void UGhostChargeStalkModeInteraction::SetSecondaryActionButtonType(EButtonType* ButtonType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetSecondaryActionButtonType"));

	UGhostChargeStalkModeInteraction_SetSecondaryActionButtonType_Params params;
	params.ButtonType = ButtonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.SetCancelButtonType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EButtonType*                   ButtonType                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680717A90              		 offset:1607a90                       

void UGhostChargeStalkModeInteraction::SetCancelButtonType(EButtonType* ButtonType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetCancelButtonType"));

	UGhostChargeStalkModeInteraction_SetCancelButtonType_Params params;
	params.ButtonType = ButtonType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnUpdateMontageStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnUpdateMontageStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnUpdateMontageStart"));

	UGhostChargeStalkModeInteraction_OnUpdateMontageStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInterruptionDefinition** currentInterruption            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             interruptor                    (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             interruptee                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInterruptorUpdateStart(class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptor, class ADBDPlayer** interruptee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart"));

	UGhostChargeStalkModeInteraction_OnInterruptorUpdateStart_Params params;
	params.currentInterruption = currentInterruption;
	params.interruptor = interruptor;
	params.interruptee = interruptee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionUpdateTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick"));

	UGhostChargeStalkModeInteraction_OnInteractionUpdateTick_Params params;
	params.Player = Player;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionUpdateStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart"));

	UGhostChargeStalkModeInteraction_OnInteractionUpdateStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionUpdateMontageReachedMiddle(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle"));

	UGhostChargeStalkModeInteraction_OnInteractionUpdateMontageReachedMiddle_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionUpdateEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd"));

	UGhostChargeStalkModeInteraction_OnInteractionUpdateEnd_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class UInterruptionDefinition** currentInterruption            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             interruptingPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionInterruptStarted(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted"));

	UGhostChargeStalkModeInteraction_OnInteractionInterruptStarted_Params params;
	params.Player = Player;
	params.currentInterruption = currentInterruption;
	params.interruptingPlayer = interruptingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class UInterruptionDefinition** currentInterruption            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             interruptingPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionInterruptStart(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart"));

	UGhostChargeStalkModeInteraction_OnInteractionInterruptStart_Params params;
	params.Player = Player;
	params.currentInterruption = currentInterruption;
	params.interruptingPlayer = interruptingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class UInterruptionDefinition** currentInterruption            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             interruptingPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionInterruptEnd(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd"));

	UGhostChargeStalkModeInteraction_OnInteractionInterruptEnd_Params params;
	params.Player = Player;
	params.currentInterruption = currentInterruption;
	params.interruptingPlayer = interruptingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionInit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionInit(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInit"));

	UGhostChargeStalkModeInteraction_OnInteractionInit_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          hasInteractionStarted          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionFinished(class ADBDPlayer** Player, bool* hasInteractionStarted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionFinished"));

	UGhostChargeStalkModeInteraction_OnInteractionFinished_Params params;
	params.Player = Player;
	params.hasInteractionStarted = hasInteractionStarted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionExitTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionExitTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitTick"));

	UGhostChargeStalkModeInteraction_OnInteractionExitTick_Params params;
	params.Player = Player;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionExitStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart"));

	UGhostChargeStalkModeInteraction_OnInteractionExitStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionExitEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd"));

	UGhostChargeStalkModeInteraction_OnInteractionExitEnd_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionEnterTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick"));

	UGhostChargeStalkModeInteraction_OnInteractionEnterTick_Params params;
	params.Player = Player;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         actualSnapTime                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionEnterStart(class ADBDPlayer** Player, float* actualSnapTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart"));

	UGhostChargeStalkModeInteraction_OnInteractionEnterStart_Params params;
	params.Player = Player;
	params.actualSnapTime = actualSnapTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionEnterFailed(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed"));

	UGhostChargeStalkModeInteraction_OnInteractionEnterFailed_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionEnterEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd"));

	UGhostChargeStalkModeInteraction_OnInteractionEnterEnd_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionCancelled(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled"));

	UGhostChargeStalkModeInteraction_OnInteractionCancelled_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyId                       (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGhostChargeStalkModeInteraction::OnInteractionAnimNotifyEvent(struct FName* NotifyId, class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent"));

	UGhostChargeStalkModeInteraction_OnInteractionAnimNotifyEvent_Params params;
	params.NotifyId = NotifyId;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807178C0              		 offset:16078c0                       

bool UGhostChargeStalkModeInteraction::IsSupportedCharacterType(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType"));

	UGhostChargeStalkModeInteraction_IsSupportedCharacterType_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             interruptor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             interruptee                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInterruptionDefinition** interruption                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807177B0              		 offset:16077b0                       

bool UGhostChargeStalkModeInteraction::IsInterruptionPossible(class ADBDPlayer** interruptor, class ADBDPlayer** interruptee, class UInterruptionDefinition** interruption)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible"));

	UGhostChargeStalkModeInteraction_IsInterruptionPossible_Params params;
	params.interruptor = interruptor;
	params.interruptee = interruptee;
	params.interruption = interruption;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInteractionUsingOffering
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680717570              		 offset:1607570                       

bool UGhostChargeStalkModeInteraction::IsInteractionUsingOffering(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionUsingOffering"));

	UGhostChargeStalkModeInteraction_IsInteractionUsingOffering_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInputInteractionType*         InteractionType                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680717350              		 offset:1607350                       

bool UGhostChargeStalkModeInteraction::IsInteractionPossibleClient(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient"));

	UGhostChargeStalkModeInteraction_IsInteractionPossibleClient_Params params;
	params.Player = Player;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInputInteractionType*         InteractionType                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680717280              		 offset:1607280                       

bool UGhostChargeStalkModeInteraction::IsInteractionPossibleBP(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP"));

	UGhostChargeStalkModeInteraction_IsInteractionPossibleBP_Params params;
	params.Player = Player;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInteractionDone
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EInputInteractionType*         InteractionType                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807171B0              		 offset:16071b0                       

bool UGhostChargeStalkModeInteraction::IsInteractionDone(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionDone"));

	UGhostChargeStalkModeInteraction_IsInteractionDone_Params params;
	params.Player = Player;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsInputPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716F40              		 offset:1606f40                       

bool UGhostChargeStalkModeInteraction::IsInputPressed(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInputPressed"));

	UGhostChargeStalkModeInteraction_IsInputPressed_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716EB0              		 offset:1606eb0                       

bool UGhostChargeStalkModeInteraction::IsCharacterFacingInteractorDirection(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection"));

	UGhostChargeStalkModeInteraction_IsCharacterFacingInteractorDirection_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.IsCancelable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716E10              		 offset:1606e10                       

bool UGhostChargeStalkModeInteraction::IsCancelable(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsCancelable"));

	UGhostChargeStalkModeInteraction_IsCancelable_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetUpdateMontage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimationMontageDescriptor ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680716D30              		 offset:1606d30                       

struct FAnimationMontageDescriptor UGhostChargeStalkModeInteraction::GetUpdateMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateMontage"));

	UGhostChargeStalkModeInteraction_GetUpdateMontage_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetUpdateHighlightOpacityUsingCharge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716D10              		 offset:1606d10                       

bool UGhostChargeStalkModeInteraction::GetUpdateHighlightOpacityUsingCharge()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateHighlightOpacityUsingCharge"));

	UGhostChargeStalkModeInteraction_GetUpdateHighlightOpacityUsingCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716C70              		 offset:1606c70                       

float UGhostChargeStalkModeInteraction::GetUpdateAnimationPlayRate(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate"));

	UGhostChargeStalkModeInteraction_GetUpdateAnimationPlayRate_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Follower                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FMontagePlaybackDefinition ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680716B70              		 offset:1606b70                       

struct FMontagePlaybackDefinition UGhostChargeStalkModeInteraction::GetUpdateAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition"));

	UGhostChargeStalkModeInteraction_GetUpdateAnimationPlayBackDefinition_Params params;
	params.Player = Player;
	params.Follower = Follower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716AD0              		 offset:1606ad0                       

float UGhostChargeStalkModeInteraction::GetSnapTimeAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart"));

	UGhostChargeStalkModeInteraction_GetSnapTimeAtStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716A30              		 offset:1606a30                       

float UGhostChargeStalkModeInteraction::GetSnapTime(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapTime"));

	UGhostChargeStalkModeInteraction_GetSnapTime_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapSocketName
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716980              		 offset:1606980                       

struct FName UGhostChargeStalkModeInteraction::GetSnapSocketName(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapSocketName"));

	UGhostChargeStalkModeInteraction_GetSnapSocketName_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807168E0              		 offset:16068e0                       

struct FVector UGhostChargeStalkModeInteraction::GetSnapPointPositionAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart"));

	UGhostChargeStalkModeInteraction_GetSnapPointPositionAtStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716830              		 offset:1606830                       

struct FVector UGhostChargeStalkModeInteraction::GetSnapPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition"));

	UGhostChargeStalkModeInteraction_GetSnapPointPosition_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716790              		 offset:1606790                       

float UGhostChargeStalkModeInteraction::GetSnapDistanceAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart"));

	UGhostChargeStalkModeInteraction_GetSnapDistanceAtStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSnapDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807166F0              		 offset:16066f0                       

float UGhostChargeStalkModeInteraction::GetSnapDistance(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapDistance"));

	UGhostChargeStalkModeInteraction_GetSnapDistance_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EInputInteractionType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807166C0              		 offset:16066c0                       

EInputInteractionType UGhostChargeStalkModeInteraction::GetSecondaryActionInputType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSecondaryActionInputType"));

	UGhostChargeStalkModeInteraction_GetSecondaryActionInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionButtonType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EButtonType                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716690              		 offset:1606690                       

EButtonType UGhostChargeStalkModeInteraction::GetSecondaryActionButtonType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSecondaryActionButtonType"));

	UGhostChargeStalkModeInteraction_GetSecondaryActionButtonType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPointAtStart
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807165F0              		 offset:16065f0                       

struct FRotator UGhostChargeStalkModeInteraction::GetRotationToSnapPointAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPointAtStart"));

	UGhostChargeStalkModeInteraction_GetRotationToSnapPointAtStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPoint
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716540              		 offset:1606540                       

struct FRotator UGhostChargeStalkModeInteraction::GetRotationToSnapPoint(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPoint"));

	UGhostChargeStalkModeInteraction_GetRotationToSnapPoint_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetPowerProgressBar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPowerProgressBar              ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716520              		 offset:1606520                       

EPowerProgressBar UGhostChargeStalkModeInteraction::GetPowerProgressBar()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetPowerProgressBar"));

	UGhostChargeStalkModeInteraction_GetPowerProgressBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             interactingPlayer              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716450              		 offset:1606450                       

class ADBDPlayer* UGhostChargeStalkModeInteraction::GetPlayerDependancy(class ADBDPlayer** interactingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy"));

	UGhostChargeStalkModeInteraction_GetPlayerDependancy_Params params;
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UInterruptionDefinition*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF680716390              		 offset:1606390                       

TArray<class UInterruptionDefinition*> UGhostChargeStalkModeInteraction::GetInterruptionDefinitions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions"));

	UGhostChargeStalkModeInteraction_GetInterruptionDefinitions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInteractor*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68068DCE0              		 offset:157dce0                       

class UInteractor* UGhostChargeStalkModeInteraction::GetInteractor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractor"));

	UGhostChargeStalkModeInteraction_GetInteractor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractionTimeMultiplier
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807162F0              		 offset:16062f0                       

float UGhostChargeStalkModeInteraction::GetInteractionTimeMultiplier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionTimeMultiplier"));

	UGhostChargeStalkModeInteraction_GetInteractionTimeMultiplier_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractionTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680716250              		 offset:1606250                       

float UGhostChargeStalkModeInteraction::GetInteractionTime(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionTime"));

	UGhostChargeStalkModeInteraction_GetInteractionTime_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractionText
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF680716170              		 offset:1606170                       

struct FString UGhostChargeStalkModeInteraction::GetInteractionText(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionText"));

	UGhostChargeStalkModeInteraction_GetInteractionText_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807160D0              		 offset:16060d0                       

float UGhostChargeStalkModeInteraction::GetInteractionExitTime(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime"));

	UGhostChargeStalkModeInteraction_GetInteractionExitTime_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6807160A0              		 offset:16060a0                       

struct FText UGhostChargeStalkModeInteraction::GetInteractionDescriptionText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText"));

	UGhostChargeStalkModeInteraction_GetInteractionDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetInteractable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AInteractable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715FF0              		 offset:1605ff0                       

class AInteractable* UGhostChargeStalkModeInteraction::GetInteractable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractable"));

	UGhostChargeStalkModeInteraction_GetInteractable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715F40              		 offset:1605f40                       

struct FVector UGhostChargeStalkModeInteraction::GetFocalPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition"));

	UGhostChargeStalkModeInteraction_GetFocalPointPosition_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetExitMontage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimationMontageDescriptor ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680715DB0              		 offset:1605db0                       

struct FAnimationMontageDescriptor UGhostChargeStalkModeInteraction::GetExitMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetExitMontage"));

	UGhostChargeStalkModeInteraction_GetExitMontage_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Follower                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FMontagePlaybackDefinition ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680715CB0              		 offset:1605cb0                       

struct FMontagePlaybackDefinition UGhostChargeStalkModeInteraction::GetExitAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition"));

	UGhostChargeStalkModeInteraction_GetExitAnimationPlayBackDefinition_Params params;
	params.Player = Player;
	params.Follower = Follower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetEnterMontage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimationMontageDescriptor ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680715C00              		 offset:1605c00                       

struct FAnimationMontageDescriptor UGhostChargeStalkModeInteraction::GetEnterMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetEnterMontage"));

	UGhostChargeStalkModeInteraction_GetEnterMontage_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Follower                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FMontagePlaybackDefinition ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF680715B00              		 offset:1605b00                       

struct FMontagePlaybackDefinition UGhostChargeStalkModeInteraction::GetEnterAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition"));

	UGhostChargeStalkModeInteraction_GetEnterAnimationPlayBackDefinition_Params params;
	params.Player = Player;
	params.Follower = Follower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetChargePercent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715AC0              		 offset:1605ac0                       

float UGhostChargeStalkModeInteraction::GetChargePercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetChargePercent"));

	UGhostChargeStalkModeInteraction_GetChargePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetCancelButtonType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EButtonType                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715A90              		 offset:1605a90                       

EButtonType UGhostChargeStalkModeInteraction::GetCancelButtonType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetCancelButtonType"));

	UGhostChargeStalkModeInteraction_GetCancelButtonType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetAllowNavigation
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807159F0              		 offset:16059f0                       

bool UGhostChargeStalkModeInteraction::GetAllowNavigation(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetAllowNavigation"));

	UGhostChargeStalkModeInteraction_GetAllowNavigation_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715950              		 offset:1605950                       

struct FVector UGhostChargeStalkModeInteraction::GetActualSnapPointPositionAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart"));

	UGhostChargeStalkModeInteraction_GetActualSnapPointPositionAtStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807158B0              		 offset:16058b0                       

struct FVector UGhostChargeStalkModeInteraction::GetActualSnapPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition"));

	UGhostChargeStalkModeInteraction_GetActualSnapPointPosition_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF680715830              		 offset:1605830                       

TArray<class AActor*> UGhostChargeStalkModeInteraction::GetActorsToIgnoreOverlap()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap"));

	UGhostChargeStalkModeInteraction_GetActorsToIgnoreOverlap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715790              		 offset:1605790                       

float UGhostChargeStalkModeInteraction::GetActorHeightDelta(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta"));

	UGhostChargeStalkModeInteraction_GetActorHeightDelta_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715700              		 offset:1605700                       

bool UGhostChargeStalkModeInteraction::DoesPlayerHaveClearPath(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath"));

	UGhostChargeStalkModeInteraction_DoesPlayerHaveClearPath_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.CompleteCharge
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class ADBDPlayer**             Character                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680715670              		 offset:1605670                       

void UGhostChargeStalkModeInteraction::CompleteCharge(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CompleteCharge"));

	UGhostChargeStalkModeInteraction_CompleteCharge_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UInteractionDefinition** Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807155D0              		 offset:16055d0                       

bool UGhostChargeStalkModeInteraction::CanOverrideInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction"));

	UGhostChargeStalkModeInteraction_CanOverrideInteraction_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715500              		 offset:1605500                       

float UGhostChargeStalkModeInteraction::CalculateSnapTimeForConstantSpeed(class ADBDPlayer** Player, float* Speed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantSpeed"));

	UGhostChargeStalkModeInteraction_CalculateSnapTimeForConstantSpeed_Params params;
	params.Player = Player;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantMaxNormalMovementSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         speedBoost                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715430              		 offset:1605430                       

float UGhostChargeStalkModeInteraction::CalculateSnapTimeForConstantMaxNormalMovementSpeed(class ADBDPlayer** Player, float* speedBoost)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantMaxNormalMovementSpeed"));

	UGhostChargeStalkModeInteraction_CalculateSnapTimeForConstantMaxNormalMovementSpeed_Params params;
	params.Player = Player;
	params.speedBoost = speedBoost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.AttachToZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    zone                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680715190              		 offset:1605190                       

void UGhostChargeStalkModeInteraction::AttachToZone(class UPrimitiveComponent** zone)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AttachToZone"));

	UGhostChargeStalkModeInteraction_AttachToZone_Params params;
	params.zone = zone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.AttachToInteractor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInteractor**            Interactor                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680715110              		 offset:1605110                       

void UGhostChargeStalkModeInteraction::AttachToInteractor(class UInteractor** Interactor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AttachToInteractor"));

	UGhostChargeStalkModeInteraction_AttachToInteractor_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.InteractionDefinition.AtlantaItemUseToggleState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715060              		 offset:1605060                       

bool UGhostChargeStalkModeInteraction::AtlantaItemUseToggleState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AtlantaItemUseToggleState"));

	UGhostChargeStalkModeInteraction_AtlantaItemUseToggleState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.AtlantaGetPowerButtonImageID
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680715020              		 offset:1605020                       

struct FName UGhostChargeStalkModeInteraction::AtlantaGetPowerButtonImageID()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AtlantaGetPowerButtonImageID"));

	UGhostChargeStalkModeInteraction_AtlantaGetPowerButtonImageID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInteractionDefinition** Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF680714FA0              		 offset:1604fa0                       

void UGhostChargeStalkModeInteraction::AddMutuallyExclusiveInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction"));

	UGhostChargeStalkModeInteraction_AddMutuallyExclusiveInteraction_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDInteraction.LinkedVomitInteraction.IsVomiting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68010CC90              		 offset:ffcc90                        

bool ULinkedVomitInteraction::IsVomiting()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.LinkedVomitInteraction.IsVomiting"));

	ULinkedVomitInteraction_IsVomiting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDInteraction.LinkedVomitInteraction.IsChargeComplete
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68010CC60              		 offset:ffcc60                        

bool ULinkedVomitInteraction::IsChargeComplete()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.LinkedVomitInteraction.IsChargeComplete"));

	ULinkedVomitInteraction_IsChargeComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVomitStateComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68010CC30              		 offset:ffcc30                        

class UVomitStateComponent* ULinkedVomitInteraction::GetVomitStateComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent"));

	ULinkedVomitInteraction_GetVomitStateComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UTeleportToDemogorgonPortalInteraction::OnTeleportInteractionCanceledVFX()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX"));

	UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet
// (Final, Native, Private)
// Parameters:
// class ASlasherPlayer**         Slasher                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68010D350              		 offset:ffd350                        

void UTeleportToDemogorgonPortalInteraction::OnSlasherSet(class ASlasherPlayer** Slasher)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet"));

	UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Params params;
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68010D5E0              		 offset:ffd5e0                        

void UThrowInteraction::InitThrowCancellationExitTime(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime"));

	UThrowInteraction_InitThrowCancellationExitTime_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDInteraction.ThrowInteraction.HasCancelledThrow
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68010D5B0              		 offset:ffd5b0                        

bool UThrowInteraction::HasCancelledThrow()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.ThrowInteraction.HasCancelledThrow"));

	UThrowInteraction_HasCancelledThrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
