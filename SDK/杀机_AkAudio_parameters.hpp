#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AkAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AkAudio.AkAcousticPortal.OpenPortal
struct AAkAcousticPortal_OpenPortal_Params
{
};

// Function AkAudio.AkAcousticPortal.GetCurrentState
struct AAkAcousticPortal_GetCurrentState_Params
{
	EAkAcousticPortalState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkAcousticPortal.ClosePortal
struct AAkAcousticPortal_ClosePortal_Params
{
};

// Function Engine.SceneComponent.ToggleVisibility
struct UAkPortalComponent_ToggleVisibility_Params
{
	bool*                                              bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SnapTo
struct UAkPortalComponent_SnapTo_Params
{
	class USceneComponent**                            InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.SetWorldScale3D
struct UAkPortalComponent_SetWorldScale3D_Params
{
	struct FVector*                                    NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetVisibility
struct UAkPortalComponent_SetVisibility_Params
{
	bool*                                              bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetSkipComponentAndChildrenTransformUpdate
struct UAkPortalComponent_SetSkipComponentAndChildrenTransformUpdate_Params
{
	bool*                                              value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetShouldUpdatePhysicsVolume
struct UAkPortalComponent_SetShouldUpdatePhysicsVolume_Params
{
	bool*                                              bInShouldUpdatePhysicsVolume;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetRelativeScale3D
struct UAkPortalComponent_SetRelativeScale3D_Params
{
	struct FVector*                                    NewScale3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetMobility
struct UAkPortalComponent_SetMobility_Params
{
	TEnumAsByte<EComponentMobility>*                   NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetHiddenInGame
struct UAkPortalComponent_SetHiddenInGame_Params
{
	bool*                                              NewHidden;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.SetAbsolute
struct UAkPortalComponent_SetAbsolute_Params
{
	bool*                                              bNewAbsoluteLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bNewAbsoluteRotation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bNewAbsoluteScale;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.ResetRelativeTransform
struct UAkPortalComponent_ResetRelativeTransform_Params
{
};

// Function Engine.SceneComponent.OnRep_Visibility
struct UAkPortalComponent_OnRep_Visibility_Params
{
	bool*                                              oldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.OnRep_Transform
struct UAkPortalComponent_OnRep_Transform_Params
{
};

// Function Engine.SceneComponent.OnRep_RelativeRotation
struct UAkPortalComponent_OnRep_RelativeRotation_Params
{
};

// Function Engine.SceneComponent.OnRep_RelativeLocation
struct UAkPortalComponent_OnRep_RelativeLocation_Params
{
};

// Function Engine.SceneComponent.OnRep_AttachSocketName
struct UAkPortalComponent_OnRep_AttachSocketName_Params
{
};

// Function Engine.SceneComponent.OnRep_AttachParent
struct UAkPortalComponent_OnRep_AttachParent_Params
{
};

// Function Engine.SceneComponent.OnRep_AttachChildren
struct UAkPortalComponent_OnRep_AttachChildren_Params
{
};

// Function Engine.SceneComponent.K2_SetWorldTransform
struct UAkPortalComponent_K2_SetWorldTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetWorldRotation
struct UAkPortalComponent_K2_SetWorldRotation_Params
{
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetWorldLocationAndRotation
struct UAkPortalComponent_K2_SetWorldLocationAndRotation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetWorldLocation
struct UAkPortalComponent_K2_SetWorldLocation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetRelativeTransform
struct UAkPortalComponent_K2_SetRelativeTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetRelativeRotation
struct UAkPortalComponent_K2_SetRelativeRotation_Params
{
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation
struct UAkPortalComponent_K2_SetRelativeLocationAndRotation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_SetRelativeLocation
struct UAkPortalComponent_K2_SetRelativeLocation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentToWorld
struct UAkPortalComponent_K2_GetComponentToWorld_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentScale
struct UAkPortalComponent_K2_GetComponentScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentRotation
struct UAkPortalComponent_K2_GetComponentRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_GetComponentLocation
struct UAkPortalComponent_K2_GetComponentLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_DetachFromComponent
struct UAkPortalComponent_K2_DetachFromComponent_Params
{
	EDetachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCallModify;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AttachToComponent
struct UAkPortalComponent_K2_AttachToComponent_Params
{
	class USceneComponent**                            Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AttachTo
struct UAkPortalComponent_K2_AttachTo_Params
{
	class USceneComponent**                            InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddWorldTransform
struct UAkPortalComponent_K2_AddWorldTransform_Params
{
	struct FTransform*                                 DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddWorldRotation
struct UAkPortalComponent_K2_AddWorldRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddWorldOffset
struct UAkPortalComponent_K2_AddWorldOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddRelativeRotation
struct UAkPortalComponent_K2_AddRelativeRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddRelativeLocation
struct UAkPortalComponent_K2_AddRelativeLocation_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddLocalTransform
struct UAkPortalComponent_K2_AddLocalTransform_Params
{
	struct FTransform*                                 DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddLocalRotation
struct UAkPortalComponent_K2_AddLocalRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.K2_AddLocalOffset
struct UAkPortalComponent_K2_AddLocalOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SceneComponent.IsVisible
struct UAkPortalComponent_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.IsSimulatingPhysics
struct UAkPortalComponent_IsSimulatingPhysics_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.IsAnySimulatingPhysics
struct UAkPortalComponent_IsAnySimulatingPhysics_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetUpVector
struct UAkPortalComponent_GetUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketTransform
struct UAkPortalComponent_GetSocketTransform_Params
{
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERelativeTransformSpace>*              TransformSpace;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketRotation
struct UAkPortalComponent_GetSocketRotation_Params
{
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketQuaternion
struct UAkPortalComponent_GetSocketQuaternion_Params
{
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSocketLocation
struct UAkPortalComponent_GetSocketLocation_Params
{
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetSkipComponentAndChildrenTransformUpdate
struct UAkPortalComponent_GetSkipComponentAndChildrenTransformUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetShouldUpdatePhysicsVolume
struct UAkPortalComponent_GetShouldUpdatePhysicsVolume_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetRightVector
struct UAkPortalComponent_GetRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetRelativeTransform
struct UAkPortalComponent_GetRelativeTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetPhysicsVolume
struct UAkPortalComponent_GetPhysicsVolume_Params
{
	class APhysicsVolume*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetParentComponents
struct UAkPortalComponent_GetParentComponents_Params
{
	TArray<class USceneComponent*>                     Parents;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.SceneComponent.GetNumChildrenComponents
struct UAkPortalComponent_GetNumChildrenComponents_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetForwardVector
struct UAkPortalComponent_GetForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetComponentVelocity
struct UAkPortalComponent_GetComponentVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetChildrenComponents
struct UAkPortalComponent_GetChildrenComponents_Params
{
	bool*                                              bIncludeAllDescendants;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     Children;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.SceneComponent.GetChildComponent
struct UAkPortalComponent_GetChildComponent_Params
{
	int*                                               ChildIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.SceneComponent.GetAttachSocketName
struct UAkPortalComponent_GetAttachSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.GetAttachParent
struct UAkPortalComponent_GetAttachParent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.SceneComponent.GetAllSocketNames
struct UAkPortalComponent_GetAllSocketNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.SceneComponent.DoesSocketExist
struct UAkPortalComponent_DoesSocketExist_Params
{
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SceneComponent.DetachFromParent
struct UAkPortalComponent_DetachFromParent_Params
{
	bool*                                              bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCallModify;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkAmbientSound.StopAmbientSound
struct AAkAmbientSound_StopAmbientSound_Params
{
};

// Function AkAudio.AkAmbientSound.StartAmbientSound
struct AAkAmbientSound_StartAmbientSound_Params
{
};

// Function AkAudio.AkComponent.UseReverbVolumes
struct UAkComponent_UseReverbVolumes_Params
{
	bool*                                              inUseReverbVolumes;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.UseEarlyReflections
struct UAkComponent_UseEarlyReflections_Params
{
	class UAkAuxBus**                                  AuxBus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Order;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BusSendGain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxPathLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SpotReflectors;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    AuxBusName;                                               // (Parm, ZeroConstructor)
};

// Function AkAudio.AkComponent.Stop
struct UAkComponent_Stop_Params
{
};

// Function AkAudio.AkComponent.SetUseSpatialAudio
struct UAkComponent_SetUseSpatialAudio_Params
{
	bool*                                              bNewValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetSwitch
struct UAkComponent_SetSwitch_Params
{
	struct FString*                                    SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString*                                    switchState;                                              // (Parm, ZeroConstructor)
};

// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct UAkComponent_SetStopWhenOwnerDestroyed_Params
{
	bool*                                              bStopWhenOwnerDestroyed;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetRTPCValue
struct UAkComponent_SetRTPCValue_Params
{
	struct FString*                                    RTPC;                                                     // (Parm, ZeroConstructor)
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetOutputBusVolume
struct UAkComponent_SetOutputBusVolume_Params
{
	float*                                             BusVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetListeners
struct UAkComponent_SetListeners_Params
{
	TArray<class UAkComponent*>*                       Listeners;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct UAkComponent_SetAttenuationScalingFactor_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostTrigger
struct UAkComponent_PostTrigger_Params
{
	struct FString*                                    Trigger;                                                  // (Parm, ZeroConstructor)
};

// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
struct UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params
{
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAssociatedAkEvent
struct UAkComponent_PostAssociatedAkEvent_Params
{
	int*                                               CallbackMask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            PostEventCallback;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEventByName
struct UAkComponent_PostAkEventByName_Params
{
	struct FString*                                    in_EventName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
struct UAkComponent_PostAkEventAndWaitForEnd_Params
{
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    in_EventName;                                             // (Parm, ZeroConstructor)
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEvent
struct UAkComponent_PostAkEvent_Params
{
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CallbackMask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            PostEventCallback;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString*                                    in_EventName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.GetRTPCValue
struct UAkComponent_GetRTPCValue_Params
{
	struct FString*                                    RTPC;                                                     // (Parm, ZeroConstructor)
	int*                                               PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ERTPCValueType*                                    InputValueType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ERTPCValueType                                     OutputValueType;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.GetAttenuationRadius
struct UAkComponent_GetAttenuationRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.UseReverbVolumes
struct UAkAudioInputComponent_UseReverbVolumes_Params
{
	bool*                                              inUseReverbVolumes;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.UseEarlyReflections
struct UAkAudioInputComponent_UseEarlyReflections_Params
{
	class UAkAuxBus**                                  AuxBus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Order;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BusSendGain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxPathLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SpotReflectors;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    AuxBusName;                                               // (Parm, ZeroConstructor)
};

// Function AkAudio.AkComponent.Stop
struct UAkAudioInputComponent_Stop_Params
{
};

// Function AkAudio.AkComponent.SetUseSpatialAudio
struct UAkAudioInputComponent_SetUseSpatialAudio_Params
{
	bool*                                              bNewValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetSwitch
struct UAkAudioInputComponent_SetSwitch_Params
{
	struct FString*                                    SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString*                                    switchState;                                              // (Parm, ZeroConstructor)
};

// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct UAkAudioInputComponent_SetStopWhenOwnerDestroyed_Params
{
	bool*                                              bStopWhenOwnerDestroyed;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetRTPCValue
struct UAkAudioInputComponent_SetRTPCValue_Params
{
	struct FString*                                    RTPC;                                                     // (Parm, ZeroConstructor)
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetOutputBusVolume
struct UAkAudioInputComponent_SetOutputBusVolume_Params
{
	float*                                             BusVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.SetListeners
struct UAkAudioInputComponent_SetListeners_Params
{
	TArray<class UAkComponent*>*                       Listeners;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct UAkAudioInputComponent_SetAttenuationScalingFactor_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostTrigger
struct UAkAudioInputComponent_PostTrigger_Params
{
	struct FString*                                    Trigger;                                                  // (Parm, ZeroConstructor)
};

// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
struct UAkAudioInputComponent_PostAssociatedAkEventAndWaitForEnd_Params
{
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAssociatedAkEvent
struct UAkAudioInputComponent_PostAssociatedAkEvent_Params
{
	int*                                               CallbackMask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            PostEventCallback;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEventByName
struct UAkAudioInputComponent_PostAkEventByName_Params
{
	struct FString*                                    in_EventName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
struct UAkAudioInputComponent_PostAkEventAndWaitForEnd_Params
{
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    in_EventName;                                             // (Parm, ZeroConstructor)
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEvent
struct UAkAudioInputComponent_PostAkEvent_Params
{
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CallbackMask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            PostEventCallback;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString*                                    in_EventName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.GetRTPCValue
struct UAkAudioInputComponent_GetRTPCValue_Params
{
	struct FString*                                    RTPC;                                                     // (Parm, ZeroConstructor)
	int*                                               PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ERTPCValueType*                                    InputValueType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ERTPCValueType                                     OutputValueType;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkComponent.GetAttenuationRadius
struct UAkAudioInputComponent_GetAttenuationRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkCheckBox.SetIsChecked
struct UAkCheckBox_SetIsChecked_Params
{
	bool*                                              InIsChecked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkCheckBox.SetCheckedState
struct UAkCheckBox_SetCheckedState_Params
{
	ECheckBoxState*                                    InCheckedState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkCheckBox.SetAkItemId
struct UAkCheckBox_SetAkItemId_Params
{
	struct FGuid*                                      ItemId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AkAudio.AkCheckBox.SetAkBoolProperty
struct UAkCheckBox_SetAkBoolProperty_Params
{
	struct FString*                                    ItemProperty;                                             // (Parm, ZeroConstructor)
};

// Function AkAudio.AkCheckBox.IsPressed
struct UAkCheckBox_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkCheckBox.IsChecked
struct UAkCheckBox_IsChecked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkCheckBox.GetCheckedState
struct UAkCheckBox_GetCheckedState_Params
{
	ECheckBoxState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkCheckBox.GetAkProperty
struct UAkCheckBox_GetAkProperty_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkCheckBox.GetAkItemId
struct UAkCheckBox_GetAkItemId_Params
{
	struct FGuid                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkItemBoolProperties.SetSearchText
struct UAkItemBoolProperties_SetSearchText_Params
{
	struct FString*                                    newText;                                                  // (Parm, ZeroConstructor)
};

// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
struct UAkItemBoolProperties_GetSelectedProperty_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkItemBoolProperties.GetSearchText
struct UAkItemBoolProperties_GetSearchText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkItemProperties.SetSearchText
struct UAkItemProperties_SetSearchText_Params
{
	struct FString*                                    newText;                                                  // (Parm, ZeroConstructor)
};

// Function AkAudio.AkItemProperties.GetSelectedProperty
struct UAkItemProperties_GetSelectedProperty_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkItemProperties.GetSearchText
struct UAkItemProperties_GetSearchText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkSlider.SetValue
struct UAkSlider_SetValue_Params
{
	float*                                             InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkSlider.SetStepSize
struct UAkSlider_SetStepSize_Params
{
	float*                                             InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkSlider.SetSliderHandleColor
struct UAkSlider_SetSliderHandleColor_Params
{
	struct FLinearColor*                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkSlider.SetSliderBarColor
struct UAkSlider_SetSliderBarColor_Params
{
	struct FLinearColor*                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkSlider.SetLocked
struct UAkSlider_SetLocked_Params
{
	bool*                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkSlider.SetIndentHandle
struct UAkSlider_SetIndentHandle_Params
{
	bool*                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AkAudio.AkSlider.SetAkSliderItemProperty
struct UAkSlider_SetAkSliderItemProperty_Params
{
	struct FString*                                    ItemProperty;                                             // (Parm, ZeroConstructor)
};

// Function AkAudio.AkSlider.SetAkSliderItemId
struct UAkSlider_SetAkSliderItemId_Params
{
	struct FGuid*                                      ItemId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AkAudio.AkSlider.GetValue
struct UAkSlider_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkSlider.GetAkSliderItemProperty
struct UAkSlider_GetAkSliderItemProperty_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AkAudio.AkSlider.GetAkSliderItemId
struct UAkSlider_GetAkSliderItemId_Params
{
	struct FGuid                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkWwiseTree.SetSearchText
struct UAkWwiseTree_SetSearchText_Params
{
	struct FString*                                    newText;                                                  // (Parm, ZeroConstructor)
};

// Function AkAudio.AkWwiseTree.GetSelectedItem
struct UAkWwiseTree_GetSelectedItem_Params
{
	struct FAkWwiseObjectDetails                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.AkWwiseTree.GetSearchText
struct UAkWwiseTree_GetSearchText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
