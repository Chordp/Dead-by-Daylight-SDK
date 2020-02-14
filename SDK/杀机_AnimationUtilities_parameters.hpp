#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AnimationUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.AnimInstance.UnlockAIResources
struct USleepingAnimInstance_UnlockAIResources_Params
{
	bool*                                              bUnlockMovement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UnlockAILogic;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.TryGetPawnOwner
struct USleepingAnimInstance_TryGetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.StopSlotAnimation
struct USleepingAnimInstance_StopSlotAnimation_Params
{
	float*                                             InBlendOutTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.SnapshotPose
struct USleepingAnimInstance_SnapshotPose_Params
{
	struct FPoseSnapshot                               Snapshot;                                                 // (Parm, OutParm, ReferenceParm)
};

// Function Engine.AnimInstance.SetRootMotionMode
struct USleepingAnimInstance_SetRootMotionMode_Params
{
	TEnumAsByte<ERootMotionMode>*                      value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.SetMorphTarget
struct USleepingAnimInstance_SetMorphTarget_Params
{
	struct FName*                                      MorphTargetName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.SavePoseSnapshot
struct USleepingAnimInstance_SavePoseSnapshot_Params
{
	struct FName*                                      SnapshotName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.ResetDynamics
struct USleepingAnimInstance_ResetDynamics_Params
{
	ETeleportType*                                     InTeleportType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
struct USleepingAnimInstance_PlaySlotAnimationAsDynamicMontage_Params
{
	class UAnimSequenceBase**                          Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlendInTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LoopCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlendOutTriggerTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InTimeToStartMontageAt;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.PlaySlotAnimation
struct USleepingAnimInstance_PlaySlotAnimation_Params
{
	class UAnimSequenceBase**                          Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlendInTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LoopCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Stop
struct USleepingAnimInstance_Montage_Stop_Params
{
	float*                                             InBlendOutTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetPosition
struct USleepingAnimInstance_Montage_SetPosition_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetPlayRate
struct USleepingAnimInstance_Montage_SetPlayRate_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewPlayRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetNextSection
struct USleepingAnimInstance_Montage_SetNextSection_Params
{
	struct FName*                                      SectionNameToChange;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NextSection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Resume
struct USleepingAnimInstance_Montage_Resume_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Play
struct USleepingAnimInstance_Montage_Play_Params
{
	class UAnimMontage**                               MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMontagePlayReturnType*                            ReturnValueType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InTimeToStartMontageAt;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bStopAllMontages;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Pause
struct USleepingAnimInstance_Montage_Pause_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_JumpToSectionsEnd
struct USleepingAnimInstance_Montage_JumpToSectionsEnd_Params
{
	struct FName*                                      sectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_JumpToSection
struct USleepingAnimInstance_Montage_JumpToSection_Params
{
	struct FName*                                      sectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_IsPlaying
struct USleepingAnimInstance_Montage_IsPlaying_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_IsActive
struct USleepingAnimInstance_Montage_IsActive_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetPosition
struct USleepingAnimInstance_Montage_GetPosition_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetPlayRate
struct USleepingAnimInstance_Montage_GetPlayRate_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetIsStopped
struct USleepingAnimInstance_Montage_GetIsStopped_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetCurrentSection
struct USleepingAnimInstance_Montage_GetCurrentSection_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetBlendTime
struct USleepingAnimInstance_Montage_GetBlendTime_Params
{
	class UAnimMontage**                               Montage;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.LockAIResources
struct USleepingAnimInstance_LockAIResources_Params
{
	bool*                                              bLockMovement;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              LockAILogic;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
struct USleepingAnimInstance_IsSyncGroupBetweenMarkers_Params
{
	struct FName*                                      InSyncGroupName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousMarker;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NextMarker;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRespectMarkerOrder;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.IsPlayingSlotAnimation
struct USleepingAnimInstance_IsPlayingSlotAnimation_Params
{
	class UAnimSequenceBase**                          Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.IsAnyMontagePlaying
struct USleepingAnimInstance_IsAnyMontagePlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
struct USleepingAnimInstance_HasMarkerBeenHitThisFrame_Params
{
	struct FName*                                      SyncGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      MarkerName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetTimeToClosestMarker
struct USleepingAnimInstance_GetTimeToClosestMarker_Params
{
	struct FName*                                      SyncGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      MarkerName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutMarkerTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetSyncGroupPosition
struct USleepingAnimInstance_GetSyncGroupPosition_Params
{
	struct FName*                                      InSyncGroupName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMarkerSyncAnimPosition                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
struct USleepingAnimInstance_GetRelevantAnimTimeRemainingFraction_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
struct USleepingAnimInstance_GetRelevantAnimTimeRemaining_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTimeFraction
struct USleepingAnimInstance_GetRelevantAnimTimeFraction_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTime
struct USleepingAnimInstance_GetRelevantAnimTime_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimLength
struct USleepingAnimInstance_GetRelevantAnimLength_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetOwningComponent
struct USleepingAnimInstance_GetOwningComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.AnimInstance.GetOwningActor
struct USleepingAnimInstance_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
struct USleepingAnimInstance_GetInstanceTransitionTimeElapsedFraction_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TransitionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
struct USleepingAnimInstance_GetInstanceTransitionTimeElapsed_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TransitionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
struct USleepingAnimInstance_GetInstanceTransitionCrossfadeDuration_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TransitionIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceStateWeight
struct USleepingAnimInstance_GetInstanceStateWeight_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceMachineWeight
struct USleepingAnimInstance_GetInstanceMachineWeight_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
struct USleepingAnimInstance_GetInstanceCurrentStateElapsedTime_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
struct USleepingAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params
{
	int*                                               AssetPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
struct USleepingAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Params
{
	int*                                               AssetPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
struct USleepingAnimInstance_GetInstanceAssetPlayerTimeFraction_Params
{
	int*                                               AssetPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTime
struct USleepingAnimInstance_GetInstanceAssetPlayerTime_Params
{
	int*                                               AssetPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerLength
struct USleepingAnimInstance_GetInstanceAssetPlayerLength_Params
{
	int*                                               AssetPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurveValue
struct USleepingAnimInstance_GetCurveValue_Params
{
	struct FName*                                      CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurrentStateName
struct USleepingAnimInstance_GetCurrentStateName_Params
{
	int*                                               MachineIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurrentActiveMontage
struct USleepingAnimInstance_GetCurrentActiveMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.GetAllCurveNames
struct USleepingAnimInstance_GetAllCurveNames_Params
{
	TArray<struct FName>                               OutNames;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.AnimInstance.GetActiveCurveNames
struct USleepingAnimInstance_GetActiveCurveNames_Params
{
	EAnimCurveType*                                    CurveType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               OutNames;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.AnimInstance.ClearMorphTargets
struct USleepingAnimInstance_ClearMorphTargets_Params
{
};

// Function Engine.AnimInstance.CalculateDirection
struct USleepingAnimInstance_CalculateDirection_Params
{
	struct FVector*                                    Velocity;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   BaseRotation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.AnimInstance.BlueprintUpdateAnimation
struct USleepingAnimInstance_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
struct USleepingAnimInstance_BlueprintPostEvaluateAnimation_Params
{
};

// Function Engine.AnimInstance.BlueprintInitializeAnimation
struct USleepingAnimInstance_BlueprintInitializeAnimation_Params
{
};

// Function Engine.AnimInstance.BlueprintBeginPlay
struct USleepingAnimInstance_BlueprintBeginPlay_Params
{
};

// Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity
struct UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Params
{
	struct FName*                                      BoneSocketName;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh
struct USlaveAnimInstance_SetMasterMesh_Params
{
	class USkeletalMeshComponent**                     masterMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh
struct USlaveAnimInstance_GetMasterMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
