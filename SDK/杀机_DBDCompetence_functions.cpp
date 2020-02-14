// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_DBDCompetence_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA80              		 offset:165aa80                       

bool UAbilityStealthUndetectableEffect::ShouldDisplayStatusEffectIcon()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon"));

	UAbilityStealthUndetectableEffect_ShouldDisplayStatusEffectIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA00              		 offset:165aa00                       

void UAbilityStealthUndetectableEffect::SetStatusEffectIconPercentage(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage"));

	UAbilityStealthUndetectableEffect_SetStatusEffectIconPercentage_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.SetShouldDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          On                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076A970              		 offset:165a970                       

void UAbilityStealthUndetectableEffect::SetShouldDisplay(bool* On)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetShouldDisplay"));

	UAbilityStealthUndetectableEffect_SetShouldDisplay_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          currentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680736720              		 offset:1626720                       

void UAbilityStealthUndetectableEffect::OnShouldDisplayChanged(bool* currentValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged"));

	UAbilityStealthUndetectableEffect_OnShouldDisplayChanged_Params params;
	params.currentValue = currentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
// (Final, Native, Protected)
// FunctionAddress:0x00007FF68076A210              		 offset:165a210                       

void UAbilityStealthUndetectableEffect::OnRep_ShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay"));

	UAbilityStealthUndetectableEffect_OnRep_ShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769860              		 offset:1659860                       

void UAbilityStealthUndetectableEffect::Multicast_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime"));

	UAbilityStealthUndetectableEffect_Multicast_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FName*                  statusEffectId                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             originatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         customParam                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayModifierContainer** originatingEffect              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          shouldDisplay                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769680              		 offset:1659680                       

void UAbilityStealthUndetectableEffect::Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect"));

	UAbilityStealthUndetectableEffect_Multicast_InitializeStatusEffect_Params params;
	params.statusEffectId = statusEffectId;
	params.originatingPlayer = originatingPlayer;
	params.customParam = customParam;
	params.originatingEffect = originatingEffect;
	params.shouldDisplay = shouldDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769650              		 offset:1659650                       

bool UAbilityStealthUndetectableEffect::IsOriginatorHooked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorHooked"));

	UAbilityStealthUndetectableEffect_IsOriginatorHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769620              		 offset:1659620                       

bool UAbilityStealthUndetectableEffect::IsOriginatorAlive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorAlive"));

	UAbilityStealthUndetectableEffect_IsOriginatorAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         AdditiveRangeModifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769590              		 offset:1659590                       

bool UAbilityStealthUndetectableEffect::IsKillerInOriginatorRange(float* AdditiveRangeModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange"));

	UAbilityStealthUndetectableEffect_IsKillerInOriginatorRange_Params params;
	params.AdditiveRangeModifier = AdditiveRangeModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769560              		 offset:1659560                       

bool UAbilityStealthUndetectableEffect::IsInOriginatorRange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsInOriginatorRange"));

	UAbilityStealthUndetectableEffect_IsInOriginatorRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.InitializeLifetime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807694E0              		 offset:16594e0                       

void UAbilityStealthUndetectableEffect::InitializeLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.InitializeLifetime"));

	UAbilityStealthUndetectableEffect_InitializeLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807693C0              		 offset:16593c0                       

float UAbilityStealthUndetectableEffect::GetStatusEffectCooldownRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate"));

	UAbilityStealthUndetectableEffect_GetStatusEffectCooldownRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetShouldDisplay
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769390              		 offset:1659390                       

bool UAbilityStealthUndetectableEffect::GetShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetShouldDisplay"));

	UAbilityStealthUndetectableEffect_GetShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769370              		 offset:1659370                       

class ADBDPlayer* UAbilityStealthUndetectableEffect::GetOriginatingPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetOriginatingPlayer"));

	UAbilityStealthUndetectableEffect_GetOriginatingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769330              		 offset:1659330                       

float UAbilityStealthUndetectableEffect::GetLifetimeDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetLifetimeDuration"));

	UAbilityStealthUndetectableEffect_GetLifetimeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float*                         percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LevelToDisplay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807691A0              		 offset:16591a0                       

void UAbilityStealthUndetectableEffect::FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent"));

	UAbilityStealthUndetectableEffect_FireActiveStatusEffectEvent_Params params;
	params.percentage = percentage;
	params.LevelToDisplay = LevelToDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF680769180              		 offset:1659180                       

void UAbilityStealthUndetectableEffect::BroadcastOriginatorGameEventNotification()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification"));

	UAbilityStealthUndetectableEffect_BroadcastOriginatorGameEventNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayNotificationData* notificationData               (Parm)
// bool*                          addToHistory                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768FD0              		 offset:1658fd0                       

void UAbilityStealthUndetectableEffect::BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification"));

	UAbilityStealthUndetectableEffect_BroadcastGameEventNotification_Params params;
	params.notificationData = notificationData;
	params.addToHistory = addToHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768F50              		 offset:1658f50                       

void UAbilityStealthUndetectableEffect::Authority_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime"));

	UAbilityStealthUndetectableEffect_Authority_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680768F30              		 offset:1658f30                       

void UAbilityStealthUndetectableEffect::Authority_RemoveSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_RemoveSelf"));

	UAbilityStealthUndetectableEffect_Authority_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_EndSelf
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680743940              		 offset:1633940                       

void UAbilityStealthUndetectableEffect::Authority_EndSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_EndSelf"));

	UAbilityStealthUndetectableEffect_Authority_EndSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UAllHexTotemsAreActive::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UAllHexTotemsAreActive_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UAllHexTotemsAreActive::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UAllHexTotemsAreActive_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UAllHexTotemsAreActive::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UAllHexTotemsAreActive_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UAllHexTotemsAreActive::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UAllHexTotemsAreActive_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UAllHexTotemsAreActive::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UAllHexTotemsAreActive_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FGameplayTag*           GameplayTag                    (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6800FB250              		 offset:feb250                        

void UAnyMeansNecessary::Authority_OnPalletPullUpStarted(struct FGameplayTag* GameplayTag, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted"));

	UAnyMeansNecessary_Authority_OnPalletPullUpStarted_Params params;
	params.GameplayTag = GameplayTag;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FGameplayTag*           GameplayTag                    (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6800FB360              		 offset:feb360                        

void UAnyMeansNecessary::Authority_OnPalletPulledUp(struct FGameplayTag* GameplayTag, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp"));

	UAnyMeansNecessary_Authority_OnPalletPulledUp_Params params;
	params.GameplayTag = GameplayTag;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved
// (Final, Native, Protected)
// Parameters:
// class ACamperPlayer**          Survivor                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FC720              		 offset:fec720                        

void UAnySurvivorHasObjectState::OnSurvivorRemoved(class ACamperPlayer** Survivor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved"));

	UAnySurvivorHasObjectState_OnSurvivorRemoved_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded
// (Final, Native, Protected)
// Parameters:
// class ACamperPlayer**          Survivor                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FC6A0              		 offset:fec6a0                        

void UAnySurvivorHasObjectState::OnSurvivorAdded(class ACamperPlayer** Survivor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded"));

	UAnySurvivorHasObjectState_OnSurvivorAdded_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA80              		 offset:165aa80                       

bool UBabysitterEffect::ShouldDisplayStatusEffectIcon()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon"));

	UBabysitterEffect_ShouldDisplayStatusEffectIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA00              		 offset:165aa00                       

void UBabysitterEffect::SetStatusEffectIconPercentage(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage"));

	UBabysitterEffect_SetStatusEffectIconPercentage_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.SetShouldDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          On                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076A970              		 offset:165a970                       

void UBabysitterEffect::SetShouldDisplay(bool* On)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetShouldDisplay"));

	UBabysitterEffect_SetShouldDisplay_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          currentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680736720              		 offset:1626720                       

void UBabysitterEffect::OnShouldDisplayChanged(bool* currentValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged"));

	UBabysitterEffect_OnShouldDisplayChanged_Params params;
	params.currentValue = currentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
// (Final, Native, Protected)
// FunctionAddress:0x00007FF68076A210              		 offset:165a210                       

void UBabysitterEffect::OnRep_ShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay"));

	UBabysitterEffect_OnRep_ShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769860              		 offset:1659860                       

void UBabysitterEffect::Multicast_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime"));

	UBabysitterEffect_Multicast_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FName*                  statusEffectId                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             originatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         customParam                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayModifierContainer** originatingEffect              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          shouldDisplay                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769680              		 offset:1659680                       

void UBabysitterEffect::Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect"));

	UBabysitterEffect_Multicast_InitializeStatusEffect_Params params;
	params.statusEffectId = statusEffectId;
	params.originatingPlayer = originatingPlayer;
	params.customParam = customParam;
	params.originatingEffect = originatingEffect;
	params.shouldDisplay = shouldDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769650              		 offset:1659650                       

bool UBabysitterEffect::IsOriginatorHooked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorHooked"));

	UBabysitterEffect_IsOriginatorHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769620              		 offset:1659620                       

bool UBabysitterEffect::IsOriginatorAlive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorAlive"));

	UBabysitterEffect_IsOriginatorAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         AdditiveRangeModifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769590              		 offset:1659590                       

bool UBabysitterEffect::IsKillerInOriginatorRange(float* AdditiveRangeModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange"));

	UBabysitterEffect_IsKillerInOriginatorRange_Params params;
	params.AdditiveRangeModifier = AdditiveRangeModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769560              		 offset:1659560                       

bool UBabysitterEffect::IsInOriginatorRange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsInOriginatorRange"));

	UBabysitterEffect_IsInOriginatorRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.InitializeLifetime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807694E0              		 offset:16594e0                       

void UBabysitterEffect::InitializeLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.InitializeLifetime"));

	UBabysitterEffect_InitializeLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807693C0              		 offset:16593c0                       

float UBabysitterEffect::GetStatusEffectCooldownRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate"));

	UBabysitterEffect_GetStatusEffectCooldownRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetShouldDisplay
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769390              		 offset:1659390                       

bool UBabysitterEffect::GetShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetShouldDisplay"));

	UBabysitterEffect_GetShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769370              		 offset:1659370                       

class ADBDPlayer* UBabysitterEffect::GetOriginatingPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetOriginatingPlayer"));

	UBabysitterEffect_GetOriginatingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769330              		 offset:1659330                       

float UBabysitterEffect::GetLifetimeDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetLifetimeDuration"));

	UBabysitterEffect_GetLifetimeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float*                         percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LevelToDisplay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807691A0              		 offset:16591a0                       

void UBabysitterEffect::FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent"));

	UBabysitterEffect_FireActiveStatusEffectEvent_Params params;
	params.percentage = percentage;
	params.LevelToDisplay = LevelToDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF680769180              		 offset:1659180                       

void UBabysitterEffect::BroadcastOriginatorGameEventNotification()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification"));

	UBabysitterEffect_BroadcastOriginatorGameEventNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayNotificationData* notificationData               (Parm)
// bool*                          addToHistory                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768FD0              		 offset:1658fd0                       

void UBabysitterEffect::BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification"));

	UBabysitterEffect_BroadcastGameEventNotification_Params params;
	params.notificationData = notificationData;
	params.addToHistory = addToHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768F50              		 offset:1658f50                       

void UBabysitterEffect::Authority_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime"));

	UBabysitterEffect_Authority_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680768F30              		 offset:1658f30                       

void UBabysitterEffect::Authority_RemoveSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_RemoveSelf"));

	UBabysitterEffect_Authority_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_EndSelf
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680743940              		 offset:1633940                       

void UBabysitterEffect::Authority_EndSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_EndSelf"));

	UBabysitterEffect_Authority_EndSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UBaseIsPerkUsableCondition::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UBaseIsPerkUsableCondition_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UBaseIsPerkUsableCondition::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UBaseIsPerkUsableCondition_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UBaseIsPerkUsableCondition::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UBaseIsPerkUsableCondition_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UBaseIsPerkUsableCondition::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UBaseIsPerkUsableCondition_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UBaseIsPerkUsableCondition::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UBaseIsPerkUsableCondition_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
// (Final, Native, Private)
// FunctionAddress:0x00007FF6800FCA90              		 offset:feca90                        

void UBaseIsPlayerPerformingInteraction::UpdateIsTrue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue"));

	UBaseIsPlayerPerformingInteraction_UpdateIsTrue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer*  interactionSemantics           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6800FC950              		 offset:fec950                        

void UBaseIsPlayerPerformingInteraction::SetInteractionSemantics(struct FGameplayTagContainer* interactionSemantics)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics"));

	UBaseIsPlayerPerformingInteraction_SetInteractionSemantics_Params params;
	params.interactionSemantics = interactionSemantics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FGameplayTag*           GameplayTag                    (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6800FC590              		 offset:fec590                        

void UBetterTogether::OnStartedGeneratorRepair(struct FGameplayTag* GameplayTag, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair"));

	UBetterTogether_OnStartedGeneratorRepair_Params params;
	params.GameplayTag = GameplayTag;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.Breakout.OnSlasherSet
// (Final, Native, Private)
// Parameters:
// class ASlasherPlayer**         Slasher                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FC510              		 offset:fec510                        

void UBreakout::OnSlasherSet(class ASlasherPlayer** Slasher)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.Breakout.OnSlasherSet"));

	UBreakout_OnSlasherSet_Params params;
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.Breakout.OnRep_IsPerkActive
// (Final, Native, Private)
// FunctionAddress:0x00007FF6800FC370              		 offset:fec370                        

void UBreakout::OnRep_IsPerkActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.Breakout.OnRep_IsPerkActive"));

	UBreakout_OnRep_IsPerkActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.Breakout.Authority_OnRangeChanged
// (Final, Native, Private)
// Parameters:
// bool*                          InRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB4F0              		 offset:feb4f0                        

void UBreakout::Authority_OnRangeChanged(bool* InRange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.Breakout.Authority_OnRangeChanged"));

	UBreakout_Authority_OnRangeChanged_Params params;
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect
// (Final, Native, Private)
// Parameters:
// class ACamperPlayer**          Survivor                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FAF60              		 offset:feaf60                        

void UBreakout::Authority_ImposeWiggleStatusEffect(class ACamperPlayer** Survivor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect"));

	UBreakout_Authority_ImposeWiggleStatusEffect_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.Camaraderie.Authority_EnablePerk
// (Final, Native, Private)
// FunctionAddress:0x00007FF6800FAF40              		 offset:feaf40                        

void UCamaraderie::Authority_EnablePerk()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.Camaraderie.Authority_EnablePerk"));

	UCamaraderie_Authority_EnablePerk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.CorruptIntervention.Server_ActivatePerk
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// FunctionAddress:0x00007FF6800FC900              		 offset:fec900                        

void UCorruptIntervention::Server_ActivatePerk()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.CorruptIntervention.Server_ActivatePerk"));

	UCorruptIntervention_Server_ActivatePerk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted
// (Final, Native, Private)
// FunctionAddress:0x00007FF6800FBB80              		 offset:febb80                        

void UCorruptIntervention::Local_OnIntroCompleted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted"));

	UCorruptIntervention_Local_OnIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded
// (Final, Native, Private)
// FunctionAddress:0x00007FF6800FC7A0              		 offset:fec7a0                        

void UDecisiveStrike::OnUnhookedTimerEnded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded"));

	UDecisiveStrike_OnUnhookedTimerEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.DecisiveStrike.OnSkillCheck
// (Final, Native, Private)
// Parameters:
// bool*                          hadInput                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Bonus                          (Parm, ZeroConstructor, IsPlainOldData)
// ESkillCheckCustomType*         Type                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FC3B0              		 offset:fec3b0                        

void UDecisiveStrike::OnSkillCheck(bool* hadInput, bool* success, bool* Bonus, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.DecisiveStrike.OnSkillCheck"));

	UDecisiveStrike_OnSkillCheck_Params params;
	params.hadInput = hadInput;
	params.success = success;
	params.Bonus = Bonus;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted
// (Final, Native, Private)
// FunctionAddress:0x00007FF6800FC350              		 offset:fec350                        

void UDecisiveStrike::OnRep_HasBeenAttempted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted"));

	UDecisiveStrike_OnRep_HasBeenAttempted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.DecisiveStrike.OnPickUpEnded
// (Final, Native, Private)
// Parameters:
// class ADBDPlayer**             picker                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FC2B0              		 offset:fec2b0                        

void UDecisiveStrike::OnPickUpEnded(class ADBDPlayer** picker)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.DecisiveStrike.OnPickUpEnded"));

	UDecisiveStrike_OnPickUpEnded_Params params;
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp
// (Final, Native, Private)
// Parameters:
// class ADBDPlayer**             picker                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FBF00              		 offset:febf00                        

void UDecisiveStrike::OnOwnerPickedUp(class ADBDPlayer** picker)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp"));

	UDecisiveStrike_OnOwnerPickedUp_Params params;
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA80              		 offset:165aa80                       

bool UDelayedHealEffect::ShouldDisplayStatusEffectIcon()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon"));

	UDelayedHealEffect_ShouldDisplayStatusEffectIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA00              		 offset:165aa00                       

void UDelayedHealEffect::SetStatusEffectIconPercentage(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage"));

	UDelayedHealEffect_SetStatusEffectIconPercentage_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.SetShouldDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          On                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076A970              		 offset:165a970                       

void UDelayedHealEffect::SetShouldDisplay(bool* On)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetShouldDisplay"));

	UDelayedHealEffect_SetShouldDisplay_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          currentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680736720              		 offset:1626720                       

void UDelayedHealEffect::OnShouldDisplayChanged(bool* currentValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged"));

	UDelayedHealEffect_OnShouldDisplayChanged_Params params;
	params.currentValue = currentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
// (Final, Native, Protected)
// FunctionAddress:0x00007FF68076A210              		 offset:165a210                       

void UDelayedHealEffect::OnRep_ShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay"));

	UDelayedHealEffect_OnRep_ShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769860              		 offset:1659860                       

void UDelayedHealEffect::Multicast_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime"));

	UDelayedHealEffect_Multicast_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FName*                  statusEffectId                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             originatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         customParam                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayModifierContainer** originatingEffect              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          shouldDisplay                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769680              		 offset:1659680                       

void UDelayedHealEffect::Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect"));

	UDelayedHealEffect_Multicast_InitializeStatusEffect_Params params;
	params.statusEffectId = statusEffectId;
	params.originatingPlayer = originatingPlayer;
	params.customParam = customParam;
	params.originatingEffect = originatingEffect;
	params.shouldDisplay = shouldDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769650              		 offset:1659650                       

bool UDelayedHealEffect::IsOriginatorHooked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorHooked"));

	UDelayedHealEffect_IsOriginatorHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769620              		 offset:1659620                       

bool UDelayedHealEffect::IsOriginatorAlive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorAlive"));

	UDelayedHealEffect_IsOriginatorAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         AdditiveRangeModifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769590              		 offset:1659590                       

bool UDelayedHealEffect::IsKillerInOriginatorRange(float* AdditiveRangeModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange"));

	UDelayedHealEffect_IsKillerInOriginatorRange_Params params;
	params.AdditiveRangeModifier = AdditiveRangeModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769560              		 offset:1659560                       

bool UDelayedHealEffect::IsInOriginatorRange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsInOriginatorRange"));

	UDelayedHealEffect_IsInOriginatorRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.InitializeLifetime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807694E0              		 offset:16594e0                       

void UDelayedHealEffect::InitializeLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.InitializeLifetime"));

	UDelayedHealEffect_InitializeLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807693C0              		 offset:16593c0                       

float UDelayedHealEffect::GetStatusEffectCooldownRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate"));

	UDelayedHealEffect_GetStatusEffectCooldownRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetShouldDisplay
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769390              		 offset:1659390                       

bool UDelayedHealEffect::GetShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetShouldDisplay"));

	UDelayedHealEffect_GetShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769370              		 offset:1659370                       

class ADBDPlayer* UDelayedHealEffect::GetOriginatingPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetOriginatingPlayer"));

	UDelayedHealEffect_GetOriginatingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769330              		 offset:1659330                       

float UDelayedHealEffect::GetLifetimeDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetLifetimeDuration"));

	UDelayedHealEffect_GetLifetimeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float*                         percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LevelToDisplay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807691A0              		 offset:16591a0                       

void UDelayedHealEffect::FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent"));

	UDelayedHealEffect_FireActiveStatusEffectEvent_Params params;
	params.percentage = percentage;
	params.LevelToDisplay = LevelToDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF680769180              		 offset:1659180                       

void UDelayedHealEffect::BroadcastOriginatorGameEventNotification()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification"));

	UDelayedHealEffect_BroadcastOriginatorGameEventNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayNotificationData* notificationData               (Parm)
// bool*                          addToHistory                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768FD0              		 offset:1658fd0                       

void UDelayedHealEffect::BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification"));

	UDelayedHealEffect_BroadcastGameEventNotification_Params params;
	params.notificationData = notificationData;
	params.addToHistory = addToHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768F50              		 offset:1658f50                       

void UDelayedHealEffect::Authority_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime"));

	UDelayedHealEffect_Authority_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680768F30              		 offset:1658f30                       

void UDelayedHealEffect::Authority_RemoveSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_RemoveSelf"));

	UDelayedHealEffect_Authority_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_EndSelf
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680743940              		 offset:1633940                       

void UDelayedHealEffect::Authority_EndSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_EndSelf"));

	UDelayedHealEffect_Authority_EndSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive
// (Final, Native, Private)
// FunctionAddress:0x00007FF6800FC330              		 offset:fec330                        

void UDistortion::OnRep_AuraBlockIsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive"));

	UDistortion_OnRep_AuraBlockIsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.Distortion.AuraBlockCanBeActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800FAEC0              		 offset:feaec0                        

bool UDistortion::AuraBlockCanBeActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.Distortion.AuraBlockCanBeActive"));

	UDistortion_AuraBlockCanBeActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.DoesPerkHaveToken.SetPerk
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPerk**                  Perk                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6800FCA10              		 offset:feca10                        

void UDoesPerkHaveToken::SetPerk(class UPerk** Perk)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.DoesPerkHaveToken.SetPerk"));

	UDoesPerkHaveToken_SetPerk_Params params;
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk
// (Final, Native, Private)
// FunctionAddress:0x00007FF6800FC390              		 offset:fec390                        

void UDoesPerkHaveToken::OnRep_Perk()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk"));

	UDoesPerkHaveToken_OnRep_Perk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.DyingLight.OnObsessionChanged
// (Final, Native, Private)
// Parameters:
// class ACamperPlayer**          newObsession                   (Parm, ZeroConstructor, IsPlainOldData)
// class ACamperPlayer**          previousObsession              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FBE40              		 offset:febe40                        

void UDyingLight::OnObsessionChanged(class ACamperPlayer** newObsession, class ACamperPlayer** previousObsession)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.DyingLight.OnObsessionChanged"));

	UDyingLight_OnObsessionChanged_Params params;
	params.newObsession = newObsession;
	params.previousObsession = previousObsession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA80              		 offset:165aa80                       

bool UExposedEffect::ShouldDisplayStatusEffectIcon()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon"));

	UExposedEffect_ShouldDisplayStatusEffectIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA00              		 offset:165aa00                       

void UExposedEffect::SetStatusEffectIconPercentage(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage"));

	UExposedEffect_SetStatusEffectIconPercentage_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.SetShouldDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          On                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076A970              		 offset:165a970                       

void UExposedEffect::SetShouldDisplay(bool* On)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetShouldDisplay"));

	UExposedEffect_SetShouldDisplay_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          currentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680736720              		 offset:1626720                       

void UExposedEffect::OnShouldDisplayChanged(bool* currentValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged"));

	UExposedEffect_OnShouldDisplayChanged_Params params;
	params.currentValue = currentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
// (Final, Native, Protected)
// FunctionAddress:0x00007FF68076A210              		 offset:165a210                       

void UExposedEffect::OnRep_ShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay"));

	UExposedEffect_OnRep_ShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769860              		 offset:1659860                       

void UExposedEffect::Multicast_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime"));

	UExposedEffect_Multicast_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FName*                  statusEffectId                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             originatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         customParam                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayModifierContainer** originatingEffect              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          shouldDisplay                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769680              		 offset:1659680                       

void UExposedEffect::Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect"));

	UExposedEffect_Multicast_InitializeStatusEffect_Params params;
	params.statusEffectId = statusEffectId;
	params.originatingPlayer = originatingPlayer;
	params.customParam = customParam;
	params.originatingEffect = originatingEffect;
	params.shouldDisplay = shouldDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769650              		 offset:1659650                       

bool UExposedEffect::IsOriginatorHooked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorHooked"));

	UExposedEffect_IsOriginatorHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769620              		 offset:1659620                       

bool UExposedEffect::IsOriginatorAlive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorAlive"));

	UExposedEffect_IsOriginatorAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         AdditiveRangeModifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769590              		 offset:1659590                       

bool UExposedEffect::IsKillerInOriginatorRange(float* AdditiveRangeModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange"));

	UExposedEffect_IsKillerInOriginatorRange_Params params;
	params.AdditiveRangeModifier = AdditiveRangeModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769560              		 offset:1659560                       

bool UExposedEffect::IsInOriginatorRange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsInOriginatorRange"));

	UExposedEffect_IsInOriginatorRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.InitializeLifetime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807694E0              		 offset:16594e0                       

void UExposedEffect::InitializeLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.InitializeLifetime"));

	UExposedEffect_InitializeLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807693C0              		 offset:16593c0                       

float UExposedEffect::GetStatusEffectCooldownRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate"));

	UExposedEffect_GetStatusEffectCooldownRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetShouldDisplay
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769390              		 offset:1659390                       

bool UExposedEffect::GetShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetShouldDisplay"));

	UExposedEffect_GetShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769370              		 offset:1659370                       

class ADBDPlayer* UExposedEffect::GetOriginatingPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetOriginatingPlayer"));

	UExposedEffect_GetOriginatingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769330              		 offset:1659330                       

float UExposedEffect::GetLifetimeDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetLifetimeDuration"));

	UExposedEffect_GetLifetimeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float*                         percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LevelToDisplay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807691A0              		 offset:16591a0                       

void UExposedEffect::FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent"));

	UExposedEffect_FireActiveStatusEffectEvent_Params params;
	params.percentage = percentage;
	params.LevelToDisplay = LevelToDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF680769180              		 offset:1659180                       

void UExposedEffect::BroadcastOriginatorGameEventNotification()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification"));

	UExposedEffect_BroadcastOriginatorGameEventNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayNotificationData* notificationData               (Parm)
// bool*                          addToHistory                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768FD0              		 offset:1658fd0                       

void UExposedEffect::BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification"));

	UExposedEffect_BroadcastGameEventNotification_Params params;
	params.notificationData = notificationData;
	params.addToHistory = addToHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768F50              		 offset:1658f50                       

void UExposedEffect::Authority_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime"));

	UExposedEffect_Authority_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680768F30              		 offset:1658f30                       

void UExposedEffect::Authority_RemoveSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_RemoveSelf"));

	UExposedEffect_Authority_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_EndSelf
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680743940              		 offset:1633940                       

void UExposedEffect::Authority_EndSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_EndSelf"));

	UExposedEffect_Authority_EndSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.SetIsUsable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68073EAB0              		 offset:162eab0                       

void UFixated::SetIsUsable(bool* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.SetIsUsable"));

	UFixated_SetIsUsable_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.OnRep_TokenCount
// (Final, Native, Private)
// Parameters:
// int*                           oldCount                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68073E2C0              		 offset:162e2c0                       

void UFixated::OnRep_TokenCount(int* oldCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.OnRep_TokenCount"));

	UFixated_OnRep_TokenCount_Params params;
	params.oldCount = oldCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.OnRep_IsUsable
// (Final, Native, Private, Const)
// FunctionAddress:0x00007FF68073E2A0              		 offset:162e2a0                       

void UFixated::OnRep_IsUsable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.OnRep_IsUsable"));

	UFixated_OnRep_IsUsable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.OnRep_CooldownTimer
// (Final, Native, Private, Const)
// FunctionAddress:0x00007FF68073E280              		 offset:162e280                       

void UFixated::OnRep_CooldownTimer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.OnRep_CooldownTimer"));

	UFixated_OnRep_CooldownTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.Multicast_InitializePerk
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FName*                  PerkId                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PerkLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// EInputInteractionType*         activatableInteractionInputType (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68073DA30              		 offset:162da30                       

void UFixated::Multicast_InitializePerk(struct FName* PerkId, int* PerkLevel, EInputInteractionType* activatableInteractionInputType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.Multicast_InitializePerk"));

	UFixated_Multicast_InitializePerk_Params params;
	params.PerkId = PerkId;
	params.PerkLevel = PerkLevel;
	params.activatableInteractionInputType = activatableInteractionInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.IsHudIconTimerDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68073DA00              		 offset:162da00                       

bool UFixated::IsHudIconTimerDone()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.IsHudIconTimerDone"));

	UFixated_IsHudIconTimerDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Perk.IsCooldownTimerDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68073D9D0              		 offset:162d9d0                       

bool UFixated::IsCooldownTimerDone()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.IsCooldownTimerDone"));

	UFixated_IsCooldownTimerDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Perk.GetTokenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68073D670              		 offset:162d670                       

int UFixated::GetTokenCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.GetTokenCount"));

	UFixated_GetTokenCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Perk.GetPerkLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68073CF00              		 offset:162cf00                       

int UFixated::GetPerkLevel()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.GetPerkLevel"));

	UFixated_GetPerkLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Perk.GetMaxTokenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68073CB60              		 offset:162cb60                       

int UFixated::GetMaxTokenCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.GetMaxTokenCount"));

	UFixated_GetMaxTokenCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Perk.GetIsUsable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68073CB30              		 offset:162cb30                       

bool UFixated::GetIsUsable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.GetIsUsable"));

	UFixated_GetIsUsable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Perk.GetHudIconTimerElapsedTimePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68073CB00              		 offset:162cb00                       

float UFixated::GetHudIconTimerElapsedTimePercent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.GetHudIconTimerElapsedTimePercent"));

	UFixated_GetHudIconTimerElapsedTimePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Perk.GetCooldownTimer
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTimerObject*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68073CAD0              		 offset:162cad0                       

class UTimerObject* UFixated::GetCooldownTimer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.GetCooldownTimer"));

	UFixated_GetCooldownTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Perk.FireActivePerkEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         percentage                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           chargeCount                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68073C6B0              		 offset:162c6b0                       

void UFixated::FireActivePerkEvent(float* percentage, int* chargeCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.FireActivePerkEvent"));

	UFixated_FireActivePerkEvent_Params params;
	params.percentage = percentage;
	params.chargeCount = chargeCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.Authority_TriggerHudIconTimer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68073C630              		 offset:162c630                       

void UFixated::Authority_TriggerHudIconTimer(float* Duration)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.Authority_TriggerHudIconTimer"));

	UFixated_Authority_TriggerHudIconTimer_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.Authority_TriggerCooldownTimer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         coolddownTime                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68073C5B0              		 offset:162c5b0                       

void UFixated::Authority_TriggerCooldownTimer(float* coolddownTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.Authority_TriggerCooldownTimer"));

	UFixated_Authority_TriggerCooldownTimer_Params params;
	params.coolddownTime = coolddownTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.Authority_SetTokenCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int*                           value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68073C530              		 offset:162c530                       

void UFixated::Authority_SetTokenCount(int* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.Authority_SetTokenCount"));

	UFixated_Authority_SetTokenCount_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.Authority_SetMaxTokenCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int*                           value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68073C4B0              		 offset:162c4b0                       

void UFixated::Authority_SetMaxTokenCount(int* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.Authority_SetMaxTokenCount"));

	UFixated_Authority_SetMaxTokenCount_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.Authority_SetIsUsable
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68073C420              		 offset:162c420                       

void UFixated::Authority_SetIsUsable(bool* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.Authority_SetIsUsable"));

	UFixated_Authority_SetIsUsable_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.Authority_IncrementToken
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68073C2A0              		 offset:162c2a0                       

void UFixated::Authority_IncrementToken()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.Authority_IncrementToken"));

	UFixated_Authority_IncrementToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Perk.Authority_DecrementToken
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68073BCC0              		 offset:162bcc0                       

void UFixated::Authority_DecrementToken()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Perk.Authority_DecrementToken"));

	UFixated_Authority_DecrementToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.FlipFlop.Authority_OnPickedUp
// (Final, Native, Private)
// Parameters:
// class ADBDPlayer**             picker                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB470              		 offset:feb470                        

void UFlipFlop::Authority_OnPickedUp(class ADBDPlayer** picker)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.FlipFlop.Authority_OnPickedUp"));

	UFlipFlop_Authority_OnPickedUp_Params params;
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HeadOn.OnPawnOverlapExit
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FC170              		 offset:fec170                        

void UHeadOn::OnPawnOverlapExit(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HeadOn.OnPawnOverlapExit"));

	UHeadOn_OnPawnOverlapExit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HeadOn.OnPawnOverlapEnter
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800FBF80              		 offset:febf80                        

void UHeadOn::OnPawnOverlapEnter(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HeadOn.OnPawnOverlapEnter"));

	UHeadOn_OnPawnOverlapEnter_Params params;
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


// Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6800FBCD0              		 offset:febcd0                        

void UHeadOn::OnHeadOnAnimationComplete()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete"));

	UHeadOn_OnHeadOnAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB740              		 offset:feb740                        

bool UHeadOn::CanApplyHeadOnInteraction()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction"));

	UHeadOn_CanApplyHeadOnInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HeadOn.Authority_ActivatePerk
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6800FAEF0              		 offset:feaef0                        

void UHeadOn::Authority_ActivatePerk()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HeadOn.Authority_ActivatePerk"));

	UHeadOn_Authority_ActivatePerk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.ReceiveGameplayEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EDBDScoreTypes*                gameplayEventType              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FC7C0              		 offset:fec7c0                        

void UHexPerk::ReceiveGameplayEvent(EDBDScoreTypes* gameplayEventType, float* amount, class AActor** Instigator, class AActor** Target)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.ReceiveGameplayEvent"));

	UHexPerk_ReceiveGameplayEvent_Params params;
	params.gameplayEventType = gameplayEventType;
	params.amount = amount;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent
// (Final, Native, Public)
// Parameters:
// EDBDScoreTypes*                gameplayEventType              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FBCF0              		 offset:febcf0                        

void UHexPerk::OnHexPerkGameplayEvent(EDBDScoreTypes* gameplayEventType, float* amount, class AActor** Instigator, class AActor** Target)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent"));

	UHexPerk_OnHexPerkGameplayEvent_Params params;
	params.gameplayEventType = gameplayEventType;
	params.amount = amount;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.Multicast_UnbindFromTotem
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class ATotem**                 aTotemActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FBC40              		 offset:febc40                        

void UHexPerk::Multicast_UnbindFromTotem(class ATotem** aTotemActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.Multicast_UnbindFromTotem"));

	UHexPerk_Multicast_UnbindFromTotem_Params params;
	params.aTotemActor = aTotemActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.Multicast_BindToTotems
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<class ATotem*>*         totemActors                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6800FBBA0              		 offset:febba0                        

void UHexPerk::Multicast_BindToTotems(TArray<class ATotem*>* totemActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.Multicast_BindToTotems"));

	UHexPerk_Multicast_BindToTotems_Params params;
	params.totemActors = totemActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           playerUniqueID                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB9D0              		 offset:feb9d0                        

bool UHexPerk::IsCurseRevealedToPlayer(int* playerUniqueID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer"));

	UHexPerk_IsCurseRevealedToPlayer_Params params;
	params.playerUniqueID = playerUniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.GetTotems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ATotem*>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6800FB990              		 offset:feb990                        

TArray<class ATotem*> UHexPerk::GetTotems()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.GetTotems"));

	UHexPerk_GetTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.GetDistanceToOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB8F0              		 offset:feb8f0                        

float UHexPerk::GetDistanceToOwner(class AActor** OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.GetDistanceToOwner"));

	UHexPerk_GetDistanceToOwner_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.GetBoundTotems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ATotem*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6800FB870              		 offset:feb870                        

TArray<class ATotem*> UHexPerk::GetBoundTotems()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.GetBoundTotems"));

	UHexPerk_GetBoundTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.FireCursedStatusOnLocalPlayer
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF6800FB850              		 offset:feb850                        

void UHexPerk::FireCursedStatusOnLocalPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.FireCursedStatusOnLocalPlayer"));

	UHexPerk_FireCursedStatusOnLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.Authority_UnbindFromTotem
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// class ATotem**                 aTotemActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB6C0              		 offset:feb6c0                        

void UHexPerk::Authority_UnbindFromTotem(class ATotem** aTotemActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.Authority_UnbindFromTotem"));

	UHexPerk_Authority_UnbindFromTotem_Params params;
	params.aTotemActor = aTotemActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           playerUniqueID                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB580              		 offset:feb580                        

void UHexPerk::Authority_SetCurseRevealedToPlayer(int* playerUniqueID, bool* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer"));

	UHexPerk_Authority_SetCurseRevealedToPlayer_Params params;
	params.playerUniqueID = playerUniqueID;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.Authority_BindToDullTotems
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800FAF10              		 offset:feaf10                        

bool UHexPerk::Authority_BindToDullTotems()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.Authority_BindToDullTotems"));

	UHexPerk_Authority_BindToDullTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.ReceiveGameplayEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EDBDScoreTypes*                gameplayEventType              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FC7C0              		 offset:fec7c0                        

void UHexHauntedGround::ReceiveGameplayEvent(EDBDScoreTypes* gameplayEventType, float* amount, class AActor** Instigator, class AActor** Target)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.ReceiveGameplayEvent"));

	UHexHauntedGround_ReceiveGameplayEvent_Params params;
	params.gameplayEventType = gameplayEventType;
	params.amount = amount;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent
// (Final, Native, Public)
// Parameters:
// EDBDScoreTypes*                gameplayEventType              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FBCF0              		 offset:febcf0                        

void UHexHauntedGround::OnHexPerkGameplayEvent(EDBDScoreTypes* gameplayEventType, float* amount, class AActor** Instigator, class AActor** Target)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent"));

	UHexHauntedGround_OnHexPerkGameplayEvent_Params params;
	params.gameplayEventType = gameplayEventType;
	params.amount = amount;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.Multicast_UnbindFromTotem
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class ATotem**                 aTotemActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FBC40              		 offset:febc40                        

void UHexHauntedGround::Multicast_UnbindFromTotem(class ATotem** aTotemActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.Multicast_UnbindFromTotem"));

	UHexHauntedGround_Multicast_UnbindFromTotem_Params params;
	params.aTotemActor = aTotemActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.Multicast_BindToTotems
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<class ATotem*>*         totemActors                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6800FBBA0              		 offset:febba0                        

void UHexHauntedGround::Multicast_BindToTotems(TArray<class ATotem*>* totemActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.Multicast_BindToTotems"));

	UHexHauntedGround_Multicast_BindToTotems_Params params;
	params.totemActors = totemActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           playerUniqueID                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB9D0              		 offset:feb9d0                        

bool UHexHauntedGround::IsCurseRevealedToPlayer(int* playerUniqueID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer"));

	UHexHauntedGround_IsCurseRevealedToPlayer_Params params;
	params.playerUniqueID = playerUniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.GetTotems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ATotem*>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6800FB990              		 offset:feb990                        

TArray<class ATotem*> UHexHauntedGround::GetTotems()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.GetTotems"));

	UHexHauntedGround_GetTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.GetDistanceToOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB8F0              		 offset:feb8f0                        

float UHexHauntedGround::GetDistanceToOwner(class AActor** OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.GetDistanceToOwner"));

	UHexHauntedGround_GetDistanceToOwner_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.GetBoundTotems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ATotem*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6800FB870              		 offset:feb870                        

TArray<class ATotem*> UHexHauntedGround::GetBoundTotems()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.GetBoundTotems"));

	UHexHauntedGround_GetBoundTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.FireCursedStatusOnLocalPlayer
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF6800FB850              		 offset:feb850                        

void UHexHauntedGround::FireCursedStatusOnLocalPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.FireCursedStatusOnLocalPlayer"));

	UHexHauntedGround_FireCursedStatusOnLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.Authority_UnbindFromTotem
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// class ATotem**                 aTotemActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB6C0              		 offset:feb6c0                        

void UHexHauntedGround::Authority_UnbindFromTotem(class ATotem** aTotemActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.Authority_UnbindFromTotem"));

	UHexHauntedGround_Authority_UnbindFromTotem_Params params;
	params.aTotemActor = aTotemActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           playerUniqueID                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6800FB580              		 offset:feb580                        

void UHexHauntedGround::Authority_SetCurseRevealedToPlayer(int* playerUniqueID, bool* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer"));

	UHexHauntedGround_Authority_SetCurseRevealedToPlayer_Params params;
	params.playerUniqueID = playerUniqueID;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HexPerk.Authority_BindToDullTotems
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6800FAF10              		 offset:feaf10                        

bool UHexHauntedGround::Authority_BindToDullTotems()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexPerk.Authority_BindToDullTotems"));

	UHexHauntedGround_Authority_BindToDullTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.HexRuin.Authority_ConstructActivationTimersMap
// (Final, Native, Private)
// FunctionAddress:0x00007FF6801020B0              		 offset:ff20b0                        

void UHexRuin::Authority_ConstructActivationTimersMap()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HexRuin.Authority_ConstructActivationTimersMap"));

	UHexRuin_Authority_ConstructActivationTimersMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680102E90              		 offset:ff2e90                        

void UHighestLevelAndClosestEffectCondition::SetCurrentEffectLevel(int* Level)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel"));

	UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  effectIDLevel1                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  effectIDLevel2                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  effectIDLevel3                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6801026B0              		 offset:ff26b0                        

void UHighestLevelAndClosestEffectCondition::InitEffectArrays(struct FName* effectIDLevel1, struct FName* effectIDLevel2, struct FName* effectIDLevel3)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays"));

	UHighestLevelAndClosestEffectCondition_InitEffectArrays_Params params;
	params.effectIDLevel1 = effectIDLevel1;
	params.effectIDLevel2 = effectIDLevel2;
	params.effectIDLevel3 = effectIDLevel3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGameplayTag*           GameplayTag                    (ConstParm, Parm)
// struct FGameEventData*         GameEventData                  (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF680102D40              		 offset:ff2d40                        

void UImAllEars::Server_OnCamperLoudNoise(struct FGameplayTag* GameplayTag, struct FGameEventData* GameEventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise"));

	UImAllEars_Server_OnCamperLoudNoise_Params params;
	params.GameplayTag = GameplayTag;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA80              		 offset:165aa80                       

bool UImmediateUndetectableEffect::ShouldDisplayStatusEffectIcon()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon"));

	UImmediateUndetectableEffect_ShouldDisplayStatusEffectIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA00              		 offset:165aa00                       

void UImmediateUndetectableEffect::SetStatusEffectIconPercentage(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage"));

	UImmediateUndetectableEffect_SetStatusEffectIconPercentage_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.SetShouldDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          On                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076A970              		 offset:165a970                       

void UImmediateUndetectableEffect::SetShouldDisplay(bool* On)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetShouldDisplay"));

	UImmediateUndetectableEffect_SetShouldDisplay_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          currentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680736720              		 offset:1626720                       

void UImmediateUndetectableEffect::OnShouldDisplayChanged(bool* currentValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged"));

	UImmediateUndetectableEffect_OnShouldDisplayChanged_Params params;
	params.currentValue = currentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
// (Final, Native, Protected)
// FunctionAddress:0x00007FF68076A210              		 offset:165a210                       

void UImmediateUndetectableEffect::OnRep_ShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay"));

	UImmediateUndetectableEffect_OnRep_ShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769860              		 offset:1659860                       

void UImmediateUndetectableEffect::Multicast_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime"));

	UImmediateUndetectableEffect_Multicast_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FName*                  statusEffectId                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             originatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         customParam                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayModifierContainer** originatingEffect              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          shouldDisplay                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769680              		 offset:1659680                       

void UImmediateUndetectableEffect::Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect"));

	UImmediateUndetectableEffect_Multicast_InitializeStatusEffect_Params params;
	params.statusEffectId = statusEffectId;
	params.originatingPlayer = originatingPlayer;
	params.customParam = customParam;
	params.originatingEffect = originatingEffect;
	params.shouldDisplay = shouldDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769650              		 offset:1659650                       

bool UImmediateUndetectableEffect::IsOriginatorHooked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorHooked"));

	UImmediateUndetectableEffect_IsOriginatorHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769620              		 offset:1659620                       

bool UImmediateUndetectableEffect::IsOriginatorAlive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorAlive"));

	UImmediateUndetectableEffect_IsOriginatorAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         AdditiveRangeModifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769590              		 offset:1659590                       

bool UImmediateUndetectableEffect::IsKillerInOriginatorRange(float* AdditiveRangeModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange"));

	UImmediateUndetectableEffect_IsKillerInOriginatorRange_Params params;
	params.AdditiveRangeModifier = AdditiveRangeModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769560              		 offset:1659560                       

bool UImmediateUndetectableEffect::IsInOriginatorRange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsInOriginatorRange"));

	UImmediateUndetectableEffect_IsInOriginatorRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.InitializeLifetime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807694E0              		 offset:16594e0                       

void UImmediateUndetectableEffect::InitializeLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.InitializeLifetime"));

	UImmediateUndetectableEffect_InitializeLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807693C0              		 offset:16593c0                       

float UImmediateUndetectableEffect::GetStatusEffectCooldownRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate"));

	UImmediateUndetectableEffect_GetStatusEffectCooldownRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetShouldDisplay
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769390              		 offset:1659390                       

bool UImmediateUndetectableEffect::GetShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetShouldDisplay"));

	UImmediateUndetectableEffect_GetShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769370              		 offset:1659370                       

class ADBDPlayer* UImmediateUndetectableEffect::GetOriginatingPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetOriginatingPlayer"));

	UImmediateUndetectableEffect_GetOriginatingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769330              		 offset:1659330                       

float UImmediateUndetectableEffect::GetLifetimeDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetLifetimeDuration"));

	UImmediateUndetectableEffect_GetLifetimeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float*                         percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LevelToDisplay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807691A0              		 offset:16591a0                       

void UImmediateUndetectableEffect::FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent"));

	UImmediateUndetectableEffect_FireActiveStatusEffectEvent_Params params;
	params.percentage = percentage;
	params.LevelToDisplay = LevelToDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF680769180              		 offset:1659180                       

void UImmediateUndetectableEffect::BroadcastOriginatorGameEventNotification()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification"));

	UImmediateUndetectableEffect_BroadcastOriginatorGameEventNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayNotificationData* notificationData               (Parm)
// bool*                          addToHistory                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768FD0              		 offset:1658fd0                       

void UImmediateUndetectableEffect::BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification"));

	UImmediateUndetectableEffect_BroadcastGameEventNotification_Params params;
	params.notificationData = notificationData;
	params.addToHistory = addToHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768F50              		 offset:1658f50                       

void UImmediateUndetectableEffect::Authority_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime"));

	UImmediateUndetectableEffect_Authority_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680768F30              		 offset:1658f30                       

void UImmediateUndetectableEffect::Authority_RemoveSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_RemoveSelf"));

	UImmediateUndetectableEffect_Authority_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_EndSelf
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680743940              		 offset:1633940                       

void UImmediateUndetectableEffect::Authority_EndSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_EndSelf"));

	UImmediateUndetectableEffect_Authority_EndSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.InfectiousFright.RevealSurvivorLocation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACamperPlayer**          Target                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UInfectiousFright::RevealSurvivorLocation(class ACamperPlayer** Target)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.InfectiousFright.RevealSurvivorLocation"));

	UInfectiousFright_RevealSurvivorLocation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount
// (Final, Native, Private)
// FunctionAddress:0x00007FF680102B30              		 offset:ff2b30                        

void UInfectiousFright::OnRep_PerkActivationCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount"));

	UInfectiousFright_OnRep_PerkActivationCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.InnerStrength.OnRep_PerkEnabled
// (Final, Native, Private)
// FunctionAddress:0x00007FF680102B50              		 offset:ff2b50                        

void UInnerStrength::OnRep_PerkEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.InnerStrength.OnRep_PerkEnabled"));

	UInnerStrength_OnRep_PerkEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged
// (Final, Native, Private)
// Parameters:
// ECamperImmobilizeState*        oldImmobilizeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ECamperImmobilizeState*        newImmobilizeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680102A30              		 offset:ff2a30                        

void UInnerStrength::OnPlayerImmobilizeStateChanged(ECamperImmobilizeState* oldImmobilizeState, ECamperImmobilizeState* newImmobilizeState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged"));

	UInnerStrength_OnPlayerImmobilizeStateChanged_Params params;
	params.oldImmobilizeState = oldImmobilizeState;
	params.newImmobilizeState = newImmobilizeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UIsActivationTimerActive::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UIsActivationTimerActive_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UIsActivationTimerActive::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UIsActivationTimerActive_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UIsActivationTimerActive::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UIsActivationTimerActive_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UIsActivationTimerActive::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UIsActivationTimerActive_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UIsActivationTimerActive::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UIsActivationTimerActive_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UIsActivationTimerActiveAndNotPaused::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UIsActivationTimerActiveAndNotPaused_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UIsActivationTimerActiveAndNotPaused::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UIsActivationTimerActiveAndNotPaused_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UIsActivationTimerActiveAndNotPaused::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UIsActivationTimerActiveAndNotPaused_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UIsActivationTimerActiveAndNotPaused::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UIsActivationTimerActiveAndNotPaused_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UIsActivationTimerActiveAndNotPaused::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UIsActivationTimerActiveAndNotPaused_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UIsClosestEffectCondition::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UIsClosestEffectCondition_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UIsClosestEffectCondition::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UIsClosestEffectCondition_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UIsClosestEffectCondition::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UIsClosestEffectCondition_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UIsClosestEffectCondition::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UIsClosestEffectCondition_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UIsClosestEffectCondition::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UIsClosestEffectCondition_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Competence.RangeBasedCondition.OnRep_Range
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822ECCD0              		 offset:31dccd0                       

void UIsInAnyHookedSurvivorOriginatorAuraReadingRange::OnRep_Range()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.RangeBasedCondition.OnRep_Range"));

	UIsInAnyHookedSurvivorOriginatorAuraReadingRange_OnRep_Range_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UIsLifetimeActive::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UIsLifetimeActive_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UIsLifetimeActive::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UIsLifetimeActive_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UIsLifetimeActive::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UIsLifetimeActive_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UIsLifetimeActive::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UIsLifetimeActive_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UIsLifetimeActive::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UIsLifetimeActive_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UIsOriginatingPerkUsableCondition::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UIsOriginatingPerkUsableCondition_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UIsOriginatingPerkUsableCondition::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UIsOriginatingPerkUsableCondition_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UIsOriginatingPerkUsableCondition::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UIsOriginatingPerkUsableCondition_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UIsOriginatingPerkUsableCondition::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UIsOriginatingPerkUsableCondition_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UIsOriginatingPerkUsableCondition::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UIsOriginatingPerkUsableCondition_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UIsOwningPlayerLastSurvivor::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UIsOwningPlayerLastSurvivor_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UIsOwningPlayerLastSurvivor::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UIsOwningPlayerLastSurvivor_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UIsOwningPlayerLastSurvivor::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UIsOwningPlayerLastSurvivor_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UIsOwningPlayerLastSurvivor::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UIsOwningPlayerLastSurvivor_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UIsOwningPlayerLastSurvivor::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UIsOwningPlayerLastSurvivor_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UIsPerkUsableCondition::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UIsPerkUsableCondition_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UIsPerkUsableCondition::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UIsPerkUsableCondition_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UIsPerkUsableCondition::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UIsPerkUsableCondition_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UIsPerkUsableCondition::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UIsPerkUsableCondition_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UIsPerkUsableCondition::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UIsPerkUsableCondition_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
// (Final, Native, Private)
// FunctionAddress:0x00007FF6800FCA90              		 offset:feca90                        

void UIsPlayerPerformingItemInteraction::UpdateIsTrue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue"));

	UIsPlayerPerformingItemInteraction_UpdateIsTrue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer*  interactionSemantics           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6800FC950              		 offset:fec950                        

void UIsPlayerPerformingItemInteraction::SetInteractionSemantics(struct FGameplayTagContainer* interactionSemantics)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics"));

	UIsPlayerPerformingItemInteraction_SetInteractionSemantics_Params params;
	params.interactionSemantics = interactionSemantics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
// (Final, Native, Private)
// FunctionAddress:0x00007FF680102FA0              		 offset:ff2fa0                        

void UIsPlayerPerformingInteraction::UpdateIsTrue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue"));

	UIsPlayerPerformingInteraction_UpdateIsTrue_Params params;

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

void UIsPlayerPerformingInteraction::SetInteractionSemantics(struct FGameplayTagContainer* interactionSemantics)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics"));

	UIsPlayerPerformingInteraction_SetInteractionSemantics_Params params;
	params.interactionSemantics = interactionSemantics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.LuckyBreak.OnDamageStateChanged
// (Final, Native, Private)
// Parameters:
// ECamperDamageState*            oldDamageState                 (Parm, ZeroConstructor, IsPlainOldData)
// ECamperDamageState*            currentDamageState             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680102970              		 offset:ff2970                        

void ULuckyBreak::OnDamageStateChanged(ECamperDamageState* oldDamageState, ECamperDamageState* currentDamageState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.LuckyBreak.OnDamageStateChanged"));

	ULuckyBreak_OnDamageStateChanged_Params params;
	params.oldDamageState = oldDamageState;
	params.currentDamageState = currentDamageState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.LuckyBreak.ActivationTimerEnded
// (Final, Native, Private)
// FunctionAddress:0x00007FF680102090              		 offset:ff2090                        

void ULuckyBreak::ActivationTimerEnded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.LuckyBreak.ActivationTimerEnded"));

	ULuckyBreak_ActivationTimerEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680102680              		 offset:ff2680                        

float UNoOneLeftBehind::GetSpeedBoostEffect()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect"));

	UNoOneLeftBehind_GetSpeedBoostEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA80              		 offset:165aa80                       

bool UObliviousEffect::ShouldDisplayStatusEffectIcon()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon"));

	UObliviousEffect_ShouldDisplayStatusEffectIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA00              		 offset:165aa00                       

void UObliviousEffect::SetStatusEffectIconPercentage(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage"));

	UObliviousEffect_SetStatusEffectIconPercentage_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.SetShouldDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          On                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076A970              		 offset:165a970                       

void UObliviousEffect::SetShouldDisplay(bool* On)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetShouldDisplay"));

	UObliviousEffect_SetShouldDisplay_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          currentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680736720              		 offset:1626720                       

void UObliviousEffect::OnShouldDisplayChanged(bool* currentValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged"));

	UObliviousEffect_OnShouldDisplayChanged_Params params;
	params.currentValue = currentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
// (Final, Native, Protected)
// FunctionAddress:0x00007FF68076A210              		 offset:165a210                       

void UObliviousEffect::OnRep_ShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay"));

	UObliviousEffect_OnRep_ShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769860              		 offset:1659860                       

void UObliviousEffect::Multicast_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime"));

	UObliviousEffect_Multicast_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FName*                  statusEffectId                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             originatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         customParam                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayModifierContainer** originatingEffect              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          shouldDisplay                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769680              		 offset:1659680                       

void UObliviousEffect::Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect"));

	UObliviousEffect_Multicast_InitializeStatusEffect_Params params;
	params.statusEffectId = statusEffectId;
	params.originatingPlayer = originatingPlayer;
	params.customParam = customParam;
	params.originatingEffect = originatingEffect;
	params.shouldDisplay = shouldDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769650              		 offset:1659650                       

bool UObliviousEffect::IsOriginatorHooked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorHooked"));

	UObliviousEffect_IsOriginatorHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769620              		 offset:1659620                       

bool UObliviousEffect::IsOriginatorAlive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorAlive"));

	UObliviousEffect_IsOriginatorAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         AdditiveRangeModifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769590              		 offset:1659590                       

bool UObliviousEffect::IsKillerInOriginatorRange(float* AdditiveRangeModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange"));

	UObliviousEffect_IsKillerInOriginatorRange_Params params;
	params.AdditiveRangeModifier = AdditiveRangeModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769560              		 offset:1659560                       

bool UObliviousEffect::IsInOriginatorRange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsInOriginatorRange"));

	UObliviousEffect_IsInOriginatorRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.InitializeLifetime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807694E0              		 offset:16594e0                       

void UObliviousEffect::InitializeLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.InitializeLifetime"));

	UObliviousEffect_InitializeLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807693C0              		 offset:16593c0                       

float UObliviousEffect::GetStatusEffectCooldownRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate"));

	UObliviousEffect_GetStatusEffectCooldownRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetShouldDisplay
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769390              		 offset:1659390                       

bool UObliviousEffect::GetShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetShouldDisplay"));

	UObliviousEffect_GetShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769370              		 offset:1659370                       

class ADBDPlayer* UObliviousEffect::GetOriginatingPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetOriginatingPlayer"));

	UObliviousEffect_GetOriginatingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769330              		 offset:1659330                       

float UObliviousEffect::GetLifetimeDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetLifetimeDuration"));

	UObliviousEffect_GetLifetimeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float*                         percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LevelToDisplay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807691A0              		 offset:16591a0                       

void UObliviousEffect::FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent"));

	UObliviousEffect_FireActiveStatusEffectEvent_Params params;
	params.percentage = percentage;
	params.LevelToDisplay = LevelToDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF680769180              		 offset:1659180                       

void UObliviousEffect::BroadcastOriginatorGameEventNotification()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification"));

	UObliviousEffect_BroadcastOriginatorGameEventNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayNotificationData* notificationData               (Parm)
// bool*                          addToHistory                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768FD0              		 offset:1658fd0                       

void UObliviousEffect::BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification"));

	UObliviousEffect_BroadcastGameEventNotification_Params params;
	params.notificationData = notificationData;
	params.addToHistory = addToHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768F50              		 offset:1658f50                       

void UObliviousEffect::Authority_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime"));

	UObliviousEffect_Authority_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680768F30              		 offset:1658f30                       

void UObliviousEffect::Authority_RemoveSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_RemoveSelf"));

	UObliviousEffect_Authority_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_EndSelf
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680743940              		 offset:1633940                       

void UObliviousEffect::Authority_EndSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_EndSelf"));

	UObliviousEffect_Authority_EndSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.OwningSlasherHasBeenStill.Authority_SetSecondsOfStillnessRequired
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         secondsRequired                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680102510              		 offset:ff2510                        

void UOwningSlasherHasBeenStill::Authority_SetSecondsOfStillnessRequired(float* secondsRequired)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.OwningSlasherHasBeenStill.Authority_SetSecondsOfStillnessRequired"));

	UOwningSlasherHasBeenStill_Authority_SetSecondsOfStillnessRequired_Params params;
	params.secondsRequired = secondsRequired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA7F0              		 offset:31da7f0                       

void UPlayerIsInExitArea::SetSubjectProviderClass(class UClass** subjectProviderClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.SetSubjectProviderClass"));

	UPlayerIsInExitArea_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7D0              		 offset:31da7d0                       

void UPlayerIsInExitArea::OnRep_SubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass"));

	UPlayerIsInExitArea_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
// FunctionAddress:0x00007FF6822EA7B0              		 offset:31da7b0                       

void UPlayerIsInExitArea::OnRep_OwningModifier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.OnRep_OwningModifier"));

	UPlayerIsInExitArea_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680683E30              		 offset:1573e30                       

void UPlayerIsInExitArea::InitializeSubjectProviderClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass"));

	UPlayerIsInExitArea_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822EA780              		 offset:31da780                       

class AActor* UPlayerIsInExitArea::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Competence.BaseModifierCondition.GetOwningActor"));

	UPlayerIsInExitArea_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse
// (Final, Native, Private)
// Parameters:
// bool*                          success                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Bonus                          (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TriggerLoudNoise               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          hadInput                       (Parm, ZeroConstructor, IsPlainOldData)
// ESkillCheckCustomType*         Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ChargeChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6801022F0              		 offset:ff22f0                        

void USolidarity::Authority_OnSkillCheckResponse(bool* success, bool* Bonus, class ADBDPlayer** Player, bool* TriggerLoudNoise, bool* hadInput, ESkillCheckCustomType* Type, float* ChargeChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse"));

	USolidarity_Authority_OnSkillCheckResponse_Params params;
	params.success = success;
	params.Bonus = Bonus;
	params.Player = Player;
	params.TriggerLoudNoise = TriggerLoudNoise;
	params.hadInput = hadInput;
	params.Type = Type;
	params.ChargeChange = ChargeChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied
// (Final, Native, Private)
// Parameters:
// float*                         IndividualChargeAmount         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalChargeAmount              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ChargeInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          WasCoop                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6801020D0              		 offset:ff20d0                        

void USolidarity::Authority_OnHealthChargeApplied(float* IndividualChargeAmount, float* TotalChargeAmount, class AActor** ChargeInstigator, bool* WasCoop, float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied"));

	USolidarity_Authority_OnHealthChargeApplied_Params params;
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


// Function DBDCompetence.SpiesFromTheShadows.StartCooldownIfInRange
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                loudNoiseLocation              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680102F10              		 offset:ff2f10                        

void USpiesFromTheShadows::StartCooldownIfInRange(struct FVector* loudNoiseLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SpiesFromTheShadows.StartCooldownIfInRange"));

	USpiesFromTheShadows_StartCooldownIfInRange_Params params;
	params.loudNoiseLocation = loudNoiseLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged
// (Final, Native, Private)
// Parameters:
// bool*                          IsRunningAndMoving             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680102260              		 offset:ff2260                        

void USprintBurst::Authority_OnIsRunningAndMovingChanged(bool* IsRunningAndMoving)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged"));

	USprintBurst_Authority_OnIsRunningAndMovingChanged_Params params;
	params.IsRunningAndMoving = IsRunningAndMoving;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.Surge.Client_TriggerEffects
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// TArray<class AGenerator*>*     generators                     (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF680102590              		 offset:ff2590                        

void USurge::Client_TriggerEffects(TArray<class AGenerator*>* generators)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.Surge.Client_TriggerEffects"));

	USurge_Client_TriggerEffects_Params params;
	params.generators = generators;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.Server_AddMadness
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float*                         madnessToAdd                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680102C90              		 offset:ff2c90                        

void USurvivorMadnessEffect::Server_AddMadness(float* madnessToAdd)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.Server_AddMadness"));

	USurvivorMadnessEffect_Server_AddMadness_Params params;
	params.madnessToAdd = madnessToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.OnStaticBlastReceived_BP
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void USurvivorMadnessEffect::OnStaticBlastReceived_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.OnStaticBlastReceived_BP"));

	USurvivorMadnessEffect_OnStaticBlastReceived_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.OnStaticBlastReceived
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680102BB0              		 offset:ff2bb0                        

void USurvivorMadnessEffect::OnStaticBlastReceived()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.OnStaticBlastReceived"));

	USurvivorMadnessEffect_OnStaticBlastReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.OnSnapOutOfIt_BP
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void USurvivorMadnessEffect::OnSnapOutOfIt_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.OnSnapOutOfIt_BP"));

	USurvivorMadnessEffect_OnSnapOutOfIt_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.OnSnapOutOfIt
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680102B90              		 offset:ff2b90                        

void USurvivorMadnessEffect::OnSnapOutOfIt()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.OnSnapOutOfIt"));

	USurvivorMadnessEffect_OnSnapOutOfIt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.OnShockTherapyReceived_BP
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void USurvivorMadnessEffect::OnShockTherapyReceived_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.OnShockTherapyReceived_BP"));

	USurvivorMadnessEffect_OnShockTherapyReceived_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.OnShockTherapyReceived
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680102B70              		 offset:ff2b70                        

void USurvivorMadnessEffect::OnShockTherapyReceived()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.OnShockTherapyReceived"));

	USurvivorMadnessEffect_OnShockTherapyReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.OnMadnessTierUp_BP
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void USurvivorMadnessEffect::OnMadnessTierUp_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.OnMadnessTierUp_BP"));

	USurvivorMadnessEffect_OnMadnessTierUp_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.OnMadnessTierDown_BP
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void USurvivorMadnessEffect::OnMadnessTierDown_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.OnMadnessTierDown_BP"));

	USurvivorMadnessEffect_OnMadnessTierDown_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.Multicast_OnMadnessTierUp
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
// FunctionAddress:0x00007FF680102860              		 offset:ff2860                        

void USurvivorMadnessEffect::Multicast_OnMadnessTierUp()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.Multicast_OnMadnessTierUp"));

	USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.Multicast_OnMadnessTierDown
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
// FunctionAddress:0x00007FF680102810              		 offset:ff2810                        

void USurvivorMadnessEffect::Multicast_OnMadnessTierDown()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.Multicast_OnMadnessTierDown"));

	USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.SurvivorMadnessEffect.GetMadnessValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680102660              		 offset:ff2660                        

float USurvivorMadnessEffect::GetMadnessValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.GetMadnessValue"));

	USurvivorMadnessEffect_GetMadnessValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.SurvivorMadnessEffect.GetMadnessTier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680102630              		 offset:ff2630                        

int USurvivorMadnessEffect::GetMadnessTier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.GetMadnessTier"));

	USurvivorMadnessEffect_GetMadnessTier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DBDCompetence.SurvivorMadnessEffect.Authority_OnMadnessScreamTimerEnd_BP
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void USurvivorMadnessEffect::Authority_OnMadnessScreamTimerEnd_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.SurvivorMadnessEffect.Authority_OnMadnessScreamTimerEnd_BP"));

	USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.SetVisibility
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Visibility                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68068F5D0              		 offset:157f5d0                       

void ATestCollectable::SetVisibility(bool* Visibility)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.SetVisibility"));

	ATestCollectable_SetVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.SetItemInteractor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInteractor**            Interactor                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68068F450              		 offset:157f450                       

void ATestCollectable::SetItemInteractor(class UInteractor** Interactor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.SetItemInteractor"));

	ATestCollectable_SetItemInteractor_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.SetCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Count                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68068F2D0              		 offset:157f2d0                       

void ATestCollectable::SetCount(int* Count)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.SetCount"));

	ATestCollectable_SetCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnUseReleased
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF68068EF70              		 offset:157ef70                       

void ATestCollectable::OnUseReleased()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnUseReleased"));

	ATestCollectable_OnUseReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnUse
// (Native, Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF68068EF50              		 offset:157ef50                       

void ATestCollectable::OnUse()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnUse"));

	ATestCollectable_OnUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnRep_State
// (Final, Native, Private)
// FunctionAddress:0x00007FF68068EEB0              		 offset:157eeb0                       

void ATestCollectable::OnRep_State()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnRep_State"));

	ATestCollectable_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnRep_Collector
// (Final, Native, Private)
// FunctionAddress:0x00007FF68068EEB0              		 offset:157eeb0                       

void ATestCollectable::OnRep_Collector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnRep_Collector"));

	ATestCollectable_OnRep_Collector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnRep_BegunPlayFenceName
// (Final, Native, Private)
// FunctionAddress:0x00007FF68068EE90              		 offset:157ee90                       

void ATestCollectable::OnRep_BegunPlayFenceName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnRep_BegunPlayFenceName"));

	ATestCollectable_OnRep_BegunPlayFenceName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnPostItemAddonsCreation
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATestCollectable::OnPostItemAddonsCreation(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnPostItemAddonsCreation"));

	ATestCollectable_OnPostItemAddonsCreation_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnFenceInitialized
// (Final, Native, Private)
// FunctionAddress:0x00007FF68068EE70              		 offset:157ee70                       

void ATestCollectable::OnFenceInitialized()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnFenceInitialized"));

	ATestCollectable_OnFenceInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnDropped
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF68068EE50              		 offset:157ee50                       

void ATestCollectable::OnDropped()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnDropped"));

	ATestCollectable_OnDropped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnCustomizationChanged
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATestCollectable::OnCustomizationChanged()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnCustomizationChanged"));

	ATestCollectable_OnCustomizationChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnCollectorEndPlay
// (Final, Native, Private)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68068ED90              		 offset:157ed90                       

void ATestCollectable::OnCollectorEndPlay(class AActor** Actor, TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnCollectorEndPlay"));

	ATestCollectable_OnCollectorEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.OnCollected
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             collector                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68068ED00              		 offset:157ed00                       

void ATestCollectable::OnCollected(class ADBDPlayer** collector)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.OnCollected"));

	ATestCollectable_OnCollected_Params params;
	params.collector = collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.NotifyUpdated
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF68068ECE0              		 offset:157ece0                       

void ATestCollectable::NotifyUpdated()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.NotifyUpdated"));

	ATestCollectable_NotifyUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.Multicast_UseReleased
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
// FunctionAddress:0x00007FF68068EC90              		 offset:157ec90                       

void ATestCollectable::Multicast_UseReleased()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.Multicast_UseReleased"));

	ATestCollectable_Multicast_UseReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.Multicast_Use
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
// FunctionAddress:0x00007FF68068EC40              		 offset:157ec40                       

void ATestCollectable::Multicast_Use()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.Multicast_Use"));

	ATestCollectable_Multicast_Use_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.Multicast_RemoveItemAddon
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UItemAddon**             addon                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68068EBB0              		 offset:157ebb0                       

void ATestCollectable::Multicast_RemoveItemAddon(class UItemAddon** addon)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.Multicast_RemoveItemAddon"));

	ATestCollectable_Multicast_RemoveItemAddon_Params params;
	params.addon = addon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.Multicast_Dropped
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults, NetValidate)
// Parameters:
// class ADBDPlayer**             droppedBy                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E8F0              		 offset:157e8f0                       

void ATestCollectable::Multicast_Dropped(class ADBDPlayer** droppedBy, struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.Multicast_Dropped"));

	ATestCollectable_Multicast_Dropped_Params params;
	params.droppedBy = droppedBy;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.Multicast_Collected
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
// Parameters:
// class ADBDPlayer**             collector                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68068E6B0              		 offset:157e6b0                       

void ATestCollectable::Multicast_Collected(class ADBDPlayer** collector)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.Multicast_Collected"));

	ATestCollectable_Multicast_Collected_Params params;
	params.collector = collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.Local_Dropped_Location
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class ADBDPlayer**             droppedBy                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E590              		 offset:157e590                       

void ATestCollectable::Local_Dropped_Location(class ADBDPlayer** droppedBy, struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.Local_Dropped_Location"));

	ATestCollectable_Local_Dropped_Location_Params params;
	params.droppedBy = droppedBy;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.IsStored
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E560              		 offset:157e560                       

bool ATestCollectable::IsStored()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.IsStored"));

	ATestCollectable_IsStored_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.IsRechargeable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E530              		 offset:157e530                       

bool ATestCollectable::IsRechargeable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.IsRechargeable"));

	ATestCollectable_IsRechargeable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.IsOnGround
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E500              		 offset:157e500                       

bool ATestCollectable::IsOnGround()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.IsOnGround"));

	ATestCollectable_IsOnGround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.IsLocallyControlled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E4D0              		 offset:157e4d0                       

bool ATestCollectable::IsLocallyControlled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.IsLocallyControlled"));

	ATestCollectable_IsLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.IsEquipped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E470              		 offset:157e470                       

bool ATestCollectable::IsEquipped()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.IsEquipped"));

	ATestCollectable_IsEquipped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.IsCountDisplayForced
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E440              		 offset:157e440                       

bool ATestCollectable::IsCountDisplayForced()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.IsCountDisplayForced"));

	ATestCollectable_IsCountDisplayForced_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.IsCollected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E410              		 offset:157e410                       

bool ATestCollectable::IsCollected()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.IsCollected"));

	ATestCollectable_IsCollected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.IsBeingUsed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E3E0              		 offset:157e3e0                       

bool ATestCollectable::IsBeingUsed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.IsBeingUsed"));

	ATestCollectable_IsBeingUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.HasGameplayModifierFlag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           modifierFlag                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E2C0              		 offset:157e2c0                       

bool ATestCollectable::HasGameplayModifierFlag(struct FGameplayTag* modifierFlag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.HasGameplayModifierFlag"));

	ATestCollectable_HasGameplayModifierFlag_Params params;
	params.modifierFlag = modifierFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.GetUsePercentLeft
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E220              		 offset:157e220                       

float ATestCollectable::GetUsePercentLeft()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.GetUsePercentLeft"));

	ATestCollectable_GetUsePercentLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.GetModifierSum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           ModifierType                   (Parm)
// float*                         defaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068E000              		 offset:157e000                       

float ATestCollectable::GetModifierSum(struct FGameplayTag* ModifierType, float* defaultValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.GetModifierSum"));

	ATestCollectable_GetModifierSum_Params params;
	params.ModifierType = ModifierType;
	params.defaultValue = defaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.GetModifierMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           ModifierType                   (Parm)
// float*                         defaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068DF10              		 offset:157df10                       

float ATestCollectable::GetModifierMax(struct FGameplayTag* ModifierType, float* defaultValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.GetModifierMax"));

	ATestCollectable_GetModifierMax_Params params;
	params.ModifierType = ModifierType;
	params.defaultValue = defaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.GetItemInteractor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInteractor*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68068DEA0              		 offset:157dea0                       

class UInteractor* ATestCollectable::GetItemInteractor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.GetItemInteractor"));

	ATestCollectable_GetItemInteractor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.GetItemIconIndex
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068DE70              		 offset:157de70                       

unsigned char ATestCollectable::GetItemIconIndex()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.GetItemIconIndex"));

	ATestCollectable_GetItemIconIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.GetItemAddons
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UItemAddon*>      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF68068DDE0              		 offset:157dde0                       

TArray<class UItemAddon*> ATestCollectable::GetItemAddons()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.GetItemAddons"));

	ATestCollectable_GetItemAddons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.GetIconFilePath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF68068DD80              		 offset:157dd80                       

struct FString ATestCollectable::GetIconFilePath()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.GetIconFilePath"));

	ATestCollectable_GetIconFilePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.GetCount
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068DD10              		 offset:157dd10                       

int ATestCollectable::GetCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.GetCount"));

	ATestCollectable_GetCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.GetCollector
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068DCE0              		 offset:157dce0                       

class ADBDPlayer* ATestCollectable::GetCollector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.GetCollector"));

	ATestCollectable_GetCollector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.Discard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          consumedDiscard                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68068DB80              		 offset:157db80                       

void ATestCollectable::Discard(bool* consumedDiscard)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.Discard"));

	ATestCollectable_Discard_Params params;
	params.consumedDiscard = consumedDiscard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.DebugPrintStats
// (Native, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF68068DB60              		 offset:157db60                       

void ATestCollectable::DebugPrintStats()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.DebugPrintStats"));

	ATestCollectable_DebugPrintStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.CanUse
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068DB10              		 offset:157db10                       

bool ATestCollectable::CanUse()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.CanUse"));

	ATestCollectable_CanUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.CanBeDropped
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             dropper                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068DA70              		 offset:157da70                       

bool ATestCollectable::CanBeDropped(class ADBDPlayer** dropper)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.CanBeDropped"));

	ATestCollectable_CanBeDropped_Params params;
	params.dropper = dropper;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.CanBeCollected
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             collector                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68068D9D0              		 offset:157d9d0                       

bool ATestCollectable::CanBeCollected(class ADBDPlayer** collector)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.CanBeCollected"));

	ATestCollectable_CanBeCollected_Params params;
	params.collector = collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.Collectable.Authority_Use
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68068D970              		 offset:157d970                       

void ATestCollectable::Authority_Use()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.Authority_Use"));

	ATestCollectable_Authority_Use_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.Authority_RemoveItemAddon
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UItemAddon**             addon                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68068D8F0              		 offset:157d8f0                       

void ATestCollectable::Authority_RemoveItemAddon(class UItemAddon** addon)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.Authority_RemoveItemAddon"));

	ATestCollectable_Authority_RemoveItemAddon_Params params;
	params.addon = addon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.Collectable.Authority_AddItemAddon
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UItemAddon**             addon                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF68068D6D0              		 offset:157d6d0                       

void ATestCollectable::Authority_AddItemAddon(class UItemAddon** addon)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.Collectable.Authority_AddItemAddon"));

	ATestCollectable_Authority_AddItemAddon_Params params;
	params.addon = addon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.TravelToKillerServer
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806BFE30              		 offset:15afe30                       

void ATestDBDGameState::TravelToKillerServer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.TravelToKillerServer"));

	ATestDBDGameState_TravelToKillerServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.SortOfferings
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806BFE10              		 offset:15afe10                       

void ATestDBDGameState::SortOfferings()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.SortOfferings"));

	ATestDBDGameState_SortOfferings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.SetPlayersReadyToStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          playersReadyToStart            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BFD80              		 offset:15afd80                       

void ATestDBDGameState::SetPlayersReadyToStart(bool* playersReadyToStart)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.SetPlayersReadyToStart"));

	ATestDBDGameState_SetPlayersReadyToStart_Params params;
	params.playersReadyToStart = playersReadyToStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.SetKillerIntroCompletedNormalized
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         completedAmount                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BFD00              		 offset:15afd00                       

void ATestDBDGameState::SetKillerIntroCompletedNormalized(float* completedAmount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.SetKillerIntroCompletedNormalized"));

	ATestDBDGameState_SetKillerIntroCompletedNormalized_Params params;
	params.completedAmount = completedAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.SetGameLevelEnded
// (Final, Native, Public)
// Parameters:
// EEndGameReason*                endGameReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BFC80              		 offset:15afc80                       

void ATestDBDGameState::SetGameLevelEnded(EEndGameReason* endGameReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.SetGameLevelEnded"));

	ATestDBDGameState_SetGameLevelEnded_Params params;
	params.endGameReason = endGameReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.SetDisplayMapName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Display                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BFB70              		 offset:15afb70                       

void ATestDBDGameState::SetDisplayMapName(bool* Display)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.SetDisplayMapName"));

	ATestDBDGameState_SetDisplayMapName_Params params;
	params.Display = Display;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.SetBuiltLevelData
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName*                  ThemeName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  ThemeWeather                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString*                MapName                        (Parm, ZeroConstructor)
// int*                           TileCount                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDependency>*    levelDependencies              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  SpecialEventId                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF910              		 offset:15af910                       

void ATestDBDGameState::SetBuiltLevelData(struct FName* ThemeName, struct FName* ThemeWeather, struct FString* MapName, int* TileCount, TArray<struct FDependency>* levelDependencies, struct FName* SpecialEventId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.SetBuiltLevelData"));

	ATestDBDGameState_SetBuiltLevelData_Params params;
	params.ThemeName = ThemeName;
	params.ThemeWeather = ThemeWeather;
	params.MapName = MapName;
	params.TileCount = TileCount;
	params.levelDependencies = levelDependencies;
	params.SpecialEventId = SpecialEventId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Server_UpdateGameRole
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806BF8F0              		 offset:15af8f0                       

void ATestDBDGameState::Server_UpdateGameRole()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Server_UpdateGameRole"));

	ATestDBDGameState_Server_UpdateGameRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.ResetGameLevelStatus
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806BF8D0              		 offset:15af8d0                       

void ATestDBDGameState::ResetGameLevelStatus()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.ResetGameLevelStatus"));

	ATestDBDGameState_ResetGameLevelStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.RemoveTrap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AInteractable**          toRemove                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF850              		 offset:15af850                       

void ATestDBDGameState::RemoveTrap(class AInteractable** toRemove)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.RemoveTrap"));

	ATestDBDGameState_RemoveTrap_Params params;
	params.toRemove = toRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DeadByDaylight.DBDGameState.OnSlasherSetMultiDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ASlasherPlayer**         SlasherPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATestDBDGameState::OnSlasherSetMultiDelegate__DelegateSignature(class ASlasherPlayer** SlasherPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DeadByDaylight.DBDGameState.OnSlasherSetMultiDelegate__DelegateSignature"));

	ATestDBDGameState_OnSlasherSetMultiDelegate__DelegateSignature_Params params;
	params.SlasherPlayer = SlasherPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_SurvivorLeft
// (Final, Native, Private)
// Parameters:
// int*                           oldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF7D0              		 offset:15af7d0                       

void ATestDBDGameState::OnRep_SurvivorLeft(int* oldValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_SurvivorLeft"));

	ATestDBDGameState_OnRep_SurvivorLeft_Params params;
	params.oldValue = oldValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_SessionId
// (Final, Native, Private)
// FunctionAddress:0x00007FF6806BF7B0              		 offset:15af7b0                       

void ATestDBDGameState::OnRep_SessionId()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_SessionId"));

	ATestDBDGameState_OnRep_SessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_ServerJoiningData
// (Final, Native, Private)
// FunctionAddress:0x00007FF6806BF790              		 offset:15af790                       

void ATestDBDGameState::OnRep_ServerJoiningData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_ServerJoiningData"));

	ATestDBDGameState_OnRep_ServerJoiningData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_SecondsLeftInLobby
// (Final, Native, Private)
// Parameters:
// int*                           oldValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF710              		 offset:15af710                       

void ATestDBDGameState::OnRep_SecondsLeftInLobby(int* oldValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_SecondsLeftInLobby"));

	ATestDBDGameState_OnRep_SecondsLeftInLobby_Params params;
	params.oldValue = oldValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_RequiredActivatedGeneratorCount
// (Final, Native, Private)
// Parameters:
// int*                           oldRequiredActivatedGeneratorCount (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF690              		 offset:15af690                       

void ATestDBDGameState::OnRep_RequiredActivatedGeneratorCount(int* oldRequiredActivatedGeneratorCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_RequiredActivatedGeneratorCount"));

	ATestDBDGameState_OnRep_RequiredActivatedGeneratorCount_Params params;
	params.oldRequiredActivatedGeneratorCount = oldRequiredActivatedGeneratorCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_PlayersReadyToStart
// (Final, Native, Private)
// Parameters:
// bool*                          oldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF600              		 offset:15af600                       

void ATestDBDGameState::OnRep_PlayersReadyToStart(bool* oldValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_PlayersReadyToStart"));

	ATestDBDGameState_OnRep_PlayersReadyToStart_Params params;
	params.oldValue = oldValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_OnLevelReadyToPlay
// (Final, Native, Private)
// Parameters:
// bool*                          oldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF570              		 offset:15af570                       

void ATestDBDGameState::OnRep_OnLevelReadyToPlay(bool* oldValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_OnLevelReadyToPlay"));

	ATestDBDGameState_OnRep_OnLevelReadyToPlay_Params params;
	params.oldValue = oldValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_OnGameLevelLoaded
// (Final, Native, Private)
// FunctionAddress:0x00007FF6806BF550              		 offset:15af550                       

void ATestDBDGameState::OnRep_OnGameLevelLoaded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_OnGameLevelLoaded"));

	ATestDBDGameState_OnRep_OnGameLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_OnGameLevelCreated
// (Final, Native, Private)
// FunctionAddress:0x00007FF6806BF530              		 offset:15af530                       

void ATestDBDGameState::OnRep_OnGameLevelCreated()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_OnGameLevelCreated"));

	ATestDBDGameState_OnRep_OnGameLevelCreated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_OfferingSequenceReady
// (Final, Native, Private)
// FunctionAddress:0x00007FF6806BF510              		 offset:15af510                       

void ATestDBDGameState::OnRep_OfferingSequenceReady()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_OfferingSequenceReady"));

	ATestDBDGameState_OnRep_OfferingSequenceReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_ObsessionTarget
// (Final, Native, Private)
// Parameters:
// class ACamperPlayer**          previousObsessionTarget        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF490              		 offset:15af490                       

void ATestDBDGameState::OnRep_ObsessionTarget(class ACamperPlayer** previousObsessionTarget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_ObsessionTarget"));

	ATestDBDGameState_OnRep_ObsessionTarget_Params params;
	params.previousObsessionTarget = previousObsessionTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_LobbyId
// (Final, Native, Private)
// FunctionAddress:0x00007FF6806BF470              		 offset:15af470                       

void ATestDBDGameState::OnRep_LobbyId()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_LobbyId"));

	ATestDBDGameState_OnRep_LobbyId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_HatchOpened
// (Final, Native, Private)
// Parameters:
// bool*                          oldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF3E0              		 offset:15af3e0                       

void ATestDBDGameState::OnRep_HatchOpened(bool* oldValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_HatchOpened"));

	ATestDBDGameState_OnRep_HatchOpened_Params params;
	params.oldValue = oldValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_GamePresetData
// (Final, Native, Private)
// FunctionAddress:0x00007FF6806BF3C0              		 offset:15af3c0                       

void ATestDBDGameState::OnRep_GamePresetData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_GamePresetData"));

	ATestDBDGameState_OnRep_GamePresetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_EscapeDoorActivated
// (Final, Native, Private)
// Parameters:
// bool*                          oldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF330              		 offset:15af330                       

void ATestDBDGameState::OnRep_EscapeDoorActivated(bool* oldValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_EscapeDoorActivated"));

	ATestDBDGameState_OnRep_EscapeDoorActivated_Params params;
	params.oldValue = oldValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_BuildLevelData
// (Final, Native, Private)
// FunctionAddress:0x00007FF6806BF310              		 offset:15af310                       

void ATestDBDGameState::OnRep_BuildLevelData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_BuildLevelData"));

	ATestDBDGameState_OnRep_BuildLevelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.OnRep_ActivatedGeneratorCount
// (Final, Native, Private)
// Parameters:
// int*                           oldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF290              		 offset:15af290                       

void ATestDBDGameState::OnRep_ActivatedGeneratorCount(int* oldValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.OnRep_ActivatedGeneratorCount"));

	ATestDBDGameState_OnRep_ActivatedGeneratorCount_Params params;
	params.oldValue = oldValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction DeadByDaylight.DBDGameState.OnLevelReadyToPlayDelegate__DelegateSignature
// (Public, Delegate)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ATestDBDGameState::OnLevelReadyToPlayDelegate__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DeadByDaylight.DBDGameState.OnLevelReadyToPlayDelegate__DelegateSignature"));

	ATestDBDGameState_OnLevelReadyToPlayDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_UpdateRemainingQueueTime
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int*                           remainingQueueTimeSeconds      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsStable                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BF1C0              		 offset:15af1c0                       

void ATestDBDGameState::Multicast_UpdateRemainingQueueTime(int* remainingQueueTimeSeconds, bool* bIsStable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_UpdateRemainingQueueTime"));

	ATestDBDGameState_Multicast_UpdateRemainingQueueTime_Params params;
	params.remainingQueueTimeSeconds = remainingQueueTimeSeconds;
	params.bIsStable = bIsStable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_UpdateCharacterFromGamePreset
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ADBDPlayerState_Menu**   playerState_Menu               (Parm, ZeroConstructor, IsPlainOldData)
// struct FGamePresetData*        GamePresetData                 (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF6806BF050              		 offset:15af050                       

void ATestDBDGameState::Multicast_UpdateCharacterFromGamePreset(class ADBDPlayerState_Menu** playerState_Menu, struct FGamePresetData* GamePresetData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_UpdateCharacterFromGamePreset"));

	ATestDBDGameState_Multicast_UpdateCharacterFromGamePreset_Params params;
	params.playerState_Menu = playerState_Menu;
	params.GamePresetData = GamePresetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_SetServerLeftGame
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool*                          hasServerLeftGame              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BEFC0              		 offset:15aefc0                       

void ATestDBDGameState::Multicast_SetServerLeftGame(bool* hasServerLeftGame)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_SetServerLeftGame"));

	ATestDBDGameState_Multicast_SetServerLeftGame_Params params;
	params.hasServerLeftGame = hasServerLeftGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_SetLostServerConnection
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool*                          hasLostServerConnection        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BEF30              		 offset:15aef30                       

void ATestDBDGameState::Multicast_SetLostServerConnection(bool* hasLostServerConnection)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_SetLostServerConnection"));

	ATestDBDGameState_Multicast_SetLostServerConnection_Params params;
	params.hasLostServerConnection = hasLostServerConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_SetGameLevelEnded
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// EEndGameReason*                endGameReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BEEB0              		 offset:15aeeb0                       

void ATestDBDGameState::Multicast_SetGameLevelEnded(EEndGameReason* endGameReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_SetGameLevelEnded"));

	ATestDBDGameState_Multicast_SetGameLevelEnded_Params params;
	params.endGameReason = endGameReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_SetGameEnded
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool*                          hasServerLeftGame              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BEE20              		 offset:15aee20                       

void ATestDBDGameState::Multicast_SetGameEnded(bool* hasServerLeftGame)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_SetGameEnded"));

	ATestDBDGameState_Multicast_SetGameEnded_Params params;
	params.hasServerLeftGame = hasServerLeftGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_SetBuiltLevelData
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FName*                  ThemeName                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  ThemeWeather                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString*                MapName                        (Parm, ZeroConstructor)
// int*                           TileCount                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDependency>*    levelDependencies              (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// struct FName*                  SpecialEventId                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BEC00              		 offset:15aec00                       

void ATestDBDGameState::Multicast_SetBuiltLevelData(struct FName* ThemeName, struct FName* ThemeWeather, struct FString* MapName, int* TileCount, TArray<struct FDependency>* levelDependencies, struct FName* SpecialEventId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_SetBuiltLevelData"));

	ATestDBDGameState_Multicast_SetBuiltLevelData_Params params;
	params.ThemeName = ThemeName;
	params.ThemeWeather = ThemeWeather;
	params.MapName = MapName;
	params.TileCount = TileCount;
	params.levelDependencies = levelDependencies;
	params.SpecialEventId = SpecialEventId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_OnGameStarted
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// FunctionAddress:0x00007FF68068D970              		 offset:157d970                       

void ATestDBDGameState::Multicast_OnGameStarted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_OnGameStarted"));

	ATestDBDGameState_Multicast_OnGameStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_KillerServerSearchFailed
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// FunctionAddress:0x00007FF6806BEBE0              		 offset:15aebe0                       

void ATestDBDGameState::Multicast_KillerServerSearchFailed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_KillerServerSearchFailed"));

	ATestDBDGameState_Multicast_KillerServerSearchFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_KillerSearchStarted
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// FunctionAddress:0x00007FF6806BEBC0              		 offset:15aebc0                       

void ATestDBDGameState::Multicast_KillerSearchStarted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_KillerSearchStarted"));

	ATestDBDGameState_Multicast_KillerSearchStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Multicast_JoinKillerServerFailed
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// FunctionAddress:0x00007FF6806BEBA0              		 offset:15aeba0                       

void ATestDBDGameState::Multicast_JoinKillerServerFailed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Multicast_JoinKillerServerFailed"));

	ATestDBDGameState_Multicast_JoinKillerServerFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.KillerServerFound
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FServerJoiningData*     joinParams                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6806BEA00              		 offset:15aea00                       

void ATestDBDGameState::KillerServerFound(struct FServerJoiningData* joinParams)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.KillerServerFound"));

	ATestDBDGameState_KillerServerFound_Params params;
	params.joinParams = joinParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.IsPlayerDistributionReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE9E0              		 offset:15ae9e0                       

bool ATestDBDGameState::IsPlayerDistributionReady()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsPlayerDistributionReady"));

	ATestDBDGameState_IsPlayerDistributionReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsOnePlayerLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE9B0              		 offset:15ae9b0                       

bool ATestDBDGameState::IsOnePlayerLeft()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsOnePlayerLeft"));

	ATestDBDGameState_IsOnePlayerLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsOfferingReceived
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE980              		 offset:15ae980                       

bool ATestDBDGameState::IsOfferingReceived()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsOfferingReceived"));

	ATestDBDGameState_IsOfferingReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsObsessionTargetAliveInLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE950              		 offset:15ae950                       

bool ATestDBDGameState::IsObsessionTargetAliveInLevel()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsObsessionTargetAliveInLevel"));

	ATestDBDGameState_IsObsessionTargetAliveInLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsObsessionTargetAlive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE920              		 offset:15ae920                       

bool ATestDBDGameState::IsObsessionTargetAlive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsObsessionTargetAlive"));

	ATestDBDGameState_IsObsessionTargetAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsLightingGenerated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE900              		 offset:15ae900                       

bool ATestDBDGameState::IsLightingGenerated()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsLightingGenerated"));

	ATestDBDGameState_IsLightingGenerated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsLevelSetupDone
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE8D0              		 offset:15ae8d0                       

bool ATestDBDGameState::IsLevelSetupDone()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsLevelSetupDone"));

	ATestDBDGameState_IsLevelSetupDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsLevelReadyToPlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE8B0              		 offset:15ae8b0                       

bool ATestDBDGameState::IsLevelReadyToPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsLevelReadyToPlay"));

	ATestDBDGameState_IsLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsIntroCompleted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE890              		 offset:15ae890                       

bool ATestDBDGameState::IsIntroCompleted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsIntroCompleted"));

	ATestDBDGameState_IsIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsHatchVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE860              		 offset:15ae860                       

bool ATestDBDGameState::IsHatchVisible()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsHatchVisible"));

	ATestDBDGameState_IsHatchVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsEscapeRequirementCompleted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE830              		 offset:15ae830                       

bool ATestDBDGameState::IsEscapeRequirementCompleted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsEscapeRequirementCompleted"));

	ATestDBDGameState_IsEscapeRequirementCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsEscapeDoorOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE7D0              		 offset:15ae7d0                       

bool ATestDBDGameState::IsEscapeDoorOpen()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsEscapeDoorOpen"));

	ATestDBDGameState_IsEscapeDoorOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IsEscapeDoorActivated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE7A0              		 offset:15ae7a0                       

bool ATestDBDGameState::IsEscapeDoorActivated()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IsEscapeDoorActivated"));

	ATestDBDGameState_IsEscapeDoorActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.IntroCompleted
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806BE780              		 offset:15ae780                       

void ATestDBDGameState::IntroCompleted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.IntroCompleted"));

	ATestDBDGameState_IntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.GetTraps
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AInteractable*>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6806BE6D0              		 offset:15ae6d0                       

TArray<class AInteractable*> ATestDBDGameState::GetTraps()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetTraps"));

	ATestDBDGameState_GetTraps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetSurvivorLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE6B0              		 offset:15ae6b0                       

int ATestDBDGameState::GetSurvivorLeft()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetSurvivorLeft"));

	ATestDBDGameState_GetSurvivorLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetSelectedOfferings
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FSelectedOffering> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6806BE680              		 offset:15ae680                       

TArray<struct FSelectedOffering> ATestDBDGameState::GetSelectedOfferings()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetSelectedOfferings"));

	ATestDBDGameState_GetSelectedOfferings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetSelectedOffering
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSelectedOffering       SelectedOffering               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE590              		 offset:15ae590                       

bool ATestDBDGameState::GetSelectedOffering(int* Index, struct FSelectedOffering* SelectedOffering)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetSelectedOffering"));

	ATestDBDGameState_GetSelectedOffering_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedOffering != nullptr)
		*SelectedOffering = params.SelectedOffering;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetRequiredActivatedGeneratorCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE560              		 offset:15ae560                       

int ATestDBDGameState::GetRequiredActivatedGeneratorCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetRequiredActivatedGeneratorCount"));

	ATestDBDGameState_GetRequiredActivatedGeneratorCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetRemainingGeneratorsNeeded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE530              		 offset:15ae530                       

int ATestDBDGameState::GetRemainingGeneratorsNeeded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetRemainingGeneratorsNeeded"));

	ATestDBDGameState_GetRemainingGeneratorsNeeded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetPlayerStateByMirrorsID
// (Final, Native, Public, Const)
// Parameters:
// struct FString*                ID                             (Parm, ZeroConstructor)
// class ADBDPlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE460              		 offset:15ae460                       

class ADBDPlayerState* ATestDBDGameState::GetPlayerStateByMirrorsID(struct FString* ID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetPlayerStateByMirrorsID"));

	ATestDBDGameState_GetPlayerStateByMirrorsID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetPlayerStateByIDString
// (Final, Native, Public, Const)
// Parameters:
// struct FString*                ID                             (Parm, ZeroConstructor)
// class ADBDPlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE3B0              		 offset:15ae3b0                       

class ADBDPlayerState* ATestDBDGameState::GetPlayerStateByIDString(struct FString* ID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetPlayerStateByIDString"));

	ATestDBDGameState_GetPlayerStateByIDString_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetPlayersReadyToStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE510              		 offset:15ae510                       

bool ATestDBDGameState::GetPlayersReadyToStart()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetPlayersReadyToStart"));

	ATestDBDGameState_GetPlayersReadyToStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetPlayerRoleCounts
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            survivorCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            killerCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            spectatorCount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE270              		 offset:15ae270                       

void ATestDBDGameState::GetPlayerRoleCounts(int* survivorCount, int* killerCount, int* spectatorCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetPlayerRoleCounts"));

	ATestDBDGameState_GetPlayerRoleCounts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (survivorCount != nullptr)
		*survivorCount = params.survivorCount;
	if (killerCount != nullptr)
		*killerCount = params.killerCount;
	if (spectatorCount != nullptr)
		*spectatorCount = params.spectatorCount;
}


// Function DeadByDaylight.DBDGameState.GetObsessionTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ACamperPlayer*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE250              		 offset:15ae250                       

class ACamperPlayer* ATestDBDGameState::GetObsessionTarget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetObsessionTarget"));

	ATestDBDGameState_GetObsessionTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetNumberOfOtherActiveSurvivors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             exception                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE1C0              		 offset:15ae1c0                       

int ATestDBDGameState::GetNumberOfOtherActiveSurvivors(class ADBDPlayer** exception)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetNumberOfOtherActiveSurvivors"));

	ATestDBDGameState_GetNumberOfOtherActiveSurvivors_Params params;
	params.exception = exception;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetNumberOfActiveSurvivors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE190              		 offset:15ae190                       

int ATestDBDGameState::GetNumberOfActiveSurvivors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetNumberOfActiveSurvivors"));

	ATestDBDGameState_GetNumberOfActiveSurvivors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetMapThemeName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE150              		 offset:15ae150                       

struct FName ATestDBDGameState::GetMapThemeName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetMapThemeName"));

	ATestDBDGameState_GetMapThemeName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetLocalPlayerState
// (Final, Native, Public, Const)
// Parameters:
// class ADBDPlayerState*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE120              		 offset:15ae120                       

class ADBDPlayerState* ATestDBDGameState::GetLocalPlayerState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetLocalPlayerState"));

	ATestDBDGameState_GetLocalPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetLocalPlayerPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE0F0              		 offset:15ae0f0                       

class ADBDPlayer* ATestDBDGameState::GetLocalPlayerPawn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetLocalPlayerPawn"));

	ATestDBDGameState_GetLocalPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetLocalPlayerBasePawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE0C0              		 offset:15ae0c0                       

class APawn* ATestDBDGameState::GetLocalPlayerBasePawn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetLocalPlayerBasePawn"));

	ATestDBDGameState_GetLocalPlayerBasePawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetLevelData
// (Final, Native, Public, Const)
// Parameters:
// struct FBuiltLevelData         ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6806BE090              		 offset:15ae090                       

struct FBuiltLevelData ATestDBDGameState::GetLevelData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetLevelData"));

	ATestDBDGameState_GetLevelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetKillerIntroCompletedNormalized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE070              		 offset:15ae070                       

float ATestDBDGameState::GetKillerIntroCompletedNormalized()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetKillerIntroCompletedNormalized"));

	ATestDBDGameState_GetKillerIntroCompletedNormalized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetKiller
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASlasherPlayer*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE040              		 offset:15ae040                       

class ASlasherPlayer* ATestDBDGameState::GetKiller()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetKiller"));

	ATestDBDGameState_GetKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetIsGameEnded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BE010              		 offset:15ae010                       

bool ATestDBDGameState::GetIsGameEnded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetIsGameEnded"));

	ATestDBDGameState_GetIsGameEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetInGameSearchables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ASearchable*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6806BDF90              		 offset:15adf90                       

TArray<class ASearchable*> ATestDBDGameState::GetInGameSearchables()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetInGameSearchables"));

	ATestDBDGameState_GetInGameSearchables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetInGamePallets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class APallet*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6806BDF10              		 offset:15adf10                       

TArray<class APallet*> ATestDBDGameState::GetInGamePallets()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetInGamePallets"));

	ATestDBDGameState_GetInGamePallets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetInGameMeatHooks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AMeatHook*>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6806BDE90              		 offset:15ade90                       

TArray<class AMeatHook*> ATestDBDGameState::GetInGameMeatHooks()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetInGameMeatHooks"));

	ATestDBDGameState_GetInGameMeatHooks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetInGameHatches
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AHatch*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6806BDE10              		 offset:15ade10                       

TArray<class AHatch*> ATestDBDGameState::GetInGameHatches()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetInGameHatches"));

	ATestDBDGameState_GetInGameHatches_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetInGameGenerators
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AGenerator*>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6806BDD90              		 offset:15add90                       

TArray<class AGenerator*> ATestDBDGameState::GetInGameGenerators()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetInGameGenerators"));

	ATestDBDGameState_GetInGameGenerators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetInGameEscapeDoors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AEscapeDoor*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6806BDD10              		 offset:15add10                       

TArray<class AEscapeDoor*> ATestDBDGameState::GetInGameEscapeDoors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetInGameEscapeDoors"));

	ATestDBDGameState_GetInGameEscapeDoors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetGameLevelLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806BDCF0              		 offset:15adcf0                       

bool ATestDBDGameState::GetGameLevelLoaded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetGameLevelLoaded"));

	ATestDBDGameState_GetGameLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetEndGameStateComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEndGameStateComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6806BDCC0              		 offset:15adcc0                       

class UEndGameStateComponent* ATestDBDGameState::GetEndGameStateComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetEndGameStateComponent"));

	ATestDBDGameState_GetEndGameStateComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.GetCharacterCollection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCharacterCollection*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6806BDC50              		 offset:15adc50                       

class UCharacterCollection* ATestDBDGameState::GetCharacterCollection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.GetCharacterCollection"));

	ATestDBDGameState_GetCharacterCollection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameState.CallOnSlasherSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        callback                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6806BDB10              		 offset:15adb10                       

void ATestDBDGameState::CallOnSlasherSet(struct FScriptDelegate* callback)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.CallOnSlasherSet"));

	ATestDBDGameState_CallOnSlasherSet_Params params;
	params.callback = callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.CallOnLevelReadyToPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        callback                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6806BDA50              		 offset:15ada50                       

void ATestDBDGameState::CallOnLevelReadyToPlay(struct FScriptDelegate* callback)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.CallOnLevelReadyToPlay"));

	ATestDBDGameState_CallOnLevelReadyToPlay_Params params;
	params.callback = callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.BroadcastOnSetBuildLevelData
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806BDA30              		 offset:15ada30                       

void ATestDBDGameState::BroadcastOnSetBuildLevelData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.BroadcastOnSetBuildLevelData"));

	ATestDBDGameState_BroadcastOnSetBuildLevelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_SetSurvivorLeft
// (Final, Native, Public)
// Parameters:
// int*                           survivorRemaining              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BD9B0              		 offset:15ad9b0                       

void ATestDBDGameState::Authority_SetSurvivorLeft(int* survivorRemaining)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_SetSurvivorLeft"));

	ATestDBDGameState_Authority_SetSurvivorLeft_Params params;
	params.survivorRemaining = survivorRemaining;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_SetServerJoiningData
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FServerJoiningData*     joiningData                    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6806BD8B0              		 offset:15ad8b0                       

void ATestDBDGameState::Authority_SetServerJoiningData(struct FServerJoiningData* joiningData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_SetServerJoiningData"));

	ATestDBDGameState_Authority_SetServerJoiningData_Params params;
	params.joiningData = joiningData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_SetLevelReadyToPlay
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806BD890              		 offset:15ad890                       

void ATestDBDGameState::Authority_SetLevelReadyToPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_SetLevelReadyToPlay"));

	ATestDBDGameState_Authority_SetLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_SetHatchOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          OPENED                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BD800              		 offset:15ad800                       

void ATestDBDGameState::Authority_SetHatchOpen(bool* OPENED)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_SetHatchOpen"));

	ATestDBDGameState_Authority_SetHatchOpen_Params params;
	params.OPENED = OPENED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_SetGameSelectedOffering
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FSelectedOffering>* offerings                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6806BD750              		 offset:15ad750                       

void ATestDBDGameState::Authority_SetGameSelectedOffering(TArray<struct FSelectedOffering>* offerings)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_SetGameSelectedOffering"));

	ATestDBDGameState_Authority_SetGameSelectedOffering_Params params;
	params.offerings = offerings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_SetGameLevelLoaded
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806BD730              		 offset:15ad730                       

void ATestDBDGameState::Authority_SetGameLevelLoaded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_SetGameLevelLoaded"));

	ATestDBDGameState_Authority_SetGameLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_SetGameLevelEnded
// (Final, Native, Public)
// Parameters:
// EEndGameReason*                endGameReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BD6B0              		 offset:15ad6b0                       

void ATestDBDGameState::Authority_SetGameLevelEnded(EEndGameReason* endGameReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_SetGameLevelEnded"));

	ATestDBDGameState_Authority_SetGameLevelEnded_Params params;
	params.endGameReason = endGameReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_SetGameLevelCreated
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806BD690              		 offset:15ad690                       

void ATestDBDGameState::Authority_SetGameLevelCreated()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_SetGameLevelCreated"));

	ATestDBDGameState_Authority_SetGameLevelCreated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_SetEscapeDoorOpened
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          OPENED                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BD600              		 offset:15ad600                       

void ATestDBDGameState::Authority_SetEscapeDoorOpened(bool* OPENED)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_SetEscapeDoorOpened"));

	ATestDBDGameState_Authority_SetEscapeDoorOpened_Params params;
	params.OPENED = OPENED;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_SetAllPlayerLoaded
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806BD5E0              		 offset:15ad5e0                       

void ATestDBDGameState::Authority_SetAllPlayerLoaded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_SetAllPlayerLoaded"));

	ATestDBDGameState_Authority_SetAllPlayerLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_EvaluateObsessionTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADBDPlayer**             potentialTarget                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BD560              		 offset:15ad560                       

void ATestDBDGameState::Authority_EvaluateObsessionTarget(class ADBDPlayer** potentialTarget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_EvaluateObsessionTarget"));

	ATestDBDGameState_Authority_EvaluateObsessionTarget_Params params;
	params.potentialTarget = potentialTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_EscapeThroughHatch
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806BD540              		 offset:15ad540                       

void ATestDBDGameState::Authority_EscapeThroughHatch()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_EscapeThroughHatch"));

	ATestDBDGameState_Authority_EscapeThroughHatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.Authority_EnableObsession
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806BD520              		 offset:15ad520                       

void ATestDBDGameState::Authority_EnableObsession()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.Authority_EnableObsession"));

	ATestDBDGameState_Authority_EnableObsession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameState.AddTrap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AInteractable**          toAdd                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BD470              		 offset:15ad470                       

void ATestDBDGameState::AddTrap(class AInteractable** toAdd)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameState.AddTrap"));

	ATestDBDGameState_AddTrap_Params params;
	params.toAdd = toAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA80              		 offset:165aa80                       

bool UTestStatusEffect::ShouldDisplayStatusEffectIcon()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon"));

	UTestStatusEffect_ShouldDisplayStatusEffectIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA00              		 offset:165aa00                       

void UTestStatusEffect::SetStatusEffectIconPercentage(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage"));

	UTestStatusEffect_SetStatusEffectIconPercentage_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.SetShouldDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          On                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076A970              		 offset:165a970                       

void UTestStatusEffect::SetShouldDisplay(bool* On)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetShouldDisplay"));

	UTestStatusEffect_SetShouldDisplay_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          currentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680736720              		 offset:1626720                       

void UTestStatusEffect::OnShouldDisplayChanged(bool* currentValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged"));

	UTestStatusEffect_OnShouldDisplayChanged_Params params;
	params.currentValue = currentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
// (Final, Native, Protected)
// FunctionAddress:0x00007FF68076A210              		 offset:165a210                       

void UTestStatusEffect::OnRep_ShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay"));

	UTestStatusEffect_OnRep_ShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769860              		 offset:1659860                       

void UTestStatusEffect::Multicast_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime"));

	UTestStatusEffect_Multicast_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FName*                  statusEffectId                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             originatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         customParam                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayModifierContainer** originatingEffect              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          shouldDisplay                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769680              		 offset:1659680                       

void UTestStatusEffect::Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect"));

	UTestStatusEffect_Multicast_InitializeStatusEffect_Params params;
	params.statusEffectId = statusEffectId;
	params.originatingPlayer = originatingPlayer;
	params.customParam = customParam;
	params.originatingEffect = originatingEffect;
	params.shouldDisplay = shouldDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769650              		 offset:1659650                       

bool UTestStatusEffect::IsOriginatorHooked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorHooked"));

	UTestStatusEffect_IsOriginatorHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769620              		 offset:1659620                       

bool UTestStatusEffect::IsOriginatorAlive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorAlive"));

	UTestStatusEffect_IsOriginatorAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         AdditiveRangeModifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769590              		 offset:1659590                       

bool UTestStatusEffect::IsKillerInOriginatorRange(float* AdditiveRangeModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange"));

	UTestStatusEffect_IsKillerInOriginatorRange_Params params;
	params.AdditiveRangeModifier = AdditiveRangeModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769560              		 offset:1659560                       

bool UTestStatusEffect::IsInOriginatorRange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsInOriginatorRange"));

	UTestStatusEffect_IsInOriginatorRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.InitializeLifetime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807694E0              		 offset:16594e0                       

void UTestStatusEffect::InitializeLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.InitializeLifetime"));

	UTestStatusEffect_InitializeLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807693C0              		 offset:16593c0                       

float UTestStatusEffect::GetStatusEffectCooldownRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate"));

	UTestStatusEffect_GetStatusEffectCooldownRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetShouldDisplay
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769390              		 offset:1659390                       

bool UTestStatusEffect::GetShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetShouldDisplay"));

	UTestStatusEffect_GetShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769370              		 offset:1659370                       

class ADBDPlayer* UTestStatusEffect::GetOriginatingPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetOriginatingPlayer"));

	UTestStatusEffect_GetOriginatingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769330              		 offset:1659330                       

float UTestStatusEffect::GetLifetimeDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetLifetimeDuration"));

	UTestStatusEffect_GetLifetimeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float*                         percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LevelToDisplay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807691A0              		 offset:16591a0                       

void UTestStatusEffect::FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent"));

	UTestStatusEffect_FireActiveStatusEffectEvent_Params params;
	params.percentage = percentage;
	params.LevelToDisplay = LevelToDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF680769180              		 offset:1659180                       

void UTestStatusEffect::BroadcastOriginatorGameEventNotification()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification"));

	UTestStatusEffect_BroadcastOriginatorGameEventNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayNotificationData* notificationData               (Parm)
// bool*                          addToHistory                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768FD0              		 offset:1658fd0                       

void UTestStatusEffect::BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification"));

	UTestStatusEffect_BroadcastGameEventNotification_Params params;
	params.notificationData = notificationData;
	params.addToHistory = addToHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768F50              		 offset:1658f50                       

void UTestStatusEffect::Authority_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime"));

	UTestStatusEffect_Authority_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680768F30              		 offset:1658f30                       

void UTestStatusEffect::Authority_RemoveSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_RemoveSelf"));

	UTestStatusEffect_Authority_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_EndSelf
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680743940              		 offset:1633940                       

void UTestStatusEffect::Authority_EndSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_EndSelf"));

	UTestStatusEffect_Authority_EndSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.TheMettleOfMan.ShowOnKOPreventedFX
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UTheMettleOfMan::ShowOnKOPreventedFX()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.TheMettleOfMan.ShowOnKOPreventedFX"));

	UTheMettleOfMan_ShowOnKOPreventedFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.TheMettleOfMan.Multicast_OnKOPrevented
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// FunctionAddress:0x00007FF6801027F0              		 offset:ff27f0                        

void UTheMettleOfMan::Multicast_OnKOPrevented()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.TheMettleOfMan.Multicast_OnKOPrevented"));

	UTheMettleOfMan_Multicast_OnKOPrevented_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators
// (Final, Native, Private)
// FunctionAddress:0x00007FF680102B10              		 offset:ff2b10                        

void UThrillingTremors::OnRep_BlockedGenerators()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators"));

	UThrillingTremors_OnRep_BlockedGenerators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA80              		 offset:165aa80                       

bool UTimedObliviousEffect::ShouldDisplayStatusEffectIcon()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon"));

	UTimedObliviousEffect_ShouldDisplayStatusEffectIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076AA00              		 offset:165aa00                       

void UTimedObliviousEffect::SetStatusEffectIconPercentage(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage"));

	UTimedObliviousEffect_SetStatusEffectIconPercentage_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.SetShouldDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          On                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68076A970              		 offset:165a970                       

void UTimedObliviousEffect::SetShouldDisplay(bool* On)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.SetShouldDisplay"));

	UTimedObliviousEffect_SetShouldDisplay_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          currentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680736720              		 offset:1626720                       

void UTimedObliviousEffect::OnShouldDisplayChanged(bool* currentValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged"));

	UTimedObliviousEffect_OnShouldDisplayChanged_Params params;
	params.currentValue = currentValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
// (Final, Native, Protected)
// FunctionAddress:0x00007FF68076A210              		 offset:165a210                       

void UTimedObliviousEffect::OnRep_ShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay"));

	UTimedObliviousEffect_OnRep_ShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769860              		 offset:1659860                       

void UTimedObliviousEffect::Multicast_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime"));

	UTimedObliviousEffect_Multicast_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FName*                  statusEffectId                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             originatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         customParam                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayModifierContainer** originatingEffect              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          shouldDisplay                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680769680              		 offset:1659680                       

void UTimedObliviousEffect::Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect"));

	UTimedObliviousEffect_Multicast_InitializeStatusEffect_Params params;
	params.statusEffectId = statusEffectId;
	params.originatingPlayer = originatingPlayer;
	params.customParam = customParam;
	params.originatingEffect = originatingEffect;
	params.shouldDisplay = shouldDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769650              		 offset:1659650                       

bool UTimedObliviousEffect::IsOriginatorHooked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorHooked"));

	UTimedObliviousEffect_IsOriginatorHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769620              		 offset:1659620                       

bool UTimedObliviousEffect::IsOriginatorAlive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsOriginatorAlive"));

	UTimedObliviousEffect_IsOriginatorAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         AdditiveRangeModifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769590              		 offset:1659590                       

bool UTimedObliviousEffect::IsKillerInOriginatorRange(float* AdditiveRangeModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange"));

	UTimedObliviousEffect_IsKillerInOriginatorRange_Params params;
	params.AdditiveRangeModifier = AdditiveRangeModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769560              		 offset:1659560                       

bool UTimedObliviousEffect::IsInOriginatorRange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.IsInOriginatorRange"));

	UTimedObliviousEffect_IsInOriginatorRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.InitializeLifetime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807694E0              		 offset:16594e0                       

void UTimedObliviousEffect::InitializeLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.InitializeLifetime"));

	UTimedObliviousEffect_InitializeLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807693C0              		 offset:16593c0                       

float UTimedObliviousEffect::GetStatusEffectCooldownRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate"));

	UTimedObliviousEffect_GetStatusEffectCooldownRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetShouldDisplay
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769390              		 offset:1659390                       

bool UTimedObliviousEffect::GetShouldDisplay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetShouldDisplay"));

	UTimedObliviousEffect_GetShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769370              		 offset:1659370                       

class ADBDPlayer* UTimedObliviousEffect::GetOriginatingPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetOriginatingPlayer"));

	UTimedObliviousEffect_GetOriginatingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680769330              		 offset:1659330                       

float UTimedObliviousEffect::GetLifetimeDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.GetLifetimeDuration"));

	UTimedObliviousEffect_GetLifetimeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float*                         percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LevelToDisplay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807691A0              		 offset:16591a0                       

void UTimedObliviousEffect::FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent"));

	UTimedObliviousEffect_FireActiveStatusEffectEvent_Params params;
	params.percentage = percentage;
	params.LevelToDisplay = LevelToDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF680769180              		 offset:1659180                       

void UTimedObliviousEffect::BroadcastOriginatorGameEventNotification()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification"));

	UTimedObliviousEffect_BroadcastOriginatorGameEventNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayNotificationData* notificationData               (Parm)
// bool*                          addToHistory                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768FD0              		 offset:1658fd0                       

void UTimedObliviousEffect::BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification"));

	UTimedObliviousEffect_BroadcastGameEventNotification_Params params;
	params.notificationData = notificationData;
	params.addToHistory = addToHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Lifetime                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680768F50              		 offset:1658f50                       

void UTimedObliviousEffect::Authority_SetRemainingLifetime(float* Lifetime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime"));

	UTimedObliviousEffect_Authority_SetRemainingLifetime_Params params;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680768F30              		 offset:1658f30                       

void UTimedObliviousEffect::Authority_RemoveSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_RemoveSelf"));

	UTimedObliviousEffect_Authority_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.StatusEffect.Authority_EndSelf
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680743940              		 offset:1633940                       

void UTimedObliviousEffect::Authority_EndSelf()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.StatusEffect.Authority_EndSelf"));

	UTimedObliviousEffect_Authority_EndSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.OnPostItemAddonsCreation
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class ACollectable**           Item                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UWeddingRing::OnPostItemAddonsCreation(class ADBDPlayer** Player, class ACollectable** Item)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.OnPostItemAddonsCreation"));

	UWeddingRing_OnPostItemAddonsCreation_Params params;
	params.Player = Player;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.Multicast_SetBaseItem
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
// Parameters:
// class ACollectable**           baseItem                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68071C7B0              		 offset:160c7b0                       

void UWeddingRing::Multicast_SetBaseItem(class ACollectable** baseItem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.Multicast_SetBaseItem"));

	UWeddingRing_Multicast_SetBaseItem_Params params;
	params.baseItem = baseItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.Multicast_InitializeItemAddon
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// struct FName*                  addonID                        (Parm, ZeroConstructor, IsPlainOldData)
// EInventoryItemType*            ItemType                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68071C440              		 offset:160c440                       

void UWeddingRing::Multicast_InitializeItemAddon(struct FName* addonID, EInventoryItemType* ItemType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.Multicast_InitializeItemAddon"));

	UWeddingRing_Multicast_InitializeItemAddon_Params params;
	params.addonID = addonID;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.Multicast_AddAddonToItem
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ACollectable**           Item                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68071C3B0              		 offset:160c3b0                       

void UWeddingRing::Multicast_AddAddonToItem(class ACollectable** Item)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.Multicast_AddAddonToItem"));

	UWeddingRing_Multicast_AddAddonToItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.IsReadyForInitialization
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68071C340              		 offset:160c340                       

bool UWeddingRing::IsReadyForInitialization()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.IsReadyForInitialization"));

	UWeddingRing_IsReadyForInitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ItemAddon.InitializeAddon
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UWeddingRing::InitializeAddon()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.InitializeAddon"));

	UWeddingRing_InitializeAddon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.DebugPrintStats
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UWeddingRing::DebugPrintStats()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.DebugPrintStats"));

	UWeddingRing_DebugPrintStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.Authority_OnCollectablePickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UWeddingRing::Authority_OnCollectablePickedUp(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.Authority_OnCollectablePickedUp"));

	UWeddingRing_Authority_OnCollectablePickedUp_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.Authority_OnCollectableDropped
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UWeddingRing::Authority_OnCollectableDropped(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.Authority_OnCollectableDropped"));

	UWeddingRing_Authority_OnCollectableDropped_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.ApplyMetaModifiers
// (Final, Native, Private)
// FunctionAddress:0x00007FF68071B170              		 offset:160b170                       

void UWeddingRing::ApplyMetaModifiers()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.ApplyMetaModifiers"));

	UWeddingRing_ApplyMetaModifiers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACamperPlayer**          survivorToReveal               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UYamaokaFamilyCrest::RevealSurvivor(class ACamperPlayer** survivorToReveal)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor"));

	UYamaokaFamilyCrest_RevealSurvivor_Params params;
	params.survivorToReveal = survivorToReveal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount
// (Final, Native, Private)
// FunctionAddress:0x00007FF680102AF0              		 offset:ff2af0                        

void UYamaokaFamilyCrest::OnRep_AddonActivationCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount"));

	UYamaokaFamilyCrest_OnRep_AddonActivationCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
