#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_GFXUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GFXUtilities.BatchMeshCommands
// 0x0070 (0x02E0 - 0x0270)
class UBatchMeshCommands : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0270(0x0050) MISSED OFFSET
	TArray<struct FMaterialHelperOriginalMeshState>    TargetMeshes;                                             // 0x02C0(0x0010) (ZeroConstructor, Transient)
	struct FString                                     _materialGroupName;                                       // 0x02D0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GFXUtilities.BatchMeshCommands"));

		return ptr;
	}


	void UpdateMaterials();
	void SetVectorParameter(struct FName* ParameterName, struct FVector* NewValue);
	void SetTextureParameter(struct FName* ParameterName, class UTexture** newTexture);
	void SetScalarParameter(struct FName* ParameterName, float* NewValue);
	void SetRenderInMainPass(bool* inRenderInMainPass);
	void SetRenderInCustomDepth(bool* renderInCustomDepth);
	void SetRenderInCustomColourNoDepth(bool* renderInCustomColour);
	void SetReceivesDecals(bool* receivesDecals);
	void SetMaterial(struct FString* GroupName);
	void SetLightingChannelForAllMeshes(struct FLightingChannels* LightingChannels);
	void SetCustomColourWriteMask(ECustomColourWriteMask* WriteMask);
	void SetColourParameter(struct FName* ParameterName, struct FLinearColor* NewValue);
	void SetCastCinematicShadows(bool* castCinematicShadows);
	void SetAllToSameMaterial(class UMaterialInterface** MaterialInterface);
	void ResetMaterials();
	bool CopyFirstScalarParameter(struct FName* ParameterName, float* outValue);
	void BatchSetVisibility(bool* bNewVisibility, bool* bPropagateToChildren);
	void BatchSetSkipComponentAndChildrenTransformUpdate(bool* Skip);
	void BatchSetComponentTickEnabled(bool* Enabled);
};


// Class GFXUtilities.ClippableProviderComponent
// 0x0050 (0x0150 - 0x0100)
class UClippableProviderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) UNKNOWN PROPERTY: SetProperty GFXUtilities.ClippableProviderComponent._ignoredPrimitives

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GFXUtilities.ClippableProviderComponent"));

		return ptr;
	}


	void SetIgnoredPrimitives(TArray<class UPrimitiveComponent*>* ignoredPrimitives);
};


// Class GFXUtilities.ClonedMeshComponent
// 0x0050 (0x0330 - 0x02E0)
class UClonedMeshComponent : public UBatchMeshCommands
{
public:
	TMap<class USceneComponent*, class UMeshComponent*> _originalToClone;                                         // 0x02E0(0x0050) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GFXUtilities.ClonedMeshComponent"));

		return ptr;
	}

};


// Class GFXUtilities.ClonedStaticMeshComponent
// 0x0000 (0x0660 - 0x0660)
class UClonedStaticMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GFXUtilities.ClonedStaticMeshComponent"));

		return ptr;
	}


	bool SetStaticMesh(class UStaticMesh** NewMesh);
	void SetReverseCulling(bool* ReverseCulling);
	void SetForcedLodModel(int* NewForcedLodModel);
	void SetDistanceFieldSelfShadowBias(float* NewValue);
	void OnRep_StaticMesh(class UStaticMesh** OldStaticMesh);
	void GetLocalBounds(struct FVector* Min, struct FVector* Max);
};


