#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheOni_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TheOni.AbsorbBloodOrbsInteraction
// 0x0040 (0x04F0 - 0x04B0)
class UAbsorbBloodOrbsInteraction : public UInteractionDefinition
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x04B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.AbsorbBloodOrbsInteraction"));

		return ptr;
	}


	bool ShouldStartUpdateMontageDuringEnter(class ADBDPlayer** Character);
	void SetSecondaryActionInputType(EInputInteractionType* inputType);
	void SetSecondaryActionButtonType(EButtonType* ButtonType);
	void SetCancelButtonType(EButtonType* ButtonType);
	void OnUpdateMontageStart(class ADBDPlayer** Player);
	void OnInterruptorUpdateStart(class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptor, class ADBDPlayer** interruptee);
	void OnInteractionUpdateTick(class ADBDPlayer** Player, float* DeltaTime);
	void OnInteractionUpdateStart(class ADBDPlayer** Player);
	void OnInteractionUpdateMontageReachedMiddle(class ADBDPlayer** Player);
	void OnInteractionUpdateEnd(class ADBDPlayer** Player);
	void OnInteractionInterruptStarted(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer);
	void OnInteractionInterruptStart(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer);
	void OnInteractionInterruptEnd(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer);
	void OnInteractionInit(class ADBDPlayer** Player);
	void OnInteractionFinished(class ADBDPlayer** Player, bool* hasInteractionStarted);
	void OnInteractionExitTick(class ADBDPlayer** Player, float* DeltaTime);
	void OnInteractionExitStart(class ADBDPlayer** Player);
	void OnInteractionExitEnd(class ADBDPlayer** Player);
	void OnInteractionEnterTick(class ADBDPlayer** Player, float* DeltaTime);
	void OnInteractionEnterStart(class ADBDPlayer** Player, float* actualSnapTime);
	void OnInteractionEnterFailed(class ADBDPlayer** Player);
	void OnInteractionEnterEnd(class ADBDPlayer** Player);
	void OnInteractionCancelled(class ADBDPlayer** Player);
	void OnInteractionAnimNotifyEvent(struct FName* NotifyId, class ADBDPlayer** Player);
	bool IsSupportedCharacterType(class ADBDPlayer** Player);
	bool IsInterruptionPossible(class ADBDPlayer** interruptor, class ADBDPlayer** interruptee, class UInterruptionDefinition** interruption);
	bool IsInteractionUsingOffering(class ADBDPlayer** Player);
	bool IsInteractionPossibleClient(class ADBDPlayer** Player, EInputInteractionType* InteractionType);
	bool IsInteractionPossibleBP(class ADBDPlayer** Player, EInputInteractionType* InteractionType);
	bool IsInteractionDone(class ADBDPlayer** Player, EInputInteractionType* InteractionType);
	bool IsInputPressed(class ADBDPlayer** Player);
	bool IsCharacterFacingInteractorDirection(class ADBDPlayer** Player);
	bool IsCancelable(class ADBDPlayer** Player);
	struct FAnimationMontageDescriptor GetUpdateMontage(class ADBDPlayer** Player);
	bool GetUpdateHighlightOpacityUsingCharge();
	float GetUpdateAnimationPlayRate(class ADBDPlayer** Player);
	struct FMontagePlaybackDefinition GetUpdateAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower);
	float GetSnapTimeAtStart(class ADBDPlayer** Player);
	float GetSnapTime(class ADBDPlayer** Player);
	struct FName GetSnapSocketName(class ADBDPlayer** Player);
	struct FVector GetSnapPointPositionAtStart(class ADBDPlayer** Player);
	struct FVector GetSnapPointPosition(class ADBDPlayer** Player);
	float GetSnapDistanceAtStart(class ADBDPlayer** Player);
	float GetSnapDistance(class ADBDPlayer** Player);
	EInputInteractionType GetSecondaryActionInputType();
	EButtonType GetSecondaryActionButtonType();
	struct FRotator GetRotationToSnapPointAtStart(class ADBDPlayer** Player);
	struct FRotator GetRotationToSnapPoint(class ADBDPlayer** Player);
	EPowerProgressBar GetPowerProgressBar();
	class ADBDPlayer* GetPlayerDependancy(class ADBDPlayer** interactingPlayer);
	TArray<class UInterruptionDefinition*> GetInterruptionDefinitions();
	class UInteractor* GetInteractor();
	float GetInteractionTimeMultiplier(class ADBDPlayer** Character);
	float GetInteractionTime(class ADBDPlayer** Character);
	struct FString GetInteractionText(class ADBDPlayer** Player);
	float GetInteractionExitTime(class ADBDPlayer** Character);
	struct FText GetInteractionDescriptionText();
	class AInteractable* GetInteractable();
	struct FVector GetFocalPointPosition(class ADBDPlayer** Player);
	struct FAnimationMontageDescriptor GetExitMontage(class ADBDPlayer** Player);
	struct FMontagePlaybackDefinition GetExitAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower);
	struct FAnimationMontageDescriptor GetEnterMontage(class ADBDPlayer** Player);
	struct FMontagePlaybackDefinition GetEnterAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower);
	float GetChargePercent();
	EButtonType GetCancelButtonType();
	bool GetAllowNavigation(class ADBDPlayer** Player);
	struct FVector GetActualSnapPointPositionAtStart(class ADBDPlayer** Player);
	struct FVector GetActualSnapPointPosition(class ADBDPlayer** Player);
	TArray<class AActor*> GetActorsToIgnoreOverlap();
	float GetActorHeightDelta(class ADBDPlayer** Player);
	bool DoesPlayerHaveClearPath(class ADBDPlayer** Player);
	void CompleteCharge(class ADBDPlayer** Character);
	bool CanOverrideInteraction(class UInteractionDefinition** Interaction);
	float CalculateSnapTimeForConstantSpeed(class ADBDPlayer** Player, float* Speed);
	float CalculateSnapTimeForConstantMaxNormalMovementSpeed(class ADBDPlayer** Player, float* speedBoost);
	void AttachToZone(class UPrimitiveComponent** zone);
	void AttachToInteractor(class UInteractor** Interactor);
	bool AtlantaItemUseToggleState();
	struct FName AtlantaGetPowerButtonImageID();
	void AddMutuallyExclusiveInteraction(class UInteractionDefinition** Interaction);
};


