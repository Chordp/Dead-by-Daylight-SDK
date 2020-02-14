// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AnimationUtilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.AnimInstance.UnlockAIResources
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bUnlockMovement                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UnlockAILogic                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDB1F0              		 offset:2ecb1f0                       

void USleepingAnimInstance::UnlockAIResources(bool* bUnlockMovement, bool* UnlockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.UnlockAIResources"));

	USleepingAnimInstance_UnlockAIResources_Params params;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.TryGetPawnOwner
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FDB1C0              		 offset:2ecb1c0                       

class APawn* USleepingAnimInstance::TryGetPawnOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.TryGetPawnOwner"));

	USleepingAnimInstance_TryGetPawnOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.StopSlotAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InBlendOutTime                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDB0E0              		 offset:2ecb0e0                       

void USleepingAnimInstance::StopSlotAnimation(float* InBlendOutTime, struct FName* SlotNodeName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.StopSlotAnimation"));

	USleepingAnimInstance_StopSlotAnimation_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.SlotNodeName = SlotNodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SnapshotPose
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseSnapshot           Snapshot                       (Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF681FDB010              		 offset:2ecb010                       

void USleepingAnimInstance::SnapshotPose(struct FPoseSnapshot* Snapshot)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SnapshotPose"));

	USleepingAnimInstance_SnapshotPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Snapshot != nullptr)
		*Snapshot = params.Snapshot;
}


// Function Engine.AnimInstance.SetRootMotionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERootMotionMode>*  value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD0B10              		 offset:2ec0b10                       

void USleepingAnimInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode>* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SetRootMotionMode"));

	USleepingAnimInstance_SetRootMotionMode_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SetMorphTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  MorphTargetName                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDAF30              		 offset:2ecaf30                       

void USleepingAnimInstance::SetMorphTarget(struct FName* MorphTargetName, float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SetMorphTarget"));

	USleepingAnimInstance_SetMorphTarget_Params params;
	params.MorphTargetName = MorphTargetName;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SavePoseSnapshot
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  SnapshotName                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDAE90              		 offset:2ecae90                       

void USleepingAnimInstance::SavePoseSnapshot(struct FName* SnapshotName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SavePoseSnapshot"));

	USleepingAnimInstance_SavePoseSnapshot_Params params;
	params.SnapshotName = SnapshotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.ResetDynamics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ETeleportType*                 InTeleportType                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDAE10              		 offset:2ecae10                       

void USleepingAnimInstance::ResetDynamics(ETeleportType* InTeleportType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.ResetDynamics"));

	USleepingAnimInstance_ResetDynamics_Params params;
	params.InTeleportType = InTeleportType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase**      Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendInTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LoopCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTriggerTime            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTimeToStartMontageAt         (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FDABC0              		 offset:2ecabc0                       

class UAnimMontage* USleepingAnimInstance::PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount, float* BlendOutTriggerTime, float* InTimeToStartMontageAt)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage"));

	USleepingAnimInstance_PlaySlotAnimationAsDynamicMontage_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;
	params.BlendOutTriggerTime = BlendOutTriggerTime;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.PlaySlotAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase**      Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendInTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LoopCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA9F0              		 offset:2eca9f0                       

float USleepingAnimInstance::PlaySlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.PlaySlotAnimation"));

	USleepingAnimInstance_PlaySlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InBlendOutTime                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA920              		 offset:2eca920                       

void USleepingAnimInstance::Montage_Stop(float* InBlendOutTime, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Stop"));

	USleepingAnimInstance_Montage_Stop_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA850              		 offset:2eca850                       

void USleepingAnimInstance::Montage_SetPosition(class UAnimMontage** Montage, float* NewPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetPosition"));

	USleepingAnimInstance_Montage_SetPosition_Params params;
	params.Montage = Montage;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewPlayRate                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA780              		 offset:2eca780                       

void USleepingAnimInstance::Montage_SetPlayRate(class UAnimMontage** Montage, float* NewPlayRate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetPlayRate"));

	USleepingAnimInstance_Montage_SetPlayRate_Params params;
	params.Montage = Montage;
	params.NewPlayRate = NewPlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetNextSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  SectionNameToChange            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NextSection                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA650              		 offset:2eca650                       

void USleepingAnimInstance::Montage_SetNextSection(struct FName* SectionNameToChange, struct FName* NextSection, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetNextSection"));

	USleepingAnimInstance_Montage_SetNextSection_Params params;
	params.SectionNameToChange = SectionNameToChange;
	params.NextSection = NextSection;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_Resume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA5D0              		 offset:2eca5d0                       

void USleepingAnimInstance::Montage_Resume(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Resume"));

	USleepingAnimInstance_Montage_Resume_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage**           MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// EMontagePlayReturnType*        ReturnValueType                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTimeToStartMontageAt         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bStopAllMontages               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA440              		 offset:2eca440                       

float USleepingAnimInstance::Montage_Play(class UAnimMontage** MontageToPlay, float* InPlayRate, EMontagePlayReturnType* ReturnValueType, float* InTimeToStartMontageAt, bool* bStopAllMontages)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Play"));

	USleepingAnimInstance_Montage_Play_Params params;
	params.MontageToPlay = MontageToPlay;
	params.InPlayRate = InPlayRate;
	params.ReturnValueType = ReturnValueType;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;
	params.bStopAllMontages = bStopAllMontages;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA3C0              		 offset:2eca3c0                       

void USleepingAnimInstance::Montage_Pause(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Pause"));

	USleepingAnimInstance_Montage_Pause_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_JumpToSectionsEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  sectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA2E0              		 offset:2eca2e0                       

void USleepingAnimInstance::Montage_JumpToSectionsEnd(struct FName* sectionName, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_JumpToSectionsEnd"));

	USleepingAnimInstance_Montage_JumpToSectionsEnd_Params params;
	params.sectionName = sectionName;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_JumpToSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  sectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA200              		 offset:2eca200                       

void USleepingAnimInstance::Montage_JumpToSection(struct FName* sectionName, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_JumpToSection"));

	USleepingAnimInstance_Montage_JumpToSection_Params params;
	params.sectionName = sectionName;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA170              		 offset:2eca170                       

bool USleepingAnimInstance::Montage_IsPlaying(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_IsPlaying"));

	USleepingAnimInstance_Montage_IsPlaying_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA0E0              		 offset:2eca0e0                       

bool USleepingAnimInstance::Montage_IsActive(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_IsActive"));

	USleepingAnimInstance_Montage_IsActive_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FDA040              		 offset:2eca040                       

float USleepingAnimInstance::Montage_GetPosition(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetPosition"));

	USleepingAnimInstance_Montage_GetPosition_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9FA0              		 offset:2ec9fa0                       

float USleepingAnimInstance::Montage_GetPlayRate(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetPlayRate"));

	USleepingAnimInstance_Montage_GetPlayRate_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetIsStopped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9F10              		 offset:2ec9f10                       

bool USleepingAnimInstance::Montage_GetIsStopped(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetIsStopped"));

	USleepingAnimInstance_Montage_GetIsStopped_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetCurrentSection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9E70              		 offset:2ec9e70                       

struct FName USleepingAnimInstance::Montage_GetCurrentSection(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetCurrentSection"));

	USleepingAnimInstance_Montage_GetCurrentSection_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetBlendTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9DD0              		 offset:2ec9dd0                       

float USleepingAnimInstance::Montage_GetBlendTime(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetBlendTime"));

	USleepingAnimInstance_Montage_GetBlendTime_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.LockAIResources
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bLockMovement                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          LockAILogic                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9D00              		 offset:2ec9d00                       

void USleepingAnimInstance::LockAIResources(bool* bLockMovement, bool* LockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.LockAIResources"));

	USleepingAnimInstance_LockAIResources_Params params;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  InSyncGroupName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousMarker                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NextMarker                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRespectMarkerOrder            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9B70              		 offset:2ec9b70                       

bool USleepingAnimInstance::IsSyncGroupBetweenMarkers(struct FName* InSyncGroupName, struct FName* PreviousMarker, struct FName* NextMarker, bool* bRespectMarkerOrder)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsSyncGroupBetweenMarkers"));

	USleepingAnimInstance_IsSyncGroupBetweenMarkers_Params params;
	params.InSyncGroupName = InSyncGroupName;
	params.PreviousMarker = PreviousMarker;
	params.NextMarker = NextMarker;
	params.bRespectMarkerOrder = bRespectMarkerOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.IsPlayingSlotAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimSequenceBase**      Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9A80              		 offset:2ec9a80                       

bool USleepingAnimInstance::IsPlayingSlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsPlayingSlotAnimation"));

	USleepingAnimInstance_IsPlayingSlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.IsAnyMontagePlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9A50              		 offset:2ec9a50                       

bool USleepingAnimInstance::IsAnyMontagePlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsAnyMontagePlaying"));

	USleepingAnimInstance_IsAnyMontagePlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  SyncGroup                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  MarkerName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9940              		 offset:2ec9940                       

bool USleepingAnimInstance::HasMarkerBeenHitThisFrame(struct FName* SyncGroup, struct FName* MarkerName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.HasMarkerBeenHitThisFrame"));

	USleepingAnimInstance_HasMarkerBeenHitThisFrame_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetTimeToClosestMarker
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  SyncGroup                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  MarkerName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutMarkerTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9800              		 offset:2ec9800                       

bool USleepingAnimInstance::GetTimeToClosestMarker(struct FName* SyncGroup, struct FName* MarkerName, float* OutMarkerTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetTimeToClosestMarker"));

	USleepingAnimInstance_GetTimeToClosestMarker_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMarkerTime != nullptr)
		*OutMarkerTime = params.OutMarkerTime;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetSyncGroupPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  InSyncGroupName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FMarkerSyncAnimPosition ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF681FD9730              		 offset:2ec9730                       

struct FMarkerSyncAnimPosition USleepingAnimInstance::GetSyncGroupPosition(struct FName* InSyncGroupName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetSyncGroupPosition"));

	USleepingAnimInstance_GetSyncGroupPosition_Params params;
	params.InSyncGroupName = InSyncGroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9670              		 offset:2ec9670                       

float USleepingAnimInstance::GetRelevantAnimTimeRemainingFraction(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction"));

	USleepingAnimInstance_GetRelevantAnimTimeRemainingFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD95B0              		 offset:2ec95b0                       

float USleepingAnimInstance::GetRelevantAnimTimeRemaining(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeRemaining"));

	USleepingAnimInstance_GetRelevantAnimTimeRemaining_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD94F0              		 offset:2ec94f0                       

float USleepingAnimInstance::GetRelevantAnimTimeFraction(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeFraction"));

	USleepingAnimInstance_GetRelevantAnimTimeFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9430              		 offset:2ec9430                       

float USleepingAnimInstance::GetRelevantAnimTime(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTime"));

	USleepingAnimInstance_GetRelevantAnimTime_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9370              		 offset:2ec9370                       

float USleepingAnimInstance::GetRelevantAnimLength(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimLength"));

	USleepingAnimInstance_GetRelevantAnimLength_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetOwningComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9340              		 offset:2ec9340                       

class USkeletalMeshComponent* USleepingAnimInstance::GetOwningComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetOwningComponent"));

	USleepingAnimInstance_GetOwningComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9310              		 offset:2ec9310                       

class AActor* USleepingAnimInstance::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetOwningActor"));

	USleepingAnimInstance_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9250              		 offset:2ec9250                       

float USleepingAnimInstance::GetInstanceTransitionTimeElapsedFraction(int* MachineIndex, int* TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction"));

	USleepingAnimInstance_GetInstanceTransitionTimeElapsedFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9190              		 offset:2ec9190                       

float USleepingAnimInstance::GetInstanceTransitionTimeElapsed(int* MachineIndex, int* TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed"));

	USleepingAnimInstance_GetInstanceTransitionTimeElapsed_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD90D0              		 offset:2ec90d0                       

float USleepingAnimInstance::GetInstanceTransitionCrossfadeDuration(int* MachineIndex, int* TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration"));

	USleepingAnimInstance_GetInstanceTransitionCrossfadeDuration_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceStateWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD9010              		 offset:2ec9010                       

float USleepingAnimInstance::GetInstanceStateWeight(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceStateWeight"));

	USleepingAnimInstance_GetInstanceStateWeight_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceMachineWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD8F80              		 offset:2ec8f80                       

float USleepingAnimInstance::GetInstanceMachineWeight(int* MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceMachineWeight"));

	USleepingAnimInstance_GetInstanceMachineWeight_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD8EF0              		 offset:2ec8ef0                       

float USleepingAnimInstance::GetInstanceCurrentStateElapsedTime(int* MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime"));

	USleepingAnimInstance_GetInstanceCurrentStateElapsedTime_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD8E60              		 offset:2ec8e60                       

float USleepingAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction"));

	USleepingAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD8DD0              		 offset:2ec8dd0                       

float USleepingAnimInstance::GetInstanceAssetPlayerTimeFromEnd(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd"));

	USleepingAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD8D40              		 offset:2ec8d40                       

float USleepingAnimInstance::GetInstanceAssetPlayerTimeFraction(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction"));

	USleepingAnimInstance_GetInstanceAssetPlayerTimeFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD8CB0              		 offset:2ec8cb0                       

float USleepingAnimInstance::GetInstanceAssetPlayerTime(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTime"));

	USleepingAnimInstance_GetInstanceAssetPlayerTime_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD8C20              		 offset:2ec8c20                       

float USleepingAnimInstance::GetInstanceAssetPlayerLength(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerLength"));

	USleepingAnimInstance_GetInstanceAssetPlayerLength_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  CurveName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD8B70              		 offset:2ec8b70                       

float USleepingAnimInstance::GetCurveValue(struct FName* CurveName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurveValue"));

	USleepingAnimInstance_GetCurveValue_Params params;
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentStateName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD8AD0              		 offset:2ec8ad0                       

struct FName USleepingAnimInstance::GetCurrentStateName(int* MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurrentStateName"));

	USleepingAnimInstance_GetCurrentStateName_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentActiveMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD8AA0              		 offset:2ec8aa0                       

class UAnimMontage* USleepingAnimInstance::GetCurrentActiveMontage()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurrentActiveMontage"));

	USleepingAnimInstance_GetCurrentActiveMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAllCurveNames
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           OutNames                       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF681FD89F0              		 offset:2ec89f0                       

void USleepingAnimInstance::GetAllCurveNames(TArray<struct FName>* OutNames)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetAllCurveNames"));

	USleepingAnimInstance_GetAllCurveNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


// Function Engine.AnimInstance.GetActiveCurveNames
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAnimCurveType*                CurveType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           OutNames                       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF681FD8900              		 offset:2ec8900                       

void USleepingAnimInstance::GetActiveCurveNames(EAnimCurveType* CurveType, TArray<struct FName>* OutNames)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetActiveCurveNames"));

	USleepingAnimInstance_GetActiveCurveNames_Params params;
	params.CurveType = CurveType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


// Function Engine.AnimInstance.ClearMorphTargets
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF681FD88E0              		 offset:2ec88e0                       

void USleepingAnimInstance::ClearMorphTargets()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.ClearMorphTargets"));

	USleepingAnimInstance_ClearMorphTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.CalculateDirection
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               BaseRotation                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681FD87E0              		 offset:2ec87e0                       

float USleepingAnimInstance::CalculateDirection(struct FVector* Velocity, struct FRotator* BaseRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.CalculateDirection"));

	USleepingAnimInstance_CalculateDirection_Params params;
	params.Velocity = Velocity;
	params.BaseRotation = BaseRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void USleepingAnimInstance::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintUpdateAnimation"));

	USleepingAnimInstance_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void USleepingAnimInstance::BlueprintPostEvaluateAnimation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintPostEvaluateAnimation"));

	USleepingAnimInstance_BlueprintPostEvaluateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void USleepingAnimInstance::BlueprintInitializeAnimation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintInitializeAnimation"));

	USleepingAnimInstance_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void USleepingAnimInstance::BlueprintBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintBeginPlay"));

	USleepingAnimInstance_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneSocketName                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6822D49B0              		 offset:31c49b0                       

struct FVector UBoneSocketLocalVelocityEvaluator::GetLocalVelocity(struct FName* BoneSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity"));

	UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Params params;
	params.BoneSocketName = BoneSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent** masterMesh                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6822D4D80              		 offset:31c4d80                       

void USlaveAnimInstance::SetMasterMesh(class USkeletalMeshComponent** masterMesh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh"));

	USlaveAnimInstance_SetMasterMesh_Params params;
	params.masterMesh = masterMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6822D4D50              		 offset:31c4d50                       

class USkeletalMeshComponent* USlaveAnimInstance::GetMasterMesh()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh"));

	USlaveAnimInstance_GetMasterMesh_Params params;

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
