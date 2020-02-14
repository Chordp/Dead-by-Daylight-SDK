#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_DBDCompetence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DBDCompetence.AbilityStealthUndetectableEffect
// 0x0000 (0x02C0 - 0x02C0)
class UAbilityStealthUndetectableEffect : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.AbilityStealthUndetectableEffect"));

		return ptr;
	}


	bool ShouldDisplayStatusEffectIcon();
	void SetStatusEffectIconPercentage(float* value);
	void SetShouldDisplay(bool* On);
	void OnShouldDisplayChanged(bool* currentValue);
	void OnRep_ShouldDisplay();
	void Multicast_SetRemainingLifetime(float* Lifetime);
	void Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay);
	bool IsOriginatorHooked();
	bool IsOriginatorAlive();
	bool IsKillerInOriginatorRange(float* AdditiveRangeModifier);
	bool IsInOriginatorRange();
	void InitializeLifetime(float* Lifetime);
	float GetStatusEffectCooldownRate();
	bool GetShouldDisplay();
	class ADBDPlayer* GetOriginatingPlayer();
	float GetLifetimeDuration();
	void FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay);
	void BroadcastOriginatorGameEventNotification();
	void BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory);
	void Authority_SetRemainingLifetime(float* Lifetime);
	void Authority_RemoveSelf();
	void Authority_EndSelf();
};


// Class DBDCompetence.AdjustableCooldownStatusEffect
// 0x0010 (0x02D0 - 0x02C0)
class UAdjustableCooldownStatusEffect : public UStatusEffect
{
public:
	struct FGameplayTag                                CooldownModifierType;                                     // 0x02C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.AdjustableCooldownStatusEffect"));

		return ptr;
	}

};


// Class DBDCompetence.ExhaustedEffect
// 0x0008 (0x02D8 - 0x02D0)
class UExhaustedEffect : public UAdjustableCooldownStatusEffect
{
public:
	float                                              CooldownModifier;                                         // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.ExhaustedEffect"));

		return ptr;
	}

};


// Class DBDCompetence.ActivatableExhaustedEffect
// 0x0000 (0x02D8 - 0x02D8)
class UActivatableExhaustedEffect : public UExhaustedEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.ActivatableExhaustedEffect"));

		return ptr;
	}

};


// Class DBDCompetence.AllHexTotemsAreActive
// 0x0018 (0x0148 - 0x0130)
class UAllHexTotemsAreActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.AllHexTotemsAreActive"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class DBDCompetence.AnyMeansNecessary
// 0x0020 (0x0370 - 0x0350)
class UAnyMeansNecessary : public UPerk
{
public:
	bool                                               RevealSurvivorOnPalletPullUpStarted;                      // 0x0350(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RevealSurvivorOnPalletPulledUp;                           // 0x0351(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	float                                              RevealSurvivorDuration;                                   // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class UStatusEffect>                _effect;                                                  // 0x0358(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              _cooldownDuration[0x3];                                   // 0x0360(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.AnyMeansNecessary"));

		return ptr;
	}


	void Authority_OnPalletPullUpStarted(struct FGameplayTag* GameplayTag, struct FGameEventData* GameEventData);
	void Authority_OnPalletPulledUp(struct FGameplayTag* GameplayTag, struct FGameEventData* GameEventData);
};


// Class DBDCompetence.AnySurvivorHasObjectState
// 0x0070 (0x01A0 - 0x0130)
class UAnySurvivorHasObjectState : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0130(0x0050) MISSED OFFSET
	struct FGameplayTag                                _stateTag;                                                // 0x0180(0x000C) (Edit)
	unsigned char                                      UnknownData01[0x14];                                      // 0x018C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.AnySurvivorHasObjectState"));

		return ptr;
	}


	void OnSurvivorRemoved(class ACamperPlayer** Survivor);
	void OnSurvivorAdded(class ACamperPlayer** Survivor);
};


// Class DBDCompetence.Babysitter
// 0x0028 (0x0378 - 0x0350)
class UBabysitter : public UPerk
{
public:
	float                                              _scratchMarkHidingTime[0x3];                              // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _showAuraTime[0x3];                                       // 0x035C(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _cooldownTime[0x3];                                       // 0x0368(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.Babysitter"));

		return ptr;
	}

};


// Class DBDCompetence.BabysitterEffect
// 0x0008 (0x02C8 - 0x02C0)
class UBabysitterEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.BabysitterEffect"));

		return ptr;
	}


	bool ShouldDisplayStatusEffectIcon();
	void SetStatusEffectIconPercentage(float* value);
	void SetShouldDisplay(bool* On);
	void OnShouldDisplayChanged(bool* currentValue);
	void OnRep_ShouldDisplay();
	void Multicast_SetRemainingLifetime(float* Lifetime);
	void Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay);
	bool IsOriginatorHooked();
	bool IsOriginatorAlive();
	bool IsKillerInOriginatorRange(float* AdditiveRangeModifier);
	bool IsInOriginatorRange();
	void InitializeLifetime(float* Lifetime);
	float GetStatusEffectCooldownRate();
	bool GetShouldDisplay();
	class ADBDPlayer* GetOriginatingPlayer();
	float GetLifetimeDuration();
	void FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay);
	void BroadcastOriginatorGameEventNotification();
	void BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory);
	void Authority_SetRemainingLifetime(float* Lifetime);
	void Authority_RemoveSelf();
	void Authority_EndSelf();
};


// Class DBDCompetence.BaseIsPerkUsableCondition
// 0x0008 (0x0138 - 0x0130)
class UBaseIsPerkUsableCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.BaseIsPerkUsableCondition"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class DBDCompetence.BaseIsPlayerPerformingInteraction
// 0x0030 (0x0160 - 0x0130)
class UBaseIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTagContainer                       _interactionSemantics;                                    // 0x0130(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.BaseIsPlayerPerformingInteraction"));

		return ptr;
	}


	void UpdateIsTrue();
	void SetInteractionSemantics(struct FGameplayTagContainer* interactionSemantics);
};


// Class DBDCompetence.BetterTogether
// 0x0058 (0x03A8 - 0x0350)
class UBetterTogether : public UPerk
{
public:
	bool                                               ShouldRevealKiller;                                       // 0x0350(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRevealSurvivors;                                    // 0x0351(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	float                                              RevealDistance;                                           // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ADBDPlayer*>                          _affectedCampers;                                         // 0x0358(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0368(0x0010) MISSED OFFSET
	float                                              _durationByLevel[0x3];                                    // 0x0378(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x0384(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.BetterTogether"));

