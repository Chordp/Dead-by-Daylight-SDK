#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_QueryService_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.ActorComponent.ToggleActive
struct UActorPairQueryEvaluatorComponent_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UActorPairQueryEvaluatorComponent_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UActorPairQueryEvaluatorComponent_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UActorPairQueryEvaluatorComponent_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UActorPairQueryEvaluatorComponent_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UActorPairQueryEvaluatorComponent_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UActorPairQueryEvaluatorComponent_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UActorPairQueryEvaluatorComponent_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UActorPairQueryEvaluatorComponent_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UActorPairQueryEvaluatorComponent_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UActorPairQueryEvaluatorComponent_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UActorPairQueryEvaluatorComponent_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UActorPairQueryEvaluatorComponent_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UActorPairQueryEvaluatorComponent_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UActorPairQueryEvaluatorComponent_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UActorPairQueryEvaluatorComponent_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UActorPairQueryEvaluatorComponent_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UActorPairQueryEvaluatorComponent_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UActorPairQueryEvaluatorComponent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UActorPairQueryEvaluatorComponent_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UActorPairQueryEvaluatorComponent_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UActorPairQueryEvaluatorComponent_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UActorPairQueryEvaluatorComponent_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UActorPairQueryEvaluatorComponent_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UActorPairQueryEvaluatorComponent_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.WasRecentlyRendered
struct AActorPairQueryEvaluatorSubscriberTest_WasRecentlyRendered_Params
{
	float*                                             Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct AActorPairQueryEvaluatorSubscriberTest_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct AActorPairQueryEvaluatorSubscriberTest_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct AActorPairQueryEvaluatorSubscriberTest_SnapRootComponentTo_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct AActorPairQueryEvaluatorSubscriberTest_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct AActorPairQueryEvaluatorSubscriberTest_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct AActorPairQueryEvaluatorSubscriberTest_SetReplicates_Params
{
	bool*                                              bInReplicates;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct AActorPairQueryEvaluatorSubscriberTest_SetReplicateMovement_Params
{
	bool*                                              bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct AActorPairQueryEvaluatorSubscriberTest_SetOwner_Params
{
	class AActor**                                     NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetNetDormancy
struct AActorPairQueryEvaluatorSubscriberTest_SetNetDormancy_Params
{
	TEnumAsByte<ENetDormancy>*                         NewDormancy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct AActorPairQueryEvaluatorSubscriberTest_SetLifeSpan_Params
{
	float*                                             InLifespan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct AActorPairQueryEvaluatorSubscriberTest_SetActorTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct AActorPairQueryEvaluatorSubscriberTest_SetActorTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct AActorPairQueryEvaluatorSubscriberTest_SetActorScale3D_Params
{
	struct FVector*                                    NewScale3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct AActorPairQueryEvaluatorSubscriberTest_SetActorRelativeScale3D_Params
{
	struct FVector*                                    NewRelativeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct AActorPairQueryEvaluatorSubscriberTest_SetActorHiddenInGame_Params
{
	bool*                                              bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct AActorPairQueryEvaluatorSubscriberTest_SetActorEnableCollision_Params
{
	bool*                                              bNewActorEnableCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct AActorPairQueryEvaluatorSubscriberTest_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct AActorPairQueryEvaluatorSubscriberTest_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct AActorPairQueryEvaluatorSubscriberTest_ReceivePointDamage_Params
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
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveHit_Params
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
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveActorOnReleased_Params
{
	struct FKey*                                       ButtonReleased;                                           // (Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveActorOnClicked_Params
{
	struct FKey*                                       ButtonPressed;                                            // (Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct AActorPairQueryEvaluatorSubscriberTest_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.PrestreamTextures
struct AActorPairQueryEvaluatorSubscriberTest_PrestreamTextures_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnableStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct AActorPairQueryEvaluatorSubscriberTest_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct AActorPairQueryEvaluatorSubscriberTest_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct AActorPairQueryEvaluatorSubscriberTest_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct AActorPairQueryEvaluatorSubscriberTest_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct AActorPairQueryEvaluatorSubscriberTest_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct AActorPairQueryEvaluatorSubscriberTest_MakeNoise_Params
{
	float*                                             Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct AActorPairQueryEvaluatorSubscriberTest_MakeMIDForMaterial_Params
{
	class UMaterialInterface**                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct AActorPairQueryEvaluatorSubscriberTest_K2_TeleportTo_Params
{
	struct FVector*                                    DestLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   DestRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct AActorPairQueryEvaluatorSubscriberTest_K2_SetActorTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct AActorPairQueryEvaluatorSubscriberTest_K2_SetActorRotation_Params
{
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTeleportPhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct AActorPairQueryEvaluatorSubscriberTest_K2_SetActorRelativeTransform_Params
{
	struct FTransform*                                 NewRelativeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct AActorPairQueryEvaluatorSubscriberTest_K2_SetActorRelativeRotation_Params
{
	struct FRotator*                                   NewRelativeRotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct AActorPairQueryEvaluatorSubscriberTest_K2_SetActorRelativeLocation_Params
{
	struct FVector*                                    NewRelativeLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct AActorPairQueryEvaluatorSubscriberTest_K2_SetActorLocationAndRotation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct AActorPairQueryEvaluatorSubscriberTest_K2_SetActorLocation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct AActorPairQueryEvaluatorSubscriberTest_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct AActorPairQueryEvaluatorSubscriberTest_K2_OnEndViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct AActorPairQueryEvaluatorSubscriberTest_K2_OnBecomeViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct AActorPairQueryEvaluatorSubscriberTest_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct AActorPairQueryEvaluatorSubscriberTest_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct AActorPairQueryEvaluatorSubscriberTest_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct AActorPairQueryEvaluatorSubscriberTest_K2_DetachFromActor_Params
{
	EDetachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyComponent
struct AActorPairQueryEvaluatorSubscriberTest_K2_DestroyComponent_Params
{
	class UActorComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct AActorPairQueryEvaluatorSubscriberTest_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct AActorPairQueryEvaluatorSubscriberTest_K2_AttachToComponent_Params
{
	class USceneComponent**                            Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct AActorPairQueryEvaluatorSubscriberTest_K2_AttachToActor_Params
{
	class AActor**                                     ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct AActorPairQueryEvaluatorSubscriberTest_K2_AttachRootComponentToActor_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct AActorPairQueryEvaluatorSubscriberTest_K2_AttachRootComponentTo_Params
{
	class USceneComponent**                            InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct AActorPairQueryEvaluatorSubscriberTest_K2_AddActorWorldTransform_Params
{
	struct FTransform*                                 DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct AActorPairQueryEvaluatorSubscriberTest_K2_AddActorWorldRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct AActorPairQueryEvaluatorSubscriberTest_K2_AddActorWorldOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct AActorPairQueryEvaluatorSubscriberTest_K2_AddActorLocalTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct AActorPairQueryEvaluatorSubscriberTest_K2_AddActorLocalRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct AActorPairQueryEvaluatorSubscriberTest_K2_AddActorLocalOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct AActorPairQueryEvaluatorSubscriberTest_IsOverlappingActor_Params
{
	class AActor**                                     Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct AActorPairQueryEvaluatorSubscriberTest_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct AActorPairQueryEvaluatorSubscriberTest_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct AActorPairQueryEvaluatorSubscriberTest_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct AActorPairQueryEvaluatorSubscriberTest_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct AActorPairQueryEvaluatorSubscriberTest_GetVerticalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct AActorPairQueryEvaluatorSubscriberTest_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct AActorPairQueryEvaluatorSubscriberTest_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct AActorPairQueryEvaluatorSubscriberTest_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct AActorPairQueryEvaluatorSubscriberTest_GetSquaredDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct AActorPairQueryEvaluatorSubscriberTest_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct AActorPairQueryEvaluatorSubscriberTest_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct AActorPairQueryEvaluatorSubscriberTest_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct AActorPairQueryEvaluatorSubscriberTest_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct AActorPairQueryEvaluatorSubscriberTest_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct AActorPairQueryEvaluatorSubscriberTest_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetLocalRole
struct AActorPairQueryEvaluatorSubscriberTest_GetLocalRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct AActorPairQueryEvaluatorSubscriberTest_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct AActorPairQueryEvaluatorSubscriberTest_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct AActorPairQueryEvaluatorSubscriberTest_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct AActorPairQueryEvaluatorSubscriberTest_GetInputVectorAxisValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct AActorPairQueryEvaluatorSubscriberTest_GetInputAxisValue_Params
{
	struct FName*                                      InputAxisName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct AActorPairQueryEvaluatorSubscriberTest_GetInputAxisKeyValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct AActorPairQueryEvaluatorSubscriberTest_GetHorizontalDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct AActorPairQueryEvaluatorSubscriberTest_GetHorizontalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct AActorPairQueryEvaluatorSubscriberTest_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct AActorPairQueryEvaluatorSubscriberTest_GetDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct AActorPairQueryEvaluatorSubscriberTest_GetDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct AActorPairQueryEvaluatorSubscriberTest_GetComponentsByTag_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct AActorPairQueryEvaluatorSubscriberTest_GetComponentsByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct AActorPairQueryEvaluatorSubscriberTest_GetComponentByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct AActorPairQueryEvaluatorSubscriberTest_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct AActorPairQueryEvaluatorSubscriberTest_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct AActorPairQueryEvaluatorSubscriberTest_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetAllChildActors
struct AActorPairQueryEvaluatorSubscriberTest_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIncludeDescendants;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct AActorPairQueryEvaluatorSubscriberTest_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct AActorPairQueryEvaluatorSubscriberTest_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct AActorPairQueryEvaluatorSubscriberTest_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct AActorPairQueryEvaluatorSubscriberTest_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct AActorPairQueryEvaluatorSubscriberTest_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct AActorPairQueryEvaluatorSubscriberTest_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct AActorPairQueryEvaluatorSubscriberTest_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct AActorPairQueryEvaluatorSubscriberTest_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct AActorPairQueryEvaluatorSubscriberTest_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct AActorPairQueryEvaluatorSubscriberTest_GetActorBounds_Params
{
	bool*                                              bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct AActorPairQueryEvaluatorSubscriberTest_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct AActorPairQueryEvaluatorSubscriberTest_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct AActorPairQueryEvaluatorSubscriberTest_EnableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct AActorPairQueryEvaluatorSubscriberTest_DisableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct AActorPairQueryEvaluatorSubscriberTest_DetachRootComponentFromParent_Params
{
	bool*                                              bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct AActorPairQueryEvaluatorSubscriberTest_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct AActorPairQueryEvaluatorSubscriberTest_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct AActorPairQueryEvaluatorSubscriberTest_AddComponent_Params
{
	struct FName*                                      TemplateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject**                                    ComponentTemplateContext;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct AActorPairQueryEvaluatorSubscriberTest_ActorHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
