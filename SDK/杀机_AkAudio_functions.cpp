// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AkAudio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.AkAcousticPortal.OpenPortal
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF67FF64440              		 offset:e54440                        

void AAkAcousticPortal::OpenPortal()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAcousticPortal.OpenPortal"));

	AAkAcousticPortal_OpenPortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAcousticPortal.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAkAcousticPortalState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF63980              		 offset:e53980                        

EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAcousticPortal.GetCurrentState"));

	AAkAcousticPortal_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAcousticPortal.ClosePortal
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF67FF633F0              		 offset:e533f0                        

void AAkAcousticPortal::ClosePortal()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAcousticPortal.ClosePortal"));

	AAkAcousticPortal_ClosePortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.ToggleVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F1C30              		 offset:2fe1c30                       

void UAkPortalComponent::ToggleVisibility(bool* bPropagateToChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.ToggleVisibility"));

	UAkPortalComponent_ToggleVisibility_Params params;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SnapTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent**        InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F1B40              		 offset:2fe1b40                       

bool UAkPortalComponent::SnapTo(class USceneComponent** InParent, struct FName* InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SnapTo"));

	UAkPortalComponent_SnapTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.SetWorldScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewScale                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F19B0              		 offset:2fe19b0                       

void UAkPortalComponent::SetWorldScale3D(struct FVector* NewScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetWorldScale3D"));

	UAkPortalComponent_SetWorldScale3D_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F18E0              		 offset:2fe18e0                       

void UAkPortalComponent::SetVisibility(bool* bNewVisibility, bool* bPropagateToChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetVisibility"));

	UAkPortalComponent_SetVisibility_Params params;
	params.bNewVisibility = bNewVisibility;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetSkipComponentAndChildrenTransformUpdate
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680688CC0              		 offset:1578cc0                       

void UAkPortalComponent::SetSkipComponentAndChildrenTransformUpdate(bool* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetSkipComponentAndChildrenTransformUpdate"));

	UAkPortalComponent_SetSkipComponentAndChildrenTransformUpdate_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetShouldUpdatePhysicsVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInShouldUpdatePhysicsVolume   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F1850              		 offset:2fe1850                       

void UAkPortalComponent::SetShouldUpdatePhysicsVolume(bool* bInShouldUpdatePhysicsVolume)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetShouldUpdatePhysicsVolume"));

	UAkPortalComponent_SetShouldUpdatePhysicsVolume_Params params;
	params.bInShouldUpdatePhysicsVolume = bInShouldUpdatePhysicsVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetRelativeScale3D
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewScale3D                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F17C0              		 offset:2fe17c0                       

void UAkPortalComponent::SetRelativeScale3D(struct FVector* NewScale3D)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetRelativeScale3D"));

	UAkPortalComponent_SetRelativeScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetMobility
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EComponentMobility>* NewMobility                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F1740              		 offset:2fe1740                       

void UAkPortalComponent::SetMobility(TEnumAsByte<EComponentMobility>* NewMobility)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetMobility"));

	UAkPortalComponent_SetMobility_Params params;
	params.NewMobility = NewMobility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetHiddenInGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          NewHidden                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F1670              		 offset:2fe1670                       

void UAkPortalComponent::SetHiddenInGame(bool* NewHidden, bool* bPropagateToChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetHiddenInGame"));

	UAkPortalComponent_SetHiddenInGame_Params params;
	params.NewHidden = NewHidden;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetAbsolute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewAbsoluteLocation           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewAbsoluteRotation           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewAbsoluteScale              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F14D0              		 offset:2fe14d0                       

void UAkPortalComponent::SetAbsolute(bool* bNewAbsoluteLocation, bool* bNewAbsoluteRotation, bool* bNewAbsoluteScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetAbsolute"));

	UAkPortalComponent_SetAbsolute_Params params;
	params.bNewAbsoluteLocation = bNewAbsoluteLocation;
	params.bNewAbsoluteRotation = bNewAbsoluteRotation;
	params.bNewAbsoluteScale = bNewAbsoluteScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.ResetRelativeTransform
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820F14B0              		 offset:2fe14b0                       

void UAkPortalComponent::ResetRelativeTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.ResetRelativeTransform"));

	UAkPortalComponent_ResetRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_Visibility
// (Final, Native, Private)
// Parameters:
// bool*                          oldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F1320              		 offset:2fe1320                       

void UAkPortalComponent::OnRep_Visibility(bool* oldValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_Visibility"));

	UAkPortalComponent_OnRep_Visibility_Params params;
	params.oldValue = oldValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_Transform
// (Final, Native, Private)
// FunctionAddress:0x00007FF6820F1300              		 offset:2fe1300                       

void UAkPortalComponent::OnRep_Transform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_Transform"));

	UAkPortalComponent_OnRep_Transform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_RelativeRotation
// (Final, Native, Private)
// FunctionAddress:0x00007FF6820F12E0              		 offset:2fe12e0                       

void UAkPortalComponent::OnRep_RelativeRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_RelativeRotation"));

	UAkPortalComponent_OnRep_RelativeRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_RelativeLocation
// (Final, Native, Private)
// FunctionAddress:0x00007FF6820F12C0              		 offset:2fe12c0                       

void UAkPortalComponent::OnRep_RelativeLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_RelativeLocation"));

	UAkPortalComponent_OnRep_RelativeLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_AttachSocketName
// (Final, Native, Private)
// FunctionAddress:0x00007FF6820F12A0              		 offset:2fe12a0                       

void UAkPortalComponent::OnRep_AttachSocketName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_AttachSocketName"));

	UAkPortalComponent_OnRep_AttachSocketName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_AttachParent
// (Final, Native, Private)
// FunctionAddress:0x00007FF6820F12A0              		 offset:2fe12a0                       

void UAkPortalComponent::OnRep_AttachParent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_AttachParent"));

	UAkPortalComponent_OnRep_AttachParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_AttachChildren
// (Final, Native, Private)
// FunctionAddress:0x00007FF6820F1280              		 offset:2fe1280                       

void UAkPortalComponent::OnRep_AttachChildren()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_AttachChildren"));

	UAkPortalComponent_OnRep_AttachChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.K2_SetWorldTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F1090              		 offset:2fe1090                       

void UAkPortalComponent::K2_SetWorldTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetWorldTransform"));

	UAkPortalComponent_K2_SetWorldTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetWorldRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F0EE0              		 offset:2fe0ee0                       

void UAkPortalComponent::K2_SetWorldRotation(struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetWorldRotation"));

	UAkPortalComponent_K2_SetWorldRotation_Params params;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetWorldLocationAndRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F0D00              		 offset:2fe0d00                       

void UAkPortalComponent::K2_SetWorldLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetWorldLocationAndRotation"));

	UAkPortalComponent_K2_SetWorldLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F0B50              		 offset:2fe0b50                       

void UAkPortalComponent::K2_SetWorldLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetWorldLocation"));

	UAkPortalComponent_K2_SetWorldLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetRelativeTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F0960              		 offset:2fe0960                       

void UAkPortalComponent::K2_SetRelativeTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetRelativeTransform"));

	UAkPortalComponent_K2_SetRelativeTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetRelativeRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F07B0              		 offset:2fe07b0                       

void UAkPortalComponent::K2_SetRelativeRotation(struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetRelativeRotation"));

	UAkPortalComponent_K2_SetRelativeRotation_Params params;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F05D0              		 offset:2fe05d0                       

void UAkPortalComponent::K2_SetRelativeLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation"));

	UAkPortalComponent_K2_SetRelativeLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetRelativeLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F0420              		 offset:2fe0420                       

void UAkPortalComponent::K2_SetRelativeLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetRelativeLocation"));

	UAkPortalComponent_K2_SetRelativeLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_GetComponentToWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F03C0              		 offset:2fe03c0                       

struct FTransform UAkPortalComponent::K2_GetComponentToWorld()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_GetComponentToWorld"));

	UAkPortalComponent_K2_GetComponentToWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_GetComponentScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F0380              		 offset:2fe0380                       

struct FVector UAkPortalComponent::K2_GetComponentScale()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_GetComponentScale"));

	UAkPortalComponent_K2_GetComponentScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_GetComponentRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F0340              		 offset:2fe0340                       

struct FRotator UAkPortalComponent::K2_GetComponentRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_GetComponentRotation"));

	UAkPortalComponent_K2_GetComponentRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_GetComponentLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820F0300              		 offset:2fe0300                       

struct FVector UAkPortalComponent::K2_GetComponentLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_GetComponentLocation"));

	UAkPortalComponent_K2_GetComponentLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_DetachFromComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EDetachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCallModify                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820F01B0              		 offset:2fe01b0                       

void UAkPortalComponent::K2_DetachFromComponent(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule, bool* bCallModify)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_DetachFromComponent"));

	UAkPortalComponent_K2_DetachFromComponent_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bCallModify = bCallModify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.K2_AttachToComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent**        Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EFFE0              		 offset:2fdffe0                       

bool UAkPortalComponent::K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AttachToComponent"));

	UAkPortalComponent_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_AttachTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent**        InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EFE70              		 offset:2fdfe70                       

bool UAkPortalComponent::K2_AttachTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachType, bool* bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AttachTo"));

	UAkPortalComponent_K2_AttachTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachType = AttachType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_AddWorldTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820EFC80              		 offset:2fdfc80                       

void UAkPortalComponent::K2_AddWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddWorldTransform"));

	UAkPortalComponent_K2_AddWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddWorldRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820EFAD0              		 offset:2fdfad0                       

void UAkPortalComponent::K2_AddWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddWorldRotation"));

	UAkPortalComponent_K2_AddWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddWorldOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820EF920              		 offset:2fdf920                       

void UAkPortalComponent::K2_AddWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddWorldOffset"));

	UAkPortalComponent_K2_AddWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddRelativeRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820EF770              		 offset:2fdf770                       

void UAkPortalComponent::K2_AddRelativeRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddRelativeRotation"));

	UAkPortalComponent_K2_AddRelativeRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddRelativeLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820EF5C0              		 offset:2fdf5c0                       

void UAkPortalComponent::K2_AddRelativeLocation(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddRelativeLocation"));

	UAkPortalComponent_K2_AddRelativeLocation_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddLocalTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820EF3D0              		 offset:2fdf3d0                       

void UAkPortalComponent::K2_AddLocalTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddLocalTransform"));

	UAkPortalComponent_K2_AddLocalTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddLocalRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820EF220              		 offset:2fdf220                       

void UAkPortalComponent::K2_AddLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddLocalRotation"));

	UAkPortalComponent_K2_AddLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddLocalOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820EF070              		 offset:2fdf070                       

void UAkPortalComponent::K2_AddLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddLocalOffset"));

	UAkPortalComponent_K2_AddLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.IsVisible
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6807078B0              		 offset:15f78b0                       

bool UAkPortalComponent::IsVisible()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.IsVisible"));

	UAkPortalComponent_IsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.IsSimulatingPhysics
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EEFC0              		 offset:2fdefc0                       

bool UAkPortalComponent::IsSimulatingPhysics(struct FName* BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.IsSimulatingPhysics"));

	UAkPortalComponent_IsSimulatingPhysics_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.IsAnySimulatingPhysics
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EEF90              		 offset:2fdef90                       

bool UAkPortalComponent::IsAnySimulatingPhysics()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.IsAnySimulatingPhysics"));

	UAkPortalComponent_IsAnySimulatingPhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetUpVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EEE50              		 offset:2fdee50                       

struct FVector UAkPortalComponent::GetUpVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetUpVector"));

	UAkPortalComponent_GetUpVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetSocketTransform
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace>* TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EED20              		 offset:2fded20                       

struct FTransform UAkPortalComponent::GetSocketTransform(struct FName* InSocketName, TEnumAsByte<ERelativeTransformSpace>* TransformSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetSocketTransform"));

	UAkPortalComponent_GetSocketTransform_Params params;
	params.InSocketName = InSocketName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetSocketRotation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EEC60              		 offset:2fdec60                       

struct FRotator UAkPortalComponent::GetSocketRotation(struct FName* InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetSocketRotation"));

	UAkPortalComponent_GetSocketRotation_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetSocketQuaternion
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EEBA0              		 offset:2fdeba0                       

struct FQuat UAkPortalComponent::GetSocketQuaternion(struct FName* InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetSocketQuaternion"));

	UAkPortalComponent_GetSocketQuaternion_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetSocketLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EEAE0              		 offset:2fdeae0                       

struct FVector UAkPortalComponent::GetSocketLocation(struct FName* InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetSocketLocation"));

	UAkPortalComponent_GetSocketLocation_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetSkipComponentAndChildrenTransformUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EEAB0              		 offset:2fdeab0                       

bool UAkPortalComponent::GetSkipComponentAndChildrenTransformUpdate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetSkipComponentAndChildrenTransformUpdate"));

	UAkPortalComponent_GetSkipComponentAndChildrenTransformUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetShouldUpdatePhysicsVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EEA80              		 offset:2fdea80                       

bool UAkPortalComponent::GetShouldUpdatePhysicsVolume()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetShouldUpdatePhysicsVolume"));

	UAkPortalComponent_GetShouldUpdatePhysicsVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetRightVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EEA40              		 offset:2fdea40                       

struct FVector UAkPortalComponent::GetRightVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetRightVector"));

	UAkPortalComponent_GetRightVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetRelativeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EE9E0              		 offset:2fde9e0                       

struct FTransform UAkPortalComponent::GetRelativeTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetRelativeTransform"));

	UAkPortalComponent_GetRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetPhysicsVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APhysicsVolume*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EE9B0              		 offset:2fde9b0                       

class APhysicsVolume* UAkPortalComponent::GetPhysicsVolume()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetPhysicsVolume"));

	UAkPortalComponent_GetPhysicsVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetParentComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USceneComponent*> Parents                        (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6820EE900              		 offset:2fde900                       

void UAkPortalComponent::GetParentComponents(TArray<class USceneComponent*>* Parents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetParentComponents"));

	UAkPortalComponent_GetParentComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parents != nullptr)
		*Parents = params.Parents;
}


// Function Engine.SceneComponent.GetNumChildrenComponents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680683810              		 offset:1573810                       

int UAkPortalComponent::GetNumChildrenComponents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetNumChildrenComponents"));

	UAkPortalComponent_GetNumChildrenComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetForwardVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820CDF80              		 offset:2fbdf80                       

struct FVector UAkPortalComponent::GetForwardVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetForwardVector"));

	UAkPortalComponent_GetForwardVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetComponentVelocity
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EE8C0              		 offset:2fde8c0                       

struct FVector UAkPortalComponent::GetComponentVelocity()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetComponentVelocity"));

	UAkPortalComponent_GetComponentVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetChildrenComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool*                          bIncludeAllDescendants         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USceneComponent*> Children                       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6820EE7C0              		 offset:2fde7c0                       

void UAkPortalComponent::GetChildrenComponents(bool* bIncludeAllDescendants, TArray<class USceneComponent*>* Children)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetChildrenComponents"));

	UAkPortalComponent_GetChildrenComponents_Params params;
	params.bIncludeAllDescendants = bIncludeAllDescendants;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Children != nullptr)
		*Children = params.Children;
}


// Function Engine.SceneComponent.GetChildComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           ChildIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6820EE730              		 offset:2fde730                       

class USceneComponent* UAkPortalComponent::GetChildComponent(int* ChildIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetChildComponent"));

	UAkPortalComponent_GetChildComponent_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetAttachSocketName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EE700              		 offset:2fde700                       

struct FName UAkPortalComponent::GetAttachSocketName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetAttachSocketName"));

	UAkPortalComponent_GetAttachSocketName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetAttachParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FCDBF0              		 offset:2ebdbf0                       

class USceneComponent* UAkPortalComponent::GetAttachParent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetAttachParent"));

	UAkPortalComponent_GetAttachParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetAllSocketNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6820EE680              		 offset:2fde680                       

TArray<struct FName> UAkPortalComponent::GetAllSocketNames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetAllSocketNames"));

	UAkPortalComponent_GetAllSocketNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.DoesSocketExist
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820EE5D0              		 offset:2fde5d0                       

bool UAkPortalComponent::DoesSocketExist(struct FName* InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.DoesSocketExist"));

	UAkPortalComponent_DoesSocketExist_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.DetachFromParent
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bMaintainWorldPosition         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCallModify                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820EE500              		 offset:2fde500                       

void UAkPortalComponent::DetachFromParent(bool* bMaintainWorldPosition, bool* bCallModify)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.DetachFromParent"));

	UAkPortalComponent_DetachFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;
	params.bCallModify = bCallModify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.StopAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF67FF66FF0              		 offset:e56ff0                        

void AAkAmbientSound::StopAmbientSound()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StopAmbientSound"));

	AAkAmbientSound_StopAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.StartAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF67FF66D90              		 offset:e56d90                        

void AAkAmbientSound::StartAmbientSound()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StartAmbientSound"));

	AAkAmbientSound_StartAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF67720              		 offset:e57720                        

void UAkComponent::UseReverbVolumes(bool* inUseReverbVolumes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseReverbVolumes"));

	UAkComponent_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.UseEarlyReflections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAuxBus**              AuxBus                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Order                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BusSendGain                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SpotReflectors                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                AuxBusName                     (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF67340              		 offset:e57340                        

void UAkComponent::UseEarlyReflections(class UAkAuxBus** AuxBus, int* Order, float* BusSendGain, float* MaxPathLength, bool* SpotReflectors, struct FString* AuxBusName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseEarlyReflections"));

	UAkComponent_UseEarlyReflections_Params params;
	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.Stop
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF67FF66ED0              		 offset:e56ed0                        

void UAkComponent::Stop()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.Stop"));

	UAkComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetUseSpatialAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF669E0              		 offset:e569e0                        

void UAkComponent::SetUseSpatialAudio(bool* bNewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetUseSpatialAudio"));

	UAkComponent_SetUseSpatialAudio_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetSwitch
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                SwitchGroup                    (Parm, ZeroConstructor)
// struct FString*                switchState                    (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF66750              		 offset:e56750                        

void UAkComponent::SetSwitch(struct FString* SwitchGroup, struct FString* switchState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetSwitch"));

	UAkComponent_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.switchState = switchState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bStopWhenOwnerDestroyed        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF666C0              		 offset:e566c0                        

void UAkComponent::SetStopWhenOwnerDestroyed(bool* bStopWhenOwnerDestroyed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed"));

	UAkComponent_SetStopWhenOwnerDestroyed_Params params;
	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                RTPC                           (Parm, ZeroConstructor)
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF661F0              		 offset:e561f0                        

void UAkComponent::SetRTPCValue(struct FString* RTPC, float* value, int* InterpolationTimeMs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetRTPCValue"));

	UAkComponent_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.value = value;
	params.InterpolationTimeMs = InterpolationTimeMs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float*                         BusVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF66040              		 offset:e56040                        

void UAkComponent::SetOutputBusVolume(float* BusVolume)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetOutputBusVolume"));

	UAkComponent_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetListeners
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAkComponent*>*   Listeners                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF67FF65980              		 offset:e55980                        

void UAkComponent::SetListeners(TArray<class UAkComponent*>* Listeners)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetListeners"));

	UAkComponent_SetListeners_Params params;
	params.Listeners = Listeners;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF65720              		 offset:e55720                        

void UAkComponent::SetAttenuationScalingFactor(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetAttenuationScalingFactor"));

	UAkComponent_SetAttenuationScalingFactor_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.PostTrigger
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Trigger                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF65430              		 offset:e55430                        

void UAkComponent::PostTrigger(struct FString* Trigger)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostTrigger"));

	UAkComponent_PostTrigger_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo*      LatentInfo                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF64B00              		 offset:e54b00                        

int UAkComponent::PostAssociatedAkEventAndWaitForEnd(struct FLatentActionInfo* LatentInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd"));

	UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params params;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAssociatedAkEvent
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           CallbackMask                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF649F0              		 offset:e549f0                        

int UAkComponent::PostAssociatedAkEvent(int* CallbackMask, struct FScriptDelegate* PostEventCallback)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAssociatedAkEvent"));

	UAkComponent_PostAssociatedAkEvent_Params params;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventByName
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF64740              		 offset:e54740                        

int UAkComponent::PostAkEventByName(struct FString* in_EventName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEventByName"));

	UAkComponent_PostAkEventByName_Params params;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent**          AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                in_EventName                   (Parm, ZeroConstructor)
// struct FLatentActionInfo*      LatentInfo                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF645F0              		 offset:e545f0                        

int UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent** AkEvent, struct FString* in_EventName, struct FLatentActionInfo* LatentInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd"));

	UAkComponent_PostAkEventAndWaitForEnd_Params params;
	params.AkEvent = AkEvent;
	params.in_EventName = in_EventName;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEvent
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAkAudioEvent**          AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CallbackMask                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString*                in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF64460              		 offset:e54460                        

int UAkComponent::PostAkEvent(class UAkAudioEvent** AkEvent, int* CallbackMask, struct FScriptDelegate* PostEventCallback, struct FString* in_EventName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEvent"));

	UAkComponent_PostAkEvent_Params params;
	params.AkEvent = AkEvent;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                RTPC                           (Parm, ZeroConstructor)
// int*                           PlayingID                      (Parm, ZeroConstructor, IsPlainOldData)
// ERTPCValueType*                InputValueType                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ERTPCValueType                 OutputValueType                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF639E0              		 offset:e539e0                        

void UAkComponent::GetRTPCValue(struct FString* RTPC, int* PlayingID, ERTPCValueType* InputValueType, float* value, ERTPCValueType* OutputValueType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.GetRTPCValue"));

	UAkComponent_GetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.PlayingID = PlayingID;
	params.InputValueType = InputValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (value != nullptr)
		*value = params.value;
	if (OutputValueType != nullptr)
		*OutputValueType = params.OutputValueType;
}


// Function AkAudio.AkComponent.GetAttenuationRadius
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF63920              		 offset:e53920                        

float UAkComponent::GetAttenuationRadius()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.GetAttenuationRadius"));

	UAkComponent_GetAttenuationRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF67720              		 offset:e57720                        

void UAkAudioInputComponent::UseReverbVolumes(bool* inUseReverbVolumes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseReverbVolumes"));

	UAkAudioInputComponent_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.UseEarlyReflections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAuxBus**              AuxBus                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Order                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BusSendGain                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SpotReflectors                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                AuxBusName                     (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF67340              		 offset:e57340                        

void UAkAudioInputComponent::UseEarlyReflections(class UAkAuxBus** AuxBus, int* Order, float* BusSendGain, float* MaxPathLength, bool* SpotReflectors, struct FString* AuxBusName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseEarlyReflections"));

	UAkAudioInputComponent_UseEarlyReflections_Params params;
	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.Stop
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF67FF66ED0              		 offset:e56ed0                        

void UAkAudioInputComponent::Stop()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.Stop"));

	UAkAudioInputComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetUseSpatialAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF669E0              		 offset:e569e0                        

void UAkAudioInputComponent::SetUseSpatialAudio(bool* bNewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetUseSpatialAudio"));

	UAkAudioInputComponent_SetUseSpatialAudio_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetSwitch
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                SwitchGroup                    (Parm, ZeroConstructor)
// struct FString*                switchState                    (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF66750              		 offset:e56750                        

void UAkAudioInputComponent::SetSwitch(struct FString* SwitchGroup, struct FString* switchState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetSwitch"));

	UAkAudioInputComponent_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.switchState = switchState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bStopWhenOwnerDestroyed        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF666C0              		 offset:e566c0                        

void UAkAudioInputComponent::SetStopWhenOwnerDestroyed(bool* bStopWhenOwnerDestroyed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed"));

	UAkAudioInputComponent_SetStopWhenOwnerDestroyed_Params params;
	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                RTPC                           (Parm, ZeroConstructor)
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF661F0              		 offset:e561f0                        

void UAkAudioInputComponent::SetRTPCValue(struct FString* RTPC, float* value, int* InterpolationTimeMs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetRTPCValue"));

	UAkAudioInputComponent_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.value = value;
	params.InterpolationTimeMs = InterpolationTimeMs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float*                         BusVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF66040              		 offset:e56040                        

void UAkAudioInputComponent::SetOutputBusVolume(float* BusVolume)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetOutputBusVolume"));

	UAkAudioInputComponent_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetListeners
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAkComponent*>*   Listeners                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF67FF65980              		 offset:e55980                        

void UAkAudioInputComponent::SetListeners(TArray<class UAkComponent*>* Listeners)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetListeners"));

	UAkAudioInputComponent_SetListeners_Params params;
	params.Listeners = Listeners;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF65720              		 offset:e55720                        

void UAkAudioInputComponent::SetAttenuationScalingFactor(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetAttenuationScalingFactor"));

	UAkAudioInputComponent_SetAttenuationScalingFactor_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.PostTrigger
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Trigger                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF65430              		 offset:e55430                        

void UAkAudioInputComponent::PostTrigger(struct FString* Trigger)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostTrigger"));

	UAkAudioInputComponent_PostTrigger_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo*      LatentInfo                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF64B00              		 offset:e54b00                        

int UAkAudioInputComponent::PostAssociatedAkEventAndWaitForEnd(struct FLatentActionInfo* LatentInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd"));

	UAkAudioInputComponent_PostAssociatedAkEventAndWaitForEnd_Params params;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAssociatedAkEvent
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           CallbackMask                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF649F0              		 offset:e549f0                        

int UAkAudioInputComponent::PostAssociatedAkEvent(int* CallbackMask, struct FScriptDelegate* PostEventCallback)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAssociatedAkEvent"));

	UAkAudioInputComponent_PostAssociatedAkEvent_Params params;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventByName
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF64740              		 offset:e54740                        

int UAkAudioInputComponent::PostAkEventByName(struct FString* in_EventName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEventByName"));

	UAkAudioInputComponent_PostAkEventByName_Params params;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent**          AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                in_EventName                   (Parm, ZeroConstructor)
// struct FLatentActionInfo*      LatentInfo                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF645F0              		 offset:e545f0                        

int UAkAudioInputComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent** AkEvent, struct FString* in_EventName, struct FLatentActionInfo* LatentInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd"));

	UAkAudioInputComponent_PostAkEventAndWaitForEnd_Params params;
	params.AkEvent = AkEvent;
	params.in_EventName = in_EventName;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEvent
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAkAudioEvent**          AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CallbackMask                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        PostEventCallback              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString*                in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF64460              		 offset:e54460                        

int UAkAudioInputComponent::PostAkEvent(class UAkAudioEvent** AkEvent, int* CallbackMask, struct FScriptDelegate* PostEventCallback, struct FString* in_EventName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEvent"));

	UAkAudioInputComponent_PostAkEvent_Params params;
	params.AkEvent = AkEvent;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                RTPC                           (Parm, ZeroConstructor)
// int*                           PlayingID                      (Parm, ZeroConstructor, IsPlainOldData)
// ERTPCValueType*                InputValueType                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ERTPCValueType                 OutputValueType                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF639E0              		 offset:e539e0                        

void UAkAudioInputComponent::GetRTPCValue(struct FString* RTPC, int* PlayingID, ERTPCValueType* InputValueType, float* value, ERTPCValueType* OutputValueType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.GetRTPCValue"));

	UAkAudioInputComponent_GetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.PlayingID = PlayingID;
	params.InputValueType = InputValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (value != nullptr)
		*value = params.value;
	if (OutputValueType != nullptr)
		*OutputValueType = params.OutputValueType;
}


// Function AkAudio.AkComponent.GetAttenuationRadius
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF63920              		 offset:e53920                        

float UAkAudioInputComponent::GetAttenuationRadius()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.GetAttenuationRadius"));

	UAkAudioInputComponent_GetAttenuationRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InIsChecked                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF658F0              		 offset:e558f0                        

void UAkCheckBox::SetIsChecked(bool* InIsChecked)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetIsChecked"));

	UAkCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkCheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECheckBoxState*                InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF65870              		 offset:e55870                        

void UAkCheckBox::SetCheckedState(ECheckBoxState* InCheckedState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetCheckedState"));

	UAkCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkCheckBox.SetAkItemId
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid*                  ItemId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF65680              		 offset:e55680                        

void UAkCheckBox::SetAkItemId(struct FGuid* ItemId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetAkItemId"));

	UAkCheckBox_SetAkItemId_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkCheckBox.SetAkBoolProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                ItemProperty                   (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF655E0              		 offset:e555e0                        

void UAkCheckBox::SetAkBoolProperty(struct FString* ItemProperty)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.SetAkBoolProperty"));

	UAkCheckBox_SetAkBoolProperty_Params params;
	params.ItemProperty = ItemProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkCheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF64010              		 offset:e54010                        

bool UAkCheckBox::IsPressed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.IsPressed"));

	UAkCheckBox_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF63F30              		 offset:e53f30                        

bool UAkCheckBox::IsChecked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.IsChecked"));

	UAkCheckBox_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF63950              		 offset:e53950                        

ECheckBoxState UAkCheckBox::GetCheckedState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.GetCheckedState"));

	UAkCheckBox_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetAkProperty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF67FF638D0              		 offset:e538d0                        

struct FString UAkCheckBox::GetAkProperty()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.GetAkProperty"));

	UAkCheckBox_GetAkProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetAkItemId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF63890              		 offset:e53890                        

struct FGuid UAkCheckBox::GetAkItemId()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkCheckBox.GetAkItemId"));

	UAkCheckBox_GetAkItemId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolProperties.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                newText                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF6B4D0              		 offset:e5b4d0                        

void UAkItemBoolProperties::SetSearchText(struct FString* newText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolProperties.SetSearchText"));

	UAkItemBoolProperties_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF67FF6B3A0              		 offset:e5b3a0                        

struct FString UAkItemBoolProperties::GetSelectedProperty()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolProperties.GetSelectedProperty"));

	UAkItemBoolProperties_GetSelectedProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolProperties.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF67FF6B320              		 offset:e5b320                        

struct FString UAkItemBoolProperties::GetSearchText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemBoolProperties.GetSearchText"));

	UAkItemBoolProperties_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkItemProperties.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                newText                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF6B4D0              		 offset:e5b4d0                        

void UAkItemProperties::SetSearchText(struct FString* newText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemProperties.SetSearchText"));

	UAkItemProperties_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkItemProperties.GetSelectedProperty
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF67FF6B420              		 offset:e5b420                        

struct FString UAkItemProperties::GetSelectedProperty()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemProperties.GetSelectedProperty"));

	UAkItemProperties_GetSelectedProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkItemProperties.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF67FF6B320              		 offset:e5b320                        

struct FString UAkItemProperties::GetSearchText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkItemProperties.GetSearchText"));

	UAkItemProperties_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSlider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF6FD20              		 offset:e5fd20                        

void UAkSlider::SetValue(float* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetValue"));

	UAkSlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF6FA00              		 offset:e5fa00                        

void UAkSlider::SetStepSize(float* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetStepSize"));

	UAkSlider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF6F980              		 offset:e5f980                        

void UAkSlider::SetSliderHandleColor(struct FLinearColor* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetSliderHandleColor"));

	UAkSlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF6F900              		 offset:e5f900                        

void UAkSlider::SetSliderBarColor(struct FLinearColor* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetSliderBarColor"));

	UAkSlider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF6F4A0              		 offset:e5f4a0                        

void UAkSlider::SetLocked(bool* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetLocked"));

	UAkSlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSlider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FF6F410              		 offset:e5f410                        

void UAkSlider::SetIndentHandle(bool* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetIndentHandle"));

	UAkSlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSlider.SetAkSliderItemProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                ItemProperty                   (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF6ED80              		 offset:e5ed80                        

void UAkSlider::SetAkSliderItemProperty(struct FString* ItemProperty)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetAkSliderItemProperty"));

	UAkSlider_SetAkSliderItemProperty_Params params;
	params.ItemProperty = ItemProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSlider.SetAkSliderItemId
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid*                  ItemId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF6ECE0              		 offset:e5ece0                        

void UAkSlider::SetAkSliderItemId(struct FGuid* ItemId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.SetAkSliderItemId"));

	UAkSlider_SetAkSliderItemId_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSlider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF6EBA0              		 offset:e5eba0                        

float UAkSlider::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.GetValue"));

	UAkSlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSlider.GetAkSliderItemProperty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF67FF6E1B0              		 offset:e5e1b0                        

struct FString UAkSlider::GetAkSliderItemProperty()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.GetAkSliderItemProperty"));

	UAkSlider_GetAkSliderItemProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSlider.GetAkSliderItemId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF6E170              		 offset:e5e170                        

struct FGuid UAkSlider::GetAkSliderItemId()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSlider.GetAkSliderItemId"));

	UAkSlider_GetAkSliderItemId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF67FF70150              		 offset:e60150                        

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet"));

	UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF67FF6ECC0              		 offset:e5ecc0                        

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet"));

	UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF67FF6ECA0              		 offset:e5eca0                        

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet"));

	UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkWwiseTree.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                newText                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FF72600              		 offset:e62600                        

void UAkWwiseTree::SetSearchText(struct FString* newText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWwiseTree.SetSearchText"));

	UAkWwiseTree_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkWwiseTree.GetSelectedItem
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAkWwiseObjectDetails   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF67FF724E0              		 offset:e624e0                        

struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWwiseTree.GetSelectedItem"));

	UAkWwiseTree_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkWwiseTree.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF67FF72460              		 offset:e62460                        

struct FString UAkWwiseTree::GetSearchText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkWwiseTree.GetSearchText"));

	UAkWwiseTree_GetSearchText_Params params;

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
