#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AugmentedReality_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AugmentedReality.ARBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARBlueprintLibrary"));

		return ptr;
	}

};


// Class AugmentedReality.ARTraceResultLibrary
// 0x0000 (0x0030 - 0x0030)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTraceResultLibrary"));

		return ptr;
	}

};


// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0020 (0x0058 - 0x0038)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy"));

		return ptr;
	}

};


// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x0030 (0x0088 - 0x0058)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailed;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy"));

		return ptr;
	}


	class UARSaveWorldAsyncTaskBlueprintProxy* STATIC_ARSaveWorld(class UObject** WorldContextObject);
};


// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x0048 (0x00A0 - 0x0058)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailed;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy"));

		return ptr;
	}


	class UARGetCandidateObjectAsyncTaskBlueprintProxy* STATIC_ARGetCandidateObject(class UObject** WorldContextObject, struct FVector* Location, struct FVector* Extent);
};


// Class AugmentedReality.ARLightEstimate
// 0x0000 (0x0030 - 0x0030)
class UARLightEstimate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARLightEstimate"));

		return ptr;
	}

};


// Class AugmentedReality.ARBasicLightEstimate
// 0x0018 (0x0048 - 0x0030)
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                              AmbientIntensityLumens;                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AmbientColorTemperatureKelvin;                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientColor;                                             // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARBasicLightEstimate"));

		return ptr;
	}


	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
};


// Class AugmentedReality.ARPin
// 0x00C0 (0x00F0 - 0x0030)
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PinnedComponent;                                          // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0030) (IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0070(0x0030) (IsPlainOldData)
	EARTrackingState                                   TrackingState;                                            // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x00A1(0x0027) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnARTrackingStateChanged;                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnARTransformUpdated;                                     // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARPin"));

		return ptr;
	}


	EARTrackingState GetTrackingState();
	class UARTrackedGeometry* GetTrackedGeometry();
	class USceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	struct FName GetDebugName();
	void DebugDraw(class UWorld** World, struct FLinearColor* Color, float* Scale, float* PersistForSeconds);
};


// Class AugmentedReality.ARSessionConfig
// 0x0068 (0x00A0 - 0x0038)
class UARSessionConfig : public UDataAsset
{
public:
	EARWorldAlignment                                  WorldAlignment;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARSessionType                                     SessionType;                                              // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARPlaneDetectionMode                              PlaneDetectionMode;                                       // 0x003A(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bHorizontalPlaneDetection;                                // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVerticalPlaneDetection;                                  // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutoFocus;                                         // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARLightEstimationMode                             LightEstimationMode;                                      // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARFrameSyncMode                                   FrameSyncMode;                                            // 0x003F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutomaticCameraOverlay;                            // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutomaticCameraTracking;                           // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetCameraTracking;                                     // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetTrackedObjects;                                     // 0x0043(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<class UARCandidateImage*>                   CandidateImages;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	int                                                MaxNumSimultaneousImagesTracked;                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<unsigned char>                              WorldMapData;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<class UARCandidateObject*>                  CandidateObjects;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FARVideoFormat                              DesiredVideoFormat;                                       // 0x0080(0x000C) (Edit)
	EARFaceTrackingDirection                           FaceTrackingDirection;                                    // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                       // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	TArray<unsigned char>                              SerializedARCandidateImageDatabase;                       // 0x0090(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSessionConfig"));

		return ptr;
	}


	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(TArray<unsigned char>* WorldMapData);
	void SetResetTrackedObjects(bool* bNewValue);
	void SetResetCameraTracking(bool* bNewValue);
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate* InUpdate);
	void SetFaceTrackingDirection(EARFaceTrackingDirection* InDirection);
	void SetEnableAutoFocus(bool* bNewValue);
	void SetDesiredVideoFormat(struct FARVideoFormat* NewFormat);
	void SetCandidateObjectList(TArray<class UARCandidateObject*>* InCandidateObjects);
	TArray<unsigned char> GetWorldMapData();
	EARWorldAlignment GetWorldAlignment();
	EARSessionType GetSessionType();
	EARPlaneDetectionMode GetPlaneDetectionMode();
	int GetMaxNumSimultaneousImagesTracked();
	EARLightEstimationMode GetLightEstimationMode();
	EARFrameSyncMode GetFrameSyncMode();
	EARFaceTrackingUpdate GetFaceTrackingUpdate();
	EARFaceTrackingDirection GetFaceTrackingDirection();
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	struct FARVideoFormat GetDesiredVideoFormat();
	TArray<class UARCandidateObject*> GetCandidateObjectList();
	TArray<class UARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(class UARCandidateObject** CandidateObject);
	void AddCandidateImage(class UARCandidateImage** NewCandidateImage);
};