// Class TheOni.BloodOrb
// 0x0060 (0x03A0 - 0x0340)
class ABloodOrb : public AActor
{
public:
	struct FFloatInterval                              _randomMoveDelayInterval;                                 // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             _absorbReference;                                         // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDBDOutlineComponent*                        _outlineComponent;                                        // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              _despawnDelay;                                            // 0x0358(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TWeakObjectPtr<class ADBDPlayer>                   _droppingPlayer;                                          // 0x0360(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	EBloodOrbState                                     _state;                                                   // 0x0368(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class UBloodOrbFadeComponent*                      _fadeComponent;                                           // 0x0370(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0378(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrb"));

		return ptr;
	}


	void UpdateAttracted_Cosmetic(struct FVector* destination, class ADBDPlayer** absorber, float* DeltaTime);
	void UpdateAbsorbed_Cosmetic(struct FVector* destination, class ADBDPlayer** absorber, float* DeltaTime);
	void OnRep_State(EBloodOrbState* oldState);
	void OnIsAttractedChangedCosmetic(bool* isAttracted);
	void OnDestroyedCosmetic();
	void OnAbsorbedCosmetic();
	class ADBDPlayer* GetDroppingPlayer();
	void Authority_OnDropped(class ADBDPlayer** droppedBy, float* ImpulseFactor);
	void Authority_OnDropFinished();
	void Authority_DestroyBloodOrb();
	void Authority_Despawn();
};


// Class TheOni.BloodOrbAbsorberComponent
// 0x0058 (0x0158 - 0x0100)
class UBloodOrbAbsorberComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    Authority_OnBloodOrbAbsorbed;                             // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIsAbsorbingChanged;                                     // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     AbsorbLocationOffset;                                     // 0x0120(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x012C(0x001C) MISSED OFFSET
	TArray<class UBloodOrbDropperComponent*>           _camperBloodOrbDropperComponents;                         // 0x0148(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrbAbsorberComponent"));

		return ptr;
	}


	void SetInAbsorbMode(bool* inAbsorptionMode);
	bool IsInAbsorbMode();
};


