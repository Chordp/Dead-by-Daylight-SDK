#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_GFXUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GFXUtilities.BatchMeshCommands.UpdateMaterials
struct UBatchMeshCommands_UpdateMaterials_Params
{
};

// Function GFXUtilities.BatchMeshCommands.SetVectorParameter
struct UBatchMeshCommands_SetVectorParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewValue;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetTextureParameter
struct UBatchMeshCommands_SetTextureParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   newTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetScalarParameter
struct UBatchMeshCommands_SetScalarParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
struct UBatchMeshCommands_SetRenderInMainPass_Params
{
	bool*                                              inRenderInMainPass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
struct UBatchMeshCommands_SetRenderInCustomDepth_Params
{
	bool*                                              renderInCustomDepth;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
struct UBatchMeshCommands_SetRenderInCustomColourNoDepth_Params
{
	bool*                                              renderInCustomColour;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
struct UBatchMeshCommands_SetReceivesDecals_Params
{
	bool*                                              receivesDecals;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetMaterial
struct UBatchMeshCommands_SetMaterial_Params
{
	struct FString*                                    GroupName;                                                // (Parm, ZeroConstructor)
};

// Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
struct UBatchMeshCommands_SetLightingChannelForAllMeshes_Params
{
	struct FLightingChannels*                          LightingChannels;                                         // (Parm)
};

// Function GFXUtilities.BatchMeshCommands.SetCustomColourWriteMask
struct UBatchMeshCommands_SetCustomColourWriteMask_Params
{
	ECustomColourWriteMask*                            WriteMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetColourParameter
struct UBatchMeshCommands_SetColourParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
struct UBatchMeshCommands_SetCastCinematicShadows_Params
{
	bool*                                              castCinematicShadows;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
struct UBatchMeshCommands_SetAllToSameMaterial_Params
{
	class UMaterialInterface**                         MaterialInterface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.ResetMaterials
struct UBatchMeshCommands_ResetMaterials_Params
{
};

// Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
struct UBatchMeshCommands_CopyFirstScalarParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              outValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
struct UBatchMeshCommands_BatchSetVisibility_Params
{
	bool*                                              bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
struct UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Params
{
	bool*                                              Skip;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
struct UBatchMeshCommands_BatchSetComponentTickEnabled_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives
struct UClippableProviderComponent_SetIgnoredPrimitives_Params
{
	TArray<class UPrimitiveComponent*>*                ignoredPrimitives;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Engine.StaticMeshComponent.SetStaticMesh
struct UClonedStaticMeshComponent_SetStaticMesh_Params
{
	class UStaticMesh**                                NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetReverseCulling
struct UClonedStaticMeshComponent_SetReverseCulling_Params
{
	bool*                                              ReverseCulling;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetForcedLodModel
struct UClonedStaticMeshComponent_SetForcedLodModel_Params
{
	int*                                               NewForcedLodModel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias
struct UClonedStaticMeshComponent_SetDistanceFieldSelfShadowBias_Params
{
	float*                                             NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.OnRep_StaticMesh
struct UClonedStaticMeshComponent_OnRep_StaticMesh_Params
{
	class UStaticMesh**                                OldStaticMesh;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.GetLocalBounds
struct UClonedStaticMeshComponent_GetLocalBounds_Params
{
	struct FVector                                     Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent
struct UClonedSkeletalMeshComponent_UnbindClothFromMasterPoseComponent_Params
{
	bool*                                              bRestoreSimulationSpace;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.ToggleDisablePostProcessBlueprint
struct UClonedSkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Params
{
};

// Function Engine.SkeletalMeshComponent.TermBodiesBelow
struct UClonedSkeletalMeshComponent_TermBodiesBelow_Params
{
	struct FName*                                      ParentBoneName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SuspendClothingSimulation
struct UClonedSkeletalMeshComponent_SuspendClothingSimulation_Params
{
};

// Function Engine.SkeletalMeshComponent.Stop
struct UClonedSkeletalMeshComponent_Stop_Params
{
};

// Function Engine.SkeletalMeshComponent.SnapshotPose
struct UClonedSkeletalMeshComponent_SnapshotPose_Params
{
	struct FPoseSnapshot                               Snapshot;                                                 // (Parm, OutParm, ReferenceParm)
};

// Function Engine.SkeletalMeshComponent.SetUpdateAnimationInEditor
struct UClonedSkeletalMeshComponent_SetUpdateAnimationInEditor_Params
{
	bool*                                              NewUpdateState;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetTeleportRotationThreshold
struct UClonedSkeletalMeshComponent_SetTeleportRotationThreshold_Params
{
	float*                                             Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetTeleportDistanceThreshold
struct UClonedSkeletalMeshComponent_SetTeleportDistanceThreshold_Params
{
	float*                                             Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetPosition
struct UClonedSkeletalMeshComponent_SetPosition_Params
{
	float*                                             InPos;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFireNotifies;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetPlayRate
struct UClonedSkeletalMeshComponent_SetPlayRate_Params
{
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetPhysicsBlendWeight
struct UClonedSkeletalMeshComponent_SetPhysicsBlendWeight_Params
{
	float*                                             PhysicsBlendWeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetNotifyRigidBodyCollisionBelow
struct UClonedSkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Params
{
	bool*                                              bNewNotifyRigidBodyCollision;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncludeSelf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetMorphTarget
struct UClonedSkeletalMeshComponent_SetMorphTarget_Params
{
	struct FName*                                      MorphTargetName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRemoveZeroWeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetEnablePhysicsBlending
struct UClonedSkeletalMeshComponent_SetEnablePhysicsBlending_Params
{
	bool*                                              bNewBlendPhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetEnableGravityOnAllBodiesBelow
struct UClonedSkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Params
{
	bool*                                              bEnableGravity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncludeSelf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetEnableBodyGravity
struct UClonedSkeletalMeshComponent_SetEnableBodyGravity_Params
{
	bool*                                              bEnableGravity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetDisablePostProcessBlueprint
struct UClonedSkeletalMeshComponent_SetDisablePostProcessBlueprint_Params
{
	bool*                                              bInDisablePostProcess;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetDisableAnimCurves
struct UClonedSkeletalMeshComponent_SetDisableAnimCurves_Params
{
	bool*                                              bInDisableAnimCurves;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetConstraintProfileForAll
struct UClonedSkeletalMeshComponent_SetConstraintProfileForAll_Params
{
	struct FName*                                      ProfileName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDefaultIfNotFound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetConstraintProfile
struct UClonedSkeletalMeshComponent_SetConstraintProfile_Params
{
	struct FName*                                      JointName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ProfileName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDefaultIfNotFound;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetClothMaxDistanceScale
struct UClonedSkeletalMeshComponent_SetClothMaxDistanceScale_Params
{
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetBodyNotifyRigidBodyCollision
struct UClonedSkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Params
{
	bool*                                              bNewNotifyRigidBodyCollision;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAnimationMode
struct UClonedSkeletalMeshComponent_SetAnimationMode_Params
{
	TEnumAsByte<EAnimationMode>*                       InAnimationMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAnimation
struct UClonedSkeletalMeshComponent_SetAnimation_Params
{
	class UAnimationAsset**                            NewAnimToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAngularLimits
struct UClonedSkeletalMeshComponent_SetAngularLimits_Params
{
	struct FName*                                      InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Swing1LimitAngle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TwistLimitAngle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Swing2LimitAngle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllowedAnimCurvesEvaluation
struct UClonedSkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Params
{
	TArray<struct FName>*                              List;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bAllow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllowAnimCurveEvaluation
struct UClonedSkeletalMeshComponent_SetAllowAnimCurveEvaluation_Params
{
	bool*                                              bInAllow;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive
struct UClonedSkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Params
{
	bool*                                              bEnableSwingDrive;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnableTwistDrive;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSkipCustomPhysicsType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive
struct UClonedSkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Params
{
	bool*                                              bEnableSwingDrive;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnableTwistDrive;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSkipCustomPhysicsType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams
struct UClonedSkeletalMeshComponent_SetAllMotorsAngularDriveParams_Params
{
	float*                                             InSpring;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InForceLimit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSkipCustomPhysicsType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics
struct UClonedSkeletalMeshComponent_SetAllBodiesSimulatePhysics_Params
{
	bool*                                              bNewSimulate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight
struct UClonedSkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Params
{
	float*                                             PhysicsBlendWeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSkipCustomPhysicsType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics
struct UClonedSkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Params
{
	struct FName*                                      InBoneName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bNewSimulate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncludeSelf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight
struct UClonedSkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Params
{
	struct FName*                                      InBoneName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             PhysicsBlendWeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSkipCustomPhysicsType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncludeSelf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.ResumeClothingSimulation
struct UClonedSkeletalMeshComponent_ResumeClothingSimulation_Params
{
};

// Function Engine.SkeletalMeshComponent.ResetClothTeleportMode
struct UClonedSkeletalMeshComponent_ResetClothTeleportMode_Params
{
};

// Function Engine.SkeletalMeshComponent.ResetAnimInstanceDynamics
struct UClonedSkeletalMeshComponent_ResetAnimInstanceDynamics_Params
{
	ETeleportType*                                     InTeleportType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.ResetAllowedAnimCurveEvaluation
struct UClonedSkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Params
{
};

// Function Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics
struct UClonedSkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Params
{
};

// Function Engine.SkeletalMeshComponent.PlayAnimation
struct UClonedSkeletalMeshComponent_PlayAnimation_Params
{
	class UAnimationAsset**                            NewAnimToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.Play
struct UClonedSkeletalMeshComponent_Play_Params
{
	bool*                                              bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.OverrideAnimationData
struct UClonedSkeletalMeshComponent_OverrideAnimationData_Params
{
	class UAnimationAsset**                            InAnimToPlay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLooping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPlaying;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.K2_SetAnimInstanceClass
struct UClonedSkeletalMeshComponent_K2_SetAnimInstanceClass_Params
{
	class UClass**                                     NewClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.K2_GetClosestPointOnPhysicsAsset
struct UClonedSkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Params
{
	struct FVector*                                    WorldPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ClosestWorldPosition;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.IsPlaying
struct UClonedSkeletalMeshComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.IsClothingSimulationSuspended
struct UClonedSkeletalMeshComponent_IsClothingSimulationSuspended_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.IsBodyGravityEnabled
struct UClonedSkeletalMeshComponent_IsBodyGravityEnabled_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.HasValidAnimationInstance
struct UClonedSkeletalMeshComponent_HasValidAnimationInstance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetTeleportRotationThreshold
struct UClonedSkeletalMeshComponent_GetTeleportRotationThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetTeleportDistanceThreshold
struct UClonedSkeletalMeshComponent_GetTeleportDistanceThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetSubInstanceByName
struct UClonedSkeletalMeshComponent_GetSubInstanceByName_Params
{
	struct FName*                                      InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetSkeletalCenterOfMass
struct UClonedSkeletalMeshComponent_GetSkeletalCenterOfMass_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetPostProcessInstance
struct UClonedSkeletalMeshComponent_GetPostProcessInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetPosition
struct UClonedSkeletalMeshComponent_GetPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetPlayRate
struct UClonedSkeletalMeshComponent_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetMorphTarget
struct UClonedSkeletalMeshComponent_GetMorphTarget_Params
{
	struct FName*                                      MorphTargetName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetDisablePostProcessBlueprint
struct UClonedSkeletalMeshComponent_GetDisablePostProcessBlueprint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetDisableAnimCurves
struct UClonedSkeletalMeshComponent_GetDisableAnimCurves_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetCurrentJointAngles
struct UClonedSkeletalMeshComponent_GetCurrentJointAngles_Params
{
	struct FName*                                      InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Swing1Angle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TwistAngle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Swing2Angle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetClothMaxDistanceScale
struct UClonedSkeletalMeshComponent_GetClothMaxDistanceScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetClothingSimulationInteractor
struct UClonedSkeletalMeshComponent_GetClothingSimulationInteractor_Params
{
	class UClothingSimulationInteractor*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetBoneMass
struct UClonedSkeletalMeshComponent_GetBoneMass_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bScaleMass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetAnimInstance
struct UClonedSkeletalMeshComponent_GetAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetAnimationMode
struct UClonedSkeletalMeshComponent_GetAnimationMode_Params
{
	TEnumAsByte<EAnimationMode>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.GetAllowedAnimCurveEvaluate
struct UClonedSkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset
struct UClonedSkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Params
{
};

// Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport
struct UClonedSkeletalMeshComponent_ForceClothNextUpdateTeleport_Params
{
};

// Function Engine.SkeletalMeshComponent.FindConstraintBoneName
struct UClonedSkeletalMeshComponent_FindConstraintBoneName_Params
{
	int*                                               ConstraintIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.ClearMorphTargets
struct UClonedSkeletalMeshComponent_ClearMorphTargets_Params
{
};

// Function Engine.SkeletalMeshComponent.BreakConstraint
struct UClonedSkeletalMeshComponent_BreakConstraint_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InBoneName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent
struct UClonedSkeletalMeshComponent_BindClothToMasterPoseComponent_Params
{
};

// Function Engine.SkeletalMeshComponent.AllowAnimCurveEvaluation
struct UClonedSkeletalMeshComponent_AllowAnimCurveEvaluation_Params
{
	struct FName*                                      NameOfCurve;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.AddImpulseToAllBodiesBelow
struct UClonedSkeletalMeshComponent_AddImpulseToAllBodiesBelow_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncludeSelf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.AddForceToAllBodiesBelow
struct UClonedSkeletalMeshComponent_AddForceToAllBodiesBelow_Params
{
	struct FVector*                                    force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncludeSelf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight
struct UClonedSkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Params
{
	struct FName*                                      InBoneName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             AddPhysicsBlendWeight;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSkipCustomPhysicsType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.LightIntensityTimelineComponent.Reset
struct ULightIntensityTimelineComponent_Reset_Params
{
};

// Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper
struct ULightIntensityTimelineComponent_AddMaterialHelper_Params
{
	class UMaterialHelper**                            matHelper;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      propName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.LightIntensityTimelineComponent.AddLight
struct ULightIntensityTimelineComponent_AddLight_Params
{
	class ULightComponent**                            Light;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.UpdateMaterials
struct UMaterialHelper_UpdateMaterials_Params
{
};

// Function GFXUtilities.BatchMeshCommands.SetVectorParameter
struct UMaterialHelper_SetVectorParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewValue;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetTextureParameter
struct UMaterialHelper_SetTextureParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   newTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetScalarParameter
struct UMaterialHelper_SetScalarParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
struct UMaterialHelper_SetRenderInMainPass_Params
{
	bool*                                              inRenderInMainPass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
struct UMaterialHelper_SetRenderInCustomDepth_Params
{
	bool*                                              renderInCustomDepth;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
struct UMaterialHelper_SetRenderInCustomColourNoDepth_Params
{
	bool*                                              renderInCustomColour;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
struct UMaterialHelper_SetReceivesDecals_Params
{
	bool*                                              receivesDecals;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetMaterial
struct UMaterialHelper_SetMaterial_Params
{
	struct FString*                                    GroupName;                                                // (Parm, ZeroConstructor)
};

// Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
struct UMaterialHelper_SetLightingChannelForAllMeshes_Params
{
	struct FLightingChannels*                          LightingChannels;                                         // (Parm)
};

// Function GFXUtilities.BatchMeshCommands.SetCustomColourWriteMask
struct UMaterialHelper_SetCustomColourWriteMask_Params
{
	ECustomColourWriteMask*                            WriteMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetColourParameter
struct UMaterialHelper_SetColourParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
struct UMaterialHelper_SetCastCinematicShadows_Params
{
	bool*                                              castCinematicShadows;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
struct UMaterialHelper_SetAllToSameMaterial_Params
{
	class UMaterialInterface**                         MaterialInterface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.ResetMaterials
struct UMaterialHelper_ResetMaterials_Params
{
};

// Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
struct UMaterialHelper_CopyFirstScalarParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              outValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
struct UMaterialHelper_BatchSetVisibility_Params
{
	bool*                                              bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
struct UMaterialHelper_BatchSetSkipComponentAndChildrenTransformUpdate_Params
{
	bool*                                              Skip;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
struct UMaterialHelper_BatchSetComponentTickEnabled_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetStaticMesh
struct UMaterialHelperUnaffectedStaticMeshComp_SetStaticMesh_Params
{
	class UStaticMesh**                                NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetReverseCulling
struct UMaterialHelperUnaffectedStaticMeshComp_SetReverseCulling_Params
{
	bool*                                              ReverseCulling;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetForcedLodModel
struct UMaterialHelperUnaffectedStaticMeshComp_SetForcedLodModel_Params
{
	int*                                               NewForcedLodModel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias
struct UMaterialHelperUnaffectedStaticMeshComp_SetDistanceFieldSelfShadowBias_Params
{
	float*                                             NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.OnRep_StaticMesh
struct UMaterialHelperUnaffectedStaticMeshComp_OnRep_StaticMesh_Params
{
	class UStaticMesh**                                OldStaticMesh;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.StaticMeshComponent.GetLocalBounds
struct UMaterialHelperUnaffectedStaticMeshComp_GetLocalBounds_Params
{
	struct FVector                                     Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.UpdateMaterials
struct UMeshCloningFactory_UpdateMaterials_Params
{
};

// Function GFXUtilities.BatchMeshCommands.SetVectorParameter
struct UMeshCloningFactory_SetVectorParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewValue;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetTextureParameter
struct UMeshCloningFactory_SetTextureParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   newTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetScalarParameter
struct UMeshCloningFactory_SetScalarParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
struct UMeshCloningFactory_SetRenderInMainPass_Params
{
	bool*                                              inRenderInMainPass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
struct UMeshCloningFactory_SetRenderInCustomDepth_Params
{
	bool*                                              renderInCustomDepth;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
struct UMeshCloningFactory_SetRenderInCustomColourNoDepth_Params
{
	bool*                                              renderInCustomColour;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
struct UMeshCloningFactory_SetReceivesDecals_Params
{
	bool*                                              receivesDecals;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetMaterial
struct UMeshCloningFactory_SetMaterial_Params
{
	struct FString*                                    GroupName;                                                // (Parm, ZeroConstructor)
};

// Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
struct UMeshCloningFactory_SetLightingChannelForAllMeshes_Params
{
	struct FLightingChannels*                          LightingChannels;                                         // (Parm)
};

// Function GFXUtilities.BatchMeshCommands.SetCustomColourWriteMask
struct UMeshCloningFactory_SetCustomColourWriteMask_Params
{
	ECustomColourWriteMask*                            WriteMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetColourParameter
struct UMeshCloningFactory_SetColourParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
struct UMeshCloningFactory_SetCastCinematicShadows_Params
{
	bool*                                              castCinematicShadows;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
struct UMeshCloningFactory_SetAllToSameMaterial_Params
{
	class UMaterialInterface**                         MaterialInterface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.ResetMaterials
struct UMeshCloningFactory_ResetMaterials_Params
{
};

// Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
struct UMeshCloningFactory_CopyFirstScalarParameter_Params
{
	struct FName*                                      ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              outValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
struct UMeshCloningFactory_BatchSetVisibility_Params
{
	bool*                                              bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
struct UMeshCloningFactory_BatchSetSkipComponentAndChildrenTransformUpdate_Params
{
	bool*                                              Skip;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
struct UMeshCloningFactory_BatchSetComponentTickEnabled_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GFXUtilities.OuterlineComponent.SetIntensity
struct UOuterlineComponent_SetIntensity_Params
{
	float*                                             Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