// Class AugmentedReality.ARSharedWorldGameMode
// 0x0068 (0x04A0 - 0x0438)
class AARSharedWorldGameMode : public AgameMode
{
public:
	int                                                BufferSizePerChunk;                                       // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x64];                                      // 0x043C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSharedWorldGameMode"));

		return ptr;
	}


	void SetPreviewImageData(TArray<unsigned char>* ImageData);
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData(TArray<unsigned char>* ARWorldData);
	class AARSharedWorldGameState* GetARSharedWorldGameState();
};


// Class AugmentedReality.ARSharedWorldGameState
// 0x0038 (0x03E0 - 0x03A8)
class AARSharedWorldGameState : public AGameState
{
public:
	TArray<unsigned char>                              PreviewImageData;                                         // 0x03A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<unsigned char>                              ARWorldData;                                              // 0x03B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PreviewImageBytesTotal;                                   // 0x03C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldBytesTotal;                                        // 0x03CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreviewImageBytesDelivered;                               // 0x03D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldBytesDelivered;                                    // 0x03D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSharedWorldGameState"));

		return ptr;
	}


	void K2_OnARWorldMapIsReady();
};


// Class AugmentedReality.ARSharedWorldPlayerController
// 0x0008 (0x0698 - 0x0690)
class AARSharedWorldPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0690(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSharedWorldPlayerController"));

		return ptr;
	}


	bool WasInputKeyJustReleased(struct FKey* Key);
	bool WasInputKeyJustPressed(struct FKey* Key);
	void ToggleSpeaking(bool* bInSpeaking);
	void SwitchLevel(struct FString* URL);
	void StopHapticEffect(EControllerHand* Hand);
	void StartFire(unsigned char* FireModeNum);
	void SetVirtualJoystickVisibility(bool* bVisible);
	void SetViewTargetWithBlend(class AActor** NewViewTarget, float* BlendTime, TEnumAsByte<EViewTargetBlendFunction>* BlendFunc, float* BlendExp, bool* bLockOutgoing);
	void SetName(struct FString* S);
	void SetMouseLocation(int* X, int* Y);
	void SetMouseCursorWidget(TEnumAsByte<EMouseCursor>* Cursor, class UUserWidget** CursorWidget);
	void SetHapticsByValue(float* Frequency, float* Amplitude, EControllerHand* Hand);
	void SetDisableHaptics(bool* bNewDisabled);
	void SetControllerLightColor(struct FColor* Color);
	void SetCinematicMode(bool* bInCinematicMode, bool* bHidePlayer, bool* bAffectsHUD, bool* bAffectsMovement, bool* bAffectsTurning);
	void SetAudioListenerOverride(class USceneComponent** AttachToComponent, struct FVector* Location, struct FRotator* Rotation);
	void SetAudioListenerAttenuationOverride(class USceneComponent** AttachToComponent, struct FVector* AttenuationLocationOVerride);
	void ServerViewSelf(struct FViewTargetTransitionParams* TransitionParams);
	void ServerViewPrevPlayer();
	void ServerViewNextPlayer();
	void ServerVerifyViewTarget();
	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>* LevelVisibilities);
	void ServerUpdateLevelVisibility(struct FName* PackageName, bool* bIsVisible);
	void ServerUpdateCamera(struct FVector_NetQuantize* CamLoc, int* CamPitchAndYaw);
	void ServerUnmutePlayer(struct FUniqueNetIdRepl* playerID);
	void ServerToggleAILogging();
	void ServerShortTimeout();
	void ServerSetSpectatorWaiting(bool* bWaiting);
	void ServerSetSpectatorLocation(struct FVector* NewLoc, struct FRotator* NewRot);
	void ServerRestartPlayer();
	void ServerPause();
	void ServerNotifyLoadedWorld(struct FName* WorldPackageName);
	void ServerMutePlayer(struct FUniqueNetIdRepl* playerID);
	void ServerCheckClientPossessionReliable();
	void ServerCheckClientPossession();
	void ServerChangeName(struct FString* S);
	void ServerCamera(struct FName* NewMode);
	void ServerAcknowledgePossession(class APawn** P);
	void SendToConsole(struct FString* Command);
	void RestartLevel();
	void ResetControllerLightColor();
	bool ProjectWorldLocationToScreen(struct FVector* WorldLocation, bool* bPlayerViewportRelative, struct FVector2D* ScreenLocation);
	void PlayHapticEffect(class UHapticFeedbackEffect_Base** HapticEffect, EControllerHand* Hand, float* Scale, bool* bLoop);
	void PlayDynamicForceFeedback(float* Intensity, float* Duration, bool* bAffectsLeftLarge, bool* bAffectsLeftSmall, bool* bAffectsRightLarge, bool* bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction>* action, struct FLatentActionInfo* LatentInfo);
	void Pause();
	void OnServerStartedVisualLogger(bool* bIsLogging);
	void LocalTravel(struct FString* URL);
	void K2_ClientPlayForceFeedback(class UForceFeedbackEffect** ForceFeedbackEffect, struct FName* Tag, bool* bLooping, bool* bIgnoreTimeDilation, bool* bPlayWhilePaused);
	bool IsInputKeyDown(struct FKey* Key);
	void GetViewportSize(int* SizeX, int* SizeY);
	class ASpectatorPawn* GetSpectatorPawn();
	bool GetMousePosition(float* LocationX, float* LocationY);
	struct FVector GetInputVectorKeyState(struct FKey* Key);
	void GetInputTouchState(TEnumAsByte<ETouchIndex>* FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	void GetInputMouseDelta(float* DeltaX, float* DeltaY);
	void GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration);
	float GetInputKeyTimeDown(struct FKey* Key);
	void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick>* WhichStick, float* StickX, float* StickY);
	float GetInputAnalogKeyState(struct FKey* Key);
	class AHUD* GetHUD();
	bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex>* FingerIndex, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex>* FingerIndex, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex>* FingerIndex, TEnumAsByte<ECollisionChannel>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult);
	struct FVector GetFocalLocation();
	void FOV(float* NewFOV);
	void EnableCheats();
	bool DeprojectScreenPositionToWorld(float* ScreenX, float* ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection);
	bool DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection);
	void ConsoleKey(struct FKey* Key);
	void ClientWasKicked(uint32_t* KickReason, uint32_t* ErrorCode, struct FString* AdditionalInfo);
	void ClientVoiceHandshakeComplete();
	void ClientUpdateMultipleLevelsStreamingStatus(TArray<struct FUpdateLevelStreamingLevelStatus>* LevelStatuses);
	void ClientUpdateLevelStreamingStatus(struct FName* PackageName, bool* bNewShouldBeLoaded, bool* bNewShouldBeVisible, bool* bNewShouldBlockOnLoad, int* LODIndex);
	void ClientUnmutePlayer(struct FUniqueNetIdRepl* playerID);
	void ClientTravelInternal(struct FString* URL, TEnumAsByte<ETravelType>* TravelType, bool* bSeamless, struct FGuid* MapPackageGuid);
	void ClientTravel(struct FString* URL, TEnumAsByte<ETravelType>* TravelType, bool* bSeamless, struct FGuid* MapPackageGuid);
	void ClientTeamMessage(class APlayerState** SenderPlayerState, struct FString* S, struct FName* Type, float* MsgLifeTime);
	void ClientStopForceFeedback(class UForceFeedbackEffect** ForceFeedbackEffect, struct FName* Tag);
	void ClientStopCameraShake(class UClass** Shake, bool* bImmediately);
	void ClientStopCameraAnim(class UCameraAnim** AnimToStop);
	void ClientStartOnlineSession();
	void ClientSpawnCameraLensEffect(class UClass** LensEffectEmitterClass);
	void ClientSetViewTarget(class AActor** A, struct FViewTargetTransitionParams* TransitionParams);
	void ClientSetSpectatorWaiting(bool* bWaiting);
	void ClientSetHUD(class UClass** NewHUDClass);
	void ClientSetForceMipLevelsToBeResident(class UMaterialInterface** Material, float* ForceDuration, int* CinematicTextureGroups);
	void ClientSetCinematicMode(bool* bInCinematicMode, bool* bAffectsMovement, bool* bAffectsTurning, bool* bAffectsHUD);
	void ClientSetCameraMode(struct FName* NewCamMode);
	void ClientSetCameraFade(bool* bEnableFading, struct FColor* FadeColor, struct FVector2D* FadeAlpha, float* FadeTime, bool* bFadeAudio);
	void ClientSetBlockOnAsyncLoading();
	void ClientReturnToMainMenuWithTextReason(struct FText* ReturnReason);
	void ClientReturnToMainMenu(struct FString* ReturnReason);
	void ClientRetryClientRestart(class APawn** NewPawn);
	void ClientRestart(class APawn** NewPawn);
	void ClientReset();
	void ClientRepObjRef(class UObject** Object);
	void ClientReceiveLocalizedMessage(class UClass** Message, int* switch, class APlayerState** RelatedPlayerState, class APlayerState** RelatedPlayerState02, class UObject** OptionalObject);
	void ClientPrestreamTextures(class AActor** ForcedActor, float* ForceDuration, bool* bEnableStreaming, int* CinematicTextureGroups);
	void ClientPrepareMapChange(struct FName* LevelName, bool* bFirst, bool* bLast);
	void ClientPlaySoundAtLocation(class USoundBase** Sound, struct FVector* Location, float* VolumeMultiplier, float* PitchMultiplier);
	void ClientPlaySound(class USoundBase** Sound, float* VolumeMultiplier, float* PitchMultiplier);
	void ClientPlayForceFeedback_Internal(class UForceFeedbackEffect** ForceFeedbackEffect, struct FForceFeedbackParameters* Params);
	void ClientPlayCameraShake(class UClass** Shake, float* Scale, TEnumAsByte<ECameraAnimPlaySpace>* PlaySpace, struct FRotator* UserPlaySpaceRot);
	void ClientPlayCameraAnim(class UCameraAnim** AnimToPlay, float* Scale, float* Rate, float* BlendInTime, float* BlendOutTime, bool* bLoop, bool* bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace>* space, struct FRotator* CustomPlaySpace);
	void ClientMutePlayer(struct FUniqueNetIdRepl* playerID);
	void ClientMessage(struct FString* S, struct FName* Type, float* MsgLifeTime);
	void ClientIgnoreMoveInput(bool* bIgnore);
	void ClientIgnoreLookInput(bool* bIgnore);
	void ClientGotoState(struct FName* newState);
	void ClientGameEnded(class AActor** EndGameFocus, bool* bIsWinner);
	void ClientForceGarbageCollection();
	void ClientFlushLevelStreaming();
	void ClientEndOnlineSession();
	void ClientEnableNetworkVoice(bool* bEnable);
	void ClientCommitMapChange();
	void ClientClearCameraLensEffects();
	void ClientCapBandwidth(int* Cap);
	void ClientCancelPendingMapChange();
	void ClientAddTextureStreamingLoc(struct FVector* InLoc, float* Duration, bool* bOverrideLocation);
	void ClearAudioListenerOverride();
	void ClearAudioListenerAttenuationOverride();
	bool CanRestartPlayer();
	void Camera(struct FName* NewMode);
	void AddYawInput(float* Val);
	void AddRollInput(float* Val);
	void AddPitchInput(float* Val);
	void ActivateTouchInterface(class UTouchInterface** NewTouchInterface);
};