		return ptr;
	}


	void OnStartedGeneratorRepair(struct FGameplayTag* GameplayTag, struct FGameEventData* GameEventData);
};


// Class DBDCompetence.BloodEcho
// 0x0018 (0x0368 - 0x0350)
class UBloodEcho : public UPerk
{
public:
	struct FGameplayTag                                _statusEffectDurationTag;                                 // 0x0350(0x000C) (Edit, DisableEditOnInstance)
	float                                              _cooldownDuration[0x3];                                   // 0x035C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.BloodEcho"));

		return ptr;
	}

};


// Class DBDCompetence.Breakout
// 0x0078 (0x03C8 - 0x0350)
class UBreakout : public UPerk
{
public:
	class ASlasherPlayer*                              _slasher;                                                 // 0x0350(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ADBDPlayer*                                  _playerOwner;                                             // 0x0358(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              _hasteEffect[0x3];                                        // 0x0360(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _wiggleEffect;                                            // 0x036C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _survivorDistanceMax;                                     // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _isPerkActive;                                            // 0x0374(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x53];                                      // 0x0375(0x0053) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.Breakout"));

		return ptr;
	}


	void OnSlasherSet(class ASlasherPlayer** Slasher);
	void OnRep_IsPerkActive();
	void Authority_OnRangeChanged(bool* InRange);
	void Authority_ImposeWiggleStatusEffect(class ACamperPlayer** Survivor);
};


// Class DBDCompetence.BuckleUp
// 0x0030 (0x0380 - 0x0350)
class UBuckleUp : public UPerk
{
public:
	struct FLinearColor                                _noRecoveryColor;                                         // 0x0350(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                _fullRecoveryColor;                                       // 0x0360(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _revealDuration[0x3];                                     // 0x0370(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.BuckleUp"));

		return ptr;
	}

};


// Class DBDCompetence.Camaraderie
// 0x0028 (0x0378 - 0x0350)
class UCamaraderie : public UPerk
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0350(0x000C) MISSED OFFSET
	float                                              _percentUseItem[0x3];                                     // 0x035C(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _pauseTimer[0x3];                                         // 0x0368(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _needItemToTrigger;                                       // 0x0374(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0375(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.Camaraderie"));

		return ptr;
	}


	void Authority_EnablePerk();
};


// Class DBDCompetence.CollectableOwnerSubjectProvider
// 0x0018 (0x0060 - 0x0048)
class UCollectableOwnerSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.CollectableOwnerSubjectProvider"));

		return ptr;
	}

};


// Class DBDCompetence.CorruptIntervention
// 0x0038 (0x0388 - 0x0350)
class UCorruptIntervention : public UPerk
{
public:
	unsigned char                                      _blockedGeneratorCount[0x3];                              // 0x0350(0x0001) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0353(0x0001) MISSED OFFSET
	float                                              _generatorBlockDuration[0x3];                             // 0x0354(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                _generatorAuraColorForKiller;                             // 0x0360(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.CorruptIntervention"));

		return ptr;
	}


	void Server_ActivatePerk();
	void Local_OnIntroCompleted();
};


// Class DBDCompetence.CruelConfinement
// 0x00A0 (0x03F0 - 0x0350)
class UCruelConfinement : public UPerk
{
public:
	float                                              _effectiveRadius[0x3];                                    // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	float                                              _blockDuration[0x3];                                      // 0x035C(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                _windowAuraColor;                                         // 0x0368(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class AGenerator*, struct FWindowBlockableList> _blockableLists;                                          // 0x0378(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x03C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.CruelConfinement"));

		return ptr;
	}

};


// Class DBDCompetence.DarkDevotion
// 0x0018 (0x0368 - 0x0350)
class UDarkDevotion : public UPerk
{
public:
	class UTerrorRadiusEmitterComponent*               _obsessionTerrorRadiusEmitter;                            // 0x0350(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              _obsessionTerrorRadius;                                   // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _simulatedFixedDistance;                                  // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0360(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.DarkDevotion"));

		return ptr;
	}

};


// Class DBDCompetence.DarkSense
// 0x0018 (0x0368 - 0x0350)
class UDarkSense : public UPerk
{
public:
	float                                              _effectDurationOnGeneratorComplete;                       // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _effectDurationOnFinalGeneratorComplete[0x3];             // 0x0354(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0360(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.DarkSense"));

		return ptr;
	}

};


// Class DBDCompetence.DBDConditionFactory
// 0x0000 (0x0030 - 0x0030)
class UDBDConditionFactory : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.DBDConditionFactory"));

		return ptr;
	}

};


// Class DBDCompetence.DecisiveStrike
// 0x0080 (0x03D0 - 0x0350)
class UDecisiveStrike : public UPerk
{
public:
	float                                              _timeAfterUnhook[0x3];                                    // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _skillCheckDelay;                                         // 0x035C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _skillCheckBuffer;                                        // 0x0360(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _killerHearsSkillCheckCue;                                // 0x0364(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x63];                                      // 0x0365(0x0063) MISSED OFFSET
	bool                                               _hasBeenAttempted;                                        // 0x03C8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.DecisiveStrike"));

		return ptr;
	}


	void OnUnhookedTimerEnded();
	void OnSkillCheck(bool* hadInput, bool* success, bool* Bonus, ESkillCheckCustomType* Type);
	void OnRep_HasBeenAttempted();
	void OnPickUpEnded(class ADBDPlayer** picker);
	void OnOwnerPickedUp(class ADBDPlayer** picker);
};


// Class DBDCompetence.DelayedHealEffect
// 0x0008 (0x02C8 - 0x02C0)
class UDelayedHealEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.DelayedHealEffect"));

		return ptr;
	}


	bool ShouldDisplayStatusEffectIcon();
	void SetStatusEffectIconPercentage(float* value);
	void SetShouldDisplay(bool* On);
	void OnShouldDisplayChanged(bool* currentValue);
	void OnRep_ShouldDisplay();
	void Multicast_SetRemainingLifetime(float* Lifetime);
	void Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay);
	bool IsOriginatorHooked();
	bool IsOriginatorAlive();
	bool IsKillerInOriginatorRange(float* AdditiveRangeModifier);
	bool IsInOriginatorRange();
	void InitializeLifetime(float* Lifetime);
	float GetStatusEffectCooldownRate();
	bool GetShouldDisplay();
	class ADBDPlayer* GetOriginatingPlayer();
	float GetLifetimeDuration();
	void FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay);
	void BroadcastOriginatorGameEventNotification();
	void BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory);
	void Authority_SetRemainingLifetime(float* Lifetime);
	void Authority_RemoveSelf();
	void Authority_EndSelf();
};