// Class TheOni.BloodOrbCollection
// 0x0048 (0x0148 - 0x0100)
class UBloodOrbCollection : public UActorComponent
{
public:
	TArray<class ABloodOrb*>                           _bloodOrbs;                                               // 0x0100(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0110(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrbCollection"));

		return ptr;
	}

};


// Class TheOni.BloodOrbConfiguratorComponent
// 0x0058 (0x0158 - 0x0100)
class UBloodOrbConfiguratorComponent : public UActorComponent
{
public:
	class UClass*                                      _bloodOrbClass;                                           // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGameEventBloodOrbDropParams>        _bloodOrbDropGameEvents;                                  // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              _fadeDuration;                                            // 0x0118(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _initialFadeOutDelay;                                     // 0x011C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                _bloodOrbAuraColor;                                       // 0x0120(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _bloodOrbVisibilityRangeInterpolationSpeed;               // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0134(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrbConfiguratorComponent"));

		return ptr;
	}


	void UpdateSurvivorBloodOrbVisibilityRange(class UBloodOrbVisibilityComponent** BloodOrbVisibilityComponent, class ADBDPlayer** Killer);
	void UpdateKillerBloodOrbVisiblityRanges(class UBloodOrbVisibilityComponent** BloodOrbVisibilityComponent, class ADBDPlayer** Killer);
	void UpdateBloodOrbAttractSpeed(class UBloodOrbAbsorberComponent** BloodOrbAbsorberComponent, class ADBDPlayer** Killer);
	void OnLevelReadyToPlay();
	void Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(class ADBDPlayer** Killer);
};


// Class TheOni.BloodOrbDropperComponent
// 0x0078 (0x0178 - 0x0100)
class UBloodOrbDropperComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0100(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrbDropperComponent"));

		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetIsReplicated(bool* ShouldReplicate);
	void SetComponentTickInterval(float* TickInterval);
	void SetComponentTickEnabled(bool* bEnabled);
	void SetAutoActivate(bool* bNewAutoActivate);
	void SetActive(bool* bNewActive, bool* bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject** Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(struct FName* Tag);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void Activate(bool* bReset);
};


// Class TheOni.BloodOrbFadeComponent
// 0x0008 (0x0128 - 0x0120)
class UBloodOrbFadeComponent : public UFadeComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrbFadeComponent"));

		return ptr;
	}


	float GetFadePercent();
};


// Class TheOni.BloodOrbOverlapComponent
// 0x0040 (0x0140 - 0x0100)
class UBloodOrbOverlapComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	int                                                _currentOverlappingOrbs;                                  // 0x0108(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x010C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrbOverlapComponent"));

		return ptr;
	}


	void OnRep_CurrentOverlappingOrbs(int* previousOverlappingOrbs);
	void Authority_OnDestroyedBloodOrb(class AActor** DestroyedActor);
	void Authority_OnBloodOrbVisibilityModeChanged(EBloodOrbVisibilityMode* visibilityMode);
	void Authority_OnBloodOrbEndOverlap(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void Authority_OnBloodOrbBeginOverlap(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
};


// Class TheOni.BloodOrbOverlapRevealToKiller
// 0x0030 (0x02F0 - 0x02C0)
class UBloodOrbOverlapRevealToKiller : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02C0(0x0028) MISSED OFFSET
	class UTimerObject*                                _revealTimer;                                             // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrbOverlapRevealToKiller"));

		return ptr;
	}


	class UTimerObject* GetRevealTimer();
};


// Class TheOni.BloodOrbStateMonitorComponent
// 0x0070 (0x0170 - 0x0100)
class UBloodOrbStateMonitorComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBloodOrbAbsorbedCosmetic;                               // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0110(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrbStateMonitorComponent"));

		return ptr;
	}


	void OnBloodOrbStateChanged(EBloodOrbState* oldState, EBloodOrbState* newState, class ABloodOrb** BloodOrb);
	void OnBloodOrbSpawned(class ABloodOrb** BloodOrb);
	void OnBloodOrbDestroyed(class ABloodOrb** BloodOrb);
};


// Class TheOni.BloodOrbUtilities
// 0x0000 (0x0030 - 0x0030)
class UBloodOrbUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrbUtilities"));

		return ptr;
	}

};


