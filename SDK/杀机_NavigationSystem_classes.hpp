#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_NavigationSystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NavigationSystem.NavigationData
// 0x01D8 (0x0518 - 0x0340)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         RenderingComp;                                            // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FNavDataConfig                              NavDataConfig;                                            // 0x0350(0x0080)
	unsigned char                                      bEnableDrawing : 1;                                       // 0x03D0(0x0001) (Edit, Transient)
	unsigned char                                      bForceRebuildOnLoad : 1;                                  // 0x03D0(0x0001) (Edit, Config)
	unsigned char                                      bCanBeMainNavData : 1;                                    // 0x03D0(0x0001) (Edit, Config)
	unsigned char                                      bCanSpawnOnRebuild : 1;                                   // 0x03D0(0x0001) (Edit, Config, EditConst)
	unsigned char                                      bRebuildAtRuntime : 1;                                    // 0x03D0(0x0001) (Config, Deprecated)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	ERuntimeGenerationType                             RuntimeGeneration;                                        // 0x03D4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              ObservedPathsTickInterval;                                // 0x03D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           DataVersion;                                              // 0x03DC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD0];                                      // 0x03E0(0x00D0) MISSED OFFSET
	TArray<struct FSupportedAreaData>                  SupportedAreas;                                           // 0x04B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x58];                                      // 0x04C0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationData"));

		return ptr;
	}

};


// Class NavigationSystem.AbstractNavData
// 0x0000 (0x0518 - 0x0518)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.AbstractNavData"));

		return ptr;
	}

};


// Class NavigationSystem.CrowdManagerBase
// 0x0000 (0x0030 - 0x0030)
class UCrowdManagerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.CrowdManagerBase"));

		return ptr;
	}

};


// Class NavigationSystem.NavArea
// 0x0018 (0x0050 - 0x0038)
class UNavArea : public UNavAreaBase
{
public:
	float                                              DefaultCost;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FixedAreaEnteringCost;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0044(0x0004) (Edit, Config)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0048(0x0001) (Config)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0048(0x0001) (Config)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0048(0x0001) (Config)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0048(0x0001) (Config)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0048(0x0001) (Config)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0048(0x0001) (Config)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0048(0x0001) (Config)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0048(0x0001) (Config)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0049(0x0001) (Config)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0049(0x0001) (Config)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0049(0x0001) (Config)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0049(0x0001) (Config)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0049(0x0001) (Config)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0049(0x0001) (Config)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0049(0x0001) (Config)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0049(0x0001) (Config)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavArea"));

		return ptr;
	}

};


// Class NavigationSystem.NavArea_Default
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavArea_Default"));

		return ptr;
	}

};


// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (0x0050 - 0x0050)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavArea_LowHeight"));

		return ptr;
	}

};


// Class NavigationSystem.NavArea_Null
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavArea_Null"));

		return ptr;
	}

};


// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavArea_Obstacle"));

		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta
// 0x0000 (0x0050 - 0x0050)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavAreaMeta"));

		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00D0 - 0x0050)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UClass*                                      Agent0Area;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent1Area;                                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent2Area;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent3Area;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent4Area;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent5Area;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent6Area;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent7Area;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent8Area;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent9Area;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent10Area;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent11Area;                                              // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent12Area;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent13Area;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent14Area;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent15Area;                                              // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavAreaMeta_SwitchByAgent"));

		return ptr;
	}

};


// Class NavigationSystem.NavCollision
// 0x0068 (0x00E0 - 0x0078)
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                        // 0x0088(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                             // 0x0098(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      AreaClass;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGatherConvexGeometry : 1;                                // 0x00B0(0x0001) (Edit, Config)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x00B0(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00B1(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavCollision"));

		return ptr;
	}

};


// Class NavigationSystem.NavigationGraph
// 0x0000 (0x0518 - 0x0518)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationGraph"));

		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNode
// 0x0000 (0x0340 - 0x0340)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationGraphNode"));

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


// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0020 (0x0290 - 0x0270)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) MISSED OFFSET
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                        // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                        // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationGraphNodeComponent"));

		return ptr;
	}

};


// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (0x0108 - 0x0100)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                              TileGenerationRadius;                                     // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileRemovalRadius;                                        // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationInvokerComponent"));

		return ptr;
	}

};


// Class NavigationSystem.NavigationPath
// 0x0060 (0x0090 - 0x0030)
class UNavigationPath : public UObject
{
public:
	struct FScriptMulticastDelegate                    PathUpdatedNotifier;                                      // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FVector>                             PathPoints;                                               // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0051(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationPath"));

		return ptr;
	}


	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag>* DoRecalculation);
	void EnableDebugDrawing(bool* bShouldDrawDebugData, struct FLinearColor* PathColor);
};


// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (0x0030 - 0x0030)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationPathGenerator"));

		return ptr;
	}

};


// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (0x0050 - 0x0030)
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>               Areas;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FNavigationFilterFlags                      IncludeFlags;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavigationFilterFlags                      ExcludeFlags;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationQueryFilter"));

		return ptr;
	}

};


// Class NavigationSystem.NavigationSystemV1
// 0x0410 (0x0440 - 0x0030)
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                             MainNavData;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             AbstractNavData;                                          // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) UNKNOWN PROPERTY: SoftClassProperty NavigationSystem.NavigationSystemV1.CrowdManagerClass
	unsigned char                                      bAutoCreateNavigationData : 1;                            // 0x0070(0x0001) (Edit, Config)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0070(0x0001) (Edit, Config)
	unsigned char                                      bAllowClientSideNavigation : 1;                           // 0x0070(0x0001) (Edit, Config)
	unsigned char                                      bShouldDiscardSubLevelNavData : 1;                        // 0x0070(0x0001) (Edit, Config)
	unsigned char                                      bTickWhilePaused : 1;                                     // 0x0070(0x0001) (Edit, Config)
	unsigned char                                      bSupportRebuilding : 1;                                   // 0x0070(0x0001)
	unsigned char                                      bInitialBuildingLocked : 1;                               // 0x0070(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01 : 1;                                        // 0x0070(0x0001)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;              // 0x0071(0x0001) (Edit, Config)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	ENavDataGatheringModeConfig                        DataGatheringMode;                                        // 0x0074(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;      // 0x0078(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              ActiveTilesUpdateInterval;                                // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FNavDataConfig>                      SupportedAgents;                                          // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	float                                              DirtyAreasUpdateFreq;                                     // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<class ANavigationData*>                     NavDataSet;                                               // 0x0098(0x0010) (ZeroConstructor)
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                 // 0x00A8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x60];                                      // 0x00B8(0x0060) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNavDataRegisteredEvent;                                 // 0x0118(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    OnNavigationGenerationFinishedDelegate;                   // 0x0128(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0xCC];                                      // 0x0138(0x00CC) MISSED OFFSET
	EFNavigationSystemRunMode                          OperationMode;                                            // 0x0204(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x23B];                                     // 0x0205(0x023B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationSystemV1"));

		return ptr;
	}


	void UnregisterNavigationInvoker(class AActor** Invoker);
	void STATIC_SimpleMoveToLocation(class AController** Controller, struct FVector* Goal);
	void STATIC_SimpleMoveToActor(class AController** Controller, class AActor** Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int* MaxNumberOfJobs);
	void SetGeometryGatheringMode(ENavDataGatheringModeConfig* NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor** Invoker, float* TileGenerationRadius, float* TileRemovalRadius);
	struct FVector STATIC_ProjectPointToNavigation(class UObject** WorldContextObject, struct FVector* Point, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume** NavVolume);
	bool STATIC_NavigationRaycast(class UObject** WorldContextObject, struct FVector* RayStart, struct FVector* RayEnd, class UClass** FilterClass, class AController** Querier, struct FVector* HitLocation);
	bool STATIC_K2_ProjectPointToNavigation(class UObject** WorldContextObject, struct FVector* Point, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* QueryExtent, struct FVector* ProjectedLocation);
	bool STATIC_K2_GetRandomReachablePointInRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* RandomLocation);
	bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* RandomLocation);
	bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject** WorldContextObject);
	bool STATIC_IsNavigationBeingBuilt(class UObject** WorldContextObject);
	struct FVector STATIC_GetRandomReachablePointInRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass);
	struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathLength(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class ANavigationData** NavData, class UClass** FilterClass, float* PathLength);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathCost(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class ANavigationData** NavData, class UClass** FilterClass, float* PathCost);
	class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject** WorldContextObject);
	class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class AActor** PathfindingContext, class UClass** FilterClass);
	class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject** WorldContextObject, struct FVector* PathStart, class AActor** GoalActor, float* TetherDistance, class AActor** PathfindingContext, class UClass** FilterClass);
};


// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (0x0060 - 0x0058)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic : 1;                                      // 0x0058(0x0001) (Edit)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x0058(0x0001) (Edit)
	unsigned char                                      bAutoSpawnMissingNavData : 1;                             // 0x0058(0x0001) (Edit)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationSystemModuleConfig"));

		return ptr;
	}

};


// Class NavigationSystem.NavigationTestingActor
// 0x00F0 (0x0430 - 0x0340)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationInvokerComponent*                 InvokerComponent;                                         // 0x0358(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bActAsNavigationInvoker : 1;                              // 0x0360(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	struct FNavAgentProperties                         NavAgentProps;                                            // 0x0368(0x0038) (Edit)
	struct FVector                                     QueryingExtent;                                           // 0x03A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ProjectedLocation;                                        // 0x03B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bProjectedLocationValid : 1;                              // 0x03C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bSearchStart : 1;                                         // 0x03C4(0x0001) (Edit)
	unsigned char                                      bBacktracking : 1;                                        // 0x03C4(0x0001) (Edit)
	unsigned char                                      bUseHierarchicalPathfinding : 1;                          // 0x03C4(0x0001) (Edit)
	unsigned char                                      bGatherDetailedInfo : 1;                                  // 0x03C4(0x0001) (Edit)
	unsigned char                                      bDrawDistanceToWall : 1;                                  // 0x03C4(0x0001) (Edit)
	unsigned char                                      bShowNodePool : 1;                                        // 0x03C4(0x0001) (Edit)
	unsigned char                                      bShowBestPath : 1;                                        // 0x03C4(0x0001) (Edit)
	unsigned char                                      bShowDiffWithPreviousStep : 1;                            // 0x03C5(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x03C5(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03C6(0x0002) MISSED OFFSET
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                          // 0x03C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	struct FVector2D                                   TextCanvasOffset;                                         // 0x03CC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPathExist : 1;                                           // 0x03D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathIsPartial : 1;                                       // 0x03D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathSearchOutOfNodes : 1;                                // 0x03D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              PathfindingTime;                                          // 0x03D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              PathCost;                                                 // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                PathfindingSteps;                                         // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class ANavigationTestingActor*                     OtherActor;                                               // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowStepIndex;                                            // 0x03F8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	float                                              OffsetFromCornersDistance;                                // 0x03FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x30];                                      // 0x0400(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavigationTestingActor"));

		return ptr;
	}

};


// Class NavigationSystem.NavLinkComponent
// 0x0010 (0x05B0 - 0x05A0)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	TArray<struct FNavigationLink>                     Links;                                                    // 0x05A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavLinkComponent"));

		return ptr;
	}

};


// Class NavigationSystem.NavRelevantComponent
// 0x0030 (0x0130 - 0x0100)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0100(0x0024) MISSED OFFSET
	unsigned char                                      bAttachToOwnersRoot : 1;                                  // 0x0124(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	class UObject*                                     CachedNavParent;                                          // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavRelevantComponent"));

		return ptr;
	}


	void SetNavigationRelevancy(bool* bRelevant);
};