// Class AugmentedReality.ARSkyLight
// 0x0010 (0x0360 - 0x0350)
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                             // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARSkyLight"));

		return ptr;
	}


	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe** InCaptureProbe);
};


// Class AugmentedReality.ARTexture
// 0x0020 (0x00E0 - 0x00C0)
class UARTexture : public UTexture
{
public:
	EARTextureType                                     TextureType;                                              // 0x00C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x00C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTexture"));

		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraImage
// 0x0000 (0x00E0 - 0x00E0)
class UARTextureCameraImage : public UARTexture
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTextureCameraImage"));

		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraDepth
// 0x0008 (0x00E8 - 0x00E0)
class UARTextureCameraDepth : public UARTexture
{
public:
	EARDepthQuality                                    DepthQuality;                                             // 0x00E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EARDepthAccuracy                                   DepthAccuracy;                                            // 0x00E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTemporallySmoothed;                                    // 0x00E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00E3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTextureCameraDepth"));

		return ptr;
	}

};


// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x0020 (0x0138 - 0x0118)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	EARTextureType                                     TextureType;                                              // 0x0118(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x011C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.AREnvironmentCaptureProbeTexture"));

		return ptr;
	}

};


// Class AugmentedReality.ARTraceResultDummy
// 0x0000 (0x0030 - 0x0030)
class UARTraceResultDummy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTraceResultDummy"));

		return ptr;
	}

};


