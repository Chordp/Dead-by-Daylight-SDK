#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Landscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x0660 - 0x0660)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.ControlPointMeshComponent"));

		return ptr;
	}


	bool SetStaticMesh(class UStaticMesh** NewMesh);
	void SetReverseCulling(bool* ReverseCulling);
	void SetForcedLodModel(int* NewForcedLodModel);
	void SetDistanceFieldSelfShadowBias(float* NewValue);
	void OnRep_StaticMesh(class UStaticMesh** OldStaticMesh);
	void GetLocalBounds(struct FVector* Min, struct FVector* Max);
};


// Class Landscape.LandscapeProxy
// 0x0310 (0x0650 - 0x0340)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0348(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x0364(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0368(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	float                                              ComponentScreenSizeToUseSubSections;                      // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LOD0DistributionSetting;                                  // 0x0370(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistributionSetting;                                   // 0x0374(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TessellationComponentScreenSize;                          // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseTessellationComponentScreenSizeFalloff;                // 0x037C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	float                                              TessellationComponentScreenSizeFalloff;                   // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                OccluderGeometryLOD;                                      // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeProxyMaterialOverride>     LandscapeMaterialsOverride;                               // 0x03B0(0x0010) (Edit, ZeroConstructor)
	float                                              NegativeZBoundsExtension;                                 // 0x03C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x03C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x03C8(0x0010) (ExportObject, ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x03D8(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x03E8(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData04[0x64];                                      // 0x03F8(0x0064) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x045C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x0460(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0464(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0464(0x0001) (Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x0464(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLightingChannels                           LightingChannels;                                         // 0x0469(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData07[0x2];                                       // 0x046A(0x0002) MISSED OFFSET
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x046C(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x046C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData08[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0470(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LDMaxDrawDistance;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x0478(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x04A0(0x0148) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x05E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x05E8(0x0001) (Edit)
	unsigned char                                      UnknownData10[0x3];                                       // 0x05E9(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x05EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x05F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x05F4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x05F8(0x0001) (Edit)
	unsigned char                                      UnknownData11[0x3];                                       // 0x05F9(0x0003) MISSED OFFSET
	bool                                               bUseDynamicMaterialInstance;                              // 0x05FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x05FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x05FE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x51];                                      // 0x05FF(0x0051) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeProxy"));

		return ptr;
	}


	void SetLandscapeMaterialVectorParameterValue(struct FName* ParameterName, struct FLinearColor* value);
	void SetLandscapeMaterialTextureParameterValue(struct FName* ParameterName, class UTexture** value);
	void SetLandscapeMaterialScalarParameterValue(struct FName* ParameterName, float* value);
	void EditorSetLandscapeMaterial(class UMaterialInterface** NewLandscapeMaterial);
	void EditorApplySpline(class USplineComponent** InSplineComponent, float* StartWidth, float* EndWidth, float* StartSideFalloff, float* EndSideFalloff, float* StartRoll, float* EndRoll, int* NumSubdivisions, bool* bRaiseHeights, bool* bLowerHeights, class ULandscapeLayerInfoObject** PaintLayer);
	void ChangeUseTessellationComponentScreenSizeFalloff(bool* InComponentScreenSizeToUseSubSections);
	void ChangeTessellationComponentScreenSizeFalloff(float* InUseTessellationComponentScreenSizeFalloff);
	void ChangeTessellationComponentScreenSize(float* InTessellationComponentScreenSize);
	void ChangeLODDistanceFactor(float* InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float* InComponentScreenSizeToUseSubSections);
};


// Class Landscape.Landscape
// 0x0000 (0x0650 - 0x0650)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.Landscape"));

		return ptr;
	}


	void SetLandscapeMaterialVectorParameterValue(struct FName* ParameterName, struct FLinearColor* value);
	void SetLandscapeMaterialTextureParameterValue(struct FName* ParameterName, class UTexture** value);
	void SetLandscapeMaterialScalarParameterValue(struct FName* ParameterName, float* value);
	void EditorSetLandscapeMaterial(class UMaterialInterface** NewLandscapeMaterial);
	void EditorApplySpline(class USplineComponent** InSplineComponent, float* StartWidth, float* EndWidth, float* StartSideFalloff, float* EndSideFalloff, float* StartRoll, float* EndRoll, int* NumSubdivisions, bool* bRaiseHeights, bool* bLowerHeights, class ULandscapeLayerInfoObject** PaintLayer);
	void ChangeUseTessellationComponentScreenSizeFalloff(bool* InComponentScreenSizeToUseSubSections);
	void ChangeTessellationComponentScreenSizeFalloff(float* InUseTessellationComponentScreenSizeFalloff);
	void ChangeTessellationComponentScreenSize(float* InTessellationComponentScreenSize);
	void ChangeLODDistanceFactor(float* InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float* InComponentScreenSizeToUseSubSections);
};


