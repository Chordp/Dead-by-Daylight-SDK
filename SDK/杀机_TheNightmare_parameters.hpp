#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheNightmare_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TheNightmare.GeneratorTeleportInteraction.TeleportPlayerToLocation
struct UGeneratorTeleportInteraction_TeleportPlayerToLocation_Params
{
	class ADBDPlayer**                                 teleportingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts
struct UGeneratorTeleportInteraction_StopBloodSpurts_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts
struct UGeneratorTeleportInteraction_StartBloodSpurts_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX
struct UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator
struct UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Params
{
	class AGenerator**                                 Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnTeleportReady
struct UGeneratorTeleportInteraction_OnTeleportReady_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen
struct UGeneratorTeleportInteraction_OnTeleportLocationChosen_Params
{
	class AGenerator**                                 Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Location;                                                 // (Parm, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnTeleported
struct UGeneratorTeleportInteraction_OnTeleported_Params
{
	struct FTransform*                                 transformBeforeTeleport;                                  // (Parm, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet
struct UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Params
{
	class AGenerator**                                 selectedGenerator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer
struct UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator
struct UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet
struct UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Params
{
	class AGenerator**                                 selectedGenerator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted
struct UGeneratorTeleportInteraction_OnIntroCompleted_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer
struct UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen
struct UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Params
{
	class AGenerator**                                 Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Location;                                                 // (Parm, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable
struct UGeneratorTeleportInteraction_IsTeleportAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues
struct UGeneratorTeleportInteraction_InitializeTunableValues_Params
{
	class ASlasherPlayer**                             Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer
struct UGeneratorTeleportInteraction_GetOwningPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator
struct UGeneratorTeleportInteraction_GetInlineGenerator_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGenerator*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator
struct UGeneratorTeleportInteraction_CanTeleportAtGenerator_Params
{
	class AGenerator**                                 Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator
struct UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Params
{
	class ADBDPlayer**                                 playerToTeleport;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AGenerator**                                 Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown
struct UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Params
{
	bool*                                              teleported;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet
struct UPlaceDreamPalletInteraction_SpawnDreamPallet_Params
{
	class APalletTracker**                             trackerAtLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues
struct UPlaceDreamPalletInteraction_InitializeTunableValues_Params
{
	class ASlasherPlayer**                             Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet
struct UPlaceDreamPalletInteraction_GetTargetedPallet_Params
{
	class APalletTracker*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker
struct UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Params
{
	class APalletTracker**                             tracker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.ToggleActive
struct UPresentationGeneratorTeleportProgressComponent_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UPresentationGeneratorTeleportProgressComponent_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UPresentationGeneratorTeleportProgressComponent_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UPresentationGeneratorTeleportProgressComponent_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UPresentationGeneratorTeleportProgressComponent_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UPresentationGeneratorTeleportProgressComponent_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UPresentationGeneratorTeleportProgressComponent_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UPresentationGeneratorTeleportProgressComponent_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UPresentationGeneratorTeleportProgressComponent_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UPresentationGeneratorTeleportProgressComponent_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UPresentationGeneratorTeleportProgressComponent_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UPresentationGeneratorTeleportProgressComponent_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UPresentationGeneratorTeleportProgressComponent_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UPresentationGeneratorTeleportProgressComponent_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UPresentationGeneratorTeleportProgressComponent_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UPresentationGeneratorTeleportProgressComponent_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UPresentationGeneratorTeleportProgressComponent_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UPresentationGeneratorTeleportProgressComponent_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UPresentationGeneratorTeleportProgressComponent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UPresentationGeneratorTeleportProgressComponent_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UPresentationGeneratorTeleportProgressComponent_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UPresentationGeneratorTeleportProgressComponent_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UPresentationGeneratorTeleportProgressComponent_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UPresentationGeneratorTeleportProgressComponent_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UPresentationGeneratorTeleportProgressComponent_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare
struct USetDreamSnareInteraction_HasCancelledDreamSnare_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation
struct USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
