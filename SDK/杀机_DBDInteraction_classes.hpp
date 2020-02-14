#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_DBDInteraction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DBDInteraction.ActivePhaseWalkInteraction
// 0x0020 (0x0600 - 0x05E0)
class UActivePhaseWalkInteraction : public UChargeableInteractionDefinition
{
public:
	class UCurveFloat*                                 _chargingSpeedCurve;                                      // 0x05E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x05E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.ActivePhaseWalkInteraction"));

		return ptr;
	}


	void ResetMovementSpeedMultipliers();
	void ResetChargeVFX(class ADBDPlayer** Player);
	void Local_SendPhaseWalkInfo(bool* startActivePhaseWalk, bool* TeleportToHusk, class ADBDPlayer** Player);
};


// Class DBDInteraction.BaseStalkModeInteraction
// 0x0010 (0x04C0 - 0x04B0)
class UBaseStalkModeInteraction : public UInteractionDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.BaseStalkModeInteraction"));

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


// Class DBDInteraction.CollectItemInteraction
// 0x0030 (0x04E0 - 0x04B0)
class UCollectItemInteraction : public UInteractionDefinition
{
public:
	struct FScriptMulticastDelegate                    OnCollectUpdateStart;                                     // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollectUpdateEnd;                                       // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.CollectItemInteraction"));

		return ptr;
	}


	class ACollectable* GetItem();
};


// Class DBDInteraction.DestroyDemogorgonPortalInteraction
// 0x0000 (0x05E0 - 0x05E0)
class UDestroyDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.DestroyDemogorgonPortalInteraction"));

		return ptr;
	}


	void Authority_OnChargeApplied(float* IndividualChargeAmount, float* TotalChargeAmount, class AActor** ChargeInstigator, bool* WasCoop, float* DeltaTime);
};


// Class DBDInteraction.GeneratorDamageInteraction
// 0x0000 (0x05E0 - 0x05E0)
class UGeneratorDamageInteraction : public UChargeableInteractionDefinition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.GeneratorDamageInteraction"));

		return ptr;
	}


	bool ShouldShowSpeedProficiencyForMultipleInteractors();
	void SetSpeedBase(float* speedBase);
	void SetChargeableComponent(class UChargeableComponent** ChargeableComponent);
	void OnSkillCheckResponseAuthorityBP(class ADBDPlayer** Player, bool* success, bool* Bonus, bool* hadInput, ESkillCheckCustomType* Type);
	void OnSkillCheckResponseAuthority(bool* success, bool* Bonus, class ADBDPlayer** Player, bool* TriggerLoudNoise, bool* hadInput, ESkillCheckCustomType* Type);
	void OnSkillCheckResponseAestheticBP(class ADBDPlayer** Player, bool* success, bool* Bonus, bool* hadInput, ESkillCheckCustomType* Type);
	void OnSkillCheckResponseAesthetic(bool* success, bool* Bonus, class ADBDPlayer** Player, bool* TriggerLoudNoise, bool* hadInput, ESkillCheckCustomType* Type);
	void OnInteractionCompletionStateChanged(class ADBDPlayer** Player, bool* complete);
	void OnChargeableChangedBP(class UChargeableComponent** oldChargeable, class UChargeableComponent** newChargeable);
	bool HasSkillCheckHappened(class ADBDPlayer** Character);
	float GetTunableValue(struct FName* TunableValueID, float* defaultValue);
	float GetSuccessProbability();
	float GetSkillCheckProbability();
	float GetSkillCheckFailureTimePenalty();
	float GetSkillCheckFailurePercentPenalty(class ADBDPlayer** Player);
	float GetSkillCheckDifficulityModifier(class ADBDPlayer** Character);
	float GetSkillCheckCharge(class ADBDPlayer** Player, bool* success, bool* Bonus, ESkillCheckCustomType* Type);
	int GetPipsPassed();
	float GetPerkMultiplier(class ADBDPlayer** Character);
	float GetMultiplicativeLuckBonus(class ADBDPlayer** Character);
	float GetMaxCharge();
	float GetItemEfficiencyModifier(class ADBDPlayer** Character);
	float GetGoodSkillCheckSuccessPercentReward(class ADBDPlayer** Player);
	float GetChargeSpeedModifier(class ADBDPlayer** Character);
	float GetChargeAmountForTime(float* DeltaSeconds, class ADBDPlayer** Character);
	class UChargeableComponent* GetChargeableComponent();
	float GetBonusSkillCheckZoneSizeModifier(class ADBDPlayer** Character);
	float GetBonusSkillCheckSuccessPercentReward(class ADBDPlayer** Player);
	float GetBlueprintChargeSpeedMultiplier(class ADBDPlayer** Character);
	float GetAdditiveLuckBonus(class ADBDPlayer** Character);
	float GetAdditiveChargeTimeReductionAsMultiplier(class ADBDPlayer** Character);
	void Authority_ChargeWithItem(float* DeltaSeconds, class ACollectable** Item, class ADBDPlayer** Character);
	void AddCharge(float* DeltaSeconds, class ADBDPlayer** Character);
};


