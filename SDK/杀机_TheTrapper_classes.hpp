#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheTrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TheTrapper.BearTrap
// 0x0060 (0x0530 - 0x04D0)
class ABearTrap : public ACollectable
{
public:
	class UBoxPlayerOverlapComponent*                  _interactionVolume;                                       // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USpherePlayerOverlapComponent*               _pickTrapZone;                                            // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               _isTrapSet;                                               // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    _onIsTrapSetChanged;                                      // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UInteractor*                                 _collectInteractor;                                       // 0x04F8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               _isTrapperOutOfSafetyZone;                                // 0x0500(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         _safetyZone;                                              // 0x0508(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         _trapZone;                                                // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInteractionDefinition*                      _trapSurvivor;                                            // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInteractionDefinition*                      _trapKiller;                                              // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer*                                  _trappedPlayer;                                           // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheTrapper.BearTrap"));

		return ptr;
	}


	void SetTrappedPlayer(class ADBDPlayer** trappedPlayer);
	void SetIsTrapSet(bool* value);
	void OnSafetyZoneEndOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	bool IsTrapSet();
	bool IsTrapperOutOfSafetyZone();
	void InitalizeTrapZone(class UPrimitiveComponent** Primitive);
	void InitalizeTrapSurvivorInteraction(class UInteractionDefinition** Interaction);
	void InitalizeTrapKillerInteraction(class UInteractionDefinition** Interaction);
	void InitalizeSafetyZone(class UPrimitiveComponent** Primitive);
	bool HasTrappedPlayer();
	class ADBDPlayer* GetTrappedPlayer();
	class UBearTrapAnimInstance* GetAnimInstance();
	bool CanTrap();
};


// Class TheTrapper.BearTrapAnimInstance
// 0x0000 (0x0280 - 0x0280)
class UBearTrapAnimInstance : public USleepingAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheTrapper.BearTrapAnimInstance"));

		return ptr;
	}


	void SetWasJustDisarmed(bool* wasJustDisarmed);
	void SetIsTrapSet(bool* IsTrapSet);
	void SetIsBroken(bool* IsBroken);
	void SetIsBeingCollected(bool* isBeingCollected);
	void SetContainsSurvivor(bool* containsSurvivor);
};


// Class TheTrapper.IridescentStone
// 0x0000 (0x0238 - 0x0238)
class UIridescentStone : public UItemAddon
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheTrapper.IridescentStone"));

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


// Class TheTrapper.Untrap
// 0x0000 (0x05E0 - 0x05E0)
class UUntrap : public UChargeableInteractionDefinition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheTrapper.Untrap"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