// Class AugmentedReality.ARTrackedGeometry
// 0x00A0 (0x00D0 - 0x0030)
class UARTrackedGeometry : public UObject
{
public:
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0030(0x0030) (IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0060(0x0030) (IsPlainOldData)
	EARTrackingState                                   TrackingState;                                            // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0091(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackedGeometry"));

		return ptr;
	}


	bool IsTracked();
	EARTrackingState GetTrackingState();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int GetLastUpdateFrameNumber();
	struct FName GetDebugName();
};


// Class AugmentedReality.ARPlaneGeometry
// 0x0030 (0x0100 - 0x00D0)
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	struct FVector                                     Center;                                                   // 0x00D0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x00DC(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET
	class UARPlaneGeometry*                            SubsumedBy;                                               // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARPlaneGeometry"));

		return ptr;
	}


	class UARPlaneGeometry* GetSubsumedBy();
	struct FVector GetExtent();
	struct FVector GetCenter();
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};


// Class AugmentedReality.ARTrackedPoint
// 0x0000 (0x00D0 - 0x00D0)
class UARTrackedPoint : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackedPoint"));

		return ptr;
	}


	bool IsTracked();
	EARTrackingState GetTrackingState();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int GetLastUpdateFrameNumber();
	struct FName GetDebugName();
};