// Class DBDInteraction.GhostChargeStalkModeInteraction
// 0x0010 (0x04D0 - 0x04C0)
class UGhostChargeStalkModeInteraction : public UBaseStalkModeInteraction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.GhostChargeStalkModeInteraction"));

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


// Class DBDInteraction.LinkedVomitInteraction
// 0x0020 (0x0600 - 0x05E0)
class ULinkedVomitInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x05E0(0x0014) MISSED OFFSET
	bool                                               _chargeComplete;                                          // 0x05F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x05F5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.LinkedVomitInteraction"));

		return ptr;
	}


	bool IsVomiting();
	bool IsChargeComplete();
	class UVomitStateComponent* GetVomitStateComponent();
};


// Class DBDInteraction.PalletPullUpInteraction
// 0x0010 (0x05F0 - 0x05E0)
class UPalletPullUpInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.PalletPullUpInteraction"));

		return ptr;
	}

};


// Class DBDInteraction.SetGroundPortalInteraction
// 0x0010 (0x05F0 - 0x05E0)
class USetGroundPortalInteraction : public UChargeableInteractionDefinition
{
public:
	class UTrapPlacerComponent*                        _trapPlacerComponent;                                     // 0x05E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      _portalClassToSpawn;                                      // 0x05E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.SetGroundPortalInteraction"));

		return ptr;
	}

};


// Class DBDInteraction.SetTrapInteraction
// 0x0060 (0x0640 - 0x05E0)
class USetTrapInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x05E0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.SetTrapInteraction"));

		return ptr;
	}

};


// Class DBDInteraction.TeleportToDemogorgonPortalInteraction
// 0x0090 (0x0670 - 0x05E0)
class UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
public:
	class UPortalTargetingComponent*                   _portalTargetingComponent;                                // 0x05E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                       // 0x05E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ADemogorgonPortal*                           _startingPortal;                                          // 0x05F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ADemogorgonPortal*                           _targetedPortal;                                          // 0x05F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ADBDPlayer*                                  _interactingPlayer;                                       // 0x0600(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0608(0x0058) MISSED OFFSET
	class AActor*                                      _huskRef;                                                 // 0x0660(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ClassToSpawnForHusk;                                      // 0x0668(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.TeleportToDemogorgonPortalInteraction"));

		return ptr;
	}


	void OnTeleportInteractionCanceledVFX();
	void OnSlasherSet(class ASlasherPlayer** Slasher);
};


// Class DBDInteraction.ThrowInteraction
// 0x0010 (0x05F0 - 0x05E0)
class UThrowInteraction : public UChargeableInteractionDefinition
{
public:
	float                                              _throwCancellationExitTime;                               // 0x05E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x05E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDInteraction.ThrowInteraction"));

		return ptr;
	}


	void InitThrowCancellationExitTime(float* value);
	bool HasCancelledThrow();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
