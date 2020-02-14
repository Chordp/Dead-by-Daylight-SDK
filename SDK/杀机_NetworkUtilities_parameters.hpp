#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_NetworkUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.ActorComponent.ToggleActive
struct UBaseMovementInputStrategy_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UBaseMovementInputStrategy_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UBaseMovementInputStrategy_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UBaseMovementInputStrategy_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UBaseMovementInputStrategy_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UBaseMovementInputStrategy_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UBaseMovementInputStrategy_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UBaseMovementInputStrategy_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UBaseMovementInputStrategy_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UBaseMovementInputStrategy_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UBaseMovementInputStrategy_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UBaseMovementInputStrategy_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UBaseMovementInputStrategy_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UBaseMovementInputStrategy_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UBaseMovementInputStrategy_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UBaseMovementInputStrategy_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UBaseMovementInputStrategy_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UBaseMovementInputStrategy_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UBaseMovementInputStrategy_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UBaseMovementInputStrategy_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UBaseMovementInputStrategy_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UBaseMovementInputStrategy_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UBaseMovementInputStrategy_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UBaseMovementInputStrategy_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UBaseMovementInputStrategy_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ToggleActive
struct UImmediateMovementInputStrategy_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UImmediateMovementInputStrategy_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UImmediateMovementInputStrategy_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UImmediateMovementInputStrategy_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UImmediateMovementInputStrategy_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UImmediateMovementInputStrategy_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UImmediateMovementInputStrategy_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UImmediateMovementInputStrategy_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UImmediateMovementInputStrategy_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UImmediateMovementInputStrategy_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UImmediateMovementInputStrategy_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UImmediateMovementInputStrategy_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UImmediateMovementInputStrategy_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UImmediateMovementInputStrategy_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UImmediateMovementInputStrategy_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UImmediateMovementInputStrategy_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UImmediateMovementInputStrategy_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UImmediateMovementInputStrategy_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UImmediateMovementInputStrategy_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UImmediateMovementInputStrategy_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UImmediateMovementInputStrategy_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UImmediateMovementInputStrategy_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UImmediateMovementInputStrategy_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UImmediateMovementInputStrategy_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UImmediateMovementInputStrategy_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ToggleActive
struct UInterpolatedMovementInputStrategy_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UInterpolatedMovementInputStrategy_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UInterpolatedMovementInputStrategy_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UInterpolatedMovementInputStrategy_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UInterpolatedMovementInputStrategy_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UInterpolatedMovementInputStrategy_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UInterpolatedMovementInputStrategy_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UInterpolatedMovementInputStrategy_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UInterpolatedMovementInputStrategy_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UInterpolatedMovementInputStrategy_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UInterpolatedMovementInputStrategy_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UInterpolatedMovementInputStrategy_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UInterpolatedMovementInputStrategy_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UInterpolatedMovementInputStrategy_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UInterpolatedMovementInputStrategy_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UInterpolatedMovementInputStrategy_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UInterpolatedMovementInputStrategy_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UInterpolatedMovementInputStrategy_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UInterpolatedMovementInputStrategy_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UInterpolatedMovementInputStrategy_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UInterpolatedMovementInputStrategy_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UInterpolatedMovementInputStrategy_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UInterpolatedMovementInputStrategy_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UInterpolatedMovementInputStrategy_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UInterpolatedMovementInputStrategy_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime
struct UNetSynchedClock_Server_RequestServerTime_Params
{
};

// Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime
struct UNetSynchedClock_Client_ReportServerTime_Params
{
	float*                                             serverTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.WasRecentlyRendered
struct ANetworkFenceActor_WasRecentlyRendered_Params
{
	float*                                             Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct ANetworkFenceActor_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct ANetworkFenceActor_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct ANetworkFenceActor_SnapRootComponentTo_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct ANetworkFenceActor_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct ANetworkFenceActor_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct ANetworkFenceActor_SetReplicates_Params
{
	bool*                                              bInReplicates;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct ANetworkFenceActor_SetReplicateMovement_Params
{
	bool*                                              bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct ANetworkFenceActor_SetOwner_Params
{
	class AActor**                                     NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetNetDormancy
struct ANetworkFenceActor_SetNetDormancy_Params
{
	TEnumAsByte<ENetDormancy>*                         NewDormancy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct ANetworkFenceActor_SetLifeSpan_Params
{
	float*                                             InLifespan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct ANetworkFenceActor_SetActorTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct ANetworkFenceActor_SetActorTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct ANetworkFenceActor_SetActorScale3D_Params
{
	struct FVector*                                    NewScale3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct ANetworkFenceActor_SetActorRelativeScale3D_Params
{
	struct FVector*                                    NewRelativeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct ANetworkFenceActor_SetActorHiddenInGame_Params
{
	bool*                                              bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct ANetworkFenceActor_SetActorEnableCollision_Params
{
	bool*                                              bNewActorEnableCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct ANetworkFenceActor_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct ANetworkFenceActor_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct ANetworkFenceActor_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct ANetworkFenceActor_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct ANetworkFenceActor_ReceivePointDamage_Params
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
struct ANetworkFenceActor_ReceiveHit_Params
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
struct ANetworkFenceActor_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct ANetworkFenceActor_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct ANetworkFenceActor_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct ANetworkFenceActor_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct ANetworkFenceActor_ReceiveActorOnReleased_Params
{
	struct FKey*                                       ButtonReleased;                                           // (Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct ANetworkFenceActor_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct ANetworkFenceActor_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct ANetworkFenceActor_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct ANetworkFenceActor_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct ANetworkFenceActor_ReceiveActorOnClicked_Params
{
	struct FKey*                                       ButtonPressed;                                            // (Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct ANetworkFenceActor_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct ANetworkFenceActor_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct ANetworkFenceActor_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct ANetworkFenceActor_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.PrestreamTextures
struct ANetworkFenceActor_PrestreamTextures_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnableStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct ANetworkFenceActor_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct ANetworkFenceActor_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct ANetworkFenceActor_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct ANetworkFenceActor_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct ANetworkFenceActor_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct ANetworkFenceActor_MakeNoise_Params
{
	float*                                             Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct ANetworkFenceActor_MakeMIDForMaterial_Params
{
	class UMaterialInterface**                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct ANetworkFenceActor_K2_TeleportTo_Params
{
	struct FVector*                                    DestLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   DestRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct ANetworkFenceActor_K2_SetActorTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct ANetworkFenceActor_K2_SetActorRotation_Params
{
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTeleportPhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct ANetworkFenceActor_K2_SetActorRelativeTransform_Params
{
	struct FTransform*                                 NewRelativeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct ANetworkFenceActor_K2_SetActorRelativeRotation_Params
{
	struct FRotator*                                   NewRelativeRotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct ANetworkFenceActor_K2_SetActorRelativeLocation_Params
{
	struct FVector*                                    NewRelativeLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct ANetworkFenceActor_K2_SetActorLocationAndRotation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct ANetworkFenceActor_K2_SetActorLocation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct ANetworkFenceActor_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct ANetworkFenceActor_K2_OnEndViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct ANetworkFenceActor_K2_OnBecomeViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct ANetworkFenceActor_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct ANetworkFenceActor_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct ANetworkFenceActor_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct ANetworkFenceActor_K2_DetachFromActor_Params
{
	EDetachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyComponent
struct ANetworkFenceActor_K2_DestroyComponent_Params
{
	class UActorComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct ANetworkFenceActor_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct ANetworkFenceActor_K2_AttachToComponent_Params
{
	class USceneComponent**                            Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct ANetworkFenceActor_K2_AttachToActor_Params
{
	class AActor**                                     ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct ANetworkFenceActor_K2_AttachRootComponentToActor_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct ANetworkFenceActor_K2_AttachRootComponentTo_Params
{
	class USceneComponent**                            InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct ANetworkFenceActor_K2_AddActorWorldTransform_Params
{
	struct FTransform*                                 DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct ANetworkFenceActor_K2_AddActorWorldRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct ANetworkFenceActor_K2_AddActorWorldOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct ANetworkFenceActor_K2_AddActorLocalTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct ANetworkFenceActor_K2_AddActorLocalRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct ANetworkFenceActor_K2_AddActorLocalOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct ANetworkFenceActor_IsOverlappingActor_Params
{
	class AActor**                                     Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct ANetworkFenceActor_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct ANetworkFenceActor_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct ANetworkFenceActor_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct ANetworkFenceActor_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct ANetworkFenceActor_GetVerticalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct ANetworkFenceActor_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct ANetworkFenceActor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct ANetworkFenceActor_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct ANetworkFenceActor_GetSquaredDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct ANetworkFenceActor_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct ANetworkFenceActor_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct ANetworkFenceActor_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct ANetworkFenceActor_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct ANetworkFenceActor_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct ANetworkFenceActor_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetLocalRole
struct ANetworkFenceActor_GetLocalRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct ANetworkFenceActor_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct ANetworkFenceActor_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct ANetworkFenceActor_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct ANetworkFenceActor_GetInputVectorAxisValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct ANetworkFenceActor_GetInputAxisValue_Params
{
	struct FName*                                      InputAxisName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct ANetworkFenceActor_GetInputAxisKeyValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct ANetworkFenceActor_GetHorizontalDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct ANetworkFenceActor_GetHorizontalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct ANetworkFenceActor_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct ANetworkFenceActor_GetDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct ANetworkFenceActor_GetDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct ANetworkFenceActor_GetComponentsByTag_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct ANetworkFenceActor_GetComponentsByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct ANetworkFenceActor_GetComponentByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct ANetworkFenceActor_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct ANetworkFenceActor_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct ANetworkFenceActor_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetAllChildActors
struct ANetworkFenceActor_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIncludeDescendants;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct ANetworkFenceActor_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct ANetworkFenceActor_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct ANetworkFenceActor_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct ANetworkFenceActor_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct ANetworkFenceActor_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct ANetworkFenceActor_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct ANetworkFenceActor_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct ANetworkFenceActor_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct ANetworkFenceActor_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct ANetworkFenceActor_GetActorBounds_Params
{
	bool*                                              bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct ANetworkFenceActor_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct ANetworkFenceActor_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct ANetworkFenceActor_EnableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct ANetworkFenceActor_DisableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct ANetworkFenceActor_DetachRootComponentFromParent_Params
{
	bool*                                              bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct ANetworkFenceActor_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct ANetworkFenceActor_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct ANetworkFenceActor_AddComponent_Params
{
	struct FName*                                      TemplateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject**                                    ComponentTemplateContext;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct ANetworkFenceActor_ActorHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.ToggleActive
struct UServerCorrectionDisablerComponent_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UServerCorrectionDisablerComponent_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UServerCorrectionDisablerComponent_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UServerCorrectionDisablerComponent_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UServerCorrectionDisablerComponent_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UServerCorrectionDisablerComponent_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UServerCorrectionDisablerComponent_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UServerCorrectionDisablerComponent_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UServerCorrectionDisablerComponent_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UServerCorrectionDisablerComponent_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UServerCorrectionDisablerComponent_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UServerCorrectionDisablerComponent_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UServerCorrectionDisablerComponent_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UServerCorrectionDisablerComponent_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UServerCorrectionDisablerComponent_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UServerCorrectionDisablerComponent_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UServerCorrectionDisablerComponent_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UServerCorrectionDisablerComponent_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UServerCorrectionDisablerComponent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UServerCorrectionDisablerComponent_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UServerCorrectionDisablerComponent_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UServerCorrectionDisablerComponent_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UServerCorrectionDisablerComponent_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UServerCorrectionDisablerComponent_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UServerCorrectionDisablerComponent_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ToggleActive
struct UServerTimeProviderComponent_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UServerTimeProviderComponent_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UServerTimeProviderComponent_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UServerTimeProviderComponent_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UServerTimeProviderComponent_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UServerTimeProviderComponent_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UServerTimeProviderComponent_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UServerTimeProviderComponent_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UServerTimeProviderComponent_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UServerTimeProviderComponent_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UServerTimeProviderComponent_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UServerTimeProviderComponent_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UServerTimeProviderComponent_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UServerTimeProviderComponent_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UServerTimeProviderComponent_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UServerTimeProviderComponent_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UServerTimeProviderComponent_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UServerTimeProviderComponent_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UServerTimeProviderComponent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UServerTimeProviderComponent_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UServerTimeProviderComponent_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UServerTimeProviderComponent_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UServerTimeProviderComponent_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UServerTimeProviderComponent_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UServerTimeProviderComponent_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