// Class Landscape.LandscapeBlueprintCustomBrush
// 0x0008 (0x0348 - 0x0340)
class ALandscapeBlueprintCustomBrush : public AActor
{
public:
	bool                                               AffectHeightmap;                                          // 0x0340(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AffectWeightmap;                                          // 0x0341(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeBlueprintCustomBrush"));

		return ptr;
	}


	class UTextureRenderTarget2D* Render(bool* InIsHeightmap, class UTextureRenderTarget2D** InCombinedResult);
	void Initialize(struct FIntPoint* InLandscapeSize, struct FIntPoint* InLandscapeRenderTargetSize);
};


// Class Landscape.LandscapeBlueprintCustomSimulationBrush
// 0x0000 (0x0348 - 0x0348)
class ALandscapeBlueprintCustomSimulationBrush : public ALandscapeBlueprintCustomBrush
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeBlueprintCustomSimulationBrush"));

		return ptr;
	}


	class UTextureRenderTarget2D* Render(bool* InIsHeightmap, class UTextureRenderTarget2D** InCombinedResult);
	void Initialize(struct FIntPoint* InLandscapeSize, struct FIntPoint* InLandscapeRenderTargetSize);
};


// Class Landscape.LandscapeComponent
// 0x01F0 (0x0790 - 0x05A0)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                ComponentSizeQuads;                                       // 0x05A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x05A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x05A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials;                                        // 0x05C0(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x05D0(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                 // 0x05E0(0x0010) (ZeroConstructor, Transient)
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                  // 0x05F0(0x0010) (ZeroConstructor)
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;              // 0x0600(0x0010) (ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x0610(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0620(0x0010) (ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x0630(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0638(0x0008) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0640(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x0650(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0654(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x0660(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0670(0x001C) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x068C(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x06A8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x06B0(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x06C0(0x0010) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x06D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x06D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x06D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x06DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x06E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x06E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x06E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x06EC(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x06FC(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0710(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0718(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0719(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0720(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                 // 0x0728(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                  // 0x0738(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x48];                                      // 0x0748(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeComponent"));

		return ptr;
	}


	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int* InIndex);
};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x0340 - 0x0340)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoActor"));

		return ptr;
	}


	bool WasRecentlyRendered(float* Tolerance);
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName);
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetReplicates(bool* bInReplicates);
	void SetReplicateMovement(bool* bInReplicateMovement);
	void SetOwner(class AActor** NewOwner);
	void SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy);
	void SetLifeSpan(float* InLifespan);
	void SetActorTickInterval(float* TickInterval);
	void SetActorTickEnabled(bool* bEnabled);
	void SetActorScale3D(struct FVector* NewScale3D);
	void SetActorRelativeScale3D(struct FVector* NewRelativeScale);
	void SetActorHiddenInGame(bool* bNewHidden);
	void SetActorEnableCollision(bool* bNewActorEnableCollision);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceiveActorOnReleased(struct FKey* ButtonReleased);
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnClicked(struct FKey* ButtonPressed);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveActorBeginCursorOver();
	void PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups);
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface** Parent);
	bool K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation);
	bool K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics);
	void K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_OnReset();
	void K2_OnEndViewTarget(class APlayerController** PC);
	void K2_OnBecomeViewTarget(class APlayerController** PC);
	class USceneComponent* K2_GetRootComponent();
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule);
	void K2_DestroyComponent(class UActorComponent** Component);
	void K2_DestroyActor();
	void K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	void K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	void K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor** Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor** OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(class AActor** OtherActor);
	TEnumAsByte<ENetRole> GetRemoteRole();
	class UChildActorComponent* GetParentComponent();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors);
	TEnumAsByte<ENetRole> GetLocalRole();
	float GetLifeSpan();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(struct FKey* InputAxisKey);
	float GetInputAxisValue(struct FName* InputAxisName);
	float GetInputAxisKeyValue(struct FKey* InputAxisKey);
	float GetHorizontalDotProductTo(class AActor** OtherActor);
	float GetHorizontalDistanceTo(class AActor** OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(class AActor** OtherActor);
	float GetDistanceTo(class AActor** OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag);
	TArray<class UActorComponent*> GetComponentsByClass(class UClass** ComponentClass);
	class UActorComponent* GetComponentByClass(class UClass** ComponentClass);
	struct FName GetAttachParentSocketName();
	class AActor* GetAttachParentActor();
	void GetAttachedActors(TArray<class AActor*>* OutActors);
	void GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(class APlayerController** PlayerController);
	void DisableInput(class APlayerController** PlayerController);
	void DetachRootComponentFromParent(bool* bMaintainWorldPosition);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	class UActorComponent* AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext);
	bool ActorHasTag(struct FName* Tag);
};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x0390 - 0x0340)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0340(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoActiveActor"));

		return ptr;
	}


	bool WasRecentlyRendered(float* Tolerance);
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName);
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetReplicates(bool* bInReplicates);
	void SetReplicateMovement(bool* bInReplicateMovement);
	void SetOwner(class AActor** NewOwner);
	void SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy);
	void SetLifeSpan(float* InLifespan);
	void SetActorTickInterval(float* TickInterval);
	void SetActorTickEnabled(bool* bEnabled);
	void SetActorScale3D(struct FVector* NewScale3D);
	void SetActorRelativeScale3D(struct FVector* NewRelativeScale);
	void SetActorHiddenInGame(bool* bNewHidden);
	void SetActorEnableCollision(bool* bNewActorEnableCollision);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceiveActorOnReleased(struct FKey* ButtonReleased);
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnClicked(struct FKey* ButtonPressed);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveActorBeginCursorOver();
	void PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups);
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface** Parent);
	bool K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation);
	bool K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics);
	void K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_OnReset();
	void K2_OnEndViewTarget(class APlayerController** PC);
	void K2_OnBecomeViewTarget(class APlayerController** PC);
	class USceneComponent* K2_GetRootComponent();
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule);
	void K2_DestroyComponent(class UActorComponent** Component);
	void K2_DestroyActor();
	void K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	void K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	void K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor** Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor** OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(class AActor** OtherActor);
	TEnumAsByte<ENetRole> GetRemoteRole();
	class UChildActorComponent* GetParentComponent();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors);
	TEnumAsByte<ENetRole> GetLocalRole();
	float GetLifeSpan();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(struct FKey* InputAxisKey);
	float GetInputAxisValue(struct FName* InputAxisName);
	float GetInputAxisKeyValue(struct FKey* InputAxisKey);
	float GetHorizontalDotProductTo(class AActor** OtherActor);
	float GetHorizontalDistanceTo(class AActor** OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(class AActor** OtherActor);
	float GetDistanceTo(class AActor** OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag);
	TArray<class UActorComponent*> GetComponentsByClass(class UClass** ComponentClass);
	class UActorComponent* GetComponentByClass(class UClass** ComponentClass);
	struct FName GetAttachParentSocketName();
	class AActor* GetAttachParentActor();
	void GetAttachedActors(TArray<class AActor*>* OutActors);
	void GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(class APlayerController** PlayerController);
	void DisableInput(class APlayerController** PlayerController);
	void DetachRootComponentFromParent(bool* bMaintainWorldPosition);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	class UActorComponent* AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext);
	bool ActorHasTag(struct FName* Tag);
};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x05A0 - 0x05A0)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoRenderComponent"));

		return ptr;
	}


	void WakeRigidBody(struct FName* BoneName);
	void WakeAllRigidBodies();
	void SetWalkableSlopeOverride(struct FWalkableSlopeOverride* NewOverride);
	void SetUseCCD(bool* InUseCCD, struct FName* BoneName);
	void SetTranslucentSortPriority(int* NewTranslucentSortPriority);
	void SetSingleSampleShadowFromStationaryLights(bool* bNewSingleSampleShadowFromStationaryLights);
	void SetSimulatePhysics(bool* bSimulate);
	void SetRenderInMainPass(bool* bValue);
	void SetRenderCustomDepth(bool* bValue);
	void SetRenderCustomColourNoDepth(bool* bValue);
	void SetReceivesDecals(bool* bNewReceivesDecals);
	void SetPhysMaterialOverride(class UPhysicalMaterial** NewPhysMaterial);
	void SetPhysicsMaxAngularVelocityInRadians(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName);
	void SetPhysicsMaxAngularVelocityInDegrees(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName);
	void SetPhysicsMaxAngularVelocity(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName);
	void SetPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent, struct FName* BoneName);
	void SetPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName);
	void SetPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName);
	void SetPhysicsAngularVelocity(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName);
	void SetOwnerNoSee(bool* bNewOwnerNoSee);
	void SetOnlyOwnerSee(bool* bNewOnlyOwnerSee);
	void SetNotifyRigidBodyCollision(bool* bNewNotifyRigidBodyCollision);
	void SetMaterialByName(struct FName* MaterialSlotName, class UMaterialInterface** Material);
	void SetMaterial(int* ElementIndex, class UMaterialInterface** Material);
	void SetMassScale(struct FName* BoneName, float* InMassScale);
	void SetMassOverrideInKg(struct FName* BoneName, float* MassInKg, bool* bOverrideMass);
	void SetLinearDamping(float* InDamping);
	void SetGenerateOverlapEvents(bool* bInGenerateOverlapEvents);
	void SetEnableGravity(bool* bGravityEnabled);
	void SetCustomDepthStencilWriteMask(ERendererStencilMask* WriteMaskBit);
	void SetCustomDepthStencilValue(int* value);
	void SetCustomColourWriteMask(ECustomColourWriteMask* WriteMask);
	void SetCullDistance(float* NewCullDistance);
	void SetConstraintMode(TEnumAsByte<EDOFMode>* ConstraintMode);
	void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel, TEnumAsByte<ECollisionResponse>* NewResponse);
	void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse>* NewResponse);
	void SetCollisionProfileName(struct FName* InCollisionProfileName);
	void SetCollisionObjectType(TEnumAsByte<ECollisionChannel>* Channel);
	void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled>* NewType);
	void SetCenterOfMass(struct FVector* CenterOfMassOffset, struct FName* BoneName);
	void SetCastShadow(bool* NewCastShadow);
	void SetBoundsScale(float* NewBoundsScale);
	void SetAngularDamping(float* InDamping);
	void SetAllUseCCD(bool* InUseCCD);
	void SetAllPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent);
	void SetAllPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent);
	void SetAllPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent);
	void SetAllMassScale(float* InMassScale);
	struct FVector ScaleByMomentOfInertia(struct FVector* InputVector, struct FName* BoneName);
	void PutRigidBodyToSleep(struct FName* BoneName);
	bool K2_SphereTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, float* SphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	bool K2_SphereOverlapComponent(struct FVector* InSphereCentre, float* InSphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	bool K2_LineTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	bool K2_IsQueryCollisionEnabled();
	bool K2_IsPhysicsCollisionEnabled();
	bool K2_IsCollisionEnabled();
	bool K2_BoxOverlapComponent(struct FVector* InBoxCentre, struct FBox* InBox, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	bool IsOverlappingComponent(class UPrimitiveComponent** OtherComp);
	bool IsOverlappingActor(class AActor** Other);
	bool IsGravityEnabled();
	bool IsAnyRigidBodyAwake();
	void IgnoreComponentWhenMoving(class UPrimitiveComponent** Component, bool* bShouldIgnore);
	void IgnoreActorWhenMoving(class AActor** Actor, bool* bShouldIgnore);
	struct FWalkableSlopeOverride GetWalkableSlopeOverride();
	struct FVector GetPhysicsLinearVelocityAtPoint(struct FVector* Point, struct FName* BoneName);
	struct FVector GetPhysicsLinearVelocity(struct FName* BoneName);
	struct FVector GetPhysicsAngularVelocityInRadians(struct FName* BoneName);
	struct FVector GetPhysicsAngularVelocityInDegrees(struct FName* BoneName);
	struct FVector GetPhysicsAngularVelocity(struct FName* BoneName);
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents);
	void GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors);
	int GetNumMaterials();
	class UMaterialInterface* GetMaterialFromCollisionFaceIndex(int* FaceIndex, int* SectionIndex);
	class UMaterialInterface* GetMaterial(int* ElementIndex);
	float GetMassScale(struct FName* BoneName);
	float GetMass();
	float GetLinearDamping();
	struct FVector GetInertiaTensor(struct FName* BoneName);
	bool GetGenerateOverlapEvents();
	TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel);
	struct FName GetCollisionProfileName();
	TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
	TEnumAsByte<ECollisionEnabled> GetCollisionEnabled();
	float GetClosestPointOnCollision(struct FVector* Point, struct FName* BoneName, struct FVector* OutPointOnBody);
	struct FVector GetCenterOfMass(struct FName* BoneName);
	float GetAngularDamping();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int* ElementIndex, class UMaterialInterface** SourceMaterial, struct FName* OptionalName);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int* ElementIndex, class UMaterialInterface** Parent);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int* ElementIndex);
	TArray<class UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
	TArray<class AActor*> CopyArrayOfMoveIgnoreActors();
	void ClearMoveIgnoreComponents();
	void ClearMoveIgnoreActors();
	bool CanCharacterStepUp(class APawn** Pawn);
	void AddTorqueInRadians(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange);
	void AddTorqueInDegrees(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange);
	void AddTorque(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange);
	void AddRadialImpulse(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bVelChange);
	void AddRadialForce(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bAccelChange);
	void AddImpulseAtLocation(struct FVector* Impulse, struct FVector* Location, struct FName* BoneName);
	void AddImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange);
	void AddForceAtLocationLocal(struct FVector* force, struct FVector* Location, struct FName* BoneName);
	void AddForceAtLocation(struct FVector* force, struct FVector* Location, struct FName* BoneName);
	void AddForce(struct FVector* force, struct FName* BoneName, bool* bAccelChange);
	void AddAngularImpulseInRadians(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange);
	void AddAngularImpulseInDegrees(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange);
	void AddAngularImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange);
};


