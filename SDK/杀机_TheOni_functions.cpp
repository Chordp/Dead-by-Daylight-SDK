// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheOni_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680717D50              		 offset:1607d50                       

bool UAbsorbBloodOrbsInteraction::ShouldStartUpdateMontageDuringEnter(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter"));

	UAbsorbBloodOrbsInteraction_ShouldStartUpdateMontageDuringEnter_Params params;
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

void UAbsorbBloodOrbsInteraction::SetSecondaryActionInputType(EInputInteractionType* inputType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetSecondaryActionInputType"));

	UAbsorbBloodOrbsInteraction_SetSecondaryActionInputType_Params params;
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

void UAbsorbBloodOrbsInteraction::SetSecondaryActionButtonType(EButtonType* ButtonType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetSecondaryActionButtonType"));

	UAbsorbBloodOrbsInteraction_SetSecondaryActionButtonType_Params params;
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

void UAbsorbBloodOrbsInteraction::SetCancelButtonType(EButtonType* ButtonType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetCancelButtonType"));

	UAbsorbBloodOrbsInteraction_SetCancelButtonType_Params params;
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

void UAbsorbBloodOrbsInteraction::OnUpdateMontageStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnUpdateMontageStart"));

	UAbsorbBloodOrbsInteraction_OnUpdateMontageStart_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInterruptorUpdateStart(class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptor, class ADBDPlayer** interruptee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart"));

	UAbsorbBloodOrbsInteraction_OnInterruptorUpdateStart_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionUpdateTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick"));

	UAbsorbBloodOrbsInteraction_OnInteractionUpdateTick_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionUpdateStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart"));

	UAbsorbBloodOrbsInteraction_OnInteractionUpdateStart_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionUpdateMontageReachedMiddle(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle"));

	UAbsorbBloodOrbsInteraction_OnInteractionUpdateMontageReachedMiddle_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionUpdateEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd"));

	UAbsorbBloodOrbsInteraction_OnInteractionUpdateEnd_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionInterruptStarted(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted"));

	UAbsorbBloodOrbsInteraction_OnInteractionInterruptStarted_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionInterruptStart(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart"));

	UAbsorbBloodOrbsInteraction_OnInteractionInterruptStart_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionInterruptEnd(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd"));

	UAbsorbBloodOrbsInteraction_OnInteractionInterruptEnd_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionInit(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInit"));

	UAbsorbBloodOrbsInteraction_OnInteractionInit_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionFinished(class ADBDPlayer** Player, bool* hasInteractionStarted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionFinished"));

	UAbsorbBloodOrbsInteraction_OnInteractionFinished_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionExitTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitTick"));

	UAbsorbBloodOrbsInteraction_OnInteractionExitTick_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionExitStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart"));

	UAbsorbBloodOrbsInteraction_OnInteractionExitStart_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionExitEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd"));

	UAbsorbBloodOrbsInteraction_OnInteractionExitEnd_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionEnterTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick"));

	UAbsorbBloodOrbsInteraction_OnInteractionEnterTick_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionEnterStart(class ADBDPlayer** Player, float* actualSnapTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart"));

	UAbsorbBloodOrbsInteraction_OnInteractionEnterStart_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionEnterFailed(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed"));

	UAbsorbBloodOrbsInteraction_OnInteractionEnterFailed_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionEnterEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd"));

	UAbsorbBloodOrbsInteraction_OnInteractionEnterEnd_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionCancelled(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled"));

	UAbsorbBloodOrbsInteraction_OnInteractionCancelled_Params params;
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

void UAbsorbBloodOrbsInteraction::OnInteractionAnimNotifyEvent(struct FName* NotifyId, class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent"));

	UAbsorbBloodOrbsInteraction_OnInteractionAnimNotifyEvent_Params params;
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

bool UAbsorbBloodOrbsInteraction::IsSupportedCharacterType(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType"));

	UAbsorbBloodOrbsInteraction_IsSupportedCharacterType_Params params;
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

bool UAbsorbBloodOrbsInteraction::IsInterruptionPossible(class ADBDPlayer** interruptor, class ADBDPlayer** interruptee, class UInterruptionDefinition** interruption)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible"));

	UAbsorbBloodOrbsInteraction_IsInterruptionPossible_Params params;
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

bool UAbsorbBloodOrbsInteraction::IsInteractionUsingOffering(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionUsingOffering"));

	UAbsorbBloodOrbsInteraction_IsInteractionUsingOffering_Params params;
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

bool UAbsorbBloodOrbsInteraction::IsInteractionPossibleClient(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient"));

	UAbsorbBloodOrbsInteraction_IsInteractionPossibleClient_Params params;
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

bool UAbsorbBloodOrbsInteraction::IsInteractionPossibleBP(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP"));

	UAbsorbBloodOrbsInteraction_IsInteractionPossibleBP_Params params;
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

bool UAbsorbBloodOrbsInteraction::IsInteractionDone(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionDone"));

	UAbsorbBloodOrbsInteraction_IsInteractionDone_Params params;
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

bool UAbsorbBloodOrbsInteraction::IsInputPressed(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInputPressed"));

	UAbsorbBloodOrbsInteraction_IsInputPressed_Params params;
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

bool UAbsorbBloodOrbsInteraction::IsCharacterFacingInteractorDirection(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection"));

	UAbsorbBloodOrbsInteraction_IsCharacterFacingInteractorDirection_Params params;
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

bool UAbsorbBloodOrbsInteraction::IsCancelable(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsCancelable"));

	UAbsorbBloodOrbsInteraction_IsCancelable_Params params;
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

struct FAnimationMontageDescriptor UAbsorbBloodOrbsInteraction::GetUpdateMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateMontage"));

	UAbsorbBloodOrbsInteraction_GetUpdateMontage_Params params;
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

bool UAbsorbBloodOrbsInteraction::GetUpdateHighlightOpacityUsingCharge()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateHighlightOpacityUsingCharge"));

	UAbsorbBloodOrbsInteraction_GetUpdateHighlightOpacityUsingCharge_Params params;

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

float UAbsorbBloodOrbsInteraction::GetUpdateAnimationPlayRate(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate"));

	UAbsorbBloodOrbsInteraction_GetUpdateAnimationPlayRate_Params params;
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

struct FMontagePlaybackDefinition UAbsorbBloodOrbsInteraction::GetUpdateAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition"));

	UAbsorbBloodOrbsInteraction_GetUpdateAnimationPlayBackDefinition_Params params;
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

float UAbsorbBloodOrbsInteraction::GetSnapTimeAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart"));

	UAbsorbBloodOrbsInteraction_GetSnapTimeAtStart_Params params;
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

float UAbsorbBloodOrbsInteraction::GetSnapTime(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapTime"));

	UAbsorbBloodOrbsInteraction_GetSnapTime_Params params;
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

struct FName UAbsorbBloodOrbsInteraction::GetSnapSocketName(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapSocketName"));

	UAbsorbBloodOrbsInteraction_GetSnapSocketName_Params params;
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

struct FVector UAbsorbBloodOrbsInteraction::GetSnapPointPositionAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart"));

	UAbsorbBloodOrbsInteraction_GetSnapPointPositionAtStart_Params params;
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

struct FVector UAbsorbBloodOrbsInteraction::GetSnapPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition"));

	UAbsorbBloodOrbsInteraction_GetSnapPointPosition_Params params;
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

float UAbsorbBloodOrbsInteraction::GetSnapDistanceAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart"));

	UAbsorbBloodOrbsInteraction_GetSnapDistanceAtStart_Params params;
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

float UAbsorbBloodOrbsInteraction::GetSnapDistance(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapDistance"));

	UAbsorbBloodOrbsInteraction_GetSnapDistance_Params params;
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

EInputInteractionType UAbsorbBloodOrbsInteraction::GetSecondaryActionInputType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSecondaryActionInputType"));

	UAbsorbBloodOrbsInteraction_GetSecondaryActionInputType_Params params;

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

EButtonType UAbsorbBloodOrbsInteraction::GetSecondaryActionButtonType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSecondaryActionButtonType"));

	UAbsorbBloodOrbsInteraction_GetSecondaryActionButtonType_Params params;

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

struct FRotator UAbsorbBloodOrbsInteraction::GetRotationToSnapPointAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPointAtStart"));

	UAbsorbBloodOrbsInteraction_GetRotationToSnapPointAtStart_Params params;
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

struct FRotator UAbsorbBloodOrbsInteraction::GetRotationToSnapPoint(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPoint"));

	UAbsorbBloodOrbsInteraction_GetRotationToSnapPoint_Params params;
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

EPowerProgressBar UAbsorbBloodOrbsInteraction::GetPowerProgressBar()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetPowerProgressBar"));

	UAbsorbBloodOrbsInteraction_GetPowerProgressBar_Params params;

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

class ADBDPlayer* UAbsorbBloodOrbsInteraction::GetPlayerDependancy(class ADBDPlayer** interactingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy"));

	UAbsorbBloodOrbsInteraction_GetPlayerDependancy_Params params;
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

TArray<class UInterruptionDefinition*> UAbsorbBloodOrbsInteraction::GetInterruptionDefinitions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions"));

	UAbsorbBloodOrbsInteraction_GetInterruptionDefinitions_Params params;

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

class UInteractor* UAbsorbBloodOrbsInteraction::GetInteractor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractor"));

	UAbsorbBloodOrbsInteraction_GetInteractor_Params params;

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

float UAbsorbBloodOrbsInteraction::GetInteractionTimeMultiplier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionTimeMultiplier"));

	UAbsorbBloodOrbsInteraction_GetInteractionTimeMultiplier_Params params;
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

float UAbsorbBloodOrbsInteraction::GetInteractionTime(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionTime"));

	UAbsorbBloodOrbsInteraction_GetInteractionTime_Params params;
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

struct FString UAbsorbBloodOrbsInteraction::GetInteractionText(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionText"));

	UAbsorbBloodOrbsInteraction_GetInteractionText_Params params;
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

float UAbsorbBloodOrbsInteraction::GetInteractionExitTime(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime"));

	UAbsorbBloodOrbsInteraction_GetInteractionExitTime_Params params;
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

struct FText UAbsorbBloodOrbsInteraction::GetInteractionDescriptionText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText"));

	UAbsorbBloodOrbsInteraction_GetInteractionDescriptionText_Params params;

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

class AInteractable* UAbsorbBloodOrbsInteraction::GetInteractable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractable"));

	UAbsorbBloodOrbsInteraction_GetInteractable_Params params;

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

struct FVector UAbsorbBloodOrbsInteraction::GetFocalPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition"));

	UAbsorbBloodOrbsInteraction_GetFocalPointPosition_Params params;
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

struct FAnimationMontageDescriptor UAbsorbBloodOrbsInteraction::GetExitMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetExitMontage"));

	UAbsorbBloodOrbsInteraction_GetExitMontage_Params params;
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

struct FMontagePlaybackDefinition UAbsorbBloodOrbsInteraction::GetExitAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition"));

	UAbsorbBloodOrbsInteraction_GetExitAnimationPlayBackDefinition_Params params;
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

struct FAnimationMontageDescriptor UAbsorbBloodOrbsInteraction::GetEnterMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetEnterMontage"));

	UAbsorbBloodOrbsInteraction_GetEnterMontage_Params params;
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

struct FMontagePlaybackDefinition UAbsorbBloodOrbsInteraction::GetEnterAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition"));

	UAbsorbBloodOrbsInteraction_GetEnterAnimationPlayBackDefinition_Params params;
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

float UAbsorbBloodOrbsInteraction::GetChargePercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetChargePercent"));

	UAbsorbBloodOrbsInteraction_GetChargePercent_Params params;

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

EButtonType UAbsorbBloodOrbsInteraction::GetCancelButtonType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetCancelButtonType"));

	UAbsorbBloodOrbsInteraction_GetCancelButtonType_Params params;

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

bool UAbsorbBloodOrbsInteraction::GetAllowNavigation(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetAllowNavigation"));

	UAbsorbBloodOrbsInteraction_GetAllowNavigation_Params params;
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

struct FVector UAbsorbBloodOrbsInteraction::GetActualSnapPointPositionAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart"));

	UAbsorbBloodOrbsInteraction_GetActualSnapPointPositionAtStart_Params params;
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

struct FVector UAbsorbBloodOrbsInteraction::GetActualSnapPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition"));

	UAbsorbBloodOrbsInteraction_GetActualSnapPointPosition_Params params;
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

TArray<class AActor*> UAbsorbBloodOrbsInteraction::GetActorsToIgnoreOverlap()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap"));

	UAbsorbBloodOrbsInteraction_GetActorsToIgnoreOverlap_Params params;

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

float UAbsorbBloodOrbsInteraction::GetActorHeightDelta(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta"));

	UAbsorbBloodOrbsInteraction_GetActorHeightDelta_Params params;
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

bool UAbsorbBloodOrbsInteraction::DoesPlayerHaveClearPath(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath"));

	UAbsorbBloodOrbsInteraction_DoesPlayerHaveClearPath_Params params;
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

void UAbsorbBloodOrbsInteraction::CompleteCharge(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CompleteCharge"));

	UAbsorbBloodOrbsInteraction_CompleteCharge_Params params;
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

bool UAbsorbBloodOrbsInteraction::CanOverrideInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction"));

	UAbsorbBloodOrbsInteraction_CanOverrideInteraction_Params params;
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

float UAbsorbBloodOrbsInteraction::CalculateSnapTimeForConstantSpeed(class ADBDPlayer** Player, float* Speed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantSpeed"));

	UAbsorbBloodOrbsInteraction_CalculateSnapTimeForConstantSpeed_Params params;
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

float UAbsorbBloodOrbsInteraction::CalculateSnapTimeForConstantMaxNormalMovementSpeed(class ADBDPlayer** Player, float* speedBoost)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantMaxNormalMovementSpeed"));

	UAbsorbBloodOrbsInteraction_CalculateSnapTimeForConstantMaxNormalMovementSpeed_Params params;
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

void UAbsorbBloodOrbsInteraction::AttachToZone(class UPrimitiveComponent** zone)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AttachToZone"));

	UAbsorbBloodOrbsInteraction_AttachToZone_Params params;
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

void UAbsorbBloodOrbsInteraction::AttachToInteractor(class UInteractor** Interactor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AttachToInteractor"));

	UAbsorbBloodOrbsInteraction_AttachToInteractor_Params params;
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

bool UAbsorbBloodOrbsInteraction::AtlantaItemUseToggleState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AtlantaItemUseToggleState"));

	UAbsorbBloodOrbsInteraction_AtlantaItemUseToggleState_Params params;

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

struct FName UAbsorbBloodOrbsInteraction::AtlantaGetPowerButtonImageID()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AtlantaGetPowerButtonImageID"));

	UAbsorbBloodOrbsInteraction_AtlantaGetPowerButtonImageID_Params params;

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

void UAbsorbBloodOrbsInteraction::AddMutuallyExclusiveInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction"));

	UAbsorbBloodOrbsInteraction_AddMutuallyExclusiveInteraction_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrb.UpdateAttracted_Cosmetic
// (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector*                destination                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             absorber                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABloodOrb::UpdateAttracted_Cosmetic(struct FVector* destination, class ADBDPlayer** absorber, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.UpdateAttracted_Cosmetic"));

	ABloodOrb_UpdateAttracted_Cosmetic_Params params;
	params.destination = destination;
	params.absorber = absorber;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrb.UpdateAbsorbed_Cosmetic
// (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector*                destination                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             absorber                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABloodOrb::UpdateAbsorbed_Cosmetic(struct FVector* destination, class ADBDPlayer** absorber, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.UpdateAbsorbed_Cosmetic"));

	ABloodOrb_UpdateAbsorbed_Cosmetic_Params params;
	params.destination = destination;
	params.absorber = absorber;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrb.OnRep_State
// (Final, Native, Private)
// Parameters:
// EBloodOrbState*                oldState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807B9740              		 offset:16a9740                       

void ABloodOrb::OnRep_State(EBloodOrbState* oldState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.OnRep_State"));

	ABloodOrb_OnRep_State_Params params;
	params.oldState = oldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrb.OnIsAttractedChangedCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          isAttracted                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABloodOrb::OnIsAttractedChangedCosmetic(bool* isAttracted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.OnIsAttractedChangedCosmetic"));

	ABloodOrb_OnIsAttractedChangedCosmetic_Params params;
	params.isAttracted = isAttracted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrb.OnDestroyedCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABloodOrb::OnDestroyedCosmetic()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.OnDestroyedCosmetic"));

	ABloodOrb_OnDestroyedCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrb.OnAbsorbedCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABloodOrb::OnAbsorbedCosmetic()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.OnAbsorbedCosmetic"));

	ABloodOrb_OnAbsorbedCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrb.GetDroppingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807B9710              		 offset:16a9710                       

class ADBDPlayer* ABloodOrb::GetDroppingPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.GetDroppingPlayer"));

	ABloodOrb_GetDroppingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheOni.BloodOrb.Authority_OnDropped
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             droppedBy                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ImpulseFactor                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABloodOrb::Authority_OnDropped(class ADBDPlayer** droppedBy, float* ImpulseFactor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.Authority_OnDropped"));

	ABloodOrb_Authority_OnDropped_Params params;
	params.droppedBy = droppedBy;
	params.ImpulseFactor = ImpulseFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrb.Authority_OnDropFinished
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6807B96F0              		 offset:16a96f0                       

void ABloodOrb::Authority_OnDropFinished()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.Authority_OnDropFinished"));

	ABloodOrb_Authority_OnDropFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrb.Authority_DestroyBloodOrb
// (Final, Native, Private)
// FunctionAddress:0x00007FF6807B96D0              		 offset:16a96d0                       

void ABloodOrb::Authority_DestroyBloodOrb()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.Authority_DestroyBloodOrb"));

	ABloodOrb_Authority_DestroyBloodOrb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrb.Authority_Despawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6807B96B0              		 offset:16a96b0                       

void ABloodOrb::Authority_Despawn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.Authority_Despawn"));

	ABloodOrb_Authority_Despawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbAbsorberComponent.SetInAbsorbMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          inAbsorptionMode               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807B99B0              		 offset:16a99b0                       

void UBloodOrbAbsorberComponent::SetInAbsorbMode(bool* inAbsorptionMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbAbsorberComponent.SetInAbsorbMode"));

	UBloodOrbAbsorberComponent_SetInAbsorbMode_Params params;
	params.inAbsorptionMode = inAbsorptionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbAbsorberComponent.IsInAbsorbMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806FA000              		 offset:15ea000                       

bool UBloodOrbAbsorberComponent::IsInAbsorbMode()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbAbsorberComponent.IsInAbsorbMode"));

	UBloodOrbAbsorberComponent_IsInAbsorbMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange
// (Final, Native, Private, Const)
// Parameters:
// class UBloodOrbVisibilityComponent** BloodOrbVisibilityComponent    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             Killer                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BA160              		 offset:16aa160                       

void UBloodOrbConfiguratorComponent::UpdateSurvivorBloodOrbVisibilityRange(class UBloodOrbVisibilityComponent** BloodOrbVisibilityComponent, class ADBDPlayer** Killer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange"));

	UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Params params;
	params.BloodOrbVisibilityComponent = BloodOrbVisibilityComponent;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges
// (Final, Native, Private, Const)
// Parameters:
// class UBloodOrbVisibilityComponent** BloodOrbVisibilityComponent    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BA0A0              		 offset:16aa0a0                       

void UBloodOrbConfiguratorComponent::UpdateKillerBloodOrbVisiblityRanges(class UBloodOrbVisibilityComponent** BloodOrbVisibilityComponent, class ADBDPlayer** Killer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges"));

	UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Params params;
	params.BloodOrbVisibilityComponent = BloodOrbVisibilityComponent;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed
// (Final, Native, Private, Const)
// Parameters:
// class UBloodOrbAbsorberComponent** BloodOrbAbsorberComponent      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ADBDPlayer**             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807B9FE0              		 offset:16a9fe0                       

void UBloodOrbConfiguratorComponent::UpdateBloodOrbAttractSpeed(class UBloodOrbAbsorberComponent** BloodOrbAbsorberComponent, class ADBDPlayer** Killer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed"));

	UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Params params;
	params.BloodOrbAbsorberComponent = BloodOrbAbsorberComponent;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay
// (Final, Native, Private)
// FunctionAddress:0x00007FF6807B9FC0              		 offset:16a9fc0                       

void UBloodOrbConfiguratorComponent::OnLevelReadyToPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay"));

	UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier
// (Final, Native, Private, Const)
// Parameters:
// class ADBDPlayer**             Killer                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807B9F40              		 offset:16a9f40                       

void UBloodOrbConfiguratorComponent::Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(class ADBDPlayer** Killer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier"));

	UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ToggleActive
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D820              		 offset:154d820                       

void UBloodOrbDropperComponent::ToggleActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ToggleActive"));

	UBloodOrbDropperComponent_ToggleActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetTickGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETickingGroup>*    NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4E20              		 offset:2ec4e20                       

void UBloodOrbDropperComponent::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickGroup"));

	UBloodOrbDropperComponent_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetTickableWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4EA0              		 offset:2ec4ea0                       

void UBloodOrbDropperComponent::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickableWhenPaused"));

	UBloodOrbDropperComponent_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetIsReplicated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ShouldReplicate                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4D90              		 offset:2ec4d90                       

void UBloodOrbDropperComponent::SetIsReplicated(bool* ShouldReplicate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetIsReplicated"));

	UBloodOrbDropperComponent_SetIsReplicated_Params params;
	params.ShouldReplicate = ShouldReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetComponentTickInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4D10              		 offset:2ec4d10                       

void UBloodOrbDropperComponent::SetComponentTickInterval(float* TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickInterval"));

	UBloodOrbDropperComponent_SetComponentTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetComponentTickEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4C80              		 offset:2ec4c80                       

void UBloodOrbDropperComponent::SetComponentTickEnabled(bool* bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickEnabled"));

	UBloodOrbDropperComponent_SetComponentTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetAutoActivate
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewAutoActivate               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4BF0              		 offset:2ec4bf0                       

void UBloodOrbDropperComponent::SetAutoActivate(bool* bNewAutoActivate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetAutoActivate"));

	UBloodOrbDropperComponent_SetAutoActivate_Params params;
	params.bNewAutoActivate = bNewAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReset                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4B20              		 offset:2ec4b20                       

void UBloodOrbDropperComponent::SetActive(bool* bNewActive, bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetActive"));

	UBloodOrbDropperComponent_SetActive_Params params;
	params.bNewActive = bNewActive;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4A90              		 offset:2ec4a90                       

void UBloodOrbDropperComponent::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteComponent"));

	UBloodOrbDropperComponent_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4A00              		 offset:2ec4a00                       

void UBloodOrbDropperComponent::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteActor"));

	UBloodOrbDropperComponent_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBloodOrbDropperComponent::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveTick"));

	UBloodOrbDropperComponent_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBloodOrbDropperComponent::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveEndPlay"));

	UBloodOrbDropperComponent_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBloodOrbDropperComponent::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveBeginPlay"));

	UBloodOrbDropperComponent_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.OnRep_IsActive
// (Native, Public)
// FunctionAddress:0x00007FF6818B8B30              		 offset:27a8b30                       

void UBloodOrbDropperComponent::OnRep_IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.OnRep_IsActive"));

	UBloodOrbDropperComponent_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.K2_DestroyComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4900              		 offset:2ec4900                       

void UBloodOrbDropperComponent::K2_DestroyComponent(class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.K2_DestroyComponent"));

	UBloodOrbDropperComponent_K2_DestroyComponent_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.IsComponentTickEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD48D0              		 offset:2ec48d0                       

bool UBloodOrbDropperComponent::IsComponentTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsComponentTickEnabled"));

	UBloodOrbDropperComponent_IsComponentTickEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.IsBeingDestroyed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD48A0              		 offset:2ec48a0                       

bool UBloodOrbDropperComponent::IsBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsBeingDestroyed"));

	UBloodOrbDropperComponent_IsBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.IsActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4870              		 offset:2ec4870                       

bool UBloodOrbDropperComponent::IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsActive"));

	UBloodOrbDropperComponent_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.GetOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4850              		 offset:2ec4850                       

class AActor* UBloodOrbDropperComponent::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetOwner"));

	UBloodOrbDropperComponent_GetOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.GetComponentTickInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4820              		 offset:2ec4820                       

float UBloodOrbDropperComponent::GetComponentTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetComponentTickInterval"));

	UBloodOrbDropperComponent_GetComponentTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.Deactivate
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D260              		 offset:154d260                       

void UBloodOrbDropperComponent::Deactivate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Deactivate"));

	UBloodOrbDropperComponent_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ComponentHasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD45F0              		 offset:2ec45f0                       

bool UBloodOrbDropperComponent::ComponentHasTag(struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ComponentHasTag"));

	UBloodOrbDropperComponent_ComponentHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.AddTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FD44A0              		 offset:2ec44a0                       

void UBloodOrbDropperComponent::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteComponent"));

	UBloodOrbDropperComponent_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.AddTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4410              		 offset:2ec4410                       

void UBloodOrbDropperComponent::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteActor"));

	UBloodOrbDropperComponent_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.Activate
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bReset                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681800920              		 offset:26f0920                       

void UBloodOrbDropperComponent::Activate(bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Activate"));

	UBloodOrbDropperComponent_Activate_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDGameplay.FadeComponent.GetFadePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680104D30              		 offset:ff4d30                        

float UBloodOrbFadeComponent::GetFadePercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplay.FadeComponent.GetFadePercent"));

	UBloodOrbFadeComponent_GetFadePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs
// (Final, Native, Private)
// Parameters:
// int*                           previousOverlappingOrbs        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BB430              		 offset:16ab430                       

void UBloodOrbOverlapComponent::OnRep_CurrentOverlappingOrbs(int* previousOverlappingOrbs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs"));

	UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Params params;
	params.previousOverlappingOrbs = previousOverlappingOrbs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb
// (Final, Native, Private)
// Parameters:
// class AActor**                 DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BB3B0              		 offset:16ab3b0                       

void UBloodOrbOverlapComponent::Authority_OnDestroyedBloodOrb(class AActor** DestroyedActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb"));

	UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged
// (Final, Native, Private)
// Parameters:
// EBloodOrbVisibilityMode*       visibilityMode                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BB330              		 offset:16ab330                       

void UBloodOrbOverlapComponent::Authority_OnBloodOrbVisibilityModeChanged(EBloodOrbVisibilityMode* visibilityMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged"));

	UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Params params;
	params.visibilityMode = visibilityMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BB1F0              		 offset:16ab1f0                       

void UBloodOrbOverlapComponent::Authority_OnBloodOrbEndOverlap(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap"));

	UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BB000              		 offset:16ab000                       

void UBloodOrbOverlapComponent::Authority_OnBloodOrbBeginOverlap(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap"));

	UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbOverlapRevealToKiller.GetRevealTimer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTimerObject*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6807BB6E0              		 offset:16ab6e0                       

class UTimerObject* UBloodOrbOverlapRevealToKiller::GetRevealTimer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapRevealToKiller.GetRevealTimer"));

	UBloodOrbOverlapRevealToKiller_GetRevealTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged
// (Final, Native, Private, Const)
// Parameters:
// EBloodOrbState*                oldState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EBloodOrbState*                newState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ABloodOrb**              BloodOrb                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BBB10              		 offset:16abb10                       

void UBloodOrbStateMonitorComponent::OnBloodOrbStateChanged(EBloodOrbState* oldState, EBloodOrbState* newState, class ABloodOrb** BloodOrb)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged"));

	UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Params params;
	params.oldState = oldState;
	params.newState = newState;
	params.BloodOrb = BloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned
// (Final, Native, Private)
// Parameters:
// class ABloodOrb**              BloodOrb                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BBA90              		 offset:16aba90                       

void UBloodOrbStateMonitorComponent::OnBloodOrbSpawned(class ABloodOrb** BloodOrb)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned"));

	UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Params params;
	params.BloodOrb = BloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed
// (Final, Native, Private)
// Parameters:
// class ABloodOrb**              BloodOrb                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BBA10              		 offset:16aba10                       

void UBloodOrbStateMonitorComponent::OnBloodOrbDestroyed(class ABloodOrb** BloodOrb)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed"));

	UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Params params;
	params.BloodOrb = BloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ToggleActive
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D820              		 offset:154d820                       

void UBloodOrbVisibilityComponent::ToggleActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ToggleActive"));

	UBloodOrbVisibilityComponent_ToggleActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetTickGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETickingGroup>*    NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4E20              		 offset:2ec4e20                       

void UBloodOrbVisibilityComponent::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickGroup"));

	UBloodOrbVisibilityComponent_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetTickableWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4EA0              		 offset:2ec4ea0                       

void UBloodOrbVisibilityComponent::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickableWhenPaused"));

	UBloodOrbVisibilityComponent_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetIsReplicated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ShouldReplicate                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4D90              		 offset:2ec4d90                       

void UBloodOrbVisibilityComponent::SetIsReplicated(bool* ShouldReplicate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetIsReplicated"));

	UBloodOrbVisibilityComponent_SetIsReplicated_Params params;
	params.ShouldReplicate = ShouldReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetComponentTickInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4D10              		 offset:2ec4d10                       

void UBloodOrbVisibilityComponent::SetComponentTickInterval(float* TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickInterval"));

	UBloodOrbVisibilityComponent_SetComponentTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetComponentTickEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4C80              		 offset:2ec4c80                       

void UBloodOrbVisibilityComponent::SetComponentTickEnabled(bool* bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickEnabled"));

	UBloodOrbVisibilityComponent_SetComponentTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetAutoActivate
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewAutoActivate               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4BF0              		 offset:2ec4bf0                       

void UBloodOrbVisibilityComponent::SetAutoActivate(bool* bNewAutoActivate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetAutoActivate"));

	UBloodOrbVisibilityComponent_SetAutoActivate_Params params;
	params.bNewAutoActivate = bNewAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReset                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4B20              		 offset:2ec4b20                       

void UBloodOrbVisibilityComponent::SetActive(bool* bNewActive, bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetActive"));

	UBloodOrbVisibilityComponent_SetActive_Params params;
	params.bNewActive = bNewActive;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4A90              		 offset:2ec4a90                       

void UBloodOrbVisibilityComponent::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteComponent"));

	UBloodOrbVisibilityComponent_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4A00              		 offset:2ec4a00                       

void UBloodOrbVisibilityComponent::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteActor"));

	UBloodOrbVisibilityComponent_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBloodOrbVisibilityComponent::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveTick"));

	UBloodOrbVisibilityComponent_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBloodOrbVisibilityComponent::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveEndPlay"));

	UBloodOrbVisibilityComponent_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBloodOrbVisibilityComponent::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveBeginPlay"));

	UBloodOrbVisibilityComponent_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.OnRep_IsActive
// (Native, Public)
// FunctionAddress:0x00007FF6818B8B30              		 offset:27a8b30                       

void UBloodOrbVisibilityComponent::OnRep_IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.OnRep_IsActive"));

	UBloodOrbVisibilityComponent_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.K2_DestroyComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4900              		 offset:2ec4900                       

void UBloodOrbVisibilityComponent::K2_DestroyComponent(class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.K2_DestroyComponent"));

	UBloodOrbVisibilityComponent_K2_DestroyComponent_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.IsComponentTickEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD48D0              		 offset:2ec48d0                       

bool UBloodOrbVisibilityComponent::IsComponentTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsComponentTickEnabled"));

	UBloodOrbVisibilityComponent_IsComponentTickEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.IsBeingDestroyed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD48A0              		 offset:2ec48a0                       

bool UBloodOrbVisibilityComponent::IsBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsBeingDestroyed"));

	UBloodOrbVisibilityComponent_IsBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.IsActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4870              		 offset:2ec4870                       

bool UBloodOrbVisibilityComponent::IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsActive"));

	UBloodOrbVisibilityComponent_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.GetOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4850              		 offset:2ec4850                       

class AActor* UBloodOrbVisibilityComponent::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetOwner"));

	UBloodOrbVisibilityComponent_GetOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.GetComponentTickInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4820              		 offset:2ec4820                       

float UBloodOrbVisibilityComponent::GetComponentTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetComponentTickInterval"));

	UBloodOrbVisibilityComponent_GetComponentTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.Deactivate
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D260              		 offset:154d260                       

void UBloodOrbVisibilityComponent::Deactivate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Deactivate"));

	UBloodOrbVisibilityComponent_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ComponentHasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD45F0              		 offset:2ec45f0                       

bool UBloodOrbVisibilityComponent::ComponentHasTag(struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ComponentHasTag"));

	UBloodOrbVisibilityComponent_ComponentHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.AddTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FD44A0              		 offset:2ec44a0                       

void UBloodOrbVisibilityComponent::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteComponent"));

	UBloodOrbVisibilityComponent_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.AddTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4410              		 offset:2ec4410                       

void UBloodOrbVisibilityComponent::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteActor"));

	UBloodOrbVisibilityComponent_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.Activate
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bReset                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681800920              		 offset:26f0920                       

void UBloodOrbVisibilityComponent::Activate(bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Activate"));

	UBloodOrbVisibilityComponent_Activate_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStunByPallet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BCB70              		 offset:16acb70                       

bool UDemonModeComponent::ShouldLoseDemonModeOnStunByPallet()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStunByPallet"));

	UDemonModeComponent_ShouldLoseDemonModeOnStunByPallet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.OnPowerChargeFull
// (Final, Native, Private, Const)
// FunctionAddress:0x00007FF6807BCB50              		 offset:16acb50                       

void UDemonModeComponent::OnPowerChargeFull()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.OnPowerChargeFull"));

	UDemonModeComponent_OnPowerChargeFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.DemonModeComponent.OnPowerChargeEmpty
// (Final, Native, Private, Const)
// FunctionAddress:0x00007FF6807BCB30              		 offset:16acb30                       

void UDemonModeComponent::OnPowerChargeEmpty()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.OnPowerChargeEmpty"));

	UDemonModeComponent_OnPowerChargeEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.DemonModeComponent.OnIsPowerChanged
// (Final, Native, Private, Const)
// Parameters:
// bool*                          isInPower                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BCAA0              		 offset:16acaa0                       

void UDemonModeComponent::OnIsPowerChanged(bool* isInPower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.OnIsPowerChanged"));

	UDemonModeComponent_OnIsPowerChanged_Params params;
	params.isInPower = isInPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.DemonModeComponent.IsInDemonMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BCA70              		 offset:16aca70                       

bool UDemonModeComponent::IsInDemonMode()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.IsInDemonMode"));

	UDemonModeComponent_IsInDemonMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.GetDemonModeState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EDemonModeState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BCA40              		 offset:16aca40                       

EDemonModeState UDemonModeComponent::GetDemonModeState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.GetDemonModeState"));

	UDemonModeComponent_GetDemonModeState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.GetCurrentCharge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BCA10              		 offset:16aca10                       

float UDemonModeComponent::GetCurrentCharge()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.GetCurrentCharge"));

	UDemonModeComponent_GetCurrentCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.GetChargePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BC9E0              		 offset:16ac9e0                       

float UDemonModeComponent::GetChargePercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.GetChargePercent"));

	UDemonModeComponent_GetChargePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.DBD_DemonModeForever
// (Final, Exec, Native, Public)
// Parameters:
// bool*                          forever                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806A7310              		 offset:1597310                       

void UDemonModeComponent::DBD_DemonModeForever(bool* forever)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.DBD_DemonModeForever"));

	UDemonModeComponent_DBD_DemonModeForever_Params params;
	params.forever = forever;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.DemonModeComponent.CanStartDemonMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BC9B0              		 offset:16ac9b0                       

bool UDemonModeComponent::CanStartDemonMode()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.CanStartDemonMode"));

	UDemonModeComponent_CanStartDemonMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UInteractionDefinition** Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6807BC930              		 offset:16ac930                       

void UDemonModeComponent::Authority_SetDemonModeCooldownInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction"));

	UDemonModeComponent_Authority_SetDemonModeCooldownInteraction_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay
// (Final, Native, Private)
// FunctionAddress:0x00007FF6807BC910              		 offset:16ac910                       

void UDemonModeComponent::Authority_OnLevelReadyToPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay"));

	UDemonModeComponent_Authority_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.DemonModeComponent.Authority_OnChargeChanged
// (Final, Native, Private)
// Parameters:
// float*                         currentChargePercent           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BC890              		 offset:16ac890                       

void UDemonModeComponent::Authority_OnChargeChanged(float* currentChargePercent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Authority_OnChargeChanged"));

	UDemonModeComponent_Authority_OnChargeChanged_Params params;
	params.currentChargePercent = currentChargePercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.DemonModeComponent.Authority_AddCharge
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         ChargeAmount                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BC810              		 offset:16ac810                       

void UDemonModeComponent::Authority_AddCharge(float* ChargeAmount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Authority_AddCharge"));

	UDemonModeComponent_Authority_AddCharge_Params params;
	params.ChargeAmount = ChargeAmount;

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

bool UDemonModeCooldownInteraction::ShouldStartUpdateMontageDuringEnter(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter"));

	UDemonModeCooldownInteraction_ShouldStartUpdateMontageDuringEnter_Params params;
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

void UDemonModeCooldownInteraction::SetSecondaryActionInputType(EInputInteractionType* inputType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetSecondaryActionInputType"));

	UDemonModeCooldownInteraction_SetSecondaryActionInputType_Params params;
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

void UDemonModeCooldownInteraction::SetSecondaryActionButtonType(EButtonType* ButtonType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetSecondaryActionButtonType"));

	UDemonModeCooldownInteraction_SetSecondaryActionButtonType_Params params;
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

void UDemonModeCooldownInteraction::SetCancelButtonType(EButtonType* ButtonType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.SetCancelButtonType"));

	UDemonModeCooldownInteraction_SetCancelButtonType_Params params;
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

void UDemonModeCooldownInteraction::OnUpdateMontageStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnUpdateMontageStart"));

	UDemonModeCooldownInteraction_OnUpdateMontageStart_Params params;
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

void UDemonModeCooldownInteraction::OnInterruptorUpdateStart(class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptor, class ADBDPlayer** interruptee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart"));

	UDemonModeCooldownInteraction_OnInterruptorUpdateStart_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionUpdateTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick"));

	UDemonModeCooldownInteraction_OnInteractionUpdateTick_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionUpdateStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart"));

	UDemonModeCooldownInteraction_OnInteractionUpdateStart_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionUpdateMontageReachedMiddle(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle"));

	UDemonModeCooldownInteraction_OnInteractionUpdateMontageReachedMiddle_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionUpdateEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd"));

	UDemonModeCooldownInteraction_OnInteractionUpdateEnd_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionInterruptStarted(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted"));

	UDemonModeCooldownInteraction_OnInteractionInterruptStarted_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionInterruptStart(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart"));

	UDemonModeCooldownInteraction_OnInteractionInterruptStart_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionInterruptEnd(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd"));

	UDemonModeCooldownInteraction_OnInteractionInterruptEnd_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionInit(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionInit"));

	UDemonModeCooldownInteraction_OnInteractionInit_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionFinished(class ADBDPlayer** Player, bool* hasInteractionStarted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionFinished"));

	UDemonModeCooldownInteraction_OnInteractionFinished_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionExitTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitTick"));

	UDemonModeCooldownInteraction_OnInteractionExitTick_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionExitStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart"));

	UDemonModeCooldownInteraction_OnInteractionExitStart_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionExitEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd"));

	UDemonModeCooldownInteraction_OnInteractionExitEnd_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionEnterTick(class ADBDPlayer** Player, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick"));

	UDemonModeCooldownInteraction_OnInteractionEnterTick_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionEnterStart(class ADBDPlayer** Player, float* actualSnapTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart"));

	UDemonModeCooldownInteraction_OnInteractionEnterStart_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionEnterFailed(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed"));

	UDemonModeCooldownInteraction_OnInteractionEnterFailed_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionEnterEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd"));

	UDemonModeCooldownInteraction_OnInteractionEnterEnd_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionCancelled(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled"));

	UDemonModeCooldownInteraction_OnInteractionCancelled_Params params;
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

void UDemonModeCooldownInteraction::OnInteractionAnimNotifyEvent(struct FName* NotifyId, class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent"));

	UDemonModeCooldownInteraction_OnInteractionAnimNotifyEvent_Params params;
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

bool UDemonModeCooldownInteraction::IsSupportedCharacterType(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType"));

	UDemonModeCooldownInteraction_IsSupportedCharacterType_Params params;
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

bool UDemonModeCooldownInteraction::IsInterruptionPossible(class ADBDPlayer** interruptor, class ADBDPlayer** interruptee, class UInterruptionDefinition** interruption)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible"));

	UDemonModeCooldownInteraction_IsInterruptionPossible_Params params;
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

bool UDemonModeCooldownInteraction::IsInteractionUsingOffering(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionUsingOffering"));

	UDemonModeCooldownInteraction_IsInteractionUsingOffering_Params params;
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

bool UDemonModeCooldownInteraction::IsInteractionPossibleClient(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient"));

	UDemonModeCooldownInteraction_IsInteractionPossibleClient_Params params;
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

bool UDemonModeCooldownInteraction::IsInteractionPossibleBP(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP"));

	UDemonModeCooldownInteraction_IsInteractionPossibleBP_Params params;
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

bool UDemonModeCooldownInteraction::IsInteractionDone(class ADBDPlayer** Player, EInputInteractionType* InteractionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInteractionDone"));

	UDemonModeCooldownInteraction_IsInteractionDone_Params params;
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

bool UDemonModeCooldownInteraction::IsInputPressed(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsInputPressed"));

	UDemonModeCooldownInteraction_IsInputPressed_Params params;
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

bool UDemonModeCooldownInteraction::IsCharacterFacingInteractorDirection(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection"));

	UDemonModeCooldownInteraction_IsCharacterFacingInteractorDirection_Params params;
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

bool UDemonModeCooldownInteraction::IsCancelable(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.IsCancelable"));

	UDemonModeCooldownInteraction_IsCancelable_Params params;
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

struct FAnimationMontageDescriptor UDemonModeCooldownInteraction::GetUpdateMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateMontage"));

	UDemonModeCooldownInteraction_GetUpdateMontage_Params params;
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

bool UDemonModeCooldownInteraction::GetUpdateHighlightOpacityUsingCharge()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateHighlightOpacityUsingCharge"));

	UDemonModeCooldownInteraction_GetUpdateHighlightOpacityUsingCharge_Params params;

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

float UDemonModeCooldownInteraction::GetUpdateAnimationPlayRate(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate"));

	UDemonModeCooldownInteraction_GetUpdateAnimationPlayRate_Params params;
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

struct FMontagePlaybackDefinition UDemonModeCooldownInteraction::GetUpdateAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition"));

	UDemonModeCooldownInteraction_GetUpdateAnimationPlayBackDefinition_Params params;
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

float UDemonModeCooldownInteraction::GetSnapTimeAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart"));

	UDemonModeCooldownInteraction_GetSnapTimeAtStart_Params params;
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

float UDemonModeCooldownInteraction::GetSnapTime(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapTime"));

	UDemonModeCooldownInteraction_GetSnapTime_Params params;
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

struct FName UDemonModeCooldownInteraction::GetSnapSocketName(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapSocketName"));

	UDemonModeCooldownInteraction_GetSnapSocketName_Params params;
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

struct FVector UDemonModeCooldownInteraction::GetSnapPointPositionAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart"));

	UDemonModeCooldownInteraction_GetSnapPointPositionAtStart_Params params;
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

struct FVector UDemonModeCooldownInteraction::GetSnapPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition"));

	UDemonModeCooldownInteraction_GetSnapPointPosition_Params params;
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

float UDemonModeCooldownInteraction::GetSnapDistanceAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart"));

	UDemonModeCooldownInteraction_GetSnapDistanceAtStart_Params params;
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

float UDemonModeCooldownInteraction::GetSnapDistance(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSnapDistance"));

	UDemonModeCooldownInteraction_GetSnapDistance_Params params;
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

EInputInteractionType UDemonModeCooldownInteraction::GetSecondaryActionInputType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSecondaryActionInputType"));

	UDemonModeCooldownInteraction_GetSecondaryActionInputType_Params params;

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

EButtonType UDemonModeCooldownInteraction::GetSecondaryActionButtonType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetSecondaryActionButtonType"));

	UDemonModeCooldownInteraction_GetSecondaryActionButtonType_Params params;

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

struct FRotator UDemonModeCooldownInteraction::GetRotationToSnapPointAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPointAtStart"));

	UDemonModeCooldownInteraction_GetRotationToSnapPointAtStart_Params params;
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

struct FRotator UDemonModeCooldownInteraction::GetRotationToSnapPoint(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPoint"));

	UDemonModeCooldownInteraction_GetRotationToSnapPoint_Params params;
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

EPowerProgressBar UDemonModeCooldownInteraction::GetPowerProgressBar()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetPowerProgressBar"));

	UDemonModeCooldownInteraction_GetPowerProgressBar_Params params;

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

class ADBDPlayer* UDemonModeCooldownInteraction::GetPlayerDependancy(class ADBDPlayer** interactingPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy"));

	UDemonModeCooldownInteraction_GetPlayerDependancy_Params params;
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

TArray<class UInterruptionDefinition*> UDemonModeCooldownInteraction::GetInterruptionDefinitions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions"));

	UDemonModeCooldownInteraction_GetInterruptionDefinitions_Params params;

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

class UInteractor* UDemonModeCooldownInteraction::GetInteractor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractor"));

	UDemonModeCooldownInteraction_GetInteractor_Params params;

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

float UDemonModeCooldownInteraction::GetInteractionTimeMultiplier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionTimeMultiplier"));

	UDemonModeCooldownInteraction_GetInteractionTimeMultiplier_Params params;
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

float UDemonModeCooldownInteraction::GetInteractionTime(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionTime"));

	UDemonModeCooldownInteraction_GetInteractionTime_Params params;
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

struct FString UDemonModeCooldownInteraction::GetInteractionText(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionText"));

	UDemonModeCooldownInteraction_GetInteractionText_Params params;
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

float UDemonModeCooldownInteraction::GetInteractionExitTime(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime"));

	UDemonModeCooldownInteraction_GetInteractionExitTime_Params params;
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

struct FText UDemonModeCooldownInteraction::GetInteractionDescriptionText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText"));

	UDemonModeCooldownInteraction_GetInteractionDescriptionText_Params params;

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

class AInteractable* UDemonModeCooldownInteraction::GetInteractable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetInteractable"));

	UDemonModeCooldownInteraction_GetInteractable_Params params;

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

struct FVector UDemonModeCooldownInteraction::GetFocalPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition"));

	UDemonModeCooldownInteraction_GetFocalPointPosition_Params params;
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

struct FAnimationMontageDescriptor UDemonModeCooldownInteraction::GetExitMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetExitMontage"));

	UDemonModeCooldownInteraction_GetExitMontage_Params params;
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

struct FMontagePlaybackDefinition UDemonModeCooldownInteraction::GetExitAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition"));

	UDemonModeCooldownInteraction_GetExitAnimationPlayBackDefinition_Params params;
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

struct FAnimationMontageDescriptor UDemonModeCooldownInteraction::GetEnterMontage(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetEnterMontage"));

	UDemonModeCooldownInteraction_GetEnterMontage_Params params;
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

struct FMontagePlaybackDefinition UDemonModeCooldownInteraction::GetEnterAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition"));

	UDemonModeCooldownInteraction_GetEnterAnimationPlayBackDefinition_Params params;
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

float UDemonModeCooldownInteraction::GetChargePercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetChargePercent"));

	UDemonModeCooldownInteraction_GetChargePercent_Params params;

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

EButtonType UDemonModeCooldownInteraction::GetCancelButtonType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetCancelButtonType"));

	UDemonModeCooldownInteraction_GetCancelButtonType_Params params;

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

bool UDemonModeCooldownInteraction::GetAllowNavigation(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetAllowNavigation"));

	UDemonModeCooldownInteraction_GetAllowNavigation_Params params;
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

struct FVector UDemonModeCooldownInteraction::GetActualSnapPointPositionAtStart(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart"));

	UDemonModeCooldownInteraction_GetActualSnapPointPositionAtStart_Params params;
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

struct FVector UDemonModeCooldownInteraction::GetActualSnapPointPosition(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition"));

	UDemonModeCooldownInteraction_GetActualSnapPointPosition_Params params;
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

TArray<class AActor*> UDemonModeCooldownInteraction::GetActorsToIgnoreOverlap()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap"));

	UDemonModeCooldownInteraction_GetActorsToIgnoreOverlap_Params params;

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

float UDemonModeCooldownInteraction::GetActorHeightDelta(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta"));

	UDemonModeCooldownInteraction_GetActorHeightDelta_Params params;
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

bool UDemonModeCooldownInteraction::DoesPlayerHaveClearPath(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath"));

	UDemonModeCooldownInteraction_DoesPlayerHaveClearPath_Params params;
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

void UDemonModeCooldownInteraction::CompleteCharge(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CompleteCharge"));

	UDemonModeCooldownInteraction_CompleteCharge_Params params;
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

bool UDemonModeCooldownInteraction::CanOverrideInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction"));

	UDemonModeCooldownInteraction_CanOverrideInteraction_Params params;
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

float UDemonModeCooldownInteraction::CalculateSnapTimeForConstantSpeed(class ADBDPlayer** Player, float* Speed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantSpeed"));

	UDemonModeCooldownInteraction_CalculateSnapTimeForConstantSpeed_Params params;
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

float UDemonModeCooldownInteraction::CalculateSnapTimeForConstantMaxNormalMovementSpeed(class ADBDPlayer** Player, float* speedBoost)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantMaxNormalMovementSpeed"));

	UDemonModeCooldownInteraction_CalculateSnapTimeForConstantMaxNormalMovementSpeed_Params params;
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

void UDemonModeCooldownInteraction::AttachToZone(class UPrimitiveComponent** zone)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AttachToZone"));

	UDemonModeCooldownInteraction_AttachToZone_Params params;
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

void UDemonModeCooldownInteraction::AttachToInteractor(class UInteractor** Interactor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AttachToInteractor"));

	UDemonModeCooldownInteraction_AttachToInteractor_Params params;
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

bool UDemonModeCooldownInteraction::AtlantaItemUseToggleState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AtlantaItemUseToggleState"));

	UDemonModeCooldownInteraction_AtlantaItemUseToggleState_Params params;

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

struct FName UDemonModeCooldownInteraction::AtlantaGetPowerButtonImageID()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AtlantaGetPowerButtonImageID"));

	UDemonModeCooldownInteraction_AtlantaGetPowerButtonImageID_Params params;

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

void UDemonModeCooldownInteraction::AddMutuallyExclusiveInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction"));

	UDemonModeCooldownInteraction_AddMutuallyExclusiveInteraction_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ToggleActive
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D820              		 offset:154d820                       

void UDemonModeMenuComponent::ToggleActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ToggleActive"));

	UDemonModeMenuComponent_ToggleActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetTickGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETickingGroup>*    NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4E20              		 offset:2ec4e20                       

void UDemonModeMenuComponent::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickGroup"));

	UDemonModeMenuComponent_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetTickableWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4EA0              		 offset:2ec4ea0                       

void UDemonModeMenuComponent::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickableWhenPaused"));

	UDemonModeMenuComponent_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetIsReplicated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ShouldReplicate                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4D90              		 offset:2ec4d90                       

void UDemonModeMenuComponent::SetIsReplicated(bool* ShouldReplicate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetIsReplicated"));

	UDemonModeMenuComponent_SetIsReplicated_Params params;
	params.ShouldReplicate = ShouldReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetComponentTickInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4D10              		 offset:2ec4d10                       

void UDemonModeMenuComponent::SetComponentTickInterval(float* TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickInterval"));

	UDemonModeMenuComponent_SetComponentTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetComponentTickEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4C80              		 offset:2ec4c80                       

void UDemonModeMenuComponent::SetComponentTickEnabled(bool* bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickEnabled"));

	UDemonModeMenuComponent_SetComponentTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetAutoActivate
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewAutoActivate               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4BF0              		 offset:2ec4bf0                       

void UDemonModeMenuComponent::SetAutoActivate(bool* bNewAutoActivate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetAutoActivate"));

	UDemonModeMenuComponent_SetAutoActivate_Params params;
	params.bNewAutoActivate = bNewAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReset                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4B20              		 offset:2ec4b20                       

void UDemonModeMenuComponent::SetActive(bool* bNewActive, bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetActive"));

	UDemonModeMenuComponent_SetActive_Params params;
	params.bNewActive = bNewActive;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4A90              		 offset:2ec4a90                       

void UDemonModeMenuComponent::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteComponent"));

	UDemonModeMenuComponent_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4A00              		 offset:2ec4a00                       

void UDemonModeMenuComponent::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteActor"));

	UDemonModeMenuComponent_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UDemonModeMenuComponent::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveTick"));

	UDemonModeMenuComponent_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UDemonModeMenuComponent::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveEndPlay"));

	UDemonModeMenuComponent_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UDemonModeMenuComponent::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveBeginPlay"));

	UDemonModeMenuComponent_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.OnRep_IsActive
// (Native, Public)
// FunctionAddress:0x00007FF6818B8B30              		 offset:27a8b30                       

void UDemonModeMenuComponent::OnRep_IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.OnRep_IsActive"));

	UDemonModeMenuComponent_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.K2_DestroyComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4900              		 offset:2ec4900                       

void UDemonModeMenuComponent::K2_DestroyComponent(class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.K2_DestroyComponent"));

	UDemonModeMenuComponent_K2_DestroyComponent_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.IsComponentTickEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD48D0              		 offset:2ec48d0                       

bool UDemonModeMenuComponent::IsComponentTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsComponentTickEnabled"));

	UDemonModeMenuComponent_IsComponentTickEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.IsBeingDestroyed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD48A0              		 offset:2ec48a0                       

bool UDemonModeMenuComponent::IsBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsBeingDestroyed"));

	UDemonModeMenuComponent_IsBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.IsActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4870              		 offset:2ec4870                       

bool UDemonModeMenuComponent::IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsActive"));

	UDemonModeMenuComponent_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.GetOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4850              		 offset:2ec4850                       

class AActor* UDemonModeMenuComponent::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetOwner"));

	UDemonModeMenuComponent_GetOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.GetComponentTickInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4820              		 offset:2ec4820                       

float UDemonModeMenuComponent::GetComponentTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetComponentTickInterval"));

	UDemonModeMenuComponent_GetComponentTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.Deactivate
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D260              		 offset:154d260                       

void UDemonModeMenuComponent::Deactivate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Deactivate"));

	UDemonModeMenuComponent_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ComponentHasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD45F0              		 offset:2ec45f0                       

bool UDemonModeMenuComponent::ComponentHasTag(struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ComponentHasTag"));

	UDemonModeMenuComponent_ComponentHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.AddTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FD44A0              		 offset:2ec44a0                       

void UDemonModeMenuComponent::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteComponent"));

	UDemonModeMenuComponent_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.AddTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4410              		 offset:2ec4410                       

void UDemonModeMenuComponent::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteActor"));

	UDemonModeMenuComponent_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.Activate
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bReset                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681800920              		 offset:26f0920                       

void UDemonModeMenuComponent::Activate(bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Activate"));

	UDemonModeMenuComponent_Activate_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
// (Final, Native, Private)
// FunctionAddress:0x00007FF680102FA0              		 offset:ff2fa0                        

void UIsPlayerAbsorbingBloodOrbsCondition::UpdateIsTrue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue"));

	UIsPlayerAbsorbingBloodOrbsCondition_UpdateIsTrue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer*  interactionSemantics           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6800FC950              		 offset:fec950                        

void UIsPlayerAbsorbingBloodOrbsCondition::SetInteractionSemantics(struct FGameplayTagContainer* interactionSemantics)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics"));

	UIsPlayerAbsorbingBloodOrbsCondition_SetInteractionSemantics_Params params;
	params.interactionSemantics = interactionSemantics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ToggleActive
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D820              		 offset:154d820                       

void UOniAttackPicker::ToggleActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ToggleActive"));

	UOniAttackPicker_ToggleActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetTickGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETickingGroup>*    NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4E20              		 offset:2ec4e20                       

void UOniAttackPicker::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickGroup"));

	UOniAttackPicker_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetTickableWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4EA0              		 offset:2ec4ea0                       

void UOniAttackPicker::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickableWhenPaused"));

	UOniAttackPicker_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetIsReplicated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ShouldReplicate                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4D90              		 offset:2ec4d90                       

void UOniAttackPicker::SetIsReplicated(bool* ShouldReplicate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetIsReplicated"));

	UOniAttackPicker_SetIsReplicated_Params params;
	params.ShouldReplicate = ShouldReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetComponentTickInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4D10              		 offset:2ec4d10                       

void UOniAttackPicker::SetComponentTickInterval(float* TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickInterval"));

	UOniAttackPicker_SetComponentTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetComponentTickEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4C80              		 offset:2ec4c80                       

void UOniAttackPicker::SetComponentTickEnabled(bool* bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickEnabled"));

	UOniAttackPicker_SetComponentTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetAutoActivate
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewAutoActivate               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4BF0              		 offset:2ec4bf0                       

void UOniAttackPicker::SetAutoActivate(bool* bNewAutoActivate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetAutoActivate"));

	UOniAttackPicker_SetAutoActivate_Params params;
	params.bNewAutoActivate = bNewAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReset                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4B20              		 offset:2ec4b20                       

void UOniAttackPicker::SetActive(bool* bNewActive, bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetActive"));

	UOniAttackPicker_SetActive_Params params;
	params.bNewActive = bNewActive;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4A90              		 offset:2ec4a90                       

void UOniAttackPicker::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteComponent"));

	UOniAttackPicker_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4A00              		 offset:2ec4a00                       

void UOniAttackPicker::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteActor"));

	UOniAttackPicker_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UOniAttackPicker::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveTick"));

	UOniAttackPicker_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UOniAttackPicker::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveEndPlay"));

	UOniAttackPicker_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UOniAttackPicker::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveBeginPlay"));

	UOniAttackPicker_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.OnRep_IsActive
// (Native, Public)
// FunctionAddress:0x00007FF6818B8B30              		 offset:27a8b30                       

void UOniAttackPicker::OnRep_IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.OnRep_IsActive"));

	UOniAttackPicker_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.K2_DestroyComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4900              		 offset:2ec4900                       

void UOniAttackPicker::K2_DestroyComponent(class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.K2_DestroyComponent"));

	UOniAttackPicker_K2_DestroyComponent_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.IsComponentTickEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD48D0              		 offset:2ec48d0                       

bool UOniAttackPicker::IsComponentTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsComponentTickEnabled"));

	UOniAttackPicker_IsComponentTickEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.IsBeingDestroyed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD48A0              		 offset:2ec48a0                       

bool UOniAttackPicker::IsBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsBeingDestroyed"));

	UOniAttackPicker_IsBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.IsActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4870              		 offset:2ec4870                       

bool UOniAttackPicker::IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsActive"));

	UOniAttackPicker_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.GetOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4850              		 offset:2ec4850                       

class AActor* UOniAttackPicker::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetOwner"));

	UOniAttackPicker_GetOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.GetComponentTickInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4820              		 offset:2ec4820                       

float UOniAttackPicker::GetComponentTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetComponentTickInterval"));

	UOniAttackPicker_GetComponentTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.Deactivate
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D260              		 offset:154d260                       

void UOniAttackPicker::Deactivate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Deactivate"));

	UOniAttackPicker_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ComponentHasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD45F0              		 offset:2ec45f0                       

bool UOniAttackPicker::ComponentHasTag(struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ComponentHasTag"));

	UOniAttackPicker_ComponentHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.AddTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FD44A0              		 offset:2ec44a0                       

void UOniAttackPicker::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteComponent"));

	UOniAttackPicker_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.AddTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD4410              		 offset:2ec4410                       

void UOniAttackPicker::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteActor"));

	UOniAttackPicker_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.Activate
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bReset                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681800920              		 offset:26f0920                       

void UOniAttackPicker::Activate(bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Activate"));

	UOniAttackPicker_Activate_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode
// (Final, Native, Private)
// Parameters:
// bool*                          IsInDemonMode                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BD400              		 offset:16ad400                       

void UOniCustomizationItemAnimInstance::SetIsInDemonMode(bool* IsInDemonMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode"));

	UOniCustomizationItemAnimInstance_SetIsInDemonMode_Params params;
	params.IsInDemonMode = IsInDemonMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.OniDashInteraction.SetPlayerOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BD880              		 offset:16ad880                       

void UOniDashInteraction::SetPlayerOwner(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.SetPlayerOwner"));

	UOniDashInteraction_SetPlayerOwner_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.OniDashInteraction.OnLevelReadyToPlay
// (Final, Native, Private)
// FunctionAddress:0x00007FF6807BD860              		 offset:16ad860                       

void UOniDashInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.OnLevelReadyToPlay"));

	UOniDashInteraction_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.OniDashInteraction.OnDashEnd
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UOniDashInteraction::OnDashEnd(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.OnDashEnd"));

	UOniDashInteraction_OnDashEnd_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.OniDashInteraction.OnDashBegin
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UOniDashInteraction::OnDashBegin(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.OnDashBegin"));

	UOniDashInteraction_OnDashBegin_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.OniDashInteraction.OnChargeEnd
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          chargeCompleted                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UOniDashInteraction::OnChargeEnd(class ADBDPlayer** Player, bool* chargeCompleted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.OnChargeEnd"));

	UOniDashInteraction_OnChargeEnd_Params params;
	params.Player = Player;
	params.chargeCompleted = chargeCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.OniDashInteraction.OnChargeBegin
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UOniDashInteraction::OnChargeBegin(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.OnChargeBegin"));

	UOniDashInteraction_OnChargeBegin_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin
// (Final, Native, Private)
// Parameters:
// class AActor**                 overlappingActor               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ABloodOrb**              BloodOrb                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BDC90              		 offset:16adc90                       

void URenjirosBloodyGlove::Authority_OnBloodOrbOverlapBegin(class AActor** overlappingActor, class ABloodOrb** BloodOrb)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin"));

	URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Params params;
	params.overlappingActor = overlappingActor;
	params.BloodOrb = BloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.StartDemonModeInteraction.SetPlayerOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADBDPlayer**             Owner                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BDF00              		 offset:16adf00                       

void UStartDemonModeInteraction::SetPlayerOwner(class ADBDPlayer** Owner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.StartDemonModeInteraction.SetPlayerOwner"));

	UStartDemonModeInteraction_SetPlayerOwner_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay
// (Final, Native, Private)
// FunctionAddress:0x00007FF6807BDEE0              		 offset:16adee0                       

void UStartDemonModeInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay"));

	UStartDemonModeInteraction_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
