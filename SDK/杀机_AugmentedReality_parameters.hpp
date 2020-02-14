#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AugmentedReality_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
struct UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UARSaveWorldAsyncTaskBlueprintProxy*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
struct UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
struct UARBasicLightEstimate_GetAmbientIntensityLumens_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
struct UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
struct UARBasicLightEstimate_GetAmbientColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetTrackingState
struct UARPin_GetTrackingState_Params
{
	EARTrackingState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetTrackedGeometry
struct UARPin_GetTrackedGeometry_Params
{
	class UARTrackedGeometry*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetPinnedComponent
struct UARPin_GetPinnedComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetLocalToWorldTransform
struct UARPin_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
struct UARPin_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetDebugName
struct UARPin_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.DebugDraw
struct UARPin_DebugDraw_Params
{
	class UWorld**                                     World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PersistForSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
struct UARSessionConfig_ShouldResetTrackedObjects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
struct UARSessionConfig_ShouldResetCameraTracking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
struct UARSessionConfig_ShouldRenderCameraOverlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
struct UARSessionConfig_ShouldEnableCameraTracking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
struct UARSessionConfig_ShouldEnableAutoFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetWorldMapData
struct UARSessionConfig_SetWorldMapData_Params
{
	TArray<unsigned char>*                             WorldMapData;                                             // (Parm, ZeroConstructor)
};

// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
struct UARSessionConfig_SetResetTrackedObjects_Params
{
	bool*                                              bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
struct UARSessionConfig_SetResetCameraTracking_Params
{
	bool*                                              bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
struct UARSessionConfig_SetFaceTrackingUpdate_Params
{
	EARFaceTrackingUpdate*                             InUpdate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
struct UARSessionConfig_SetFaceTrackingDirection_Params
{
	EARFaceTrackingDirection*                          InDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
struct UARSessionConfig_SetEnableAutoFocus_Params
{
	bool*                                              bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
struct UARSessionConfig_SetDesiredVideoFormat_Params
{
	struct FARVideoFormat*                             NewFormat;                                                // (Parm)
};

// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
struct UARSessionConfig_SetCandidateObjectList_Params
{
	TArray<class UARCandidateObject*>*                 InCandidateObjects;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AugmentedReality.ARSessionConfig.GetWorldMapData
struct UARSessionConfig_GetWorldMapData_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
struct UARSessionConfig_GetWorldAlignment_Params
{
	EARWorldAlignment                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetSessionType
struct UARSessionConfig_GetSessionType_Params
{
	EARSessionType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
struct UARSessionConfig_GetPlaneDetectionMode_Params
{
	EARPlaneDetectionMode                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
struct UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
struct UARSessionConfig_GetLightEstimationMode_Params
{
	EARLightEstimationMode                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
struct UARSessionConfig_GetFrameSyncMode_Params
{
	EARFrameSyncMode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
struct UARSessionConfig_GetFaceTrackingUpdate_Params
{
	EARFaceTrackingUpdate                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
struct UARSessionConfig_GetFaceTrackingDirection_Params
{
	EARFaceTrackingDirection                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
struct UARSessionConfig_GetEnvironmentCaptureProbeType_Params
{
	EAREnvironmentCaptureProbeType                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
struct UARSessionConfig_GetDesiredVideoFormat_Params
{
	struct FARVideoFormat                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
struct UARSessionConfig_GetCandidateObjectList_Params
{
	TArray<class UARCandidateObject*>                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
struct UARSessionConfig_GetCandidateImageList_Params
{
	TArray<class UARCandidateImage*>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AugmentedReality.ARSessionConfig.AddCandidateObject
struct UARSessionConfig_AddCandidateObject_Params
{
	class UARCandidateObject**                         CandidateObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSessionConfig.AddCandidateImage
struct UARSessionConfig_AddCandidateImage_Params
{
	class UARCandidateImage**                          NewCandidateImage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
struct AARSharedWorldGameMode_SetPreviewImageData_Params
{
	TArray<unsigned char>*                             ImageData;                                                // (Parm, ZeroConstructor)
};

// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
struct AARSharedWorldGameMode_SetARWorldSharingIsReady_Params
{
};

// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
struct AARSharedWorldGameMode_SetARSharedWorldData_Params
{
	TArray<unsigned char>*                             ARWorldData;                                              // (Parm, ZeroConstructor)
};

// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
struct AARSharedWorldGameMode_GetARSharedWorldGameState_Params
{
	class AARSharedWorldGameState*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
struct AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params
{
};

// Function Engine.PlayerController.WasInputKeyJustReleased
struct AARSharedWorldPlayerController_WasInputKeyJustReleased_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.WasInputKeyJustPressed
struct AARSharedWorldPlayerController_WasInputKeyJustPressed_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.ToggleSpeaking
struct AARSharedWorldPlayerController_ToggleSpeaking_Params
{
	bool*                                              bInSpeaking;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SwitchLevel
struct AARSharedWorldPlayerController_SwitchLevel_Params
{
	struct FString*                                    URL;                                                      // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.StopHapticEffect
struct AARSharedWorldPlayerController_StopHapticEffect_Params
{
	EControllerHand*                                   Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.StartFire
struct AARSharedWorldPlayerController_StartFire_Params
{
	unsigned char*                                     FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetVirtualJoystickVisibility
struct AARSharedWorldPlayerController_SetVirtualJoystickVisibility_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetViewTargetWithBlend
struct AARSharedWorldPlayerController_SetViewTargetWithBlend_Params
{
	class AActor**                                     NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>*             BlendFunc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlendExp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLockOutgoing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetName
struct AARSharedWorldPlayerController_SetName_Params
{
	struct FString*                                    S;                                                        // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.SetMouseLocation
struct AARSharedWorldPlayerController_SetMouseLocation_Params
{
	int*                                               X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Y;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetMouseCursorWidget
struct AARSharedWorldPlayerController_SetMouseCursorWidget_Params
{
	TEnumAsByte<EMouseCursor>*                         Cursor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                CursorWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.PlayerController.SetHapticsByValue
struct AARSharedWorldPlayerController_SetHapticsByValue_Params
{
	float*                                             Frequency;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Amplitude;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand*                                   Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetDisableHaptics
struct AARSharedWorldPlayerController_SetDisableHaptics_Params
{
	bool*                                              bNewDisabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetControllerLightColor
struct AARSharedWorldPlayerController_SetControllerLightColor_Params
{
	struct FColor*                                     Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetCinematicMode
struct AARSharedWorldPlayerController_SetCinematicMode_Params
{
	bool*                                              bInCinematicMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHidePlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAffectsHUD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAffectsMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAffectsTurning;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetAudioListenerOverride
struct AARSharedWorldPlayerController_SetAudioListenerOverride_Params
{
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SetAudioListenerAttenuationOverride
struct AARSharedWorldPlayerController_SetAudioListenerAttenuationOverride_Params
{
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    AttenuationLocationOVerride;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerViewSelf
struct AARSharedWorldPlayerController_ServerViewSelf_Params
{
	struct FViewTargetTransitionParams*                TransitionParams;                                         // (Parm)
};

// Function Engine.PlayerController.ServerViewPrevPlayer
struct AARSharedWorldPlayerController_ServerViewPrevPlayer_Params
{
};

// Function Engine.PlayerController.ServerViewNextPlayer
struct AARSharedWorldPlayerController_ServerViewNextPlayer_Params
{
};

// Function Engine.PlayerController.ServerVerifyViewTarget
struct AARSharedWorldPlayerController_ServerVerifyViewTarget_Params
{
};

// Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility
struct AARSharedWorldPlayerController_ServerUpdateMultipleLevelsVisibility_Params
{
	TArray<struct FUpdateLevelVisibilityLevelInfo>*    LevelVisibilities;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Engine.PlayerController.ServerUpdateLevelVisibility
struct AARSharedWorldPlayerController_ServerUpdateLevelVisibility_Params
{
	struct FName*                                      PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerUpdateCamera
struct AARSharedWorldPlayerController_ServerUpdateCamera_Params
{
	struct FVector_NetQuantize*                        CamLoc;                                                   // (Parm)
	int*                                               CamPitchAndYaw;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerUnmutePlayer
struct AARSharedWorldPlayerController_ServerUnmutePlayer_Params
{
	struct FUniqueNetIdRepl*                           playerID;                                                 // (Parm)
};

// Function Engine.PlayerController.ServerToggleAILogging
struct AARSharedWorldPlayerController_ServerToggleAILogging_Params
{
};

// Function Engine.PlayerController.ServerShortTimeout
struct AARSharedWorldPlayerController_ServerShortTimeout_Params
{
};

// Function Engine.PlayerController.ServerSetSpectatorWaiting
struct AARSharedWorldPlayerController_ServerSetSpectatorWaiting_Params
{
	bool*                                              bWaiting;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerSetSpectatorLocation
struct AARSharedWorldPlayerController_ServerSetSpectatorLocation_Params
{
	struct FVector*                                    NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   NewRot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerRestartPlayer
struct AARSharedWorldPlayerController_ServerRestartPlayer_Params
{
};

// Function Engine.PlayerController.ServerPause
struct AARSharedWorldPlayerController_ServerPause_Params
{
};

// Function Engine.PlayerController.ServerNotifyLoadedWorld
struct AARSharedWorldPlayerController_ServerNotifyLoadedWorld_Params
{
	struct FName*                                      WorldPackageName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerMutePlayer
struct AARSharedWorldPlayerController_ServerMutePlayer_Params
{
	struct FUniqueNetIdRepl*                           playerID;                                                 // (Parm)
};

// Function Engine.PlayerController.ServerCheckClientPossessionReliable
struct AARSharedWorldPlayerController_ServerCheckClientPossessionReliable_Params
{
};

// Function Engine.PlayerController.ServerCheckClientPossession
struct AARSharedWorldPlayerController_ServerCheckClientPossession_Params
{
};

// Function Engine.PlayerController.ServerChangeName
struct AARSharedWorldPlayerController_ServerChangeName_Params
{
	struct FString*                                    S;                                                        // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.ServerCamera
struct AARSharedWorldPlayerController_ServerCamera_Params
{
	struct FName*                                      NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ServerAcknowledgePossession
struct AARSharedWorldPlayerController_ServerAcknowledgePossession_Params
{
	class APawn**                                      P;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.SendToConsole
struct AARSharedWorldPlayerController_SendToConsole_Params
{
	struct FString*                                    Command;                                                  // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.RestartLevel
struct AARSharedWorldPlayerController_RestartLevel_Params
{
};

// Function Engine.PlayerController.ResetControllerLightColor
struct AARSharedWorldPlayerController_ResetControllerLightColor_Params
{
};

// Function Engine.PlayerController.ProjectWorldLocationToScreen
struct AARSharedWorldPlayerController_ProjectWorldLocationToScreen_Params
{
	struct FVector*                                    WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPlayerViewportRelative;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.PlayHapticEffect
struct AARSharedWorldPlayerController_PlayHapticEffect_Params
{
	class UHapticFeedbackEffect_Base**                 HapticEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand*                                   Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.PlayDynamicForceFeedback
struct AARSharedWorldPlayerController_PlayDynamicForceFeedback_Params
{
	float*                                             Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAffectsLeftLarge;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAffectsLeftSmall;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAffectsRightLarge;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAffectsRightSmall;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDynamicForceFeedbackAction>*          action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
};

// Function Engine.PlayerController.Pause
struct AARSharedWorldPlayerController_Pause_Params
{
};

// Function Engine.PlayerController.OnServerStartedVisualLogger
struct AARSharedWorldPlayerController_OnServerStartedVisualLogger_Params
{
	bool*                                              bIsLogging;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.LocalTravel
struct AARSharedWorldPlayerController_LocalTravel_Params
{
	struct FString*                                    URL;                                                      // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.K2_ClientPlayForceFeedback
struct AARSharedWorldPlayerController_K2_ClientPlayForceFeedback_Params
{
	class UForceFeedbackEffect**                       ForceFeedbackEffect;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLooping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIgnoreTimeDilation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPlayWhilePaused;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.IsInputKeyDown
struct AARSharedWorldPlayerController_IsInputKeyDown_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetViewportSize
struct AARSharedWorldPlayerController_GetViewportSize_Params
{
	int                                                SizeX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.GetSpectatorPawn
struct AARSharedWorldPlayerController_GetSpectatorPawn_Params
{
	class ASpectatorPawn*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetMousePosition
struct AARSharedWorldPlayerController_GetMousePosition_Params
{
	float                                              LocationX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputVectorKeyState
struct AARSharedWorldPlayerController_GetInputVectorKeyState_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputTouchState
struct AARSharedWorldPlayerController_GetInputTouchState_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LocationY;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCurrentlyPressed;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputMouseDelta
struct AARSharedWorldPlayerController_GetInputMouseDelta_Params
{
	float                                              DeltaX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputMotionState
struct AARSharedWorldPlayerController_GetInputMotionState_Params
{
	struct FVector                                     Tilt;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationRate;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputKeyTimeDown
struct AARSharedWorldPlayerController_GetInputKeyTimeDown_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputAnalogStickState
struct AARSharedWorldPlayerController_GetInputAnalogStickState_Params
{
	TEnumAsByte<EControllerAnalogStick>*               WhichStick;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StickX;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StickY;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.GetInputAnalogKeyState
struct AARSharedWorldPlayerController_GetInputAnalogKeyState_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHUD
struct AARSharedWorldPlayerController_GetHUD_Params
{
	class AHUD*                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderFingerForObjects
struct AARSharedWorldPlayerController_GetHitResultUnderFingerForObjects_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>*             ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderFingerByChannel
struct AARSharedWorldPlayerController_GetHitResultUnderFingerByChannel_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderFinger
struct AARSharedWorldPlayerController_GetHitResultUnderFinger_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>*                    TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderCursorForObjects
struct AARSharedWorldPlayerController_GetHitResultUnderCursorForObjects_Params
{
	TArray<TEnumAsByte<EObjectTypeQuery>>*             ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderCursorByChannel
struct AARSharedWorldPlayerController_GetHitResultUnderCursorByChannel_Params
{
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetHitResultUnderCursor
struct AARSharedWorldPlayerController_GetHitResultUnderCursor_Params
{
	TEnumAsByte<ECollisionChannel>*                    TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.GetFocalLocation
struct AARSharedWorldPlayerController_GetFocalLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.FOV
struct AARSharedWorldPlayerController_FOV_Params
{
	float*                                             NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.EnableCheats
struct AARSharedWorldPlayerController_EnableCheats_Params
{
};

// Function Engine.PlayerController.DeprojectScreenPositionToWorld
struct AARSharedWorldPlayerController_DeprojectScreenPositionToWorld_Params
{
	float*                                             ScreenX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScreenY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.DeprojectMousePositionToWorld
struct AARSharedWorldPlayerController_DeprojectMousePositionToWorld_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.ConsoleKey
struct AARSharedWorldPlayerController_ConsoleKey_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
};

// Function Engine.PlayerController.ClientWasKicked
struct AARSharedWorldPlayerController_ClientWasKicked_Params
{
	uint32_t*                                          KickReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t*                                          ErrorCode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    AdditionalInfo;                                           // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.ClientVoiceHandshakeComplete
struct AARSharedWorldPlayerController_ClientVoiceHandshakeComplete_Params
{
};

// Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus
struct AARSharedWorldPlayerController_ClientUpdateMultipleLevelsStreamingStatus_Params
{
	TArray<struct FUpdateLevelStreamingLevelStatus>*   LevelStatuses;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Engine.PlayerController.ClientUpdateLevelStreamingStatus
struct AARSharedWorldPlayerController_ClientUpdateLevelStreamingStatus_Params
{
	struct FName*                                      PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bNewShouldBeLoaded;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bNewShouldBeVisible;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bNewShouldBlockOnLoad;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientUnmutePlayer
struct AARSharedWorldPlayerController_ClientUnmutePlayer_Params
{
	struct FUniqueNetIdRepl*                           playerID;                                                 // (Parm)
};

// Function Engine.PlayerController.ClientTravelInternal
struct AARSharedWorldPlayerController_ClientTravelInternal_Params
{
	struct FString*                                    URL;                                                      // (Parm, ZeroConstructor)
	TEnumAsByte<ETravelType>*                          TravelType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSeamless;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid*                                      MapPackageGuid;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientTravel
struct AARSharedWorldPlayerController_ClientTravel_Params
{
	struct FString*                                    URL;                                                      // (Parm, ZeroConstructor)
	TEnumAsByte<ETravelType>*                          TravelType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSeamless;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid*                                      MapPackageGuid;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientTeamMessage
struct AARSharedWorldPlayerController_ClientTeamMessage_Params
{
	class APlayerState**                               SenderPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    S;                                                        // (Parm, ZeroConstructor)
	struct FName*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MsgLifeTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientStopForceFeedback
struct AARSharedWorldPlayerController_ClientStopForceFeedback_Params
{
	class UForceFeedbackEffect**                       ForceFeedbackEffect;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientStopCameraShake
struct AARSharedWorldPlayerController_ClientStopCameraShake_Params
{
	class UClass**                                     Shake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bImmediately;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientStopCameraAnim
struct AARSharedWorldPlayerController_ClientStopCameraAnim_Params
{
	class UCameraAnim**                                AnimToStop;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientStartOnlineSession
struct AARSharedWorldPlayerController_ClientStartOnlineSession_Params
{
};

// Function Engine.PlayerController.ClientSpawnCameraLensEffect
struct AARSharedWorldPlayerController_ClientSpawnCameraLensEffect_Params
{
	class UClass**                                     LensEffectEmitterClass;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetViewTarget
struct AARSharedWorldPlayerController_ClientSetViewTarget_Params
{
	class AActor**                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FViewTargetTransitionParams*                TransitionParams;                                         // (Parm)
};

// Function Engine.PlayerController.ClientSetSpectatorWaiting
struct AARSharedWorldPlayerController_ClientSetSpectatorWaiting_Params
{
	bool*                                              bWaiting;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetHUD
struct AARSharedWorldPlayerController_ClientSetHUD_Params
{
	class UClass**                                     NewHUDClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident
struct AARSharedWorldPlayerController_ClientSetForceMipLevelsToBeResident_Params
{
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForceDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetCinematicMode
struct AARSharedWorldPlayerController_ClientSetCinematicMode_Params
{
	bool*                                              bInCinematicMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAffectsMovement;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAffectsTurning;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAffectsHUD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetCameraMode
struct AARSharedWorldPlayerController_ClientSetCameraMode_Params
{
	struct FName*                                      NewCamMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetCameraFade
struct AARSharedWorldPlayerController_ClientSetCameraFade_Params
{
	bool*                                              bEnableFading;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor*                                     FadeColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  FadeAlpha;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFadeAudio;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientSetBlockOnAsyncLoading
struct AARSharedWorldPlayerController_ClientSetBlockOnAsyncLoading_Params
{
};

// Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason
struct AARSharedWorldPlayerController_ClientReturnToMainMenuWithTextReason_Params
{
	struct FText*                                      ReturnReason;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function Engine.PlayerController.ClientReturnToMainMenu
struct AARSharedWorldPlayerController_ClientReturnToMainMenu_Params
{
	struct FString*                                    ReturnReason;                                             // (Parm, ZeroConstructor)
};

// Function Engine.PlayerController.ClientRetryClientRestart
struct AARSharedWorldPlayerController_ClientRetryClientRestart_Params
{
	class APawn**                                      NewPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientRestart
struct AARSharedWorldPlayerController_ClientRestart_Params
{
	class APawn**                                      NewPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientReset
struct AARSharedWorldPlayerController_ClientReset_Params
{
};

// Function Engine.PlayerController.ClientRepObjRef
struct AARSharedWorldPlayerController_ClientRepObjRef_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientReceiveLocalizedMessage
struct AARSharedWorldPlayerController_ClientReceiveLocalizedMessage_Params
{
	class UClass**                                     Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               switch;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState**                               RelatedPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState**                               RelatedPlayerState02;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    OptionalObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPrestreamTextures
struct AARSharedWorldPlayerController_ClientPrestreamTextures_Params
{
	class AActor**                                     ForcedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForceDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnableStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPrepareMapChange
struct AARSharedWorldPlayerController_ClientPrepareMapChange_Params
{
	struct FName*                                      LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFirst;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLast;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPlaySoundAtLocation
struct AARSharedWorldPlayerController_ClientPlaySoundAtLocation_Params
{
	class USoundBase**                                 Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPlaySound
struct AARSharedWorldPlayerController_ClientPlaySound_Params
{
	class USoundBase**                                 Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPlayForceFeedback_Internal
struct AARSharedWorldPlayerController_ClientPlayForceFeedback_Internal_Params
{
	class UForceFeedbackEffect**                       ForceFeedbackEffect;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FForceFeedbackParameters*                   Params;                                                   // (Parm)
};

// Function Engine.PlayerController.ClientPlayCameraShake
struct AARSharedWorldPlayerController_ClientPlayCameraShake_Params
{
	class UClass**                                     Shake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>*                 PlaySpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   UserPlaySpaceRot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientPlayCameraAnim
struct AARSharedWorldPlayerController_ClientPlayCameraAnim_Params
{
	class UCameraAnim**                                AnimToPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlendInTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRandomStartTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>*                 space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   CustomPlaySpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientMutePlayer
struct AARSharedWorldPlayerController_ClientMutePlayer_Params
{
	struct FUniqueNetIdRepl*                           playerID;                                                 // (Parm)
};

// Function Engine.PlayerController.ClientMessage
struct AARSharedWorldPlayerController_ClientMessage_Params
{
	struct FString*                                    S;                                                        // (Parm, ZeroConstructor)
	struct FName*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MsgLifeTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientIgnoreMoveInput
struct AARSharedWorldPlayerController_ClientIgnoreMoveInput_Params
{
	bool*                                              bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientIgnoreLookInput
struct AARSharedWorldPlayerController_ClientIgnoreLookInput_Params
{
	bool*                                              bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientGotoState
struct AARSharedWorldPlayerController_ClientGotoState_Params
{
	struct FName*                                      newState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientGameEnded
struct AARSharedWorldPlayerController_ClientGameEnded_Params
{
	class AActor**                                     EndGameFocus;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsWinner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientForceGarbageCollection
struct AARSharedWorldPlayerController_ClientForceGarbageCollection_Params
{
};

// Function Engine.PlayerController.ClientFlushLevelStreaming
struct AARSharedWorldPlayerController_ClientFlushLevelStreaming_Params
{
};

// Function Engine.PlayerController.ClientEndOnlineSession
struct AARSharedWorldPlayerController_ClientEndOnlineSession_Params
{
};

// Function Engine.PlayerController.ClientEnableNetworkVoice
struct AARSharedWorldPlayerController_ClientEnableNetworkVoice_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientCommitMapChange
struct AARSharedWorldPlayerController_ClientCommitMapChange_Params
{
};

// Function Engine.PlayerController.ClientClearCameraLensEffects
struct AARSharedWorldPlayerController_ClientClearCameraLensEffects_Params
{
};

// Function Engine.PlayerController.ClientCapBandwidth
struct AARSharedWorldPlayerController_ClientCapBandwidth_Params
{
	int*                                               Cap;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClientCancelPendingMapChange
struct AARSharedWorldPlayerController_ClientCancelPendingMapChange_Params
{
};

// Function Engine.PlayerController.ClientAddTextureStreamingLoc
struct AARSharedWorldPlayerController_ClientAddTextureStreamingLoc_Params
{
	struct FVector*                                    InLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOverrideLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ClearAudioListenerOverride
struct AARSharedWorldPlayerController_ClearAudioListenerOverride_Params
{
};

// Function Engine.PlayerController.ClearAudioListenerAttenuationOverride
struct AARSharedWorldPlayerController_ClearAudioListenerAttenuationOverride_Params
{
};

// Function Engine.PlayerController.CanRestartPlayer
struct AARSharedWorldPlayerController_CanRestartPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PlayerController.Camera
struct AARSharedWorldPlayerController_Camera_Params
{
	struct FName*                                      NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.AddYawInput
struct AARSharedWorldPlayerController_AddYawInput_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.AddRollInput
struct AARSharedWorldPlayerController_AddRollInput_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.AddPitchInput
struct AARSharedWorldPlayerController_AddPitchInput_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PlayerController.ActivateTouchInterface
struct AARSharedWorldPlayerController_ActivateTouchInterface_Params
{
	class UTouchInterface**                            NewTouchInterface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
struct AARSkyLight_SetEnvironmentCaptureProbe_Params
{
	class UAREnvironmentCaptureProbe**                 InCaptureProbe;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.IsTracked
struct UARTrackedGeometry_IsTracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
struct UARTrackedGeometry_GetTrackingState_Params
{
	EARTrackingState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
struct UARTrackedGeometry_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
struct UARTrackedGeometry_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
struct UARTrackedGeometry_GetLastUpdateTimestamp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
struct UARTrackedGeometry_GetLastUpdateFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetDebugName
struct UARTrackedGeometry_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
struct UARPlaneGeometry_GetSubsumedBy_Params
{
	class UARPlaneGeometry*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetExtent
struct UARPlaneGeometry_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetCenter
struct UARPlaneGeometry_GetCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
struct UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARTrackedGeometry.IsTracked
struct UARTrackedPoint_IsTracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
struct UARTrackedPoint_GetTrackingState_Params
{
	EARTrackingState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
struct UARTrackedPoint_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
struct UARTrackedPoint_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
struct UARTrackedPoint_GetLastUpdateTimestamp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
struct UARTrackedPoint_GetLastUpdateFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetDebugName
struct UARTrackedPoint_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedImage.GetEstimateSize
struct UARTrackedImage_GetEstimateSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedImage.GetDetectedImage
struct UARTrackedImage_GetDetectedImage_Params
{
	class UARCandidateImage*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
struct UARFaceGeometry_GetWorldSpaceEyeTransform_Params
{
	EAREye*                                            Eye;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
struct UARFaceGeometry_GetLocalSpaceEyeTransform_Params
{
	EAREye*                                            Eye;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
struct UARFaceGeometry_GetBlendShapeValue_Params
{
	EARFaceBlendShape*                                 BlendShape;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
struct UARFaceGeometry_GetBlendShapes_Params
{
	TMap<EARFaceBlendShape, float>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
struct UAREnvironmentCaptureProbe_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
struct UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params
{
	class UAREnvironmentCaptureProbeTexture*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedObject.GetDetectedObject
struct UARTrackedObject_GetDetectedObject_Params
{
	class UARCandidateObject*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
struct UARCandidateImage_GetPhysicalWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
struct UARCandidateImage_GetPhysicalHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateImage.GetOrientation
struct UARCandidateImage_GetOrientation_Params
{
	EARCandidateImageOrientation                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateImage.GetFriendlyName
struct UARCandidateImage_GetFriendlyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
struct UARCandidateImage_GetCandidateTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
struct UARCandidateObject_SetCandidateObjectData_Params
{
	TArray<unsigned char>*                             InCandidateObject;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AugmentedReality.ARCandidateObject.SetBoundingBox
struct UARCandidateObject_SetBoundingBox_Params
{
	struct FBox*                                       InBoundingBox;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AugmentedReality.ARCandidateObject.GetFriendlyName
struct UARCandidateObject_GetFriendlyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
struct UARCandidateObject_GetCandidateObjectData_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AugmentedReality.ARCandidateObject.GetBoundingBox
struct UARCandidateObject_GetBoundingBox_Params
{
	struct FBox                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