// Class DBDCompetence.DidGameEventOccurred
// 0x0038 (0x0168 - 0x0130)
class UDidGameEventOccurred : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTag                                EventTag;                                                 // 0x0130(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x013C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.DidGameEventOccurred"));

		return ptr;
	}

};


// Class DBDCompetence.Distortion
// 0x0018 (0x0368 - 0x0350)
class UDistortion : public UPerk
{
public:
	float                                              _activationDurations[0x3];                                // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _auraBlockIsActive;                                       // 0x035C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x035D(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.Distortion"));

		return ptr;
	}


	void OnRep_AuraBlockIsActive();
	bool AuraBlockCanBeActive();
};


// Class DBDCompetence.DoesPerkHaveToken
// 0x0010 (0x0140 - 0x0130)
class UDoesPerkHaveToken : public UEventDrivenModifierCondition
{
public:
	TWeakObjectPtr<class UPerk>                        _perk;                                                    // 0x0130(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.DoesPerkHaveToken"));

		return ptr;
	}


	void SetPerk(class UPerk** Perk);
	void OnRep_Perk();
};


// Class DBDCompetence.DyingLight
// 0x0040 (0x0390 - 0x0350)
class UDyingLight : public UPerk
{
public:
	TArray<float>                                      _actionSpeedPenaltyPerToken;                              // 0x0350(0x0010) (Edit, ZeroConstructor)
	float                                              _obsessionActionSpeedBonus;                               // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       _obsessionStatusEffectID;                                 // 0x0364(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       _nonObsessionStatusEffectID;                              // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0370(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	TArray<class UStatusEffect*>                       _survivorDebuffs;                                         // 0x0380(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.DyingLight"));

		return ptr;
	}


	void OnObsessionChanged(class ACamperPlayer** newObsession, class ACamperPlayer** previousObsession);
};


// Class DBDCompetence.ExposedEffect
// 0x0000 (0x02C0 - 0x02C0)
class UExposedEffect : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.ExposedEffect"));

		return ptr;
	}


	bool ShouldDisplayStatusEffectIcon();
	void SetStatusEffectIconPercentage(float* value);
	void SetShouldDisplay(bool* On);
	void OnShouldDisplayChanged(bool* currentValue);
	void OnRep_ShouldDisplay();
	void Multicast_SetRemainingLifetime(float* Lifetime);
	void Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay);
	bool IsOriginatorHooked();
	bool IsOriginatorAlive();
	bool IsKillerInOriginatorRange(float* AdditiveRangeModifier);
	bool IsInOriginatorRange();
	void InitializeLifetime(float* Lifetime);
	float GetStatusEffectCooldownRate();
	bool GetShouldDisplay();
	class ADBDPlayer* GetOriginatingPlayer();
	float GetLifetimeDuration();
	void FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay);
	void BroadcastOriginatorGameEventNotification();
	void BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory);
	void Authority_SetRemainingLifetime(float* Lifetime);
	void Authority_RemoveSelf();
	void Authority_EndSelf();
};


// Class DBDCompetence.Fixated
// 0x0000 (0x0350 - 0x0350)
class UFixated : public UPerk
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.Fixated"));

		return ptr;
	}


	void SetIsUsable(bool* value);
	void OnRep_TokenCount(int* oldCount);
	void OnRep_IsUsable();
	void OnRep_CooldownTimer();
	void Multicast_InitializePerk(struct FName* PerkId, int* PerkLevel, EInputInteractionType* activatableInteractionInputType);
	bool IsHudIconTimerDone();
	bool IsCooldownTimerDone();
	int GetTokenCount();
	int GetPerkLevel();
	int GetMaxTokenCount();
	bool GetIsUsable();
	float GetHudIconTimerElapsedTimePercent();
	class UTimerObject* GetCooldownTimer();
	void FireActivePerkEvent(float* percentage, int* chargeCount);
	void Authority_TriggerHudIconTimer(float* Duration);
	void Authority_TriggerCooldownTimer(float* coolddownTime);
	void Authority_SetTokenCount(int* value);
	void Authority_SetMaxTokenCount(int* value);
	void Authority_SetIsUsable(bool* value);
	void Authority_IncrementToken();
	void Authority_DecrementToken();
};


// Class DBDCompetence.FlipFlop
// 0x0018 (0x0368 - 0x0350)
class UFlipFlop : public UPerk
{
public:
	float                                              _recoveryProgressionConversionRatio[0x3];                 // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _maxWiggleProgression[0x3];                               // 0x035C(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.FlipFlop"));

		return ptr;
	}


	void Authority_OnPickedUp(class ADBDPlayer** picker);
};


// Class DBDCompetence.FurtiveChase
// 0x0010 (0x0360 - 0x0350)
class UFurtiveChase : public UPerk
{
public:
	int                                                _maxTokensByLevel[0x3];                                   // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _terrorRadiusSuppressionPerToken;                         // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.FurtiveChase"));

		return ptr;
	}

};


// Class DBDCompetence.HeadOn
// 0x0068 (0x03B8 - 0x0350)
class UHeadOn : public UPerk
{
public:
	bool                                               IsPerformingHeadOn;                                       // 0x0350(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ExhaustOnlyOnSuccessfulStun;                              // 0x0351(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StunKillersEnteringStunZone;                              // 0x0352(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0353(0x0001) MISSED OFFSET
	float                                              _hideDuration[0x3];                                       // 0x0354(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ALocker*                                     _locker;                                                  // 0x0360(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0368(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.HeadOn"));

		return ptr;
	}


	void OnPawnOverlapExit(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void OnPawnOverlapEnter(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void OnHeadOnAnimationComplete();
	bool CanApplyHeadOnInteraction();
	void Authority_ActivatePerk();
};


// Class DBDCompetence.HexPerk
// 0x0050 (0x03A0 - 0x0350)
class UHexPerk : public UPerk
{
public:
	int                                                NumTotemsToBind;                                          // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _doNotBindToTotemOnInit;                                  // 0x0354(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	TArray<class ATotem*>                              _totemActors;                                             // 0x0358(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<int>                                        _playersWhoKnowCurse;                                     // 0x0368(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0378(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.HexPerk"));

		return ptr;
	}


	void ReceiveGameplayEvent(EDBDScoreTypes* gameplayEventType, float* amount, class AActor** Instigator, class AActor** Target);
	void OnHexPerkGameplayEvent(EDBDScoreTypes* gameplayEventType, float* amount, class AActor** Instigator, class AActor** Target);
	void Multicast_UnbindFromTotem(class ATotem** aTotemActor);
	void Multicast_BindToTotems(TArray<class ATotem*>* totemActors);
	bool IsCurseRevealedToPlayer(int* playerUniqueID);
	TArray<class ATotem*> GetTotems();
	float GetDistanceToOwner(class AActor** OtherActor);
	TArray<class ATotem*> GetBoundTotems();
	void FireCursedStatusOnLocalPlayer();
	void Authority_UnbindFromTotem(class ATotem** aTotemActor);
	void Authority_SetCurseRevealedToPlayer(int* playerUniqueID, bool* value);
	bool Authority_BindToDullTotems();
};


