#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheTrapper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TheTrapper.BearTrap.SetTrappedPlayer
struct ABearTrap_SetTrappedPlayer_Params
{
	class ADBDPlayer**                                 trappedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheTrapper.BearTrap.SetIsTrapSet
struct ABearTrap_SetIsTrapSet_Params
{
	bool*                                              value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheTrapper.BearTrap.OnSafetyZoneEndOverlap
struct ABearTrap_OnSafetyZoneEndOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheTrapper.BearTrap.IsTrapSet
struct ABearTrap_IsTrapSet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheTrapper.BearTrap.IsTrapperOutOfSafetyZone
struct ABearTrap_IsTrapperOutOfSafetyZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheTrapper.BearTrap.InitalizeTrapZone
struct ABearTrap_InitalizeTrapZone_Params
{
	class UPrimitiveComponent**                        Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TheTrapper.BearTrap.InitalizeTrapSurvivorInteraction
struct ABearTrap_InitalizeTrapSurvivorInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TheTrapper.BearTrap.InitalizeTrapKillerInteraction
struct ABearTrap_InitalizeTrapKillerInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TheTrapper.BearTrap.InitalizeSafetyZone
struct ABearTrap_InitalizeSafetyZone_Params
{
	class UPrimitiveComponent**                        Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TheTrapper.BearTrap.HasTrappedPlayer
struct ABearTrap_HasTrappedPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheTrapper.BearTrap.GetTrappedPlayer
struct ABearTrap_GetTrappedPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheTrapper.BearTrap.GetAnimInstance
struct ABearTrap_GetAnimInstance_Params
{
	class UBearTrapAnimInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheTrapper.BearTrap.CanTrap
struct ABearTrap_CanTrap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed
struct UBearTrapAnimInstance_SetWasJustDisarmed_Params
{
	bool*                                              wasJustDisarmed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet
struct UBearTrapAnimInstance_SetIsTrapSet_Params
{
	bool*                                              IsTrapSet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheTrapper.BearTrapAnimInstance.SetIsBroken
struct UBearTrapAnimInstance_SetIsBroken_Params
{
	bool*                                              IsBroken;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected
struct UBearTrapAnimInstance_SetIsBeingCollected_Params
{
	bool*                                              isBeingCollected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor
struct UBearTrapAnimInstance_SetContainsSurvivor_Params
{
	bool*                                              containsSurvivor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.OnPostItemAddonsCreation
struct UIridescentStone_OnPostItemAddonsCreation_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ACollectable**                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Multicast_SetBaseItem
struct UIridescentStone_Multicast_SetBaseItem_Params
{
	class ACollectable**                               baseItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Multicast_InitializeItemAddon
struct UIridescentStone_Multicast_InitializeItemAddon_Params
{
	struct FName*                                      addonID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EInventoryItemType*                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Multicast_AddAddonToItem
struct UIridescentStone_Multicast_AddAddonToItem_Params
{
	class ACollectable**                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.IsReadyForInitialization
struct UIridescentStone_IsReadyForInitialization_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.InitializeAddon
struct UIridescentStone_InitializeAddon_Params
{
};

// Function DeadByDaylight.ItemAddon.DebugPrintStats
struct UIridescentStone_DebugPrintStats_Params
{
};

// Function DeadByDaylight.ItemAddon.Authority_OnCollectablePickedUp
struct UIridescentStone_Authority_OnCollectablePickedUp_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Authority_OnCollectableDropped
struct UIridescentStone_Authority_OnCollectableDropped_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.ApplyMetaModifiers
struct UIridescentStone_ApplyMetaModifiers_Params
{
};

// Function DeadByDaylight.ChargeableInteractionDefinition.ShouldShowSpeedProficiencyForMultipleInteractors
struct UUntrap_ShouldShowSpeedProficiencyForMultipleInteractors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.SetSpeedBase
struct UUntrap_SetSpeedBase_Params
{
	float*                                             speedBase;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.SetChargeableComponent
struct UUntrap_SetChargeableComponent_Params
{
	class UChargeableComponent**                       ChargeableComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthorityBP
struct UUntrap_OnSkillCheckResponseAuthorityBP_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthority
struct UUntrap_OnSkillCheckResponseAuthority_Params
{
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TriggerLoudNoise;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAestheticBP
struct UUntrap_OnSkillCheckResponseAestheticBP_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAesthetic
struct UUntrap_OnSkillCheckResponseAesthetic_Params
{
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TriggerLoudNoise;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnInteractionCompletionStateChanged
struct UUntrap_OnInteractionCompletionStateChanged_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              complete;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnChargeableChangedBP
struct UUntrap_OnChargeableChangedBP_Params
{
	class UChargeableComponent**                       oldChargeable;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChargeableComponent**                       newChargeable;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.HasSkillCheckHappened
struct UUntrap_HasSkillCheckHappened_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetTunableValue
struct UUntrap_GetTunableValue_Params
{
	struct FName*                                      TunableValueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             defaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSuccessProbability
struct UUntrap_GetSuccessProbability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckProbability
struct UUntrap_GetSkillCheckProbability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailureTimePenalty
struct UUntrap_GetSkillCheckFailureTimePenalty_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailurePercentPenalty
struct UUntrap_GetSkillCheckFailurePercentPenalty_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckDifficulityModifier
struct UUntrap_GetSkillCheckDifficulityModifier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckCharge
struct UUntrap_GetSkillCheckCharge_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetPipsPassed
struct UUntrap_GetPipsPassed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetPerkMultiplier
struct UUntrap_GetPerkMultiplier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetMultiplicativeLuckBonus
struct UUntrap_GetMultiplicativeLuckBonus_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetMaxCharge
struct UUntrap_GetMaxCharge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetItemEfficiencyModifier
struct UUntrap_GetItemEfficiencyModifier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetGoodSkillCheckSuccessPercentReward
struct UUntrap_GetGoodSkillCheckSuccessPercentReward_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeSpeedModifier
struct UUntrap_GetChargeSpeedModifier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeAmountForTime
struct UUntrap_GetChargeAmountForTime_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeableComponent
struct UUntrap_GetChargeableComponent_Params
{
	class UChargeableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckZoneSizeModifier
struct UUntrap_GetBonusSkillCheckZoneSizeModifier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckSuccessPercentReward
struct UUntrap_GetBonusSkillCheckSuccessPercentReward_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetBlueprintChargeSpeedMultiplier
struct UUntrap_GetBlueprintChargeSpeedMultiplier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveLuckBonus
struct UUntrap_GetAdditiveLuckBonus_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveChargeTimeReductionAsMultiplier
struct UUntrap_GetAdditiveChargeTimeReductionAsMultiplier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.Authority_ChargeWithItem
struct UUntrap_Authority_ChargeWithItem_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ACollectable**                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.AddCharge
struct UUntrap_AddCharge_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
