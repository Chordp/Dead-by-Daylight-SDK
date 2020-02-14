#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_NavigationSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.Actor.WasRecentlyRendered
struct ANavigationGraphNode_WasRecentlyRendered_Params
{
	float*                                             Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct ANavigationGraphNode_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct ANavigationGraphNode_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct ANavigationGraphNode_SnapRootComponentTo_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct ANavigationGraphNode_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct ANavigationGraphNode_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct ANavigationGraphNode_SetReplicates_Params
{
	bool*                                              bInReplicates;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct ANavigationGraphNode_SetReplicateMovement_Params
{
	bool*                                              bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct ANavigationGraphNode_SetOwner_Params
{
	class AActor**                                     NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetNetDormancy
struct ANavigationGraphNode_SetNetDormancy_Params
{
	TEnumAsByte<ENetDormancy>*                         NewDormancy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct ANavigationGraphNode_SetLifeSpan_Params
{
	float*                                             InLifespan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct ANavigationGraphNode_SetActorTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct ANavigationGraphNode_SetActorTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct ANavigationGraphNode_SetActorScale3D_Params
{
	struct FVector*                                    NewScale3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct ANavigationGraphNode_SetActorRelativeScale3D_Params
{
	struct FVector*                                    NewRelativeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct ANavigationGraphNode_SetActorHiddenInGame_Params
{
	bool*                                              bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct ANavigationGraphNode_SetActorEnableCollision_Params
{
	bool*                                              bNewActorEnableCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct ANavigationGraphNode_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct ANavigationGraphNode_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct ANavigationGraphNode_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct ANavigationGraphNode_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct ANavigationGraphNode_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.ReceiveHit
struct ANavigationGraphNode_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.ReceiveEndPlay
struct ANavigationGraphNode_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct ANavigationGraphNode_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct ANavigationGraphNode_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct ANavigationGraphNode_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct ANavigationGraphNode_ReceiveActorOnReleased_Params
{
	struct FKey*                                       ButtonReleased;                                           // (Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct ANavigationGraphNode_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct ANavigationGraphNode_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct ANavigationGraphNode_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct ANavigationGraphNode_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct ANavigationGraphNode_ReceiveActorOnClicked_Params
{
	struct FKey*                                       ButtonPressed;                                            // (Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct ANavigationGraphNode_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct ANavigationGraphNode_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct ANavigationGraphNode_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct ANavigationGraphNode_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.PrestreamTextures
struct ANavigationGraphNode_PrestreamTextures_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnableStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct ANavigationGraphNode_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct ANavigationGraphNode_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct ANavigationGraphNode_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct ANavigationGraphNode_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct ANavigationGraphNode_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct ANavigationGraphNode_MakeNoise_Params
{
	float*                                             Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct ANavigationGraphNode_MakeMIDForMaterial_Params
{
	class UMaterialInterface**                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct ANavigationGraphNode_K2_TeleportTo_Params
{
	struct FVector*                                    DestLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   DestRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct ANavigationGraphNode_K2_SetActorTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct ANavigationGraphNode_K2_SetActorRotation_Params
{
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTeleportPhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct ANavigationGraphNode_K2_SetActorRelativeTransform_Params
{
	struct FTransform*                                 NewRelativeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct ANavigationGraphNode_K2_SetActorRelativeRotation_Params
{
	struct FRotator*                                   NewRelativeRotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct ANavigationGraphNode_K2_SetActorRelativeLocation_Params
{
	struct FVector*                                    NewRelativeLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct ANavigationGraphNode_K2_SetActorLocationAndRotation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct ANavigationGraphNode_K2_SetActorLocation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct ANavigationGraphNode_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct ANavigationGraphNode_K2_OnEndViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct ANavigationGraphNode_K2_OnBecomeViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct ANavigationGraphNode_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct ANavigationGraphNode_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct ANavigationGraphNode_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct ANavigationGraphNode_K2_DetachFromActor_Params
{
	EDetachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyComponent
struct ANavigationGraphNode_K2_DestroyComponent_Params
{
	class UActorComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct ANavigationGraphNode_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct ANavigationGraphNode_K2_AttachToComponent_Params
{
	class USceneComponent**                            Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct ANavigationGraphNode_K2_AttachToActor_Params
{
	class AActor**                                     ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct ANavigationGraphNode_K2_AttachRootComponentToActor_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct ANavigationGraphNode_K2_AttachRootComponentTo_Params
{
	class USceneComponent**                            InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct ANavigationGraphNode_K2_AddActorWorldTransform_Params
{
	struct FTransform*                                 DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct ANavigationGraphNode_K2_AddActorWorldRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct ANavigationGraphNode_K2_AddActorWorldOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct ANavigationGraphNode_K2_AddActorLocalTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct ANavigationGraphNode_K2_AddActorLocalRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct ANavigationGraphNode_K2_AddActorLocalOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct ANavigationGraphNode_IsOverlappingActor_Params
{
	class AActor**                                     Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct ANavigationGraphNode_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct ANavigationGraphNode_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct ANavigationGraphNode_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct ANavigationGraphNode_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct ANavigationGraphNode_GetVerticalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct ANavigationGraphNode_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct ANavigationGraphNode_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct ANavigationGraphNode_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct ANavigationGraphNode_GetSquaredDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct ANavigationGraphNode_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct ANavigationGraphNode_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct ANavigationGraphNode_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct ANavigationGraphNode_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct ANavigationGraphNode_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct ANavigationGraphNode_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetLocalRole
struct ANavigationGraphNode_GetLocalRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct ANavigationGraphNode_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct ANavigationGraphNode_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct ANavigationGraphNode_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct ANavigationGraphNode_GetInputVectorAxisValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct ANavigationGraphNode_GetInputAxisValue_Params
{
	struct FName*                                      InputAxisName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct ANavigationGraphNode_GetInputAxisKeyValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct ANavigationGraphNode_GetHorizontalDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct ANavigationGraphNode_GetHorizontalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct ANavigationGraphNode_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct ANavigationGraphNode_GetDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct ANavigationGraphNode_GetDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct ANavigationGraphNode_GetComponentsByTag_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct ANavigationGraphNode_GetComponentsByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct ANavigationGraphNode_GetComponentByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct ANavigationGraphNode_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct ANavigationGraphNode_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct ANavigationGraphNode_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetAllChildActors
struct ANavigationGraphNode_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIncludeDescendants;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct ANavigationGraphNode_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct ANavigationGraphNode_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct ANavigationGraphNode_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct ANavigationGraphNode_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct ANavigationGraphNode_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct ANavigationGraphNode_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct ANavigationGraphNode_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct ANavigationGraphNode_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct ANavigationGraphNode_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct ANavigationGraphNode_GetActorBounds_Params
{
	bool*                                              bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct ANavigationGraphNode_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct ANavigationGraphNode_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct ANavigationGraphNode_EnableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct ANavigationGraphNode_DisableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct ANavigationGraphNode_DetachRootComponentFromParent_Params
{
	bool*                                              bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct ANavigationGraphNode_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct ANavigationGraphNode_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct ANavigationGraphNode_AddComponent_Params
{
	struct FName*                                      TemplateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject**                                    ComponentTemplateContext;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct ANavigationGraphNode_ActorHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.IsValid
struct UNavigationPath_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.IsStringPulled
struct UNavigationPath_IsStringPulled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.IsPartial
struct UNavigationPath_IsPartial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.GetPathLength
struct UNavigationPath_GetPathLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.GetPathCost
struct UNavigationPath_GetPathCost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.GetDebugString
struct UNavigationPath_GetDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
struct UNavigationPath_EnableRecalculationOnInvalidation_Params
{
	TEnumAsByte<ENavigationOptionFlag>*                DoRecalculation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationPath.EnableDebugDrawing
struct UNavigationPath_EnableDebugDrawing_Params
{
	bool*                                              bShouldDrawDebugData;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               PathColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
struct UNavigationSystemV1_UnregisterNavigationInvoker_Params
{
	class AActor**                                     Invoker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
struct UNavigationSystemV1_SimpleMoveToLocation_Params
{
	class AController**                                Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Goal;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
struct UNavigationSystemV1_SimpleMoveToActor_Params
{
	class AController**                                Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Goal;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
struct UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params
{
	int*                                               MaxNumberOfJobs;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
struct UNavigationSystemV1_SetGeometryGatheringMode_Params
{
	ENavDataGatheringModeConfig*                       NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
struct UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Params
{
};

// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
struct UNavigationSystemV1_RegisterNavigationInvoker_Params
{
	class AActor**                                     Invoker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TileGenerationRadius;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TileRemovalRadius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
struct UNavigationSystemV1_ProjectPointToNavigation_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class ANavigationData**                            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    QueryExtent;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
struct UNavigationSystemV1_OnNavigationBoundsUpdated_Params
{
	class ANavMeshBoundsVolume**                       NavVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
struct UNavigationSystemV1_NavigationRaycast_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    RayStart;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    RayEnd;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Querier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
struct UNavigationSystemV1_K2_ProjectPointToNavigation_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ProjectedLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ANavigationData**                            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    QueryExtent;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
struct UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     RandomLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationData**                            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
struct UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     RandomLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationData**                            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
struct UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
struct UNavigationSystemV1_IsNavigationBeingBuilt_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
struct UNavigationSystemV1_GetRandomReachablePointInRadius_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationData**                            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
struct UNavigationSystemV1_GetRandomPointInNavigableRadius_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationData**                            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.GetPathLength
struct UNavigationSystemV1_GetPathLength_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    PathEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PathLength;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ANavigationData**                            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavigationQueryResult>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.GetPathCost
struct UNavigationSystemV1_GetPathCost_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    PathEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PathCost;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ANavigationData**                            NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavigationQueryResult>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
struct UNavigationSystemV1_GetNavigationSystem_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNavigationSystemV1*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
struct UNavigationSystemV1_FindPathToLocationSynchronously_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    PathEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     PathfindingContext;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UNavigationPath*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
struct UNavigationSystemV1_FindPathToActorSynchronously_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PathStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     GoalActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TetherDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     PathfindingContext;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UNavigationPath*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
struct UNavRelevantComponent_SetNavigationRelevancy_Params
{
	bool*                                              bRelevant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeRigidBody
struct UNavLinkRenderingComponent_WakeRigidBody_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeAllRigidBodies
struct UNavLinkRenderingComponent_WakeAllRigidBodies_Params
{
};

// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
struct UNavLinkRenderingComponent_SetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride*                     NewOverride;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetUseCCD
struct UNavLinkRenderingComponent_SetUseCCD_Params
{
	bool*                                              InUseCCD;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
struct UNavLinkRenderingComponent_SetTranslucentSortPriority_Params
{
	int*                                               NewTranslucentSortPriority;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
struct UNavLinkRenderingComponent_SetSingleSampleShadowFromStationaryLights_Params
{
	bool*                                              bNewSingleSampleShadowFromStationaryLights;               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSimulatePhysics
struct UNavLinkRenderingComponent_SetSimulatePhysics_Params
{
	bool*                                              bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderInMainPass
struct UNavLinkRenderingComponent_SetRenderInMainPass_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderCustomDepth
struct UNavLinkRenderingComponent_SetRenderCustomDepth_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderCustomColourNoDepth
struct UNavLinkRenderingComponent_SetRenderCustomColourNoDepth_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetReceivesDecals
struct UNavLinkRenderingComponent_SetReceivesDecals_Params
{
	bool*                                              bNewReceivesDecals;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
struct UNavLinkRenderingComponent_SetPhysMaterialOverride_Params
{
	class UPhysicalMaterial**                          NewPhysMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
struct UNavLinkRenderingComponent_SetPhysicsMaxAngularVelocityInRadians_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
struct UNavLinkRenderingComponent_SetPhysicsMaxAngularVelocityInDegrees_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
struct UNavLinkRenderingComponent_SetPhysicsMaxAngularVelocity_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
struct UNavLinkRenderingComponent_SetPhysicsLinearVelocity_Params
{
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
struct UNavLinkRenderingComponent_SetPhysicsAngularVelocityInRadians_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
struct UNavLinkRenderingComponent_SetPhysicsAngularVelocityInDegrees_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
struct UNavLinkRenderingComponent_SetPhysicsAngularVelocity_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOwnerNoSee
struct UNavLinkRenderingComponent_SetOwnerNoSee_Params
{
	bool*                                              bNewOwnerNoSee;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
struct UNavLinkRenderingComponent_SetOnlyOwnerSee_Params
{
	bool*                                              bNewOnlyOwnerSee;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
struct UNavLinkRenderingComponent_SetNotifyRigidBodyCollision_Params
{
	bool*                                              bNewNotifyRigidBodyCollision;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterialByName
struct UNavLinkRenderingComponent_SetMaterialByName_Params
{
	struct FName*                                      MaterialSlotName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterial
struct UNavLinkRenderingComponent_SetMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassScale
struct UNavLinkRenderingComponent_SetMassScale_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InMassScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassOverrideInKg
struct UNavLinkRenderingComponent_SetMassOverrideInKg_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MassInKg;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOverrideMass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetLinearDamping
struct UNavLinkRenderingComponent_SetLinearDamping_Params
{
	float*                                             InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
struct UNavLinkRenderingComponent_SetGenerateOverlapEvents_Params
{
	bool*                                              bInGenerateOverlapEvents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetEnableGravity
struct UNavLinkRenderingComponent_SetEnableGravity_Params
{
	bool*                                              bGravityEnabled;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
struct UNavLinkRenderingComponent_SetCustomDepthStencilWriteMask_Params
{
	ERendererStencilMask*                              WriteMaskBit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
struct UNavLinkRenderingComponent_SetCustomDepthStencilValue_Params
{
	int*                                               value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomColourWriteMask
struct UNavLinkRenderingComponent_SetCustomColourWriteMask_Params
{
	ECustomColourWriteMask*                            WriteMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCullDistance
struct UNavLinkRenderingComponent_SetCullDistance_Params
{
	float*                                             NewCullDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetConstraintMode
struct UNavLinkRenderingComponent_SetConstraintMode_Params
{
	TEnumAsByte<EDOFMode>*                             ConstraintMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
struct UNavLinkRenderingComponent_SetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>*                   NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
struct UNavLinkRenderingComponent_SetCollisionResponseToAllChannels_Params
{
	TEnumAsByte<ECollisionResponse>*                   NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionProfileName
struct UNavLinkRenderingComponent_SetCollisionProfileName_Params
{
	struct FName*                                      InCollisionProfileName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionObjectType
struct UNavLinkRenderingComponent_SetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionEnabled
struct UNavLinkRenderingComponent_SetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>*                    NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCenterOfMass
struct UNavLinkRenderingComponent_SetCenterOfMass_Params
{
	struct FVector*                                    CenterOfMassOffset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCastShadow
struct UNavLinkRenderingComponent_SetCastShadow_Params
{
	bool*                                              NewCastShadow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetBoundsScale
struct UNavLinkRenderingComponent_SetBoundsScale_Params
{
	float*                                             NewBoundsScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAngularDamping
struct UNavLinkRenderingComponent_SetAngularDamping_Params
{
	float*                                             InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllUseCCD
struct UNavLinkRenderingComponent_SetAllUseCCD_Params
{
	bool*                                              InUseCCD;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
struct UNavLinkRenderingComponent_SetAllPhysicsLinearVelocity_Params
{
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
struct UNavLinkRenderingComponent_SetAllPhysicsAngularVelocityInRadians_Params
{
	struct FVector*                                    NewAngVel;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
struct UNavLinkRenderingComponent_SetAllPhysicsAngularVelocityInDegrees_Params
{
	struct FVector*                                    NewAngVel;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllMassScale
struct UNavLinkRenderingComponent_SetAllMassScale_Params
{
	float*                                             InMassScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
struct UNavLinkRenderingComponent_ScaleByMomentOfInertia_Params
{
	struct FVector*                                    InputVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
struct UNavLinkRenderingComponent_PutRigidBodyToSleep_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
struct UNavLinkRenderingComponent_K2_SphereTraceComponent_Params
{
	struct FVector*                                    TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
struct UNavLinkRenderingComponent_K2_SphereOverlapComponent_Params
{
	struct FVector*                                    InSphereCentre;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InSphereRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_LineTraceComponent
struct UNavLinkRenderingComponent_K2_LineTraceComponent_Params
{
	struct FVector*                                    TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
struct UNavLinkRenderingComponent_K2_IsQueryCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
struct UNavLinkRenderingComponent_K2_IsPhysicsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
struct UNavLinkRenderingComponent_K2_IsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
struct UNavLinkRenderingComponent_K2_BoxOverlapComponent_Params
{
	struct FVector*                                    InBoxCentre;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBox*                                       InBox;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingComponent
struct UNavLinkRenderingComponent_IsOverlappingComponent_Params
{
	class UPrimitiveComponent**                        OtherComp;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingActor
struct UNavLinkRenderingComponent_IsOverlappingActor_Params
{
	class AActor**                                     Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsGravityEnabled
struct UNavLinkRenderingComponent_IsGravityEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
struct UNavLinkRenderingComponent_IsAnyRigidBodyAwake_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
struct UNavLinkRenderingComponent_IgnoreComponentWhenMoving_Params
{
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
struct UNavLinkRenderingComponent_IgnoreActorWhenMoving_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
struct UNavLinkRenderingComponent_GetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
struct UNavLinkRenderingComponent_GetPhysicsLinearVelocityAtPoint_Params
{
	struct FVector*                                    Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
struct UNavLinkRenderingComponent_GetPhysicsLinearVelocity_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
struct UNavLinkRenderingComponent_GetPhysicsAngularVelocityInRadians_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
struct UNavLinkRenderingComponent_GetPhysicsAngularVelocityInDegrees_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
struct UNavLinkRenderingComponent_GetPhysicsAngularVelocity_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetOverlappingComponents
struct UNavLinkRenderingComponent_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OutOverlappingComponents;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.PrimitiveComponent.GetOverlappingActors
struct UNavLinkRenderingComponent_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetNumMaterials
struct UNavLinkRenderingComponent_GetNumMaterials_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
struct UNavLinkRenderingComponent_GetMaterialFromCollisionFaceIndex_Params
{
	int*                                               FaceIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SectionIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterial
struct UNavLinkRenderingComponent_GetMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMassScale
struct UNavLinkRenderingComponent_GetMassScale_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMass
struct UNavLinkRenderingComponent_GetMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetLinearDamping
struct UNavLinkRenderingComponent_GetLinearDamping_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetInertiaTensor
struct UNavLinkRenderingComponent_GetInertiaTensor_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
struct UNavLinkRenderingComponent_GetGenerateOverlapEvents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
struct UNavLinkRenderingComponent_GetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionProfileName
struct UNavLinkRenderingComponent_GetCollisionProfileName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionObjectType
struct UNavLinkRenderingComponent_GetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionEnabled
struct UNavLinkRenderingComponent_GetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
struct UNavLinkRenderingComponent_GetClosestPointOnCollision_Params
{
	struct FVector*                                    Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutPointOnBody;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCenterOfMass
struct UNavLinkRenderingComponent_GetCenterOfMass_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetAngularDamping
struct UNavLinkRenderingComponent_GetAngularDamping_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
struct UNavLinkRenderingComponent_CreateDynamicMaterialInstance_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         SourceMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      OptionalName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
struct UNavLinkRenderingComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
struct UNavLinkRenderingComponent_CreateAndSetMaterialInstanceDynamic_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
struct UNavLinkRenderingComponent_CopyArrayOfMoveIgnoreComponents_Params
{
	TArray<class UPrimitiveComponent*>                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
struct UNavLinkRenderingComponent_CopyArrayOfMoveIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
struct UNavLinkRenderingComponent_ClearMoveIgnoreComponents_Params
{
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
struct UNavLinkRenderingComponent_ClearMoveIgnoreActors_Params
{
};

// Function Engine.PrimitiveComponent.CanCharacterStepUp
struct UNavLinkRenderingComponent_CanCharacterStepUp_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorqueInRadians
struct UNavLinkRenderingComponent_AddTorqueInRadians_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorqueInDegrees
struct UNavLinkRenderingComponent_AddTorqueInDegrees_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorque
struct UNavLinkRenderingComponent_AddTorque_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialImpulse
struct UNavLinkRenderingComponent_AddRadialImpulse_Params
{
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>*                Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialForce
struct UNavLinkRenderingComponent_AddRadialForce_Params
{
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>*                Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulseAtLocation
struct UNavLinkRenderingComponent_AddImpulseAtLocation_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulse
struct UNavLinkRenderingComponent_AddImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
struct UNavLinkRenderingComponent_AddForceAtLocationLocal_Params
{
	struct FVector*                                    force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocation
struct UNavLinkRenderingComponent_AddForceAtLocation_Params
{
	struct FVector*                                    force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForce
struct UNavLinkRenderingComponent_AddForce_Params
{
	struct FVector*                                    force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
struct UNavLinkRenderingComponent_AddAngularImpulseInRadians_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
struct UNavLinkRenderingComponent_AddAngularImpulseInDegrees_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulse
struct UNavLinkRenderingComponent_AddAngularImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeRigidBody
struct UNavMeshRenderingComponent_WakeRigidBody_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeAllRigidBodies
struct UNavMeshRenderingComponent_WakeAllRigidBodies_Params
{
};

// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
struct UNavMeshRenderingComponent_SetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride*                     NewOverride;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetUseCCD
struct UNavMeshRenderingComponent_SetUseCCD_Params
{
	bool*                                              InUseCCD;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
struct UNavMeshRenderingComponent_SetTranslucentSortPriority_Params
{
	int*                                               NewTranslucentSortPriority;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
struct UNavMeshRenderingComponent_SetSingleSampleShadowFromStationaryLights_Params
{
	bool*                                              bNewSingleSampleShadowFromStationaryLights;               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSimulatePhysics
struct UNavMeshRenderingComponent_SetSimulatePhysics_Params
{
	bool*                                              bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderInMainPass
struct UNavMeshRenderingComponent_SetRenderInMainPass_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderCustomDepth
struct UNavMeshRenderingComponent_SetRenderCustomDepth_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderCustomColourNoDepth
struct UNavMeshRenderingComponent_SetRenderCustomColourNoDepth_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetReceivesDecals
struct UNavMeshRenderingComponent_SetReceivesDecals_Params
{
	bool*                                              bNewReceivesDecals;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
struct UNavMeshRenderingComponent_SetPhysMaterialOverride_Params
{
	class UPhysicalMaterial**                          NewPhysMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
struct UNavMeshRenderingComponent_SetPhysicsMaxAngularVelocityInRadians_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
struct UNavMeshRenderingComponent_SetPhysicsMaxAngularVelocityInDegrees_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
struct UNavMeshRenderingComponent_SetPhysicsMaxAngularVelocity_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
struct UNavMeshRenderingComponent_SetPhysicsLinearVelocity_Params
{
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
struct UNavMeshRenderingComponent_SetPhysicsAngularVelocityInRadians_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
struct UNavMeshRenderingComponent_SetPhysicsAngularVelocityInDegrees_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
struct UNavMeshRenderingComponent_SetPhysicsAngularVelocity_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOwnerNoSee
struct UNavMeshRenderingComponent_SetOwnerNoSee_Params
{
	bool*                                              bNewOwnerNoSee;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
struct UNavMeshRenderingComponent_SetOnlyOwnerSee_Params
{
	bool*                                              bNewOnlyOwnerSee;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
struct UNavMeshRenderingComponent_SetNotifyRigidBodyCollision_Params
{
	bool*                                              bNewNotifyRigidBodyCollision;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterialByName
struct UNavMeshRenderingComponent_SetMaterialByName_Params
{
	struct FName*                                      MaterialSlotName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterial
struct UNavMeshRenderingComponent_SetMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassScale
struct UNavMeshRenderingComponent_SetMassScale_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InMassScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassOverrideInKg
struct UNavMeshRenderingComponent_SetMassOverrideInKg_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MassInKg;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOverrideMass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetLinearDamping
struct UNavMeshRenderingComponent_SetLinearDamping_Params
{
	float*                                             InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
struct UNavMeshRenderingComponent_SetGenerateOverlapEvents_Params
{
	bool*                                              bInGenerateOverlapEvents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetEnableGravity
struct UNavMeshRenderingComponent_SetEnableGravity_Params
{
	bool*                                              bGravityEnabled;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
struct UNavMeshRenderingComponent_SetCustomDepthStencilWriteMask_Params
{
	ERendererStencilMask*                              WriteMaskBit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
struct UNavMeshRenderingComponent_SetCustomDepthStencilValue_Params
{
	int*                                               value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomColourWriteMask
struct UNavMeshRenderingComponent_SetCustomColourWriteMask_Params
{
	ECustomColourWriteMask*                            WriteMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCullDistance
struct UNavMeshRenderingComponent_SetCullDistance_Params
{
	float*                                             NewCullDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetConstraintMode
struct UNavMeshRenderingComponent_SetConstraintMode_Params
{
	TEnumAsByte<EDOFMode>*                             ConstraintMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
struct UNavMeshRenderingComponent_SetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>*                   NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
struct UNavMeshRenderingComponent_SetCollisionResponseToAllChannels_Params
{
	TEnumAsByte<ECollisionResponse>*                   NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionProfileName
struct UNavMeshRenderingComponent_SetCollisionProfileName_Params
{
	struct FName*                                      InCollisionProfileName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionObjectType
struct UNavMeshRenderingComponent_SetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionEnabled
struct UNavMeshRenderingComponent_SetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>*                    NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCenterOfMass
struct UNavMeshRenderingComponent_SetCenterOfMass_Params
{
	struct FVector*                                    CenterOfMassOffset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCastShadow
struct UNavMeshRenderingComponent_SetCastShadow_Params
{
	bool*                                              NewCastShadow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetBoundsScale
struct UNavMeshRenderingComponent_SetBoundsScale_Params
{
	float*                                             NewBoundsScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAngularDamping
struct UNavMeshRenderingComponent_SetAngularDamping_Params
{
	float*                                             InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllUseCCD
struct UNavMeshRenderingComponent_SetAllUseCCD_Params
{
	bool*                                              InUseCCD;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
struct UNavMeshRenderingComponent_SetAllPhysicsLinearVelocity_Params
{
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
struct UNavMeshRenderingComponent_SetAllPhysicsAngularVelocityInRadians_Params
{
	struct FVector*                                    NewAngVel;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
struct UNavMeshRenderingComponent_SetAllPhysicsAngularVelocityInDegrees_Params
{
	struct FVector*                                    NewAngVel;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllMassScale
struct UNavMeshRenderingComponent_SetAllMassScale_Params
{
	float*                                             InMassScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
struct UNavMeshRenderingComponent_ScaleByMomentOfInertia_Params
{
	struct FVector*                                    InputVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
struct UNavMeshRenderingComponent_PutRigidBodyToSleep_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
struct UNavMeshRenderingComponent_K2_SphereTraceComponent_Params
{
	struct FVector*                                    TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
struct UNavMeshRenderingComponent_K2_SphereOverlapComponent_Params
{
	struct FVector*                                    InSphereCentre;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InSphereRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_LineTraceComponent
struct UNavMeshRenderingComponent_K2_LineTraceComponent_Params
{
	struct FVector*                                    TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
struct UNavMeshRenderingComponent_K2_IsQueryCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
struct UNavMeshRenderingComponent_K2_IsPhysicsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
struct UNavMeshRenderingComponent_K2_IsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
struct UNavMeshRenderingComponent_K2_BoxOverlapComponent_Params
{
	struct FVector*                                    InBoxCentre;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBox*                                       InBox;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingComponent
struct UNavMeshRenderingComponent_IsOverlappingComponent_Params
{
	class UPrimitiveComponent**                        OtherComp;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingActor
struct UNavMeshRenderingComponent_IsOverlappingActor_Params
{
	class AActor**                                     Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsGravityEnabled
struct UNavMeshRenderingComponent_IsGravityEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
struct UNavMeshRenderingComponent_IsAnyRigidBodyAwake_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
struct UNavMeshRenderingComponent_IgnoreComponentWhenMoving_Params
{
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
struct UNavMeshRenderingComponent_IgnoreActorWhenMoving_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
struct UNavMeshRenderingComponent_GetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
struct UNavMeshRenderingComponent_GetPhysicsLinearVelocityAtPoint_Params
{
	struct FVector*                                    Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
struct UNavMeshRenderingComponent_GetPhysicsLinearVelocity_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
struct UNavMeshRenderingComponent_GetPhysicsAngularVelocityInRadians_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
struct UNavMeshRenderingComponent_GetPhysicsAngularVelocityInDegrees_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
struct UNavMeshRenderingComponent_GetPhysicsAngularVelocity_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetOverlappingComponents
struct UNavMeshRenderingComponent_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OutOverlappingComponents;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.PrimitiveComponent.GetOverlappingActors
struct UNavMeshRenderingComponent_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetNumMaterials
struct UNavMeshRenderingComponent_GetNumMaterials_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
struct UNavMeshRenderingComponent_GetMaterialFromCollisionFaceIndex_Params
{
	int*                                               FaceIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SectionIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterial
struct UNavMeshRenderingComponent_GetMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMassScale
struct UNavMeshRenderingComponent_GetMassScale_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMass
struct UNavMeshRenderingComponent_GetMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetLinearDamping
struct UNavMeshRenderingComponent_GetLinearDamping_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetInertiaTensor
struct UNavMeshRenderingComponent_GetInertiaTensor_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
struct UNavMeshRenderingComponent_GetGenerateOverlapEvents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
struct UNavMeshRenderingComponent_GetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionProfileName
struct UNavMeshRenderingComponent_GetCollisionProfileName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionObjectType
struct UNavMeshRenderingComponent_GetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionEnabled
struct UNavMeshRenderingComponent_GetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
struct UNavMeshRenderingComponent_GetClosestPointOnCollision_Params
{
	struct FVector*                                    Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutPointOnBody;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCenterOfMass
struct UNavMeshRenderingComponent_GetCenterOfMass_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetAngularDamping
struct UNavMeshRenderingComponent_GetAngularDamping_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
struct UNavMeshRenderingComponent_CreateDynamicMaterialInstance_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         SourceMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      OptionalName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
struct UNavMeshRenderingComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
struct UNavMeshRenderingComponent_CreateAndSetMaterialInstanceDynamic_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
struct UNavMeshRenderingComponent_CopyArrayOfMoveIgnoreComponents_Params
{
	TArray<class UPrimitiveComponent*>                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
struct UNavMeshRenderingComponent_CopyArrayOfMoveIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
struct UNavMeshRenderingComponent_ClearMoveIgnoreComponents_Params
{
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
struct UNavMeshRenderingComponent_ClearMoveIgnoreActors_Params
{
};

// Function Engine.PrimitiveComponent.CanCharacterStepUp
struct UNavMeshRenderingComponent_CanCharacterStepUp_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorqueInRadians
struct UNavMeshRenderingComponent_AddTorqueInRadians_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorqueInDegrees
struct UNavMeshRenderingComponent_AddTorqueInDegrees_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorque
struct UNavMeshRenderingComponent_AddTorque_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialImpulse
struct UNavMeshRenderingComponent_AddRadialImpulse_Params
{
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>*                Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialForce
struct UNavMeshRenderingComponent_AddRadialForce_Params
{
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>*                Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulseAtLocation
struct UNavMeshRenderingComponent_AddImpulseAtLocation_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulse
struct UNavMeshRenderingComponent_AddImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
struct UNavMeshRenderingComponent_AddForceAtLocationLocal_Params
{
	struct FVector*                                    force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocation
struct UNavMeshRenderingComponent_AddForceAtLocation_Params
{
	struct FVector*                                    force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForce
struct UNavMeshRenderingComponent_AddForce_Params
{
	struct FVector*                                    force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
struct UNavMeshRenderingComponent_AddAngularImpulseInRadians_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
struct UNavMeshRenderingComponent_AddAngularImpulseInDegrees_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulse
struct UNavMeshRenderingComponent_AddAngularImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavModifierComponent.SetAreaClass
struct UNavModifierComponent_SetAreaClass_Params
{
	class UClass**                                     NewAreaClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NavigationSystem.NavModifierVolume.SetAreaClass
struct ANavModifierVolume_SetAreaClass_Params
{
	class UClass**                                     NewAreaClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeRigidBody
struct UNavTestRenderingComponent_WakeRigidBody_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeAllRigidBodies
struct UNavTestRenderingComponent_WakeAllRigidBodies_Params
{
};

// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
struct UNavTestRenderingComponent_SetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride*                     NewOverride;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetUseCCD
struct UNavTestRenderingComponent_SetUseCCD_Params
{
	bool*                                              InUseCCD;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
struct UNavTestRenderingComponent_SetTranslucentSortPriority_Params
{
	int*                                               NewTranslucentSortPriority;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
struct UNavTestRenderingComponent_SetSingleSampleShadowFromStationaryLights_Params
{
	bool*                                              bNewSingleSampleShadowFromStationaryLights;               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSimulatePhysics
struct UNavTestRenderingComponent_SetSimulatePhysics_Params
{
	bool*                                              bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderInMainPass
struct UNavTestRenderingComponent_SetRenderInMainPass_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderCustomDepth
struct UNavTestRenderingComponent_SetRenderCustomDepth_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderCustomColourNoDepth
struct UNavTestRenderingComponent_SetRenderCustomColourNoDepth_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetReceivesDecals
struct UNavTestRenderingComponent_SetReceivesDecals_Params
{
	bool*                                              bNewReceivesDecals;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
struct UNavTestRenderingComponent_SetPhysMaterialOverride_Params
{
	class UPhysicalMaterial**                          NewPhysMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
struct UNavTestRenderingComponent_SetPhysicsMaxAngularVelocityInRadians_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
struct UNavTestRenderingComponent_SetPhysicsMaxAngularVelocityInDegrees_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
struct UNavTestRenderingComponent_SetPhysicsMaxAngularVelocity_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
struct UNavTestRenderingComponent_SetPhysicsLinearVelocity_Params
{
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
struct UNavTestRenderingComponent_SetPhysicsAngularVelocityInRadians_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
struct UNavTestRenderingComponent_SetPhysicsAngularVelocityInDegrees_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
struct UNavTestRenderingComponent_SetPhysicsAngularVelocity_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOwnerNoSee
struct UNavTestRenderingComponent_SetOwnerNoSee_Params
{
	bool*                                              bNewOwnerNoSee;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
struct UNavTestRenderingComponent_SetOnlyOwnerSee_Params
{
	bool*                                              bNewOnlyOwnerSee;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
struct UNavTestRenderingComponent_SetNotifyRigidBodyCollision_Params
{
	bool*                                              bNewNotifyRigidBodyCollision;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterialByName
struct UNavTestRenderingComponent_SetMaterialByName_Params
{
	struct FName*                                      MaterialSlotName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterial
struct UNavTestRenderingComponent_SetMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassScale
struct UNavTestRenderingComponent_SetMassScale_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InMassScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassOverrideInKg
struct UNavTestRenderingComponent_SetMassOverrideInKg_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MassInKg;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOverrideMass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetLinearDamping
struct UNavTestRenderingComponent_SetLinearDamping_Params
{
	float*                                             InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
struct UNavTestRenderingComponent_SetGenerateOverlapEvents_Params
{
	bool*                                              bInGenerateOverlapEvents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetEnableGravity
struct UNavTestRenderingComponent_SetEnableGravity_Params
{
	bool*                                              bGravityEnabled;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
struct UNavTestRenderingComponent_SetCustomDepthStencilWriteMask_Params
{
	ERendererStencilMask*                              WriteMaskBit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
struct UNavTestRenderingComponent_SetCustomDepthStencilValue_Params
{
	int*                                               value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomColourWriteMask
struct UNavTestRenderingComponent_SetCustomColourWriteMask_Params
{
	ECustomColourWriteMask*                            WriteMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCullDistance
struct UNavTestRenderingComponent_SetCullDistance_Params
{
	float*                                             NewCullDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetConstraintMode
struct UNavTestRenderingComponent_SetConstraintMode_Params
{
	TEnumAsByte<EDOFMode>*                             ConstraintMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
struct UNavTestRenderingComponent_SetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>*                   NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
struct UNavTestRenderingComponent_SetCollisionResponseToAllChannels_Params
{
	TEnumAsByte<ECollisionResponse>*                   NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionProfileName
struct UNavTestRenderingComponent_SetCollisionProfileName_Params
{
	struct FName*                                      InCollisionProfileName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionObjectType
struct UNavTestRenderingComponent_SetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionEnabled
struct UNavTestRenderingComponent_SetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>*                    NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCenterOfMass
struct UNavTestRenderingComponent_SetCenterOfMass_Params
{
	struct FVector*                                    CenterOfMassOffset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCastShadow
struct UNavTestRenderingComponent_SetCastShadow_Params
{
	bool*                                              NewCastShadow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetBoundsScale
struct UNavTestRenderingComponent_SetBoundsScale_Params
{
	float*                                             NewBoundsScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAngularDamping
struct UNavTestRenderingComponent_SetAngularDamping_Params
{
	float*                                             InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllUseCCD
struct UNavTestRenderingComponent_SetAllUseCCD_Params
{
	bool*                                              InUseCCD;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
struct UNavTestRenderingComponent_SetAllPhysicsLinearVelocity_Params
{
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
struct UNavTestRenderingComponent_SetAllPhysicsAngularVelocityInRadians_Params
{
	struct FVector*                                    NewAngVel;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
struct UNavTestRenderingComponent_SetAllPhysicsAngularVelocityInDegrees_Params
{
	struct FVector*                                    NewAngVel;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllMassScale
struct UNavTestRenderingComponent_SetAllMassScale_Params
{
	float*                                             InMassScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
struct UNavTestRenderingComponent_ScaleByMomentOfInertia_Params
{
	struct FVector*                                    InputVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
struct UNavTestRenderingComponent_PutRigidBodyToSleep_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
struct UNavTestRenderingComponent_K2_SphereTraceComponent_Params
{
	struct FVector*                                    TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
struct UNavTestRenderingComponent_K2_SphereOverlapComponent_Params
{
	struct FVector*                                    InSphereCentre;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InSphereRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_LineTraceComponent
struct UNavTestRenderingComponent_K2_LineTraceComponent_Params
{
	struct FVector*                                    TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
struct UNavTestRenderingComponent_K2_IsQueryCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
struct UNavTestRenderingComponent_K2_IsPhysicsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
struct UNavTestRenderingComponent_K2_IsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
struct UNavTestRenderingComponent_K2_BoxOverlapComponent_Params
{
	struct FVector*                                    InBoxCentre;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBox*                                       InBox;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingComponent
struct UNavTestRenderingComponent_IsOverlappingComponent_Params
{
	class UPrimitiveComponent**                        OtherComp;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingActor
struct UNavTestRenderingComponent_IsOverlappingActor_Params
{
	class AActor**                                     Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsGravityEnabled
struct UNavTestRenderingComponent_IsGravityEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
struct UNavTestRenderingComponent_IsAnyRigidBodyAwake_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
struct UNavTestRenderingComponent_IgnoreComponentWhenMoving_Params
{
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
struct UNavTestRenderingComponent_IgnoreActorWhenMoving_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
struct UNavTestRenderingComponent_GetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
struct UNavTestRenderingComponent_GetPhysicsLinearVelocityAtPoint_Params
{
	struct FVector*                                    Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
struct UNavTestRenderingComponent_GetPhysicsLinearVelocity_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
struct UNavTestRenderingComponent_GetPhysicsAngularVelocityInRadians_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
struct UNavTestRenderingComponent_GetPhysicsAngularVelocityInDegrees_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
struct UNavTestRenderingComponent_GetPhysicsAngularVelocity_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetOverlappingComponents
struct UNavTestRenderingComponent_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OutOverlappingComponents;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.PrimitiveComponent.GetOverlappingActors
struct UNavTestRenderingComponent_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetNumMaterials
struct UNavTestRenderingComponent_GetNumMaterials_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
struct UNavTestRenderingComponent_GetMaterialFromCollisionFaceIndex_Params
{
	int*                                               FaceIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SectionIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterial
struct UNavTestRenderingComponent_GetMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMassScale
struct UNavTestRenderingComponent_GetMassScale_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMass
struct UNavTestRenderingComponent_GetMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetLinearDamping
struct UNavTestRenderingComponent_GetLinearDamping_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetInertiaTensor
struct UNavTestRenderingComponent_GetInertiaTensor_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
struct UNavTestRenderingComponent_GetGenerateOverlapEvents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
struct UNavTestRenderingComponent_GetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionProfileName
struct UNavTestRenderingComponent_GetCollisionProfileName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionObjectType
struct UNavTestRenderingComponent_GetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionEnabled
struct UNavTestRenderingComponent_GetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
struct UNavTestRenderingComponent_GetClosestPointOnCollision_Params
{
	struct FVector*                                    Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutPointOnBody;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCenterOfMass
struct UNavTestRenderingComponent_GetCenterOfMass_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetAngularDamping
struct UNavTestRenderingComponent_GetAngularDamping_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
struct UNavTestRenderingComponent_CreateDynamicMaterialInstance_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         SourceMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      OptionalName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
struct UNavTestRenderingComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
struct UNavTestRenderingComponent_CreateAndSetMaterialInstanceDynamic_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
struct UNavTestRenderingComponent_CopyArrayOfMoveIgnoreComponents_Params
{
	TArray<class UPrimitiveComponent*>                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
struct UNavTestRenderingComponent_CopyArrayOfMoveIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
struct UNavTestRenderingComponent_ClearMoveIgnoreComponents_Params
{
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
struct UNavTestRenderingComponent_ClearMoveIgnoreActors_Params
{
};

// Function Engine.PrimitiveComponent.CanCharacterStepUp
struct UNavTestRenderingComponent_CanCharacterStepUp_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorqueInRadians
struct UNavTestRenderingComponent_AddTorqueInRadians_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorqueInDegrees
struct UNavTestRenderingComponent_AddTorqueInDegrees_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorque
struct UNavTestRenderingComponent_AddTorque_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialImpulse
struct UNavTestRenderingComponent_AddRadialImpulse_Params
{
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>*                Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialForce
struct UNavTestRenderingComponent_AddRadialForce_Params
{
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>*                Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulseAtLocation
struct UNavTestRenderingComponent_AddImpulseAtLocation_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulse
struct UNavTestRenderingComponent_AddImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
struct UNavTestRenderingComponent_AddForceAtLocationLocal_Params
{
	struct FVector*                                    force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocation
struct UNavTestRenderingComponent_AddForceAtLocation_Params
{
	struct FVector*                                    force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForce
struct UNavTestRenderingComponent_AddForce_Params
{
	struct FVector*                                    force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
struct UNavTestRenderingComponent_AddAngularImpulseInRadians_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
struct UNavTestRenderingComponent_AddAngularImpulseInDegrees_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulse
struct UNavTestRenderingComponent_AddAngularImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