// Class DBDCompetence.HexHauntedGround
// 0x0000 (0x03A0 - 0x03A0)
class UHexHauntedGround : public UHexPerk
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.HexHauntedGround"));

		return ptr;
	}


	void ReceiveGameplayEvent(EDBDScoreTypes* gameplayEventType, float* amount, class AActor** Instigator, class AActor** Target);
	void OnHexPerkGameplayEvent(EDBDScoreTypes* gameplayEventType, float* amount, class AActor** Instigator, class AActor** Target);
	void Multicast_UnbindFromTotem(class ATotem** aTotemActor);
	void Multicast_BindToTotems(TArray<class ATotem*>* totemActors);
	bool IsCurseRevealedToPlayer(int* playerUniqueID);
	TArray<class ATotem*> GetTotems();
	float GetDistanceToOwner(class AActor** OtherActor);
	TArray<class ATotem*> GetBoundTotems();
	void FireCursedStatusOnLocalPlayer();
	void Authority_UnbindFromTotem(class ATotem** aTotemActor);
	void Authority_SetCurseRevealedToPlayer(int* playerUniqueID, bool* value);
	bool Authority_BindToDullTotems();
};


// Class DBDCompetence.HexRuin
// 0x0068 (0x0408 - 0x03A0)
class UHexRuin : public UHexPerk
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A0(0x0018) MISSED OFFSET
	TMap<class AGenerator*, struct FFastTimer>         _curseActivationTimers;                                   // 0x03B8(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.HexRuin"));

		return ptr;
	}


	void Authority_ConstructActivationTimersMap();
};


// Class DBDCompetence.HighestLevelAndClosestEffectCondition
// 0x0038 (0x0150 - 0x0118)
class UHighestLevelAndClosestEffectCondition : public UGameplayModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	TArray<class UStatusEffect*>                       _effectsLevel1;                                           // 0x0120(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UStatusEffect*>                       _effectsLevel2;                                           // 0x0130(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UStatusEffect*>                       _effectsLevel3;                                           // 0x0140(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.HighestLevelAndClosestEffectCondition"));

		return ptr;
	}


	void SetCurrentEffectLevel(int* Level);
	void InitEffectArrays(struct FName* effectIDLevel1, struct FName* effectIDLevel2, struct FName* effectIDLevel3);
};


// Class DBDCompetence.ImAllEars
// 0x0050 (0x03A0 - 0x0350)
class UImAllEars : public UPerk
{
public:
	int                                                _cooldownByLevel[0x3];                                    // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	float                                              _durationByLevel[0x3];                                    // 0x035C(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	bool                                               _useTerrorRadius;                                         // 0x0368(0x0001) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	float                                              _triggerOutsideRadius;                                    // 0x036C(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.ImAllEars"));

		return ptr;
	}


	void Server_OnCamperLoudNoise(struct FGameplayTag* GameplayTag, struct FGameEventData* GameEventData);
};


// Class DBDCompetence.ImmediateUndetectableEffect
// 0x0000 (0x02C0 - 0x02C0)
class UImmediateUndetectableEffect : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.ImmediateUndetectableEffect"));

		return ptr;
	}


	bool ShouldDisplayStatusEffectIcon();
	void SetStatusEffectIconPercentage(float* value);
	void SetShouldDisplay(bool* On);
	void OnShouldDisplayChanged(bool* currentValue);
	void OnRep_ShouldDisplay();
	void Multicast_SetRemainingLifetime(float* Lifetime);
	void Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay);
	bool IsOriginatorHooked();
	bool IsOriginatorAlive();
	bool IsKillerInOriginatorRange(float* AdditiveRangeModifier);
	bool IsInOriginatorRange();
	void InitializeLifetime(float* Lifetime);
	float GetStatusEffectCooldownRate();
	bool GetShouldDisplay();
	class ADBDPlayer* GetOriginatingPlayer();
	float GetLifetimeDuration();
	void FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay);
	void BroadcastOriginatorGameEventNotification();
	void BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory);
	void Authority_SetRemainingLifetime(float* Lifetime);
	void Authority_RemoveSelf();
	void Authority_EndSelf();
};


// Class DBDCompetence.InfectiousFright
// 0x0048 (0x0398 - 0x0350)
class UInfectiousFright : public UPerk
{
public:
	bool                                               _revealPlayerInTerrorRadius;                              // 0x0350(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      _perkActivationCount;                                     // 0x0351(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	TArray<class ACamperPlayer*>                       _revealedSurvivors;                                       // 0x0358(0x0010) (Net, ZeroConstructor, Transient)
	class ACamperPlayer*                               _targetSurvivor;                                          // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.InfectiousFright"));

		return ptr;
	}


	void RevealSurvivorLocation(class ACamperPlayer** Target);
	void OnRep_PerkActivationCount();
};


// Class DBDCompetence.InnerStrength
// 0x0038 (0x0388 - 0x0350)
class UInnerStrength : public UPerk
{
public:
	float                                              _hideDuration[0x3];                                       // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _perkEnabled;                                             // 0x035C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2B];                                      // 0x035D(0x002B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.InnerStrength"));

		return ptr;
	}


	void OnRep_PerkEnabled();
	void OnPlayerImmobilizeStateChanged(ECamperImmobilizeState* oldImmobilizeState, ECamperImmobilizeState* newImmobilizeState);
};


// Class DBDCompetence.IsActivationTimerActive
// 0x0018 (0x0148 - 0x0130)
class UIsActivationTimerActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsActivationTimerActive"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class DBDCompetence.IsActivationTimerActiveAndNotPaused
// 0x0020 (0x0150 - 0x0130)
class UIsActivationTimerActiveAndNotPaused : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0130(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsActivationTimerActiveAndNotPaused"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class DBDCompetence.IsClosestEffectCondition
// 0x0000 (0x0118 - 0x0118)
class UIsClosestEffectCondition : public UGameplayModifierCondition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsClosestEffectCondition"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange
// 0x00B0 (0x01E8 - 0x0138)
class UIsInAnyHookedSurvivorOriginatorAuraReadingRange : public URangeBasedCondition
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0138(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange"));

		return ptr;
	}


	void OnRep_Range();
};


