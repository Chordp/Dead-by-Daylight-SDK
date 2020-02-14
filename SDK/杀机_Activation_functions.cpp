// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Activation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.ActorComponent.ToggleActive
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D820              		 offset:154d820                       

void UActivatableMock::ToggleActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ToggleActive"));

	UActivatableMock_ToggleActive_Params params;

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

void UActivatableMock::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickGroup"));

	UActivatableMock_SetTickGroup_Params params;
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

void UActivatableMock::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickableWhenPaused"));

	UActivatableMock_SetTickableWhenPaused_Params params;
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

void UActivatableMock::SetIsReplicated(bool* ShouldReplicate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetIsReplicated"));

	UActivatableMock_SetIsReplicated_Params params;
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

void UActivatableMock::SetComponentTickInterval(float* TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickInterval"));

	UActivatableMock_SetComponentTickInterval_Params params;
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

void UActivatableMock::SetComponentTickEnabled(bool* bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickEnabled"));

	UActivatableMock_SetComponentTickEnabled_Params params;
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

void UActivatableMock::SetAutoActivate(bool* bNewAutoActivate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetAutoActivate"));

	UActivatableMock_SetAutoActivate_Params params;
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

void UActivatableMock::SetActive(bool* bNewActive, bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetActive"));

	UActivatableMock_SetActive_Params params;
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

void UActivatableMock::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteComponent"));

	UActivatableMock_RemoveTickPrerequisiteComponent_Params params;
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

void UActivatableMock::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteActor"));

	UActivatableMock_RemoveTickPrerequisiteActor_Params params;
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

void UActivatableMock::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveTick"));

	UActivatableMock_ReceiveTick_Params params;
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

void UActivatableMock::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveEndPlay"));

	UActivatableMock_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UActivatableMock::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveBeginPlay"));

	UActivatableMock_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.OnRep_IsActive
// (Native, Public)
// FunctionAddress:0x00007FF6818B8B30              		 offset:27a8b30                       

void UActivatableMock::OnRep_IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.OnRep_IsActive"));

	UActivatableMock_OnRep_IsActive_Params params;

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

void UActivatableMock::K2_DestroyComponent(class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.K2_DestroyComponent"));

	UActivatableMock_K2_DestroyComponent_Params params;
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

bool UActivatableMock::IsComponentTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsComponentTickEnabled"));

	UActivatableMock_IsComponentTickEnabled_Params params;

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

bool UActivatableMock::IsBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsBeingDestroyed"));

	UActivatableMock_IsBeingDestroyed_Params params;

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

bool UActivatableMock::IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsActive"));

	UActivatableMock_IsActive_Params params;

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

class AActor* UActivatableMock::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetOwner"));

	UActivatableMock_GetOwner_Params params;

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

float UActivatableMock::GetComponentTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetComponentTickInterval"));

	UActivatableMock_GetComponentTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.Deactivate
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D260              		 offset:154d260                       

void UActivatableMock::Deactivate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Deactivate"));

	UActivatableMock_Deactivate_Params params;

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

bool UActivatableMock::ComponentHasTag(struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ComponentHasTag"));

	UActivatableMock_ComponentHasTag_Params params;
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

void UActivatableMock::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteComponent"));

	UActivatableMock_AddTickPrerequisiteComponent_Params params;
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

void UActivatableMock::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteActor"));

	UActivatableMock_AddTickPrerequisiteActor_Params params;
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

void UActivatableMock::Activate(bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Activate"));

	UActivatableMock_Activate_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ToggleActive
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D820              		 offset:154d820                       

void UActivatorComponent::ToggleActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ToggleActive"));

	UActivatorComponent_ToggleActive_Params params;

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

void UActivatorComponent::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickGroup"));

	UActivatorComponent_SetTickGroup_Params params;
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

void UActivatorComponent::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetTickableWhenPaused"));

	UActivatorComponent_SetTickableWhenPaused_Params params;
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

void UActivatorComponent::SetIsReplicated(bool* ShouldReplicate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetIsReplicated"));

	UActivatorComponent_SetIsReplicated_Params params;
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

void UActivatorComponent::SetComponentTickInterval(float* TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickInterval"));

	UActivatorComponent_SetComponentTickInterval_Params params;
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

void UActivatorComponent::SetComponentTickEnabled(bool* bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetComponentTickEnabled"));

	UActivatorComponent_SetComponentTickEnabled_Params params;
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

void UActivatorComponent::SetAutoActivate(bool* bNewAutoActivate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetAutoActivate"));

	UActivatorComponent_SetAutoActivate_Params params;
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

void UActivatorComponent::SetActive(bool* bNewActive, bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.SetActive"));

	UActivatorComponent_SetActive_Params params;
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

void UActivatorComponent::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteComponent"));

	UActivatorComponent_RemoveTickPrerequisiteComponent_Params params;
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

void UActivatorComponent::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.RemoveTickPrerequisiteActor"));

	UActivatorComponent_RemoveTickPrerequisiteActor_Params params;
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

void UActivatorComponent::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveTick"));

	UActivatorComponent_ReceiveTick_Params params;
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

void UActivatorComponent::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveEndPlay"));

	UActivatorComponent_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UActivatorComponent::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ReceiveBeginPlay"));

	UActivatorComponent_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.OnRep_IsActive
// (Native, Public)
// FunctionAddress:0x00007FF6818B8B30              		 offset:27a8b30                       

void UActivatorComponent::OnRep_IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.OnRep_IsActive"));

	UActivatorComponent_OnRep_IsActive_Params params;

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

void UActivatorComponent::K2_DestroyComponent(class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.K2_DestroyComponent"));

	UActivatorComponent_K2_DestroyComponent_Params params;
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

bool UActivatorComponent::IsComponentTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsComponentTickEnabled"));

	UActivatorComponent_IsComponentTickEnabled_Params params;

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

bool UActivatorComponent::IsBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsBeingDestroyed"));

	UActivatorComponent_IsBeingDestroyed_Params params;

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

bool UActivatorComponent::IsActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.IsActive"));

	UActivatorComponent_IsActive_Params params;

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

class AActor* UActivatorComponent::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetOwner"));

	UActivatorComponent_GetOwner_Params params;

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

float UActivatorComponent::GetComponentTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.GetComponentTickInterval"));

	UActivatorComponent_GetComponentTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.Deactivate
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF68065D260              		 offset:154d260                       

void UActivatorComponent::Deactivate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Deactivate"));

	UActivatorComponent_Deactivate_Params params;

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

bool UActivatorComponent::ComponentHasTag(struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.ComponentHasTag"));

	UActivatorComponent_ComponentHasTag_Params params;
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

void UActivatorComponent::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteComponent"));

	UActivatorComponent_AddTickPrerequisiteComponent_Params params;
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

void UActivatorComponent::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.AddTickPrerequisiteActor"));

	UActivatorComponent_AddTickPrerequisiteActor_Params params;
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

void UActivatorComponent::Activate(bool* bReset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.ActorComponent.Activate"));

	UActivatorComponent_Activate_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
