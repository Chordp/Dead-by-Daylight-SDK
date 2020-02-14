// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AnimGraphRuntime_parameters.hpp"

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

void UAnimCustomInstance::UnlockAIResources(bool* bUnlockMovement, bool* UnlockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.UnlockAIResources"));

	UAnimCustomInstance_UnlockAIResources_Params params;
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

class APawn* UAnimCustomInstance::TryGetPawnOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.TryGetPawnOwner"));

	UAnimCustomInstance_TryGetPawnOwner_Params params;

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

void UAnimCustomInstance::StopSlotAnimation(float* InBlendOutTime, struct FName* SlotNodeName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.StopSlotAnimation"));

	UAnimCustomInstance_StopSlotAnimation_Params params;
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

void UAnimCustomInstance::SnapshotPose(struct FPoseSnapshot* Snapshot)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SnapshotPose"));

	UAnimCustomInstance_SnapshotPose_Params params;

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

void UAnimCustomInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode>* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SetRootMotionMode"));

	UAnimCustomInstance_SetRootMotionMode_Params params;
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

void UAnimCustomInstance::SetMorphTarget(struct FName* MorphTargetName, float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SetMorphTarget"));

	UAnimCustomInstance_SetMorphTarget_Params params;
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

void UAnimCustomInstance::SavePoseSnapshot(struct FName* SnapshotName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SavePoseSnapshot"));

	UAnimCustomInstance_SavePoseSnapshot_Params params;
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

void UAnimCustomInstance::ResetDynamics(ETeleportType* InTeleportType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.ResetDynamics"));

	UAnimCustomInstance_ResetDynamics_Params params;
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

class UAnimMontage* UAnimCustomInstance::PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount, float* BlendOutTriggerTime, float* InTimeToStartMontageAt)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage"));

	UAnimCustomInstance_PlaySlotAnimationAsDynamicMontage_Params params;
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

float UAnimCustomInstance::PlaySlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.PlaySlotAnimation"));

	UAnimCustomInstance_PlaySlotAnimation_Params params;
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

void UAnimCustomInstance::Montage_Stop(float* InBlendOutTime, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Stop"));

	UAnimCustomInstance_Montage_Stop_Params params;
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

void UAnimCustomInstance::Montage_SetPosition(class UAnimMontage** Montage, float* NewPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetPosition"));

	UAnimCustomInstance_Montage_SetPosition_Params params;
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

void UAnimCustomInstance::Montage_SetPlayRate(class UAnimMontage** Montage, float* NewPlayRate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetPlayRate"));

	UAnimCustomInstance_Montage_SetPlayRate_Params params;
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

void UAnimCustomInstance::Montage_SetNextSection(struct FName* SectionNameToChange, struct FName* NextSection, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetNextSection"));

	UAnimCustomInstance_Montage_SetNextSection_Params params;
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

void UAnimCustomInstance::Montage_Resume(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Resume"));

	UAnimCustomInstance_Montage_Resume_Params params;
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

float UAnimCustomInstance::Montage_Play(class UAnimMontage** MontageToPlay, float* InPlayRate, EMontagePlayReturnType* ReturnValueType, float* InTimeToStartMontageAt, bool* bStopAllMontages)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Play"));

	UAnimCustomInstance_Montage_Play_Params params;
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

void UAnimCustomInstance::Montage_Pause(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Pause"));

	UAnimCustomInstance_Montage_Pause_Params params;
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

void UAnimCustomInstance::Montage_JumpToSectionsEnd(struct FName* sectionName, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_JumpToSectionsEnd"));

	UAnimCustomInstance_Montage_JumpToSectionsEnd_Params params;
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

void UAnimCustomInstance::Montage_JumpToSection(struct FName* sectionName, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_JumpToSection"));

	UAnimCustomInstance_Montage_JumpToSection_Params params;
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

bool UAnimCustomInstance::Montage_IsPlaying(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_IsPlaying"));

	UAnimCustomInstance_Montage_IsPlaying_Params params;
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

bool UAnimCustomInstance::Montage_IsActive(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_IsActive"));

	UAnimCustomInstance_Montage_IsActive_Params params;
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

float UAnimCustomInstance::Montage_GetPosition(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetPosition"));

	UAnimCustomInstance_Montage_GetPosition_Params params;
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

float UAnimCustomInstance::Montage_GetPlayRate(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetPlayRate"));

	UAnimCustomInstance_Montage_GetPlayRate_Params params;
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

bool UAnimCustomInstance::Montage_GetIsStopped(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetIsStopped"));

	UAnimCustomInstance_Montage_GetIsStopped_Params params;
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

struct FName UAnimCustomInstance::Montage_GetCurrentSection(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetCurrentSection"));

	UAnimCustomInstance_Montage_GetCurrentSection_Params params;
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

float UAnimCustomInstance::Montage_GetBlendTime(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetBlendTime"));

	UAnimCustomInstance_Montage_GetBlendTime_Params params;
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

void UAnimCustomInstance::LockAIResources(bool* bLockMovement, bool* LockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.LockAIResources"));

	UAnimCustomInstance_LockAIResources_Params params;
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

bool UAnimCustomInstance::IsSyncGroupBetweenMarkers(struct FName* InSyncGroupName, struct FName* PreviousMarker, struct FName* NextMarker, bool* bRespectMarkerOrder)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsSyncGroupBetweenMarkers"));

	UAnimCustomInstance_IsSyncGroupBetweenMarkers_Params params;
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

bool UAnimCustomInstance::IsPlayingSlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsPlayingSlotAnimation"));

	UAnimCustomInstance_IsPlayingSlotAnimation_Params params;
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

bool UAnimCustomInstance::IsAnyMontagePlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsAnyMontagePlaying"));

	UAnimCustomInstance_IsAnyMontagePlaying_Params params;

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

bool UAnimCustomInstance::HasMarkerBeenHitThisFrame(struct FName* SyncGroup, struct FName* MarkerName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.HasMarkerBeenHitThisFrame"));

	UAnimCustomInstance_HasMarkerBeenHitThisFrame_Params params;
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

bool UAnimCustomInstance::GetTimeToClosestMarker(struct FName* SyncGroup, struct FName* MarkerName, float* OutMarkerTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetTimeToClosestMarker"));

	UAnimCustomInstance_GetTimeToClosestMarker_Params params;
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

struct FMarkerSyncAnimPosition UAnimCustomInstance::GetSyncGroupPosition(struct FName* InSyncGroupName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetSyncGroupPosition"));

	UAnimCustomInstance_GetSyncGroupPosition_Params params;
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

float UAnimCustomInstance::GetRelevantAnimTimeRemainingFraction(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction"));

	UAnimCustomInstance_GetRelevantAnimTimeRemainingFraction_Params params;
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

float UAnimCustomInstance::GetRelevantAnimTimeRemaining(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeRemaining"));

	UAnimCustomInstance_GetRelevantAnimTimeRemaining_Params params;
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

float UAnimCustomInstance::GetRelevantAnimTimeFraction(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeFraction"));

	UAnimCustomInstance_GetRelevantAnimTimeFraction_Params params;
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

float UAnimCustomInstance::GetRelevantAnimTime(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTime"));

	UAnimCustomInstance_GetRelevantAnimTime_Params params;
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

float UAnimCustomInstance::GetRelevantAnimLength(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimLength"));

	UAnimCustomInstance_GetRelevantAnimLength_Params params;
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

class USkeletalMeshComponent* UAnimCustomInstance::GetOwningComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetOwningComponent"));

	UAnimCustomInstance_GetOwningComponent_Params params;

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

class AActor* UAnimCustomInstance::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetOwningActor"));

	UAnimCustomInstance_GetOwningActor_Params params;

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

float UAnimCustomInstance::GetInstanceTransitionTimeElapsedFraction(int* MachineIndex, int* TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction"));

	UAnimCustomInstance_GetInstanceTransitionTimeElapsedFraction_Params params;
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

float UAnimCustomInstance::GetInstanceTransitionTimeElapsed(int* MachineIndex, int* TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed"));

	UAnimCustomInstance_GetInstanceTransitionTimeElapsed_Params params;
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

float UAnimCustomInstance::GetInstanceTransitionCrossfadeDuration(int* MachineIndex, int* TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration"));

	UAnimCustomInstance_GetInstanceTransitionCrossfadeDuration_Params params;
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

float UAnimCustomInstance::GetInstanceStateWeight(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceStateWeight"));

	UAnimCustomInstance_GetInstanceStateWeight_Params params;
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

float UAnimCustomInstance::GetInstanceMachineWeight(int* MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceMachineWeight"));

	UAnimCustomInstance_GetInstanceMachineWeight_Params params;
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

float UAnimCustomInstance::GetInstanceCurrentStateElapsedTime(int* MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime"));

	UAnimCustomInstance_GetInstanceCurrentStateElapsedTime_Params params;
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

float UAnimCustomInstance::GetInstanceAssetPlayerTimeFromEndFraction(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction"));

	UAnimCustomInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params params;
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

float UAnimCustomInstance::GetInstanceAssetPlayerTimeFromEnd(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd"));

	UAnimCustomInstance_GetInstanceAssetPlayerTimeFromEnd_Params params;
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

float UAnimCustomInstance::GetInstanceAssetPlayerTimeFraction(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction"));

	UAnimCustomInstance_GetInstanceAssetPlayerTimeFraction_Params params;
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

float UAnimCustomInstance::GetInstanceAssetPlayerTime(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTime"));

	UAnimCustomInstance_GetInstanceAssetPlayerTime_Params params;
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

float UAnimCustomInstance::GetInstanceAssetPlayerLength(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerLength"));

	UAnimCustomInstance_GetInstanceAssetPlayerLength_Params params;
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

float UAnimCustomInstance::GetCurveValue(struct FName* CurveName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurveValue"));

	UAnimCustomInstance_GetCurveValue_Params params;
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

struct FName UAnimCustomInstance::GetCurrentStateName(int* MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurrentStateName"));

	UAnimCustomInstance_GetCurrentStateName_Params params;
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

class UAnimMontage* UAnimCustomInstance::GetCurrentActiveMontage()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurrentActiveMontage"));

	UAnimCustomInstance_GetCurrentActiveMontage_Params params;

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

void UAnimCustomInstance::GetAllCurveNames(TArray<struct FName>* OutNames)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetAllCurveNames"));

	UAnimCustomInstance_GetAllCurveNames_Params params;

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

void UAnimCustomInstance::GetActiveCurveNames(EAnimCurveType* CurveType, TArray<struct FName>* OutNames)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetActiveCurveNames"));

	UAnimCustomInstance_GetActiveCurveNames_Params params;
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

void UAnimCustomInstance::ClearMorphTargets()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.ClearMorphTargets"));

	UAnimCustomInstance_ClearMorphTargets_Params params;

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

float UAnimCustomInstance::CalculateDirection(struct FVector* Velocity, struct FRotator* BaseRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.CalculateDirection"));

	UAnimCustomInstance_CalculateDirection_Params params;
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

void UAnimCustomInstance::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintUpdateAnimation"));

	UAnimCustomInstance_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAnimCustomInstance::BlueprintPostEvaluateAnimation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintPostEvaluateAnimation"));

	UAnimCustomInstance_BlueprintPostEvaluateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAnimCustomInstance::BlueprintInitializeAnimation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintInitializeAnimation"));

	UAnimCustomInstance_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAnimCustomInstance::BlueprintBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintBeginPlay"));

	UAnimCustomInstance_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.UnlockAIResources
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bUnlockMovement                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UnlockAILogic                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FDB1F0              		 offset:2ecb1f0                       

void UAnimSequencerInstance::UnlockAIResources(bool* bUnlockMovement, bool* UnlockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.UnlockAIResources"));

	UAnimSequencerInstance_UnlockAIResources_Params params;
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

class APawn* UAnimSequencerInstance::TryGetPawnOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.TryGetPawnOwner"));

	UAnimSequencerInstance_TryGetPawnOwner_Params params;

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

void UAnimSequencerInstance::StopSlotAnimation(float* InBlendOutTime, struct FName* SlotNodeName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.StopSlotAnimation"));

	UAnimSequencerInstance_StopSlotAnimation_Params params;
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

void UAnimSequencerInstance::SnapshotPose(struct FPoseSnapshot* Snapshot)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SnapshotPose"));

	UAnimSequencerInstance_SnapshotPose_Params params;

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

void UAnimSequencerInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode>* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SetRootMotionMode"));

	UAnimSequencerInstance_SetRootMotionMode_Params params;
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

void UAnimSequencerInstance::SetMorphTarget(struct FName* MorphTargetName, float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SetMorphTarget"));

	UAnimSequencerInstance_SetMorphTarget_Params params;
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

void UAnimSequencerInstance::SavePoseSnapshot(struct FName* SnapshotName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SavePoseSnapshot"));

	UAnimSequencerInstance_SavePoseSnapshot_Params params;
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

void UAnimSequencerInstance::ResetDynamics(ETeleportType* InTeleportType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.ResetDynamics"));

	UAnimSequencerInstance_ResetDynamics_Params params;
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

class UAnimMontage* UAnimSequencerInstance::PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount, float* BlendOutTriggerTime, float* InTimeToStartMontageAt)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage"));

	UAnimSequencerInstance_PlaySlotAnimationAsDynamicMontage_Params params;
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

float UAnimSequencerInstance::PlaySlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.PlaySlotAnimation"));

	UAnimSequencerInstance_PlaySlotAnimation_Params params;
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

void UAnimSequencerInstance::Montage_Stop(float* InBlendOutTime, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Stop"));

	UAnimSequencerInstance_Montage_Stop_Params params;
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

void UAnimSequencerInstance::Montage_SetPosition(class UAnimMontage** Montage, float* NewPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetPosition"));

	UAnimSequencerInstance_Montage_SetPosition_Params params;
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

void UAnimSequencerInstance::Montage_SetPlayRate(class UAnimMontage** Montage, float* NewPlayRate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetPlayRate"));

	UAnimSequencerInstance_Montage_SetPlayRate_Params params;
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

void UAnimSequencerInstance::Montage_SetNextSection(struct FName* SectionNameToChange, struct FName* NextSection, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetNextSection"));

	UAnimSequencerInstance_Montage_SetNextSection_Params params;
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

void UAnimSequencerInstance::Montage_Resume(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Resume"));

	UAnimSequencerInstance_Montage_Resume_Params params;
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

float UAnimSequencerInstance::Montage_Play(class UAnimMontage** MontageToPlay, float* InPlayRate, EMontagePlayReturnType* ReturnValueType, float* InTimeToStartMontageAt, bool* bStopAllMontages)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Play"));

	UAnimSequencerInstance_Montage_Play_Params params;
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

void UAnimSequencerInstance::Montage_Pause(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Pause"));

	UAnimSequencerInstance_Montage_Pause_Params params;
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

void UAnimSequencerInstance::Montage_JumpToSectionsEnd(struct FName* sectionName, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_JumpToSectionsEnd"));

	UAnimSequencerInstance_Montage_JumpToSectionsEnd_Params params;
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

void UAnimSequencerInstance::Montage_JumpToSection(struct FName* sectionName, class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_JumpToSection"));

	UAnimSequencerInstance_Montage_JumpToSection_Params params;
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

bool UAnimSequencerInstance::Montage_IsPlaying(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_IsPlaying"));

	UAnimSequencerInstance_Montage_IsPlaying_Params params;
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

bool UAnimSequencerInstance::Montage_IsActive(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_IsActive"));

	UAnimSequencerInstance_Montage_IsActive_Params params;
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

float UAnimSequencerInstance::Montage_GetPosition(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetPosition"));

	UAnimSequencerInstance_Montage_GetPosition_Params params;
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

float UAnimSequencerInstance::Montage_GetPlayRate(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetPlayRate"));

	UAnimSequencerInstance_Montage_GetPlayRate_Params params;
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

bool UAnimSequencerInstance::Montage_GetIsStopped(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetIsStopped"));

	UAnimSequencerInstance_Montage_GetIsStopped_Params params;
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

struct FName UAnimSequencerInstance::Montage_GetCurrentSection(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetCurrentSection"));

	UAnimSequencerInstance_Montage_GetCurrentSection_Params params;
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

float UAnimSequencerInstance::Montage_GetBlendTime(class UAnimMontage** Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetBlendTime"));

	UAnimSequencerInstance_Montage_GetBlendTime_Params params;
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

void UAnimSequencerInstance::LockAIResources(bool* bLockMovement, bool* LockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.LockAIResources"));

	UAnimSequencerInstance_LockAIResources_Params params;
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

bool UAnimSequencerInstance::IsSyncGroupBetweenMarkers(struct FName* InSyncGroupName, struct FName* PreviousMarker, struct FName* NextMarker, bool* bRespectMarkerOrder)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsSyncGroupBetweenMarkers"));

	UAnimSequencerInstance_IsSyncGroupBetweenMarkers_Params params;
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

bool UAnimSequencerInstance::IsPlayingSlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsPlayingSlotAnimation"));

	UAnimSequencerInstance_IsPlayingSlotAnimation_Params params;
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

bool UAnimSequencerInstance::IsAnyMontagePlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsAnyMontagePlaying"));

	UAnimSequencerInstance_IsAnyMontagePlaying_Params params;

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

bool UAnimSequencerInstance::HasMarkerBeenHitThisFrame(struct FName* SyncGroup, struct FName* MarkerName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.HasMarkerBeenHitThisFrame"));

	UAnimSequencerInstance_HasMarkerBeenHitThisFrame_Params params;
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

bool UAnimSequencerInstance::GetTimeToClosestMarker(struct FName* SyncGroup, struct FName* MarkerName, float* OutMarkerTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetTimeToClosestMarker"));

	UAnimSequencerInstance_GetTimeToClosestMarker_Params params;
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

struct FMarkerSyncAnimPosition UAnimSequencerInstance::GetSyncGroupPosition(struct FName* InSyncGroupName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetSyncGroupPosition"));

	UAnimSequencerInstance_GetSyncGroupPosition_Params params;
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

float UAnimSequencerInstance::GetRelevantAnimTimeRemainingFraction(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction"));

	UAnimSequencerInstance_GetRelevantAnimTimeRemainingFraction_Params params;
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

float UAnimSequencerInstance::GetRelevantAnimTimeRemaining(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeRemaining"));

	UAnimSequencerInstance_GetRelevantAnimTimeRemaining_Params params;
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

float UAnimSequencerInstance::GetRelevantAnimTimeFraction(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeFraction"));

	UAnimSequencerInstance_GetRelevantAnimTimeFraction_Params params;
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

float UAnimSequencerInstance::GetRelevantAnimTime(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTime"));

	UAnimSequencerInstance_GetRelevantAnimTime_Params params;
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

float UAnimSequencerInstance::GetRelevantAnimLength(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimLength"));

	UAnimSequencerInstance_GetRelevantAnimLength_Params params;
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

class USkeletalMeshComponent* UAnimSequencerInstance::GetOwningComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetOwningComponent"));

	UAnimSequencerInstance_GetOwningComponent_Params params;

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

class AActor* UAnimSequencerInstance::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetOwningActor"));

	UAnimSequencerInstance_GetOwningActor_Params params;

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

float UAnimSequencerInstance::GetInstanceTransitionTimeElapsedFraction(int* MachineIndex, int* TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction"));

	UAnimSequencerInstance_GetInstanceTransitionTimeElapsedFraction_Params params;
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

float UAnimSequencerInstance::GetInstanceTransitionTimeElapsed(int* MachineIndex, int* TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed"));

	UAnimSequencerInstance_GetInstanceTransitionTimeElapsed_Params params;
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

float UAnimSequencerInstance::GetInstanceTransitionCrossfadeDuration(int* MachineIndex, int* TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration"));

	UAnimSequencerInstance_GetInstanceTransitionCrossfadeDuration_Params params;
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

float UAnimSequencerInstance::GetInstanceStateWeight(int* MachineIndex, int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceStateWeight"));

	UAnimSequencerInstance_GetInstanceStateWeight_Params params;
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

float UAnimSequencerInstance::GetInstanceMachineWeight(int* MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceMachineWeight"));

	UAnimSequencerInstance_GetInstanceMachineWeight_Params params;
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

float UAnimSequencerInstance::GetInstanceCurrentStateElapsedTime(int* MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime"));

	UAnimSequencerInstance_GetInstanceCurrentStateElapsedTime_Params params;
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

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFromEndFraction(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction"));

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params params;
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

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFromEnd(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd"));

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEnd_Params params;
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

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFraction(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction"));

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFraction_Params params;
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

float UAnimSequencerInstance::GetInstanceAssetPlayerTime(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTime"));

	UAnimSequencerInstance_GetInstanceAssetPlayerTime_Params params;
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

float UAnimSequencerInstance::GetInstanceAssetPlayerLength(int* AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerLength"));

	UAnimSequencerInstance_GetInstanceAssetPlayerLength_Params params;
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

float UAnimSequencerInstance::GetCurveValue(struct FName* CurveName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurveValue"));

	UAnimSequencerInstance_GetCurveValue_Params params;
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

struct FName UAnimSequencerInstance::GetCurrentStateName(int* MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurrentStateName"));

	UAnimSequencerInstance_GetCurrentStateName_Params params;
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

class UAnimMontage* UAnimSequencerInstance::GetCurrentActiveMontage()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurrentActiveMontage"));

	UAnimSequencerInstance_GetCurrentActiveMontage_Params params;

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

void UAnimSequencerInstance::GetAllCurveNames(TArray<struct FName>* OutNames)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetAllCurveNames"));

	UAnimSequencerInstance_GetAllCurveNames_Params params;

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

void UAnimSequencerInstance::GetActiveCurveNames(EAnimCurveType* CurveType, TArray<struct FName>* OutNames)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetActiveCurveNames"));

	UAnimSequencerInstance_GetActiveCurveNames_Params params;
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

void UAnimSequencerInstance::ClearMorphTargets()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.ClearMorphTargets"));

	UAnimSequencerInstance_ClearMorphTargets_Params params;

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

float UAnimSequencerInstance::CalculateDirection(struct FVector* Velocity, struct FRotator* BaseRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.CalculateDirection"));

	UAnimSequencerInstance_CalculateDirection_Params params;
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

void UAnimSequencerInstance::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintUpdateAnimation"));

	UAnimSequencerInstance_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAnimSequencerInstance::BlueprintPostEvaluateAnimation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintPostEvaluateAnimation"));

	UAnimSequencerInstance_BlueprintPostEvaluateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAnimSequencerInstance::BlueprintInitializeAnimation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintInitializeAnimation"));

	UAnimSequencerInstance_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAnimSequencerInstance::BlueprintBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintBeginPlay"));

	UAnimSequencerInstance_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName*                  NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF681391B30              		 offset:2281b30                       

void UPlayMontageCallbackProxy::OnNotifyEndReceived(struct FName* NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived"));

	UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName*                  NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF681391A30              		 offset:2281a30                       

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(struct FName* NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived"));

	UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FGuid*                  MontageInstanceId              (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681391910              		 offset:2281910                       

void UPlayMontageCallbackProxy::OnMontageEnded(struct FGuid* MontageInstanceId, class UAnimMontage** Montage, bool* bInterrupted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded"));

	UPlayMontageCallbackProxy_OnMontageEnded_Params params;
	params.MontageInstanceId = MontageInstanceId;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FGuid*                  MontageInstanceId              (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6813917F0              		 offset:22817f0                       

void UPlayMontageCallbackProxy::OnMontageBlendingOut(struct FGuid* MontageInstanceId, class UAnimMontage** Montage, bool* bInterrupted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut"));

	UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params;
	params.MontageInstanceId = MontageInstanceId;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent** InSkeletalMeshComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimMontage**           MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartingPosition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartingSection                (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayMontageCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6813908E0              		 offset:22808e0                       

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent** InSkeletalMeshComponent, class UAnimMontage** MontageToPlay, float* PlayRate, float* StartingPosition, struct FName* StartingSection)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage"));

	UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params;
	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

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