// Class DBDCompetence.IsLifetimeActive
// 0x0010 (0x0140 - 0x0130)
class UIsLifetimeActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsLifetimeActive"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class DBDCompetence.IsOriginatingPerkUsableCondition
// 0x0000 (0x0138 - 0x0138)
class UIsOriginatingPerkUsableCondition : public UBaseIsPerkUsableCondition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsOriginatingPerkUsableCondition"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class DBDCompetence.IsOwningPlayerLastSurvivor
// 0x0008 (0x0138 - 0x0130)
class UIsOwningPlayerLastSurvivor : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsOwningPlayerLastSurvivor"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class DBDCompetence.IsPerkUsableCondition
// 0x0000 (0x0138 - 0x0138)
class UIsPerkUsableCondition : public UBaseIsPerkUsableCondition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsPerkUsableCondition"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class DBDCompetence.IsPlayerPerformingItemInteraction
// 0x0028 (0x0188 - 0x0160)
class UIsPlayerPerformingItemInteraction : public UBaseIsPlayerPerformingInteraction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0160(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsPlayerPerformingItemInteraction"));

		return ptr;
	}


	void UpdateIsTrue();
	void SetInteractionSemantics(struct FGameplayTagContainer* interactionSemantics);
};


// Class DBDCompetence.IsPlayerPerformingInteraction
// 0x0040 (0x0170 - 0x0130)
class UIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTagContainer                       _interactionSemantics;                                    // 0x0130(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0150(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsPlayerPerformingInteraction"));

		return ptr;
	}


	void UpdateIsTrue();
	void SetInteractionSemantics(struct FGameplayTagContainer* interactionSemantics);
};


// Class DBDCompetence.KillerSubjectProvider
// 0x0008 (0x0050 - 0x0048)
class UKillerSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.KillerSubjectProvider"));

		return ptr;
	}

};


// Class DBDCompetence.KindredPerk
// 0x0028 (0x0378 - 0x0350)
class UKindredPerk : public UPerk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0350(0x0010) MISSED OFFSET
	TArray<float>                                      _killerAuraRevealRange;                                   // 0x0360(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0370(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.KindredPerk"));

		return ptr;
	}

};


// Class DBDCompetence.LingeringStateTagStatusEffect
// 0x0038 (0x02F8 - 0x02C0)
class ULingeringStateTagStatusEffect : public UStatusEffect
{
public:
	float                                              _lingerDuration;                                          // 0x02C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                _ownerStateTag;                                           // 0x02C4(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x02D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.LingeringStateTagStatusEffect"));

		return ptr;
	}

};


// Class DBDCompetence.LuckyBreak
// 0x0010 (0x0360 - 0x0350)
class ULuckyBreak : public UPerk
{
public:
	float                                              _activationTime[0x3];                                     // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.LuckyBreak"));

		return ptr;
	}


	void OnDamageStateChanged(ECamperDamageState* oldDamageState, ECamperDamageState* currentDamageState);
	void ActivationTimerEnded();
};


// Class DBDCompetence.MindBreaker
// 0x0040 (0x0390 - 0x0350)
class UMindBreaker : public UPerk
{
public:
	float                                              _effectDurationAfterRepair[0x3];                          // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	float                                              _generatorRepairThreshold[0x3];                           // 0x035C(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0368(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.MindBreaker"));

		return ptr;
	}

};


// Class DBDCompetence.Nemesis
// 0x0020 (0x0370 - 0x0350)
class UNemesis : public UPerk
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0350(0x0008) MISSED OFFSET
	float                                              _revealToKillerTime[0x3];                                 // 0x0358(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _obliviousTime[0x3];                                      // 0x0364(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.Nemesis"));

		return ptr;
	}

};


// Class DBDCompetence.NoOneLeftBehind
// 0x0010 (0x0360 - 0x0350)
class UNoOneLeftBehind : public UPerk
{
public:
	TArray<float>                                      _speedBoostEffect;                                        // 0x0350(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.NoOneLeftBehind"));

		return ptr;
	}


	float GetSpeedBoostEffect();
};


// Class DBDCompetence.ObliviousEffect
// 0x0000 (0x02C0 - 0x02C0)
class UObliviousEffect : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.ObliviousEffect"));

		return ptr;
	}


	bool ShouldDisplayStatusEffectIcon();
	void SetStatusEffectIconPercentage(float* value);
	void SetShouldDisplay(bool* On);
	void OnShouldDisplayChanged(bool* currentValue);
	void OnRep_ShouldDisplay();
	void Multicast_SetRemainingLifetime(float* Lifetime);
	void Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay);
	bool IsOriginatorHooked();
	bool IsOriginatorAlive();
	bool IsKillerInOriginatorRange(float* AdditiveRangeModifier);
	bool IsInOriginatorRange();
	void InitializeLifetime(float* Lifetime);
	float GetStatusEffectCooldownRate();
	bool GetShouldDisplay();
	class ADBDPlayer* GetOriginatingPlayer();
	float GetLifetimeDuration();
	void FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay);
	void BroadcastOriginatorGameEventNotification();
	void BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory);
	void Authority_SetRemainingLifetime(float* Lifetime);
	void Authority_RemoveSelf();
	void Authority_EndSelf();
};


// Class DBDCompetence.ObsessionTargetSubjectProvider
// 0x0010 (0x0058 - 0x0048)
class UObsessionTargetSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.ObsessionTargetSubjectProvider"));

		return ptr;
	}

};


// Class DBDCompetence.OwningSlasherHasBeenStill
// 0x0008 (0x0120 - 0x0118)
class UOwningSlasherHasBeenStill : public UGameplayModifierCondition
{
public:
	float                                              _secondsOfStillnessRequired;                              // 0x0118(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.OwningSlasherHasBeenStill"));

		return ptr;
	}


	void Authority_SetSecondsOfStillnessRequired(float* secondsRequired);
};


// Class DBDCompetence.PlayerIsInExitArea
// 0x0008 (0x0120 - 0x0118)
class UPlayerIsInExitArea : public UGameplayModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.PlayerIsInExitArea"));

		return ptr;
	}


	void SetSubjectProviderClass(class UClass** subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class AActor* GetOwningActor();
};


// Class DBDCompetence.Poised
// 0x0028 (0x0378 - 0x0350)
class UPoised : public UPerk
{
public:
	float                                              _activationTime[0x3];                                     // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x035C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.Poised"));

		return ptr;
	}

};