// Class NavigationSystem.NavLinkCustomComponent
// 0x00A8 (0x01D8 - 0x0130)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	uint32_t                                           NavLinkUserId;                                            // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UClass*                                      EnabledAreaClass;                                         // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DisabledAreaClass;                                        // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinkRelativeStart;                                        // 0x0150(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinkRelativeEnd;                                          // 0x015C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                            // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	unsigned char                                      bLinkEnabled : 1;                                         // 0x016C(0x0001) (Edit)
	unsigned char                                      bNotifyWhenEnabled : 1;                                   // 0x016C(0x0001) (Edit)
	unsigned char                                      bNotifyWhenDisabled : 1;                                  // 0x016C(0x0001) (Edit)
	unsigned char                                      bCreateBoxObstacle : 1;                                   // 0x016C(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	struct FVector                                     ObstacleOffset;                                           // 0x0170(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ObstacleExtent;                                           // 0x017C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObstacleAreaClass;                                        // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastRadius;                                          // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastInterval;                                        // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                         // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3F];                                      // 0x0199(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavLinkCustomComponent"));

		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (0x0030 - 0x0030)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavLinkCustomInterface"));

		return ptr;
	}

};


// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (0x0030 - 0x0030)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavLinkHostInterface"));

		return ptr;
	}

};


// Class NavigationSystem.NavLinkRenderingComponent
// 0x0000 (0x05A0 - 0x05A0)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavLinkRenderingComponent"));

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


// Class NavigationSystem.NavLinkTrivial
// 0x0000 (0x0058 - 0x0058)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavLinkTrivial"));

		return ptr;
	}

};


// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (0x0380 - 0x0378)
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0378(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavMeshBoundsVolume"));

		return ptr;
	}

};


// Class NavigationSystem.NavMeshRenderingComponent
// 0x0010 (0x05B0 - 0x05A0)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavMeshRenderingComponent"));

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


// Class NavigationSystem.NavModifierComponent
// 0x0028 (0x0158 - 0x0130)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                      AreaClass;                                                // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FailsafeExtent;                                           // 0x0138(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeAgentHeight : 1;                                  // 0x0144(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0145(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavModifierComponent"));

		return ptr;
	}


	void SetAreaClass(class UClass** NewAreaClass);
};


// Class NavigationSystem.NavModifierVolume
// 0x0010 (0x0388 - 0x0378)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavModifierVolume"));

		return ptr;
	}


	void SetAreaClass(class UClass** NewAreaClass);
};


// Class NavigationSystem.NavNodeInterface
// 0x0000 (0x0030 - 0x0030)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavNodeInterface"));

		return ptr;
	}

};


// Class NavigationSystem.NavSystemConfigOverride
// 0x0010 (0x0350 - 0x0340)
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bLoadOnClient : 1;                                        // 0x0348(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavSystemConfigOverride"));

		return ptr;
	}

};


// Class NavigationSystem.NavTestRenderingComponent
// 0x0000 (0x05A0 - 0x05A0)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.NavTestRenderingComponent"));

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


// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (0x0050 - 0x0050)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.RecastFilter_UseDefaultArea"));

		return ptr;
	}

};


