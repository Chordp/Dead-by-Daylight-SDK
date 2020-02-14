// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheTrapper_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TheTrapper.BearTrap.SetTrappedPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class ADBDPlayer**             trappedPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BFBF0              		 offset:16afbf0                       

void ABearTrap::SetTrappedPlayer(class ADBDPlayer** trappedPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.SetTrappedPlayer"));

	ABearTrap_SetTrappedPlayer_Params params;
	params.trappedPlayer = trappedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrap.SetIsTrapSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BFB60              		 offset:16afb60                       

void ABearTrap::SetIsTrapSet(bool* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.SetIsTrapSet"));

	ABearTrap_SetIsTrapSet_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrap.OnSafetyZoneEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BFA20              		 offset:16afa20                       

void ABearTrap::OnSafetyZoneEndOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.OnSafetyZoneEndOverlap"));

	ABearTrap_OnSafetyZoneEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrap.IsTrapSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BF9C0              		 offset:16af9c0                       

bool ABearTrap::IsTrapSet()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.IsTrapSet"));

	ABearTrap_IsTrapSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheTrapper.BearTrap.IsTrapperOutOfSafetyZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BF9F0              		 offset:16af9f0                       

bool ABearTrap::IsTrapperOutOfSafetyZone()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.IsTrapperOutOfSafetyZone"));

	ABearTrap_IsTrapperOutOfSafetyZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheTrapper.BearTrap.InitalizeTrapZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    Primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6807BF940              		 offset:16af940                       

void ABearTrap::InitalizeTrapZone(class UPrimitiveComponent** Primitive)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.InitalizeTrapZone"));

	ABearTrap_InitalizeTrapZone_Params params;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrap.InitalizeTrapSurvivorInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInteractionDefinition** Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6807BF8C0              		 offset:16af8c0                       

void ABearTrap::InitalizeTrapSurvivorInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.InitalizeTrapSurvivorInteraction"));

	ABearTrap_InitalizeTrapSurvivorInteraction_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrap.InitalizeTrapKillerInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInteractionDefinition** Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6807BF840              		 offset:16af840                       

void ABearTrap::InitalizeTrapKillerInteraction(class UInteractionDefinition** Interaction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.InitalizeTrapKillerInteraction"));

	ABearTrap_InitalizeTrapKillerInteraction_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrap.InitalizeSafetyZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    Primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6807BF7C0              		 offset:16af7c0                       

void ABearTrap::InitalizeSafetyZone(class UPrimitiveComponent** Primitive)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.InitalizeSafetyZone"));

	ABearTrap_InitalizeSafetyZone_Params params;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrap.HasTrappedPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BF790              		 offset:16af790                       

bool ABearTrap::HasTrappedPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.HasTrappedPlayer"));

	ABearTrap_HasTrappedPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheTrapper.BearTrap.GetTrappedPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BF760              		 offset:16af760                       

class ADBDPlayer* ABearTrap::GetTrappedPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.GetTrappedPlayer"));

	ABearTrap_GetTrappedPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheTrapper.BearTrap.GetAnimInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBearTrapAnimInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807BF730              		 offset:16af730                       

class UBearTrapAnimInstance* ABearTrap::GetAnimInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.GetAnimInstance"));

	ABearTrap_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheTrapper.BearTrap.CanTrap
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

bool ABearTrap::CanTrap()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrap.CanTrap"));

	ABearTrap_CanTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          wasJustDisarmed                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807C0090              		 offset:16b0090                       

void UBearTrapAnimInstance::SetWasJustDisarmed(bool* wasJustDisarmed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed"));

	UBearTrapAnimInstance_SetWasJustDisarmed_Params params;
	params.wasJustDisarmed = wasJustDisarmed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsTrapSet                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807C0000              		 offset:16b0000                       

void UBearTrapAnimInstance::SetIsTrapSet(bool* IsTrapSet)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet"));

	UBearTrapAnimInstance_SetIsTrapSet_Params params;
	params.IsTrapSet = IsTrapSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrapAnimInstance.SetIsBroken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsBroken                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806FF070              		 offset:15ef070                       

void UBearTrapAnimInstance::SetIsBroken(bool* IsBroken)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrapAnimInstance.SetIsBroken"));

	UBearTrapAnimInstance_SetIsBroken_Params params;
	params.IsBroken = IsBroken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          isBeingCollected               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BFF70              		 offset:16aff70                       

void UBearTrapAnimInstance::SetIsBeingCollected(bool* isBeingCollected)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected"));

	UBearTrapAnimInstance_SetIsBeingCollected_Params params;
	params.isBeingCollected = isBeingCollected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          containsSurvivor               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807BFEE0              		 offset:16afee0                       

void UBearTrapAnimInstance::SetContainsSurvivor(bool* containsSurvivor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor"));

	UBearTrapAnimInstance_SetContainsSurvivor_Params params;
	params.containsSurvivor = containsSurvivor;

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

void UIridescentStone::OnPostItemAddonsCreation(class ADBDPlayer** Player, class ACollectable** Item)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.OnPostItemAddonsCreation"));

	UIridescentStone_OnPostItemAddonsCreation_Params params;
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

void UIridescentStone::Multicast_SetBaseItem(class ACollectable** baseItem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.Multicast_SetBaseItem"));

	UIridescentStone_Multicast_SetBaseItem_Params params;
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

void UIridescentStone::Multicast_InitializeItemAddon(struct FName* addonID, EInventoryItemType* ItemType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.Multicast_InitializeItemAddon"));

	UIridescentStone_Multicast_InitializeItemAddon_Params params;
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

void UIridescentStone::Multicast_AddAddonToItem(class ACollectable** Item)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.Multicast_AddAddonToItem"));

	UIridescentStone_Multicast_AddAddonToItem_Params params;
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

bool UIridescentStone::IsReadyForInitialization()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.IsReadyForInitialization"));

	UIridescentStone_IsReadyForInitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.ItemAddon.InitializeAddon
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UIridescentStone::InitializeAddon()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.InitializeAddon"));

	UIridescentStone_InitializeAddon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.DebugPrintStats
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UIridescentStone::DebugPrintStats()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.DebugPrintStats"));

	UIridescentStone_DebugPrintStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.Authority_OnCollectablePickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADBDPlayer**             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UIridescentStone::Authority_OnCollectablePickedUp(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.Authority_OnCollectablePickedUp"));

	UIridescentStone_Authority_OnCollectablePickedUp_Params params;
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

void UIridescentStone::Authority_OnCollectableDropped(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.Authority_OnCollectableDropped"));

	UIridescentStone_Authority_OnCollectableDropped_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.ItemAddon.ApplyMetaModifiers
// (Final, Native, Private)
// FunctionAddress:0x00007FF68071B170              		 offset:160b170                       

void UIridescentStone::ApplyMetaModifiers()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ItemAddon.ApplyMetaModifiers"));

	UIridescentStone_ApplyMetaModifiers_Params params;

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

bool UUntrap::ShouldShowSpeedProficiencyForMultipleInteractors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.ShouldShowSpeedProficiencyForMultipleInteractors"));

	UUntrap_ShouldShowSpeedProficiencyForMultipleInteractors_Params params;

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

void UUntrap::SetSpeedBase(float* speedBase)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.SetSpeedBase"));

	UUntrap_SetSpeedBase_Params params;
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

void UUntrap::SetChargeableComponent(class UChargeableComponent** ChargeableComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.SetChargeableComponent"));

	UUntrap_SetChargeableComponent_Params params;
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

void UUntrap::OnSkillCheckResponseAuthorityBP(class ADBDPlayer** Player, bool* success, bool* Bonus, bool* hadInput, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthorityBP"));

	UUntrap_OnSkillCheckResponseAuthorityBP_Params params;
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

void UUntrap::OnSkillCheckResponseAuthority(bool* success, bool* Bonus, class ADBDPlayer** Player, bool* TriggerLoudNoise, bool* hadInput, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthority"));

	UUntrap_OnSkillCheckResponseAuthority_Params params;
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

void UUntrap::OnSkillCheckResponseAestheticBP(class ADBDPlayer** Player, bool* success, bool* Bonus, bool* hadInput, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAestheticBP"));

	UUntrap_OnSkillCheckResponseAestheticBP_Params params;
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

void UUntrap::OnSkillCheckResponseAesthetic(bool* success, bool* Bonus, class ADBDPlayer** Player, bool* TriggerLoudNoise, bool* hadInput, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAesthetic"));

	UUntrap_OnSkillCheckResponseAesthetic_Params params;
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

void UUntrap::OnInteractionCompletionStateChanged(class ADBDPlayer** Player, bool* complete)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnInteractionCompletionStateChanged"));

	UUntrap_OnInteractionCompletionStateChanged_Params params;
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

void UUntrap::OnChargeableChangedBP(class UChargeableComponent** oldChargeable, class UChargeableComponent** newChargeable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.OnChargeableChangedBP"));

	UUntrap_OnChargeableChangedBP_Params params;
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

bool UUntrap::HasSkillCheckHappened(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.HasSkillCheckHappened"));

	UUntrap_HasSkillCheckHappened_Params params;
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

float UUntrap::GetTunableValue(struct FName* TunableValueID, float* defaultValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetTunableValue"));

	UUntrap_GetTunableValue_Params params;
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

float UUntrap::GetSuccessProbability()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSuccessProbability"));

	UUntrap_GetSuccessProbability_Params params;

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

float UUntrap::GetSkillCheckProbability()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckProbability"));

	UUntrap_GetSkillCheckProbability_Params params;

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

float UUntrap::GetSkillCheckFailureTimePenalty()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailureTimePenalty"));

	UUntrap_GetSkillCheckFailureTimePenalty_Params params;

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

float UUntrap::GetSkillCheckFailurePercentPenalty(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailurePercentPenalty"));

	UUntrap_GetSkillCheckFailurePercentPenalty_Params params;
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

float UUntrap::GetSkillCheckDifficulityModifier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckDifficulityModifier"));

	UUntrap_GetSkillCheckDifficulityModifier_Params params;
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

float UUntrap::GetSkillCheckCharge(class ADBDPlayer** Player, bool* success, bool* Bonus, ESkillCheckCustomType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckCharge"));

	UUntrap_GetSkillCheckCharge_Params params;
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

int UUntrap::GetPipsPassed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetPipsPassed"));

	UUntrap_GetPipsPassed_Params params;

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

float UUntrap::GetPerkMultiplier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetPerkMultiplier"));

	UUntrap_GetPerkMultiplier_Params params;
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

float UUntrap::GetMultiplicativeLuckBonus(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetMultiplicativeLuckBonus"));

	UUntrap_GetMultiplicativeLuckBonus_Params params;
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

float UUntrap::GetMaxCharge()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetMaxCharge"));

	UUntrap_GetMaxCharge_Params params;

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

float UUntrap::GetItemEfficiencyModifier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetItemEfficiencyModifier"));

	UUntrap_GetItemEfficiencyModifier_Params params;
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

float UUntrap::GetGoodSkillCheckSuccessPercentReward(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetGoodSkillCheckSuccessPercentReward"));

	UUntrap_GetGoodSkillCheckSuccessPercentReward_Params params;
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

float UUntrap::GetChargeSpeedModifier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeSpeedModifier"));

	UUntrap_GetChargeSpeedModifier_Params params;
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

float UUntrap::GetChargeAmountForTime(float* DeltaSeconds, class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeAmountForTime"));

	UUntrap_GetChargeAmountForTime_Params params;
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

class UChargeableComponent* UUntrap::GetChargeableComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeableComponent"));

	UUntrap_GetChargeableComponent_Params params;

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

float UUntrap::GetBonusSkillCheckZoneSizeModifier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckZoneSizeModifier"));

	UUntrap_GetBonusSkillCheckZoneSizeModifier_Params params;
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

float UUntrap::GetBonusSkillCheckSuccessPercentReward(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckSuccessPercentReward"));

	UUntrap_GetBonusSkillCheckSuccessPercentReward_Params params;
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

float UUntrap::GetBlueprintChargeSpeedMultiplier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetBlueprintChargeSpeedMultiplier"));

	UUntrap_GetBlueprintChargeSpeedMultiplier_Params params;
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

float UUntrap::GetAdditiveLuckBonus(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveLuckBonus"));

	UUntrap_GetAdditiveLuckBonus_Params params;
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

float UUntrap::GetAdditiveChargeTimeReductionAsMultiplier(class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveChargeTimeReductionAsMultiplier"));

	UUntrap_GetAdditiveChargeTimeReductionAsMultiplier_Params params;
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

void UUntrap::Authority_ChargeWithItem(float* DeltaSeconds, class ACollectable** Item, class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.Authority_ChargeWithItem"));

	UUntrap_Authority_ChargeWithItem_Params params;
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

void UUntrap::AddCharge(float* DeltaSeconds, class ADBDPlayer** Character)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.ChargeableInteractionDefinition.AddCharge"));

	UUntrap_AddCharge_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