// Class DBDCompetence.QKPerk3ExhaustedEffect
// 0x0028 (0x0300 - 0x02D8)
class UQKPerk3ExhaustedEffect : public UExhaustedEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.QKPerk3ExhaustedEffect"));

		return ptr;
	}

};


// Class DBDCompetence.ResiliencePerk
// 0x0010 (0x0360 - 0x0350)
class UResiliencePerk : public UPerk
{
public:
	float                                              _actionSpeed[0x3];                                        // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.ResiliencePerk"));

		return ptr;
	}

};


// Class DBDCompetence.SecondWind
// 0x0038 (0x0388 - 0x0350)
class USecondWind : public UPerk
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0350(0x0008) MISSED OFFSET
	ESecondWindState                                   _currentState;                                            // 0x0358(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              _amountHealed;                                            // 0x035C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0360(0x0004) MISSED OFFSET
	float                                              _numberOfHealStateToHealToActivate[0x3];                  // 0x0364(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _durationOfHeal[0x3];                                     // 0x0370(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _applyBrokenEffect;                                       // 0x037C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB];                                       // 0x037D(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.SecondWind"));

		return ptr;
	}

};


// Class DBDCompetence.Solidarity
// 0x0030 (0x0380 - 0x0350)
class USolidarity : public UPerk
{
public:
	bool                                               _allowMedkit;                                             // 0x0350(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class UChargeableComponent*                        _healerHPSlot;                                            // 0x0358(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UChargeableComponent*                        _targetHPSlot;                                            // 0x0360(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UChargeableInteractionDefinition*            _healOtherInteraction;                                    // 0x0368(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.Solidarity"));

		return ptr;
	}


	void Authority_OnSkillCheckResponse(bool* success, bool* Bonus, class ADBDPlayer** Player, bool* TriggerLoudNoise, bool* hadInput, ESkillCheckCustomType* Type, float* ChargeChange);
	void Authority_OnHealthChargeApplied(float* IndividualChargeAmount, float* TotalChargeAmount, class AActor** ChargeInstigator, bool* WasCoop, float* DeltaTime);
};


// Class DBDCompetence.SpiesFromTheShadows
// 0x0008 (0x0358 - 0x0350)
class USpiesFromTheShadows : public UPerk
{
public:
	float                                              _cooldownDurationSecs;                                    // 0x0350(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.SpiesFromTheShadows"));

		return ptr;
	}


	void StartCooldownIfInRange(struct FVector* loudNoiseLocation);
};


// Class DBDCompetence.SpineChillPerk
// 0x0010 (0x0360 - 0x0350)
class USpineChillPerk : public UPerk
{
public:
	float                                              _actionSpeed[0x3];                                        // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.SpineChillPerk"));

		return ptr;
	}

};


// Class DBDCompetence.SprintBurst
// 0x0020 (0x0370 - 0x0350)
class USprintBurst : public UPerk
{
public:
	float                                              _exhaustionDuration[0x3];                                 // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _sprintDuration;                                          // 0x035C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.SprintBurst"));

		return ptr;
	}


	void Authority_OnIsRunningAndMovingChanged(bool* IsRunningAndMoving);
};


// Class DBDCompetence.StatusEffectOriginatorSubjectProvider
// 0x0000 (0x0048 - 0x0048)
class UStatusEffectOriginatorSubjectProvider : public UModifierSubjectProvider
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.StatusEffectOriginatorSubjectProvider"));

		return ptr;
	}

};


// Class DBDCompetence.Surge
// 0x0040 (0x0390 - 0x0350)
class USurge : public UPerk
{
public:
	float                                              _zoneRadius[0x3];                                         // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	float                                              _instantRegression[0x3];                                  // 0x035C(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	float                                              _cooldownDuration[0x3];                                   // 0x0368(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData)
	bool                                               _hasCooldown;                                             // 0x0374(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               _useTerrorRadiusInsteadOfFixedDistance;                   // 0x0375(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1A];                                      // 0x0376(0x001A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.Surge"));

		return ptr;
	}


	void Client_TriggerEffects(TArray<class AGenerator*>* generators);
};


// Class DBDCompetence.SurvivorMadnessEffect
// 0x00B8 (0x0378 - 0x02C0)
class USurvivorMadnessEffect : public UStatusEffect
{
public:
	float                                              _madness;                                                 // 0x02C0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB4];                                      // 0x02C4(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.SurvivorMadnessEffect"));

		return ptr;
	}


	void Server_AddMadness(float* madnessToAdd);
	void OnStaticBlastReceived_BP();
	void OnStaticBlastReceived();
	void OnSnapOutOfIt_BP();
	void OnSnapOutOfIt();
	void OnShockTherapyReceived_BP();
	void OnShockTherapyReceived();
	void OnMadnessTierUp_BP();
	void OnMadnessTierDown_BP();
	void Multicast_OnMadnessTierUp();
	void Multicast_OnMadnessTierDown();
	float GetMadnessValue();
	int GetMadnessTier();
	void Authority_OnMadnessScreamTimerEnd_BP();
};


// Class DBDCompetence.TestCollectable
// 0x0000 (0x04D0 - 0x04D0)
class ATestCollectable : public ACollectable
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.TestCollectable"));

		return ptr;
	}


	void SetVisibility(bool* Visibility);
	void SetItemInteractor(class UInteractor** Interactor);
	void SetCount(int* Count);
	void OnUseReleased();
	void OnUse();
	void OnRep_State();
	void OnRep_Collector();
	void OnRep_BegunPlayFenceName();
	void OnPostItemAddonsCreation(class ADBDPlayer** Player);
	void OnFenceInitialized();
	void OnDropped();
	void OnCustomizationChanged();
	void OnCollectorEndPlay(class AActor** Actor, TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnCollected(class ADBDPlayer** collector);
	void NotifyUpdated();
	void Multicast_UseReleased();
	void Multicast_Use();
	void Multicast_RemoveItemAddon(class UItemAddon** addon);
	void Multicast_Dropped(class ADBDPlayer** droppedBy, struct FVector* Location, struct FRotator* Rotation);
	void Multicast_Collected(class ADBDPlayer** collector);
	void Local_Dropped_Location(class ADBDPlayer** droppedBy, struct FVector* Location, struct FRotator* Rotation);
	bool IsStored();
	bool IsRechargeable();
	bool IsOnGround();
	bool IsLocallyControlled();
	bool IsEquipped();
	bool IsCountDisplayForced();
	bool IsCollected();
	bool IsBeingUsed();
	bool HasGameplayModifierFlag(struct FGameplayTag* modifierFlag);
	float GetUsePercentLeft();
	float GetModifierSum(struct FGameplayTag* ModifierType, float* defaultValue);
	float GetModifierMax(struct FGameplayTag* ModifierType, float* defaultValue);
	class UInteractor* GetItemInteractor();
	unsigned char GetItemIconIndex();
	TArray<class UItemAddon*> GetItemAddons();
	struct FString GetIconFilePath();
	int GetCount();
	class ADBDPlayer* GetCollector();
	void Discard(bool* consumedDiscard);
	void DebugPrintStats();
	bool CanUse();
	bool CanBeDropped(class ADBDPlayer** dropper);
	bool CanBeCollected(class ADBDPlayer** collector);
	void Authority_Use();
	void Authority_RemoveItemAddon(class UItemAddon** addon);
	void Authority_AddItemAddon(class UItemAddon** addon);
};