// Class NavigationSystem.RecastNavMesh
// 0x00B8 (0x05D0 - 0x0518)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges : 1;                                   // 0x0518(0x0001) (Edit)
	unsigned char                                      bDrawPolyEdges : 1;                                       // 0x0518(0x0001) (Edit, Config)
	unsigned char                                      bDrawFilledPolys : 1;                                     // 0x0518(0x0001) (Edit)
	unsigned char                                      bDrawNavMeshEdges : 1;                                    // 0x0518(0x0001) (Edit)
	unsigned char                                      bDrawTileBounds : 1;                                      // 0x0518(0x0001) (Edit)
	unsigned char                                      bDrawPathCollidingGeometry : 1;                           // 0x0518(0x0001) (Edit)
	unsigned char                                      bDrawTileLabels : 1;                                      // 0x0518(0x0001) (Edit)
	unsigned char                                      bDrawPolygonLabels : 1;                                   // 0x0518(0x0001) (Edit)
	unsigned char                                      bDrawDefaultPolygonCost : 1;                              // 0x0519(0x0001) (Edit)
	unsigned char                                      bDrawLabelsOnPathNodes : 1;                               // 0x0519(0x0001) (Edit)
	unsigned char                                      bDrawNavLinks : 1;                                        // 0x0519(0x0001) (Edit)
	unsigned char                                      bDrawFailedNavLinks : 1;                                  // 0x0519(0x0001) (Edit)
	unsigned char                                      bDrawClusters : 1;                                        // 0x0519(0x0001) (Edit)
	unsigned char                                      bDrawOctree : 1;                                          // 0x0519(0x0001) (Edit)
	unsigned char                                      bDrawOctreeDetails : 1;                                   // 0x0519(0x0001) (Edit)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt : 1;                       // 0x0519(0x0001) (Config)
	unsigned char                                      bDrawNavMesh : 1;                                         // 0x051A(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x051B(0x0001) MISSED OFFSET
	float                                              DrawOffset;                                               // 0x051C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bFixedTilePoolSize : 1;                                   // 0x0520(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	int                                                TilePoolSize;                                             // 0x0524(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TileSizeUU;                                               // 0x0528(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellSize;                                                 // 0x052C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellHeight;                                               // 0x0530(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0534(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0538(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxHeight;                                           // 0x053C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0540(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxStepHeight;                                       // 0x0544(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0548(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MergeRegionSize;                                          // 0x054C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSimplificationError;                                   // 0x0550(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSimultaneousTileGenerationJobsCount;                   // 0x0554(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TileNumberHardLimit;                                      // 0x0558(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PolyRefTileBits;                                          // 0x055C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefNavPolyBits;                                       // 0x0560(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefSaltBits;                                          // 0x0564(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     NavMeshOriginOffset;                                      // 0x0568(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultDrawDistance;                                      // 0x0574(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxSearchNodes;                                    // 0x0578(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxHierarchicalSearchNodes;                        // 0x057C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                       // 0x0580(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                        // 0x0581(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0582(0x0002) MISSED OFFSET
	int                                                RegionChunkSplits;                                        // 0x0584(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LayerChunkSplits;                                         // 0x0588(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bSortNavigationAreasByCost : 1;                           // 0x058C(0x0001) (Edit, Config)
	unsigned char                                      bPerformVoxelFiltering : 1;                               // 0x058C(0x0001) (Edit, Config)
	unsigned char                                      bMarkLowHeightAreas : 1;                                  // 0x058C(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanSequences : 1;                              // 0x058C(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                          // 0x058C(0x0001) (Edit, Config)
	unsigned char                                      bDoFullyAsyncNavDataGathering : 1;                        // 0x058C(0x0001) (Edit, Config)
	unsigned char                                      bUseBetterOffsetsFromCorners : 1;                         // 0x058C(0x0001) (Config)
	unsigned char                                      bStoreEmptyTileLayers : 1;                                // 0x058C(0x0001) (Config)
	unsigned char                                      bUseVirtualFilters : 1;                                   // 0x058D(0x0001) (Config)
	unsigned char                                      bAllowNavLinkAsPathEnd : 1;                               // 0x058D(0x0001) (Config)
	unsigned char                                      bUseVoxelCache : 1;                                       // 0x058D(0x0001) (Config)
	unsigned char                                      UnknownData03[0x2];                                       // 0x058E(0x0002) MISSED OFFSET
	float                                              TileSetUpdateInterval;                                    // 0x0590(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HeuristicScale;                                           // 0x0594(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VerticalDeviationFromGroundCompensation;                  // 0x0598(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x34];                                      // 0x059C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.RecastNavMesh"));

		return ptr;
	}

};


// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (0x0050 - 0x0040)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class NavigationSystem.RecastNavMeshDataChunk"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