// Class TheOni.BloodOrbVisibilityComponent
// 0x0038 (0x0138 - 0x0100)
class UBloodOrbVisibilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0100(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.BloodOrbVisibilityComponent"));

		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetIsReplicated(bool* ShouldReplicate);
	void SetComponentTickInterval(float* TickInterval);
	void SetComponentTickEnabled(bool* bEnabled);
	void SetAutoActivate(bool* bNewAutoActivate);
	void SetActive(bool* bNewActive, bool* bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject** Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(struct FName* Tag);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void Activate(bool* bReset);
};


// Class TheOni.DemonModeComponent
// 0x00E8 (0x01E8 - 0x0100)
class UDemonModeComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnDemonModeReady;                                         // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDemonModeStarted;                                       // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDemonModeEnded;                                         // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChargeGainedAfterAttackCosmetic;                        // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChargeGainedAfterLockerGrabCosmetic;                    // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UPowerChargeComponent*                       _powerChargeComponent;                                    // 0x0150(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPowerToggleComponent*                       _powerToggleComponent;                                    // 0x0158(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInteractionStarterComponent*                _authority_demonModeCooldownStarterComponent;             // 0x0160(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UInteractionDefinition*                      _demonModeCooldownInteraction;                            // 0x0168(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0170(0x0034) MISSED OFFSET
	EDemonModeState                                    _demonModeState;                                          // 0x01A4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x43];                                      // 0x01A5(0x0043) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.DemonModeComponent"));

		return ptr;
	}


	bool ShouldLoseDemonModeOnStunByPallet();
	void OnPowerChargeFull();
	void OnPowerChargeEmpty();
	void OnIsPowerChanged(bool* isInPower);
	bool IsInDemonMode();
	EDemonModeState GetDemonModeState();
	float GetCurrentCharge();
	float GetChargePercent();
	void DBD_DemonModeForever(bool* forever);
	bool CanStartDemonMode();
	void Authority_SetDemonModeCooldownInteraction(class UInteractionDefinition** Interaction);
	void Authority_OnLevelReadyToPlay();
	void Authority_OnChargeChanged(float* currentChargePercent);
	void Authority_AddCharge(float* ChargeAmount);
};