// Class DBDCompetence.TestDBDGameState
// 0x0000 (0x0848 - 0x0848)
class ATestDBDGameState : public ADBDGameState
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.TestDBDGameState"));

		return ptr;
	}


	void TravelToKillerServer();
	void SortOfferings();
	void SetPlayersReadyToStart(bool* playersReadyToStart);
	void SetKillerIntroCompletedNormalized(float* completedAmount);
	void SetGameLevelEnded(EEndGameReason* endGameReason);
	void SetDisplayMapName(bool* Display);
	void SetBuiltLevelData(struct FName* ThemeName, struct FName* ThemeWeather, struct FString* MapName, int* TileCount, TArray<struct FDependency>* levelDependencies, struct FName* SpecialEventId);
	void Server_UpdateGameRole();
	void ResetGameLevelStatus();
	void RemoveTrap(class AInteractable** toRemove);
	void OnSlasherSetMultiDelegate__DelegateSignature(class ASlasherPlayer** SlasherPlayer);
	void OnRep_SurvivorLeft(int* oldValue);
	void OnRep_SessionId();
	void OnRep_ServerJoiningData();
	void OnRep_SecondsLeftInLobby(int* oldValue);
	void OnRep_RequiredActivatedGeneratorCount(int* oldRequiredActivatedGeneratorCount);
	void OnRep_PlayersReadyToStart(bool* oldValue);
	void OnRep_OnLevelReadyToPlay(bool* oldValue);
	void OnRep_OnGameLevelLoaded();
	void OnRep_OnGameLevelCreated();
	void OnRep_OfferingSequenceReady();
	void OnRep_ObsessionTarget(class ACamperPlayer** previousObsessionTarget);
	void OnRep_LobbyId();
	void OnRep_HatchOpened(bool* oldValue);
	void OnRep_GamePresetData();
	void OnRep_EscapeDoorActivated(bool* oldValue);
	void OnRep_BuildLevelData();
	void OnRep_ActivatedGeneratorCount(int* oldValue);
	void OnLevelReadyToPlayDelegate__DelegateSignature();
	void Multicast_UpdateRemainingQueueTime(int* remainingQueueTimeSeconds, bool* bIsStable);
	void Multicast_UpdateCharacterFromGamePreset(class ADBDPlayerState_Menu** playerState_Menu, struct FGamePresetData* GamePresetData);
	void Multicast_SetServerLeftGame(bool* hasServerLeftGame);
	void Multicast_SetLostServerConnection(bool* hasLostServerConnection);
	void Multicast_SetGameLevelEnded(EEndGameReason* endGameReason);
	void Multicast_SetGameEnded(bool* hasServerLeftGame);
	void Multicast_SetBuiltLevelData(struct FName* ThemeName, struct FName* ThemeWeather, struct FString* MapName, int* TileCount, TArray<struct FDependency>* levelDependencies, struct FName* SpecialEventId);
	void Multicast_OnGameStarted();
	void Multicast_KillerServerSearchFailed();
	void Multicast_KillerSearchStarted();
	void Multicast_JoinKillerServerFailed();
	void KillerServerFound(struct FServerJoiningData* joinParams);
	bool IsPlayerDistributionReady();
	bool IsOnePlayerLeft();
	bool IsOfferingReceived();
	bool IsObsessionTargetAliveInLevel();
	bool IsObsessionTargetAlive();
	bool IsLightingGenerated();
	bool IsLevelSetupDone();
	bool IsLevelReadyToPlay();
	bool IsIntroCompleted();
	bool IsHatchVisible();
	bool IsEscapeRequirementCompleted();
	bool IsEscapeDoorOpen();
	bool IsEscapeDoorActivated();
	void IntroCompleted();
	TArray<class AInteractable*> GetTraps();
	int GetSurvivorLeft();
	TArray<struct FSelectedOffering> GetSelectedOfferings();
	bool GetSelectedOffering(int* Index, struct FSelectedOffering* SelectedOffering);
	int GetRequiredActivatedGeneratorCount();
	int GetRemainingGeneratorsNeeded();
	class ADBDPlayerState* GetPlayerStateByMirrorsID(struct FString* ID);
	class ADBDPlayerState* GetPlayerStateByIDString(struct FString* ID);
	bool GetPlayersReadyToStart();
	void GetPlayerRoleCounts(int* survivorCount, int* killerCount, int* spectatorCount);
	class ACamperPlayer* GetObsessionTarget();
	int GetNumberOfOtherActiveSurvivors(class ADBDPlayer** exception);
	int GetNumberOfActiveSurvivors();
	struct FName GetMapThemeName();
	class ADBDPlayerState* GetLocalPlayerState();
	class ADBDPlayer* GetLocalPlayerPawn();
	class APawn* GetLocalPlayerBasePawn();
	struct FBuiltLevelData GetLevelData();
	float GetKillerIntroCompletedNormalized();
	class ASlasherPlayer* GetKiller();
	bool GetIsGameEnded();
	TArray<class ASearchable*> GetInGameSearchables();
	TArray<class APallet*> GetInGamePallets();
	TArray<class AMeatHook*> GetInGameMeatHooks();
	TArray<class AHatch*> GetInGameHatches();
	TArray<class AGenerator*> GetInGameGenerators();
	TArray<class AEscapeDoor*> GetInGameEscapeDoors();
	bool GetGameLevelLoaded();
	class UEndGameStateComponent* GetEndGameStateComponent();
	class UCharacterCollection* GetCharacterCollection();
	void CallOnSlasherSet(struct FScriptDelegate* callback);
	void CallOnLevelReadyToPlay(struct FScriptDelegate* callback);
	void BroadcastOnSetBuildLevelData();
	void Authority_SetSurvivorLeft(int* survivorRemaining);
	void Authority_SetServerJoiningData(struct FServerJoiningData* joiningData);
	void Authority_SetLevelReadyToPlay();
	void Authority_SetHatchOpen(bool* OPENED);
	void Authority_SetGameSelectedOffering(TArray<struct FSelectedOffering>* offerings);
	void Authority_SetGameLevelLoaded();
	void Authority_SetGameLevelEnded(EEndGameReason* endGameReason);
	void Authority_SetGameLevelCreated();
	void Authority_SetEscapeDoorOpened(bool* OPENED);
	void Authority_SetAllPlayerLoaded();
	void Authority_EvaluateObsessionTarget(class ADBDPlayer** potentialTarget);
	void Authority_EscapeThroughHatch();
	void Authority_EnableObsession();
	void AddTrap(class AInteractable** toAdd);
};


