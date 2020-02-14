#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AnimGraphRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimGraphRuntime.AnimCustomInstance
// 0x0000 (0x0270 - 0x0270)
class UAnimCustomInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.AnimCustomInstance"));

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


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0010 (0x0050 - 0x0040)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0040(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify"));

		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0038(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow"));

		return ptr;
	}

};


// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x0270 - 0x0270)
class UAnimSequencerInstance : public UAnimCustomInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.AnimSequencerInstance"));

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


// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.KismetAnimationLibrary"));

		return ptr;
	}

};


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0080 (0x00B0 - 0x0030)
class UPlayMontageCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlendOut;                                               // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyBegin;                                            // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyEnd;                                              // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AnimGraphRuntime.PlayMontageCallbackProxy"));

		return ptr;
	}


	void OnNotifyEndReceived(struct FName* NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(struct FName* NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload);
	void OnMontageEnded(struct FGuid* MontageInstanceId, class UAnimMontage** Montage, bool* bInterrupted);
	void OnMontageBlendingOut(struct FGuid* MontageInstanceId, class UAnimMontage** Montage, bool* bInterrupted);
	class UPlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent** InSkeletalMeshComponent, class UAnimMontage** MontageToPlay, float* PlayRate, float* StartingPosition, struct FName* StartingSection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