// Class TheOni.DemonModeCooldownInteraction
// 0x0020 (0x04D0 - 0x04B0)
class UDemonModeCooldownInteraction : public UInteractionDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.DemonModeCooldownInteraction"));

		return ptr;
	}


	bool ShouldStartUpdateMontageDuringEnter(class ADBDPlayer** Character);
	void SetSecondaryActionInputType(EInputInteractionType* inputType);
	void SetSecondaryActionButtonType(EButtonType* ButtonType);
	void SetCancelButtonType(EButtonType* ButtonType);
	void OnUpdateMontageStart(class ADBDPlayer** Player);
	void OnInterruptorUpdateStart(class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptor, class ADBDPlayer** interruptee);
	void OnInteractionUpdateTick(class ADBDPlayer** Player, float* DeltaTime);
	void OnInteractionUpdateStart(class ADBDPlayer** Player);
	void OnInteractionUpdateMontageReachedMiddle(class ADBDPlayer** Player);
	void OnInteractionUpdateEnd(class ADBDPlayer** Player);
	void OnInteractionInterruptStarted(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer);
	void OnInteractionInterruptStart(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer);
	void OnInteractionInterruptEnd(class ADBDPlayer** Player, class UInterruptionDefinition** currentInterruption, class ADBDPlayer** interruptingPlayer);
	void OnInteractionInit(class ADBDPlayer** Player);
	void OnInteractionFinished(class ADBDPlayer** Player, bool* hasInteractionStarted);
	void OnInteractionExitTick(class ADBDPlayer** Player, float* DeltaTime);
	void OnInteractionExitStart(class ADBDPlayer** Player);
	void OnInteractionExitEnd(class ADBDPlayer** Player);
	void OnInteractionEnterTick(class ADBDPlayer** Player, float* DeltaTime);
	void OnInteractionEnterStart(class ADBDPlayer** Player, float* actualSnapTime);
	void OnInteractionEnterFailed(class ADBDPlayer** Player);
	void OnInteractionEnterEnd(class ADBDPlayer** Player);
	void OnInteractionCancelled(class ADBDPlayer** Player);
	void OnInteractionAnimNotifyEvent(struct FName* NotifyId, class ADBDPlayer** Player);
	bool IsSupportedCharacterType(class ADBDPlayer** Player);
	bool IsInterruptionPossible(class ADBDPlayer** interruptor, class ADBDPlayer** interruptee, class UInterruptionDefinition** interruption);
	bool IsInteractionUsingOffering(class ADBDPlayer** Player);
	bool IsInteractionPossibleClient(class ADBDPlayer** Player, EInputInteractionType* InteractionType);
	bool IsInteractionPossibleBP(class ADBDPlayer** Player, EInputInteractionType* InteractionType);
	bool IsInteractionDone(class ADBDPlayer** Player, EInputInteractionType* InteractionType);
	bool IsInputPressed(class ADBDPlayer** Player);
	bool IsCharacterFacingInteractorDirection(class ADBDPlayer** Player);
	bool IsCancelable(class ADBDPlayer** Player);
	struct FAnimationMontageDescriptor GetUpdateMontage(class ADBDPlayer** Player);
	bool GetUpdateHighlightOpacityUsingCharge();
	float GetUpdateAnimationPlayRate(class ADBDPlayer** Player);
	struct FMontagePlaybackDefinition GetUpdateAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower);
	float GetSnapTimeAtStart(class ADBDPlayer** Player);
	float GetSnapTime(class ADBDPlayer** Player);
	struct FName GetSnapSocketName(class ADBDPlayer** Player);
	struct FVector GetSnapPointPositionAtStart(class ADBDPlayer** Player);
	struct FVector GetSnapPointPosition(class ADBDPlayer** Player);
	float GetSnapDistanceAtStart(class ADBDPlayer** Player);
	float GetSnapDistance(class ADBDPlayer** Player);
	EInputInteractionType GetSecondaryActionInputType();
	EButtonType GetSecondaryActionButtonType();
	struct FRotator GetRotationToSnapPointAtStart(class ADBDPlayer** Player);
	struct FRotator GetRotationToSnapPoint(class ADBDPlayer** Player);
	EPowerProgressBar GetPowerProgressBar();
	class ADBDPlayer* GetPlayerDependancy(class ADBDPlayer** interactingPlayer);
	TArray<class UInterruptionDefinition*> GetInterruptionDefinitions();
	class UInteractor* GetInteractor();
	float GetInteractionTimeMultiplier(class ADBDPlayer** Character);
	float GetInteractionTime(class ADBDPlayer** Character);
	struct FString GetInteractionText(class ADBDPlayer** Player);
	float GetInteractionExitTime(class ADBDPlayer** Character);
	struct FText GetInteractionDescriptionText();
	class AInteractable* GetInteractable();
	struct FVector GetFocalPointPosition(class ADBDPlayer** Player);
	struct FAnimationMontageDescriptor GetExitMontage(class ADBDPlayer** Player);
	struct FMontagePlaybackDefinition GetExitAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower);
	struct FAnimationMontageDescriptor GetEnterMontage(class ADBDPlayer** Player);
	struct FMontagePlaybackDefinition GetEnterAnimationPlayBackDefinition(class ADBDPlayer** Player, bool* Follower);
	float GetChargePercent();
	EButtonType GetCancelButtonType();
	bool GetAllowNavigation(class ADBDPlayer** Player);
	struct FVector GetActualSnapPointPositionAtStart(class ADBDPlayer** Player);
	struct FVector GetActualSnapPointPosition(class ADBDPlayer** Player);
	TArray<class AActor*> GetActorsToIgnoreOverlap();
	float GetActorHeightDelta(class ADBDPlayer** Player);
	bool DoesPlayerHaveClearPath(class ADBDPlayer** Player);
	void CompleteCharge(class ADBDPlayer** Character);
	bool CanOverrideInteraction(class UInteractionDefinition** Interaction);
	float CalculateSnapTimeForConstantSpeed(class ADBDPlayer** Player, float* Speed);
	float CalculateSnapTimeForConstantMaxNormalMovementSpeed(class ADBDPlayer** Player, float* speedBoost);
	void AttachToZone(class UPrimitiveComponent** zone);
	void AttachToInteractor(class UInteractor** Interactor);
	bool AtlantaItemUseToggleState();
	struct FName AtlantaGetPowerButtonImageID();
	void AddMutuallyExclusiveInteraction(class UInteractionDefinition** Interaction);
};