// Class DBDCompetence.TestStatusEffect
// 0x0000 (0x02C0 - 0x02C0)
class UTestStatusEffect : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.TestStatusEffect"));

		return ptr;
	}


	bool ShouldDisplayStatusEffectIcon();
	void SetStatusEffectIconPercentage(float* value);
	void SetShouldDisplay(bool* On);
	void OnShouldDisplayChanged(bool* currentValue);
	void OnRep_ShouldDisplay();
	void Multicast_SetRemainingLifetime(float* Lifetime);
	void Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay);
	bool IsOriginatorHooked();
	bool IsOriginatorAlive();
	bool IsKillerInOriginatorRange(float* AdditiveRangeModifier);
	bool IsInOriginatorRange();
	void InitializeLifetime(float* Lifetime);
	float GetStatusEffectCooldownRate();
	bool GetShouldDisplay();
	class ADBDPlayer* GetOriginatingPlayer();
	float GetLifetimeDuration();
	void FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay);
	void BroadcastOriginatorGameEventNotification();
	void BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory);
	void Authority_SetRemainingLifetime(float* Lifetime);
	void Authority_RemoveSelf();
	void Authority_EndSelf();
};


// Class DBDCompetence.TheMettleOfMan
// 0x0038 (0x0388 - 0x0350)
class UTheMettleOfMan : public UPerk
{
public:
	int                                                _tokenNeededToActivate[0x3];                              // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _revealOutsideRange[0x3];                                 // 0x035C(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _mustBeInjured;                                           // 0x0368(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	int                                                _numTokenSoFar;                                           // 0x036C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	ETheMettleOfManPhase                               _currentPhase;                                            // 0x0370(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0371(0x000F) MISSED OFFSET
	class UStatusEffect*                               _revealToKillerEffect;                                    // 0x0380(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.TheMettleOfMan"));

		return ptr;
	}


	void ShowOnKOPreventedFX();
	void Multicast_OnKOPrevented();
};


// Class DBDCompetence.ThrillingTremors
// 0x0060 (0x03B0 - 0x0350)
class UThrillingTremors : public UPerk
{
public:
	int                                                _cooldownByLevel[0x3];                                    // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _durationByLevel[0x3];                                    // 0x035C(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _disableWhenSurvivorPutDownOrUnhooked;                    // 0x0368(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	struct FLinearColor                                _generatorAuraColorForKiller;                             // 0x036C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	TArray<class AGenerator*>                          _blockedGenerators;                                       // 0x0380(0x0010) (Net, ZeroConstructor, Transient)
	TArray<class AGenerator*>                          _revealedGenerators;                                      // 0x0390(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.ThrillingTremors"));

		return ptr;
	}


	void OnRep_BlockedGenerators();
};


// Class DBDCompetence.TimedObliviousEffect
// 0x0000 (0x02C0 - 0x02C0)
class UTimedObliviousEffect : public UObliviousEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.TimedObliviousEffect"));

		return ptr;
	}


	bool ShouldDisplayStatusEffectIcon();
	void SetStatusEffectIconPercentage(float* value);
	void SetShouldDisplay(bool* On);
	void OnShouldDisplayChanged(bool* currentValue);
	void OnRep_ShouldDisplay();
	void Multicast_SetRemainingLifetime(float* Lifetime);
	void Multicast_InitializeStatusEffect(struct FName* statusEffectId, class ADBDPlayer** originatingPlayer, float* customParam, class UGameplayModifierContainer** originatingEffect, bool* shouldDisplay);
	bool IsOriginatorHooked();
	bool IsOriginatorAlive();
	bool IsKillerInOriginatorRange(float* AdditiveRangeModifier);
	bool IsInOriginatorRange();
	void InitializeLifetime(float* Lifetime);
	float GetStatusEffectCooldownRate();
	bool GetShouldDisplay();
	class ADBDPlayer* GetOriginatingPlayer();
	float GetLifetimeDuration();
	void FireActiveStatusEffectEvent(float* percentage, int* LevelToDisplay);
	void BroadcastOriginatorGameEventNotification();
	void BroadcastGameEventNotification(struct FGameplayNotificationData* notificationData, bool* addToHistory);
	void Authority_SetRemainingLifetime(float* Lifetime);
	void Authority_RemoveSelf();
	void Authority_EndSelf();
};


// Class DBDCompetence.WeddingRing
// 0x0008 (0x0240 - 0x0238)
class UWeddingRing : public UItemAddon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.WeddingRing"));

		return ptr;
	}


	void OnPostItemAddonsCreation(class ADBDPlayer** Player, class ACollectable** Item);
	void Multicast_SetBaseItem(class ACollectable** baseItem);
	void Multicast_InitializeItemAddon(struct FName* addonID, EInventoryItemType* ItemType);
	void Multicast_AddAddonToItem(class ACollectable** Item);
	bool IsReadyForInitialization();
	void InitializeAddon();
	void DebugPrintStats();
	void Authority_OnCollectablePickedUp(class ADBDPlayer** Player);
	void Authority_OnCollectableDropped(class ADBDPlayer** Player);
	void ApplyMetaModifiers();
};


// Class DBDCompetence.YamaokaFamilyCrest
// 0x0038 (0x0270 - 0x0238)
class UYamaokaFamilyCrest : public UItemAddon
{
public:
	float                                              _revealDuration;                                          // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _revealRange;                                             // 0x023C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ACamperPlayer*>                       _survivorsToReveal;                                       // 0x0240(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      _addonActivationCount;                                    // 0x0250(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0251(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.YamaokaFamilyCrest"));

		return ptr;
	}


	void RevealSurvivor(class ACamperPlayer** survivorToReveal);
	void OnRep_AddonActivationCount();
};


// Class DBDCompetence.ZanshinTactics
// 0x0010 (0x0360 - 0x0350)
class UZanshinTactics : public UPerk
{
public:
	float                                              _cooldownDuration[0x3];                                   // 0x0350(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDCompetence.ZanshinTactics"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