// Class GFXUtilities.ClonedSkeletalMeshComponent
// 0x0000 (0x0C20 - 0x0C20)
class UClonedSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GFXUtilities.ClonedSkeletalMeshComponent"));

		return ptr;
	}


	void UnbindClothFromMasterPoseComponent(bool* bRestoreSimulationSpace);
	void ToggleDisablePostProcessBlueprint();
	void TermBodiesBelow(struct FName* ParentBoneName);
	void SuspendClothingSimulation();
	void Stop();
	void SnapshotPose(struct FPoseSnapshot* Snapshot);
	void SetUpdateAnimationInEditor(bool* NewUpdateState);
	void SetTeleportRotationThreshold(float* Threshold);
	void SetTeleportDistanceThreshold(float* Threshold);
	void SetPosition(float* InPos, bool* bFireNotifies);
	void SetPlayRate(float* Rate);
	void SetPhysicsBlendWeight(float* PhysicsBlendWeight);
	void SetNotifyRigidBodyCollisionBelow(bool* bNewNotifyRigidBodyCollision, struct FName* BoneName, bool* bIncludeSelf);
	void SetMorphTarget(struct FName* MorphTargetName, float* value, bool* bRemoveZeroWeight);
	void SetEnablePhysicsBlending(bool* bNewBlendPhysics);
	void SetEnableGravityOnAllBodiesBelow(bool* bEnableGravity, struct FName* BoneName, bool* bIncludeSelf);
	void SetEnableBodyGravity(bool* bEnableGravity, struct FName* BoneName);
	void SetDisablePostProcessBlueprint(bool* bInDisablePostProcess);
	void SetDisableAnimCurves(bool* bInDisableAnimCurves);
	void SetConstraintProfileForAll(struct FName* ProfileName, bool* bDefaultIfNotFound);
	void SetConstraintProfile(struct FName* JointName, struct FName* ProfileName, bool* bDefaultIfNotFound);
	void SetClothMaxDistanceScale(float* Scale);
	void SetBodyNotifyRigidBodyCollision(bool* bNewNotifyRigidBodyCollision, struct FName* BoneName);
	void SetAnimationMode(TEnumAsByte<EAnimationMode>* InAnimationMode);
	void SetAnimation(class UAnimationAsset** NewAnimToPlay);
	void SetAngularLimits(struct FName* InBoneName, float* Swing1LimitAngle, float* TwistLimitAngle, float* Swing2LimitAngle);
	void SetAllowedAnimCurvesEvaluation(TArray<struct FName>* List, bool* bAllow);
	void SetAllowAnimCurveEvaluation(bool* bInAllow);
	void SetAllMotorsAngularVelocityDrive(bool* bEnableSwingDrive, bool* bEnableTwistDrive, bool* bSkipCustomPhysicsType);
	void SetAllMotorsAngularPositionDrive(bool* bEnableSwingDrive, bool* bEnableTwistDrive, bool* bSkipCustomPhysicsType);
	void SetAllMotorsAngularDriveParams(float* InSpring, float* InDamping, float* InForceLimit, bool* bSkipCustomPhysicsType);
	void SetAllBodiesSimulatePhysics(bool* bNewSimulate);
	void SetAllBodiesPhysicsBlendWeight(float* PhysicsBlendWeight, bool* bSkipCustomPhysicsType);
	void SetAllBodiesBelowSimulatePhysics(struct FName* InBoneName, bool* bNewSimulate, bool* bIncludeSelf);
	void SetAllBodiesBelowPhysicsBlendWeight(struct FName* InBoneName, float* PhysicsBlendWeight, bool* bSkipCustomPhysicsType, bool* bIncludeSelf);
	void ResumeClothingSimulation();
	void ResetClothTeleportMode();
	void ResetAnimInstanceDynamics(ETeleportType* InTeleportType);
	void ResetAllowedAnimCurveEvaluation();
	void ResetAllBodiesSimulatePhysics();
	void PlayAnimation(class UAnimationAsset** NewAnimToPlay, bool* bLooping);
	void Play(bool* bLooping);
	void OverrideAnimationData(class UAnimationAsset** InAnimToPlay, bool* bIsLooping, bool* bIsPlaying, float* Position, float* PlayRate);
	void K2_SetAnimInstanceClass(class UClass** NewClass);
	bool K2_GetClosestPointOnPhysicsAsset(struct FVector* WorldPosition, struct FVector* ClosestWorldPosition, struct FVector* Normal, struct FName* BoneName, float* Distance);
	bool IsPlaying();
	bool IsClothingSimulationSuspended();
	bool IsBodyGravityEnabled(struct FName* BoneName);
	bool HasValidAnimationInstance();
	float GetTeleportRotationThreshold();
	float GetTeleportDistanceThreshold();
	class UAnimInstance* GetSubInstanceByName(struct FName* InName);
	struct FVector GetSkeletalCenterOfMass();
	class UAnimInstance* GetPostProcessInstance();
	float GetPosition();
	float GetPlayRate();
	float GetMorphTarget(struct FName* MorphTargetName);
	bool GetDisablePostProcessBlueprint();
	bool GetDisableAnimCurves();
	void GetCurrentJointAngles(struct FName* InBoneName, float* Swing1Angle, float* TwistAngle, float* Swing2Angle);
	float GetClothMaxDistanceScale();
	class UClothingSimulationInteractor* GetClothingSimulationInteractor();
	float GetBoneMass(struct FName* BoneName, bool* bScaleMass);
	class UAnimInstance* GetAnimInstance();
	TEnumAsByte<EAnimationMode> GetAnimationMode();
	bool GetAllowedAnimCurveEvaluate();
	void ForceClothNextUpdateTeleportAndReset();
	void ForceClothNextUpdateTeleport();
	struct FName FindConstraintBoneName(int* ConstraintIndex);
	void ClearMorphTargets();
	void BreakConstraint(struct FVector* Impulse, struct FVector* HitLocation, struct FName* InBoneName);
	void BindClothToMasterPoseComponent();
	void AllowAnimCurveEvaluation(struct FName* NameOfCurve, bool* bAllow);
	void AddImpulseToAllBodiesBelow(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange, bool* bIncludeSelf);
	void AddForceToAllBodiesBelow(struct FVector* force, struct FName* BoneName, bool* bAccelChange, bool* bIncludeSelf);
	void AccumulateAllBodiesBelowPhysicsBlendWeight(struct FName* InBoneName, float* AddPhysicsBlendWeight, bool* bSkipCustomPhysicsType);
};