// Class TheOni.DemonModeMenuComponent
// 0x0020 (0x0120 - 0x0100)
class UDemonModeMenuComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.DemonModeMenuComponent"));

		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetIsReplicated(bool* ShouldReplicate);
	void SetComponentTickInterval(float* TickInterval);
	void SetComponentTickEnabled(bool* bEnabled);
	void SetAutoActivate(bool* bNewAutoActivate);
	void SetActive(bool* bNewActive, bool* bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject** Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(struct FName* Tag);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void Activate(bool* bReset);
};


// Class TheOni.IsPlayerAbsorbingBloodOrbsCondition
// 0x0000 (0x0170 - 0x0170)
class UIsPlayerAbsorbingBloodOrbsCondition : public UIsPlayerPerformingInteraction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.IsPlayerAbsorbingBloodOrbsCondition"));

		return ptr;
	}


	void UpdateIsTrue();
	void SetInteractionSemantics(struct FGameplayTagContainer* interactionSemantics);
};


// Class TheOni.OniAttackPicker
// 0x0010 (0x0110 - 0x0100)
class UOniAttackPicker : public USlasherAttackPickerComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.OniAttackPicker"));

		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetIsReplicated(bool* ShouldReplicate);
	void SetComponentTickInterval(float* TickInterval);
	void SetComponentTickEnabled(bool* bEnabled);
	void SetAutoActivate(bool* bNewAutoActivate);
	void SetActive(bool* bNewActive, bool* bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject** Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(struct FName* Tag);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void Activate(bool* bReset);
};


// Class TheOni.OniCustomizationItemAnimInstance
// 0x0010 (0x0280 - 0x0270)
class UOniCustomizationItemAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0270(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.OniCustomizationItemAnimInstance"));

		return ptr;
	}


	void SetIsInDemonMode(bool* IsInDemonMode);
};


// Class TheOni.OniDashInteraction
// 0x0040 (0x0620 - 0x05E0)
class UOniDashInteraction : public UChargeableInteractionDefinition
{
public:
	class UCurveFloat*                                 _dashingSpeedCurve;                                       // 0x05E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _yawAdjustTime;                                           // 0x05E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05EC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 _cooldownSpeedCurve;                                      // 0x05F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x05F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.OniDashInteraction"));

		return ptr;
	}


	void SetPlayerOwner(class ADBDPlayer** Player);
	void OnLevelReadyToPlay();
	void OnDashEnd(class ADBDPlayer** Player);
	void OnDashBegin(class ADBDPlayer** Player);
	void OnChargeEnd(class ADBDPlayer** Player, bool* chargeCompleted);
	void OnChargeBegin(class ADBDPlayer** Player);
};


// Class TheOni.OniPounceInteraction
// 0x0020 (0x0600 - 0x05E0)
class UOniPounceInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05E0(0x0008) MISSED OFFSET
	class UOniDemonModeAttackStateComponent*           _chargedAttackState;                                      // 0x05E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDemonModeComponent*                         _demonModeComponent;                                      // 0x05F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ASlasherPlayer*                              _owningSlasher;                                           // 0x05F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.OniPounceInteraction"));

		return ptr;
	}

};


// Class TheOni.RenjirosBloodyGlove
// 0x0060 (0x0298 - 0x0238)
class URenjirosBloodyGlove : public UItemAddon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	float                                              _revealTime;                                              // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x0244(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.RenjirosBloodyGlove"));

		return ptr;
	}


	void Authority_OnBloodOrbOverlapBegin(class AActor** overlappingActor, class ABloodOrb** BloodOrb);
};


// Class TheOni.StartDemonModeInteraction
// 0x0040 (0x0620 - 0x05E0)
class UStartDemonModeInteraction : public UChargeableInteractionDefinition
{
public:
	struct FAnimationMontageDescriptor                 DemonModeActivationMontage;                               // 0x05E0(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0600(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheOni.StartDemonModeInteraction"));

		return ptr;
	}


	void SetPlayerOwner(class ADBDPlayer** Owner);
	void OnLevelReadyToPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