// Class Landscape.LandscapeGrassType
// 0x0038 (0x0068 - 0x0030)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0040(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UStaticMesh*                                 GrassMesh;                                                // 0x0048(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0058(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x005C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0060(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0061(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGrassType"));

		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x0680 - 0x05A0)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05A0(0x0008) MISSED OFFSET
	int                                                SectionBaseX;                                             // 0x05A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x05AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x05B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x05B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x05B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05BC(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x05C0(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x05D0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x05E0(0x001C) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x05FC(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0618(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x0628(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0638(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeHeightfieldCollisionComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeInfo
// 0x01D8 (0x0208 - 0x0030)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0030(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0068(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0074(0x0054) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0074(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData02[0xF0];                                      // 0x0118(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeInfo"));

		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0058 (0x0088 - 0x0030)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeInfoMap"));

		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0030 (0x0060 - 0x0030)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0030(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x004C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeLayerInfoObject"));

		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0008 (0x01D8 - 0x01D0)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x01D0(0x0001)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x01D0(0x0001)
	unsigned char                                      bMobile : 1;                                              // 0x01D0(0x0001)
	unsigned char                                      bEditorToolUsage : 1;                                     // 0x01D0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMaterialInstanceConstant"));

		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x0690 - 0x0680)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0680(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshCollisionComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x0348 - 0x0340)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshProxyActor"));

		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0020 (0x0680 - 0x0660)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0660(0x0008) MISSED OFFSET
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x0668(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0678(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0679(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshProxyComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x05D0 - 0x05A0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05A0(0x0008) MISSED OFFSET
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x05A8(0x0010) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x05B8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplinesComponent"));

		return ptr;
	}


	TArray<class USplineMeshComponent*> GetSplineMeshComponents();
};


// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x00A0 - 0x0030)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0068(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0078(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplineControlPoint"));

		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B8 - 0x0030)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0030(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0060(0x0018) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0078(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0088(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A8(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplineSegment"));

		return ptr;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0670 - 0x0650)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0650(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x066C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeStreamingProxy"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0058 - 0x0048)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeGrassOutput"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerBlend"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	float                                              MappingScale;                                             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerCoords"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0048(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              PreviewWeight;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerSample"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0058 (0x00A0 - 0x0048)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0048(0x0010)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0064(0x0010)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      PreviewUsed : 1;                                          // 0x008C(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerSwitch"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0068 (0x00B0 - 0x0048)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0048(0x0010)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0058(0x000C) MISSED OFFSET
	struct FExpressionInput                            Layer;                                                    // 0x0064(0x0010)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              PreviewWeight;                                            // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x0090(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x009C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerWeight"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0058 - 0x0048)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeVisibilityMask"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
