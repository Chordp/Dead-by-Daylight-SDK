#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AnimationUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimationUtilities.SleepingAnimInstance
// 0x0010 (0x0280 - 0x0270)
class USleepingAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationUtilities.SleepingAnimInstance"));

		return ptr;
	}


	void UnlockAIResources(bool* bUnlockMovement, bool* UnlockAILogic);
	class APawn* TryGetPawnOwner();
	void StopSlotAnimation(float* InBlendOutTime, struct FName* SlotNodeName);
	void SnapshotPose(struct FPoseSnapshot* Snapshot);
	void SetRootMotionMode(TEnumAsByte<ERootMotionMode>* value);
	void SetMorphTarget(struct FName* MorphTargetName, float* value);
	void SavePoseSnapshot(struct FName* SnapshotName);
	void ResetDynamics(ETeleportType* InTeleportType);
	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount, float* BlendOutTriggerTime, float* InTimeToStartMontageAt);
	float PlaySlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount);
	void Montage_Stop(float* InBlendOutTime, class UAnimMontage** Montage);
	void Montage_SetPosition(class UAnimMontage** Montage, float* NewPosition);
	void Montage_SetPlayRate(class UAnimMontage** Montage, float* NewPlayRate);
	void Montage_SetNextSection(struct FName* SectionNameToChange, struct FName* NextSection, class UAnimMontage** Montage);
	void Montage_Resume(class UAnimMontage** Montage);
	float Montage_Play(class UAnimMontage** MontageToPlay, float* InPlayRate, EMontagePlayReturnType* ReturnValueType, float* InTimeToStartMontageAt, bool* bStopAllMontages);
	void Montage_Pause(class UAnimMontage** Montage);
	void Montage_JumpToSectionsEnd(struct FName* sectionName, class UAnimMontage** Montage);
	void Montage_JumpToSection(struct FName* sectionName, class UAnimMontage** Montage);
	bool Montage_IsPlaying(class UAnimMontage** Montage);
	bool Montage_IsActive(class UAnimMontage** Montage);
	float Montage_GetPosition(class UAnimMontage** Montage);
	float Montage_GetPlayRate(class UAnimMontage** Montage);
	bool Montage_GetIsStopped(class UAnimMontage** Montage);
	struct FName Montage_GetCurrentSection(class UAnimMontage** Montage);
	float Montage_GetBlendTime(class UAnimMontage** Montage);
	void LockAIResources(bool* bLockMovement, bool* LockAILogic);
	bool IsSyncGroupBetweenMarkers(struct FName* InSyncGroupName, struct FName* PreviousMarker, struct FName* NextMarker, bool* bRespectMarkerOrder);
	bool IsPlayingSlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName);
	bool IsAnyMontagePlaying();
	bool HasMarkerBeenHitThisFrame(struct FName* SyncGroup, struct FName* MarkerName);
	bool GetTimeToClosestMarker(struct FName* SyncGroup, struct FName* MarkerName, float* OutMarkerTime);
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(struct FName* InSyncGroupName);
	float GetRelevantAnimTimeRemainingFraction(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimTimeRemaining(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimTimeFraction(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimTime(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimLength(int* MachineIndex, int* StateIndex);
	class USkeletalMeshComponent* GetOwningComponent();
	class AActor* GetOwningActor();
	float GetInstanceTransitionTimeElapsedFraction(int* MachineIndex, int* TransitionIndex);
	float GetInstanceTransitionTimeElapsed(int* MachineIndex, int* TransitionIndex);
	float GetInstanceTransitionCrossfadeDuration(int* MachineIndex, int* TransitionIndex);
	float GetInstanceStateWeight(int* MachineIndex, int* StateIndex);
	float GetInstanceMachineWeight(int* MachineIndex);
	float GetInstanceCurrentStateElapsedTime(int* MachineIndex);
	float GetInstanceAssetPlayerTimeFromEndFraction(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFromEnd(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFraction(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerTime(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerLength(int* AssetPlayerIndex);
	float GetCurveValue(struct FName* CurveName);
	struct FName GetCurrentStateName(int* MachineIndex);
	class UAnimMontage* GetCurrentActiveMontage();
	void GetAllCurveNames(TArray<struct FName>* OutNames);
	void GetActiveCurveNames(EAnimCurveType* CurveType, TArray<struct FName>* OutNames);
	void ClearMorphTargets();
	float CalculateDirection(struct FVector* Velocity, struct FRotator* BaseRotation);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
};


// Class AnimationUtilities.BoneSocketLocalVelocityEvaluator
// 0x0028 (0x0128 - 0x0100)
class UBoneSocketLocalVelocityEvaluator : public UActorComponent
{
public:
	class USkeletalMeshComponent*                      _meshComponent;                                           // 0x0100(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               _trackedBoneSocketNames;                                  // 0x0108(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationUtilities.BoneSocketLocalVelocityEvaluator"));

		return ptr;
	}


	struct FVector GetLocalVelocity(struct FName* BoneSocketName);
};


// Class AnimationUtilities.ResetControlPitchAnimNotify
// 0x0000 (0x0040 - 0x0040)
class UResetControlPitchAnimNotify : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationUtilities.ResetControlPitchAnimNotify"));

		return ptr;
	}

};


// Class AnimationUtilities.SlaveAnimInstance
// 0x0000 (0x0270 - 0x0270)
class USlaveAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimationUtilities.SlaveAnimInstance"));

		return ptr;
	}


	void SetMasterMesh(class USkeletalMeshComponent** masterMesh);
	class USkeletalMeshComponent* GetMasterMesh();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
