// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheNightmare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TheNightmare.GeneratorTeleportInteraction.TeleportPlayerToLocation
// (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class ADBDPlayer**             teleportingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A7C50              		 offset:1697c50                       

bool UGeneratorTeleportInteraction::TeleportPlayerToLocation(class ADBDPlayer** teleportingPlayer, struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.TeleportPlayerToLocation"));

	UGeneratorTeleportInteraction_TeleportPlayerToLocation_Params params;
	params.teleportingPlayer = teleportingPlayer;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF6807A7C30              		 offset:1697c30                       

void UGeneratorTeleportInteraction::StopBloodSpurts()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts"));

	UGeneratorTeleportInteraction_StopBloodSpurts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF6807A7C10              		 offset:1697c10                       

void UGeneratorTeleportInteraction::StartBloodSpurts()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts"));

	UGeneratorTeleportInteraction_StartBloodSpurts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGeneratorTeleportInteraction::ShowBloodSpurtsVFX()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX"));

	UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AGenerator**             Generator                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807A7B50              		 offset:1697b50                       

void UGeneratorTeleportInteraction::Server_SetSelectedGenerator(class AGenerator** Generator)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator"));

	UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Params params;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.OnTeleportReady
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGeneratorTeleportInteraction::OnTeleportReady()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.OnTeleportReady"));

	UGeneratorTeleportInteraction_OnTeleportReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class AGenerator**             Generator                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Location                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGeneratorTeleportInteraction::OnTeleportLocationChosen(class AGenerator** Generator, struct FTransform* Location)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen"));

	UGeneratorTeleportInteraction_OnTeleportLocationChosen_Params params;
	params.Generator = Generator;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.OnTeleported
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform*             transformBeforeTeleport        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGeneratorTeleportInteraction::OnTeleported(struct FTransform* transformBeforeTeleport)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.OnTeleported"));

	UGeneratorTeleportInteraction_OnTeleported_Params params;
	params.transformBeforeTeleport = transformBeforeTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGenerator**             selectedGenerator              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGeneratorTeleportInteraction::OnSelectedGeneratorSet(class AGenerator** selectedGenerator)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet"));

	UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Params params;
	params.selectedGenerator = selectedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer
// (Final, Native, Private)
// FunctionAddress:0x00007FF6807A7B30              		 offset:1697b30                       

void UGeneratorTeleportInteraction::OnRep_TeleportCooldownTimer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer"));

	UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator
// (Final, Native, Private)
// FunctionAddress:0x00007FF6807A7B10              		 offset:1697b10                       

void UGeneratorTeleportInteraction::OnRep_SelectedGenerator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator"));

	UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGenerator**             selectedGenerator              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UGeneratorTeleportInteraction::OnLocallySelectedGeneratorSet(class AGenerator** selectedGenerator)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet"));

	UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Params params;
	params.selectedGenerator = selectedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted
// (Final, Native, Protected)
// FunctionAddress:0x00007FF6807A7AF0              		 offset:1697af0                       

void UGeneratorTeleportInteraction::OnIntroCompleted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted"));

	UGeneratorTeleportInteraction_OnIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807A7A10              		 offset:1697a10                       

void UGeneratorTeleportInteraction::Multicast_TeleportPlayer(struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer"));

	UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// class AGenerator**             Generator                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Location                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A78D0              		 offset:16978d0                       

void UGeneratorTeleportInteraction::Multicast_OnTeleportLocationChosen(class AGenerator** Generator, struct FTransform* Location)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen"));

	UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Params params;
	params.Generator = Generator;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A78A0              		 offset:16978a0                       

bool UGeneratorTeleportInteraction::IsTeleportAvailable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable"));

	UGeneratorTeleportInteraction_IsTeleportAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues
// (Final, Native, Private)
// Parameters:
// class ASlasherPlayer**         Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807A7820              		 offset:1697820                       

void UGeneratorTeleportInteraction::InitializeTunableValues(class ASlasherPlayer** Killer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues"));

	UGeneratorTeleportInteraction_InitializeTunableValues_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A77F0              		 offset:16977f0                       

class ADBDPlayer* UGeneratorTeleportInteraction::GetOwningPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer"));

	UGeneratorTeleportInteraction_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AGenerator*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A7760              		 offset:1697760                       

class AGenerator* UGeneratorTeleportInteraction::GetInlineGenerator(class ADBDPlayer** Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator"));

	UGeneratorTeleportInteraction_GetInlineGenerator_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGenerator**             Generator                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A76D0              		 offset:16976d0                       

bool UGeneratorTeleportInteraction::CanTeleportAtGenerator(class AGenerator** Generator)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator"));

	UGeneratorTeleportInteraction_CanTeleportAtGenerator_Params params;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// class ADBDPlayer**             playerToTeleport               (Parm, ZeroConstructor, IsPlainOldData)
// class AGenerator**             Generator                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A7610              		 offset:1697610                       

bool UGeneratorTeleportInteraction::Authority_TeleportPlayerToGenerator(class ADBDPlayer** playerToTeleport, class AGenerator** Generator)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator"));

	UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Params params;
	params.playerToTeleport = playerToTeleport;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// bool*                          teleported                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807A7580              		 offset:1697580                       

void UGeneratorTeleportInteraction::Authority_StartTeleportCooldown(bool* teleported)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown"));

	UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Params params;
	params.teleported = teleported;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet
// (Event, Public, BlueprintEvent)
// Parameters:
// class APalletTracker**         trackerAtLocation              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UPlaceDreamPalletInteraction::SpawnDreamPallet(class APalletTracker** trackerAtLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet"));

	UPlaceDreamPalletInteraction_SpawnDreamPallet_Params params;
	params.trackerAtLocation = trackerAtLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues
// (Final, Native, Private)
// Parameters:
// class ASlasherPlayer**         Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6807A8030              		 offset:1698030                       

void UPlaceDreamPalletInteraction::InitializeTunableValues(class ASlasherPlayer** Killer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues"));

	UPlaceDreamPalletInteraction_InitializeTunableValues_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APalletTracker*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A8000              		 offset:1698000                       

class APalletTracker* UPlaceDreamPalletInteraction::GetTargetedPallet()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet"));

	UPlaceDreamPalletInteraction_GetTargetedPallet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APalletTracker**         tracker                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A7F70              		 offset:1697f70                       

bool UPlaceDreamPalletInteraction::CanSpawnDreamPalletAtTracker(class APalletTracker** tracker)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker"));

	UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Params params;
	params.tracker = tracker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.ToggleActive
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D820              		 offset:154d820                       

void UPresentationGeneratorTeleportProgressComponent::ToggleActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ToggleActive"));

	UPresentationGeneratorTeleportProgressComponent_ToggleActive_Params params;

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

void UPresentationGeneratorTeleportProgressComponent::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickGroup"));

	UPresentationGeneratorTeleportProgressComponent_SetTickGroup_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickableWhenPaused"));

	UPresentationGeneratorTeleportProgressComponent_SetTickableWhenPaused_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::SetIsReplicated(bool* ShouldReplicate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetIsReplicated"));

	UPresentationGeneratorTeleportProgressComponent_SetIsReplicated_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::SetComponentTickInterval(float* TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickInterval"));

	UPresentationGeneratorTeleportProgressComponent_SetComponentTickInterval_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::SetComponentTickEnabled(bool* bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickEnabled"));

	UPresentationGeneratorTeleportProgressComponent_SetComponentTickEnabled_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::SetAutoActivate(bool* bNewAutoActivate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetAutoActivate"));

	UPresentationGeneratorTeleportProgressComponent_SetAutoActivate_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::SetActive(bool* bNewActive, bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetActive"));

	UPresentationGeneratorTeleportProgressComponent_SetActive_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteComponent"));

	UPresentationGeneratorTeleportProgressComponent_RemoveTickPrerequisiteComponent_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteActor"));

	UPresentationGeneratorTeleportProgressComponent_RemoveTickPrerequisiteActor_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveTick"));

	UPresentationGeneratorTeleportProgressComponent_ReceiveTick_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveEndPlay"));

	UPresentationGeneratorTeleportProgressComponent_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UPresentationGeneratorTeleportProgressComponent::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveBeginPlay"));

	UPresentationGeneratorTeleportProgressComponent_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.OnRep_IsActive
// (Native, Public)
// FunctionAddress:0x00007FF6818B8B30              		 offset:27a8b30                       

void UPresentationGeneratorTeleportProgressComponent::OnRep_IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.OnRep_IsActive"));

	UPresentationGeneratorTeleportProgressComponent_OnRep_IsActive_Params params;

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

void UPresentationGeneratorTeleportProgressComponent::K2_DestroyComponent(class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.K2_DestroyComponent"));

	UPresentationGeneratorTeleportProgressComponent_K2_DestroyComponent_Params params;
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

bool UPresentationGeneratorTeleportProgressComponent::IsComponentTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsComponentTickEnabled"));

	UPresentationGeneratorTeleportProgressComponent_IsComponentTickEnabled_Params params;

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

bool UPresentationGeneratorTeleportProgressComponent::IsBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsBeingDestroyed"));

	UPresentationGeneratorTeleportProgressComponent_IsBeingDestroyed_Params params;

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

bool UPresentationGeneratorTeleportProgressComponent::IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsActive"));

	UPresentationGeneratorTeleportProgressComponent_IsActive_Params params;

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

class AActor* UPresentationGeneratorTeleportProgressComponent::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetOwner"));

	UPresentationGeneratorTeleportProgressComponent_GetOwner_Params params;

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

float UPresentationGeneratorTeleportProgressComponent::GetComponentTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetComponentTickInterval"));

	UPresentationGeneratorTeleportProgressComponent_GetComponentTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.Deactivate
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D260              		 offset:154d260                       

void UPresentationGeneratorTeleportProgressComponent::Deactivate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Deactivate"));

	UPresentationGeneratorTeleportProgressComponent_Deactivate_Params params;

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

bool UPresentationGeneratorTeleportProgressComponent::ComponentHasTag(struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ComponentHasTag"));

	UPresentationGeneratorTeleportProgressComponent_ComponentHasTag_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteComponent"));

	UPresentationGeneratorTeleportProgressComponent_AddTickPrerequisiteComponent_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteActor"));

	UPresentationGeneratorTeleportProgressComponent_AddTickPrerequisiteActor_Params params;
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

void UPresentationGeneratorTeleportProgressComponent::Activate(bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Activate"));

	UPresentationGeneratorTeleportProgressComponent_Activate_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68010D5B0              		 offset:ffd5b0                        

bool USetDreamSnareInteraction::HasCancelledDreamSnare()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare"));

	USetDreamSnareInteraction_HasCancelledDreamSnare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807A83A0              		 offset:16983a0                       

float USetDreamSnareInteraction::GetTrapDistanceFromControlRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation"));

	USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Params params;

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