// Class AugmentedReality.ARTrackedImage
// 0x0020 (0x00F0 - 0x00D0)
class UARTrackedImage : public UARTrackedGeometry
{
public:
	bool                                               bIsTracked;                                               // 0x00D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	class UARCandidateImage*                           DetectedImage;                                            // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EstimatedSize;                                            // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackedImage"));

		return ptr;
	}


	struct FVector2D GetEstimateSize();
	class UARCandidateImage* GetDetectedImage();
};


// Class AugmentedReality.ARFaceGeometry
// 0x00F0 (0x01C0 - 0x00D0)
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	struct FVector                                     LookAtTarget;                                             // 0x00D0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTracked;                                               // 0x00DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	TMap<EARFaceBlendShape, float>                     BlendShapes;                                              // 0x00E0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0130(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARFaceGeometry"));

		return ptr;
	}


	struct FTransform GetWorldSpaceEyeTransform(EAREye* Eye);
	struct FTransform GetLocalSpaceEyeTransform(EAREye* Eye);
	float GetBlendShapeValue(EARFaceBlendShape* BlendShape);
	TMap<EARFaceBlendShape, float> GetBlendShapes();
};


// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x0020 (0x00F0 - 0x00D0)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.AREnvironmentCaptureProbe"));

		return ptr;
	}


	struct FVector GetExtent();
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};


// Class AugmentedReality.ARTrackedObject
// 0x0010 (0x00E0 - 0x00D0)
class UARTrackedObject : public UARTrackedGeometry
{
public:
	class UARCandidateObject*                          DetectedObject;                                           // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTrackedObject"));

		return ptr;
	}


	class UARCandidateObject* GetDetectedObject();
};


// Class AugmentedReality.ARTypesDummyClass
// 0x0000 (0x0030 - 0x0030)
class UARTypesDummyClass : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARTypesDummyClass"));

		return ptr;
	}

};


// Class AugmentedReality.ARCandidateImage
// 0x0028 (0x0060 - 0x0038)
class UARCandidateImage : public UDataAsset
{
public:
	class UTexture2D*                                  CandidateTexture;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     FriendlyName;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	float                                              Width;                                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EARCandidateImageOrientation                       Orientation;                                              // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARCandidateImage"));

		return ptr;
	}


	float GetPhysicalWidth();
	float GetPhysicalHeight();
	EARCandidateImageOrientation GetOrientation();
	struct FString GetFriendlyName();
	class UTexture2D* GetCandidateTexture();
};


// Class AugmentedReality.ARCandidateObject
// 0x0040 (0x0078 - 0x0038)
class UARCandidateObject : public UDataAsset
{
public:
	TArray<unsigned char>                              CandidateObjectData;                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FString                                     FriendlyName;                                             // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FBox                                        BoundingBox;                                              // 0x0058(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class AugmentedReality.ARCandidateObject"));

		return ptr;
	}


	void SetCandidateObjectData(TArray<unsigned char>* InCandidateObject);
	void SetBoundingBox(struct FBox* InBoundingBox);
	struct FString GetFriendlyName();
	TArray<unsigned char> GetCandidateObjectData();
	struct FBox GetBoundingBox();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