// Class GFXUtilities.LightIntensityTimelineComponent
// 0x0048 (0x0148 - 0x0100)
class ULightIntensityTimelineComponent : public UActorComponent
{
public:
	TArray<struct FLightUpdate>                        lights;                                                   // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FLightMaterialUpdate>                materialHelpers;                                          // 0x0110(0x0010) (ZeroConstructor)
	class UCurveFloat*                                 intensityCurve;                                           // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               randomizeStart;                                           // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTimelineFinished;                                       // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GFXUtilities.LightIntensityTimelineComponent"));

		return ptr;
	}


	void Reset();
	void AddMaterialHelper(class UMaterialHelper** matHelper, struct FName* propName, float* Multiplier);
	void AddLight(class ULightComponent** Light, float* Multiplier);
};


// Class GFXUtilities.MaterialHelper
// 0x0000 (0x02E0 - 0x02E0)
class UMaterialHelper : public UBatchMeshCommands
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GFXUtilities.MaterialHelper"));

		return ptr;
	}


	void UpdateMaterials();
	void SetVectorParameter(struct FName* ParameterName, struct FVector* NewValue);
	void SetTextureParameter(struct FName* ParameterName, class UTexture** newTexture);
	void SetScalarParameter(struct FName* ParameterName, float* NewValue);
	void SetRenderInMainPass(bool* inRenderInMainPass);
	void SetRenderInCustomDepth(bool* renderInCustomDepth);
	void SetRenderInCustomColourNoDepth(bool* renderInCustomColour);
	void SetReceivesDecals(bool* receivesDecals);
	void SetMaterial(struct FString* GroupName);
	void SetLightingChannelForAllMeshes(struct FLightingChannels* LightingChannels);
	void SetCustomColourWriteMask(ECustomColourWriteMask* WriteMask);
	void SetColourParameter(struct FName* ParameterName, struct FLinearColor* NewValue);
	void SetCastCinematicShadows(bool* castCinematicShadows);
	void SetAllToSameMaterial(class UMaterialInterface** MaterialInterface);
	void ResetMaterials();
	bool CopyFirstScalarParameter(struct FName* ParameterName, float* outValue);
	void BatchSetVisibility(bool* bNewVisibility, bool* bPropagateToChildren);
	void BatchSetSkipComponentAndChildrenTransformUpdate(bool* Skip);
	void BatchSetComponentTickEnabled(bool* Enabled);
};


// Class GFXUtilities.MaterialHelperUnaffectedStaticMeshComp
// 0x0000 (0x0660 - 0x0660)
class UMaterialHelperUnaffectedStaticMeshComp : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GFXUtilities.MaterialHelperUnaffectedStaticMeshComp"));

		return ptr;
	}


	bool SetStaticMesh(class UStaticMesh** NewMesh);
	void SetReverseCulling(bool* ReverseCulling);
	void SetForcedLodModel(int* NewForcedLodModel);
	void SetDistanceFieldSelfShadowBias(float* NewValue);
	void OnRep_StaticMesh(class UStaticMesh** OldStaticMesh);
	void GetLocalBounds(struct FVector* Min, struct FVector* Max);
};


// Class GFXUtilities.MeshCloningFactory
// 0x0000 (0x02E0 - 0x02E0)
class UMeshCloningFactory : public UBatchMeshCommands
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GFXUtilities.MeshCloningFactory"));

		return ptr;
	}


	void UpdateMaterials();
	void SetVectorParameter(struct FName* ParameterName, struct FVector* NewValue);
	void SetTextureParameter(struct FName* ParameterName, class UTexture** newTexture);
	void SetScalarParameter(struct FName* ParameterName, float* NewValue);
	void SetRenderInMainPass(bool* inRenderInMainPass);
	void SetRenderInCustomDepth(bool* renderInCustomDepth);
	void SetRenderInCustomColourNoDepth(bool* renderInCustomColour);
	void SetReceivesDecals(bool* receivesDecals);
	void SetMaterial(struct FString* GroupName);
	void SetLightingChannelForAllMeshes(struct FLightingChannels* LightingChannels);
	void SetCustomColourWriteMask(ECustomColourWriteMask* WriteMask);
	void SetColourParameter(struct FName* ParameterName, struct FLinearColor* NewValue);
	void SetCastCinematicShadows(bool* castCinematicShadows);
	void SetAllToSameMaterial(class UMaterialInterface** MaterialInterface);
	void ResetMaterials();
	bool CopyFirstScalarParameter(struct FName* ParameterName, float* outValue);
	void BatchSetVisibility(bool* bNewVisibility, bool* bPropagateToChildren);
	void BatchSetSkipComponentAndChildrenTransformUpdate(bool* Skip);
	void BatchSetComponentTickEnabled(bool* Enabled);
};


// Class GFXUtilities.OuterlineComponent
// 0x0030 (0x02A0 - 0x0270)
class UOuterlineComponent : public USceneComponent
{
public:
	class UMaterialInterface*                          CloneTranslucentMaterial;                                 // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    _cloneCustomDepthMaterialDynamic;                         // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    _cloneTranslucentMaterialDynamic;                         // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMeshComponent*                      _customDepthSkeletalMesh;                                 // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      _overlaySkeletalMesh;                                     // 0x0290(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class GFXUtilities.OuterlineComponent"));

		return ptr;
	}


	void SetIntensity(float* Intensity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
