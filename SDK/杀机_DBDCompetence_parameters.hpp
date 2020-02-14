#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_DBDCompetence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
struct UAbilityStealthUndetectableEffect_ShouldDisplayStatusEffectIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
struct UAbilityStealthUndetectableEffect_SetStatusEffectIconPercentage_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetShouldDisplay
struct UAbilityStealthUndetectableEffect_SetShouldDisplay_Params
{
	bool*                                              On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
struct UAbilityStealthUndetectableEffect_OnShouldDisplayChanged_Params
{
	bool*                                              currentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
struct UAbilityStealthUndetectableEffect_OnRep_ShouldDisplay_Params
{
};

// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
struct UAbilityStealthUndetectableEffect_Multicast_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
struct UAbilityStealthUndetectableEffect_Multicast_InitializeStatusEffect_Params
{
	struct FName*                                      statusEffectId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer**                 originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              shouldDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
struct UAbilityStealthUndetectableEffect_IsOriginatorHooked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
struct UAbilityStealthUndetectableEffect_IsOriginatorAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
struct UAbilityStealthUndetectableEffect_IsKillerInOriginatorRange_Params
{
	float*                                             AdditiveRangeModifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
struct UAbilityStealthUndetectableEffect_IsInOriginatorRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.InitializeLifetime
struct UAbilityStealthUndetectableEffect_InitializeLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
struct UAbilityStealthUndetectableEffect_GetStatusEffectCooldownRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetShouldDisplay
struct UAbilityStealthUndetectableEffect_GetShouldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
struct UAbilityStealthUndetectableEffect_GetOriginatingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
struct UAbilityStealthUndetectableEffect_GetLifetimeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
struct UAbilityStealthUndetectableEffect_FireActiveStatusEffectEvent_Params
{
	float*                                             percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
struct UAbilityStealthUndetectableEffect_BroadcastOriginatorGameEventNotification_Params
{
};

// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
struct UAbilityStealthUndetectableEffect_BroadcastGameEventNotification_Params
{
	struct FGameplayNotificationData*                  notificationData;                                         // (Parm)
	bool*                                              addToHistory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
struct UAbilityStealthUndetectableEffect_Authority_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
struct UAbilityStealthUndetectableEffect_Authority_RemoveSelf_Params
{
};

// Function DeadByDaylight.StatusEffect.Authority_EndSelf
struct UAbilityStealthUndetectableEffect_Authority_EndSelf_Params
{
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UAllHexTotemsAreActive_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UAllHexTotemsAreActive_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UAllHexTotemsAreActive_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UAllHexTotemsAreActive_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UAllHexTotemsAreActive_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted
struct UAnyMeansNecessary_Authority_OnPalletPullUpStarted_Params
{
	struct FGameplayTag*                               GameplayTag;                                              // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp
struct UAnyMeansNecessary_Authority_OnPalletPulledUp_Params
{
	struct FGameplayTag*                               GameplayTag;                                              // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved
struct UAnySurvivorHasObjectState_OnSurvivorRemoved_Params
{
	class ACamperPlayer**                              Survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded
struct UAnySurvivorHasObjectState_OnSurvivorAdded_Params
{
	class ACamperPlayer**                              Survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
struct UBabysitterEffect_ShouldDisplayStatusEffectIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
struct UBabysitterEffect_SetStatusEffectIconPercentage_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetShouldDisplay
struct UBabysitterEffect_SetShouldDisplay_Params
{
	bool*                                              On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
struct UBabysitterEffect_OnShouldDisplayChanged_Params
{
	bool*                                              currentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
struct UBabysitterEffect_OnRep_ShouldDisplay_Params
{
};

// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
struct UBabysitterEffect_Multicast_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
struct UBabysitterEffect_Multicast_InitializeStatusEffect_Params
{
	struct FName*                                      statusEffectId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer**                 originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              shouldDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
struct UBabysitterEffect_IsOriginatorHooked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
struct UBabysitterEffect_IsOriginatorAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
struct UBabysitterEffect_IsKillerInOriginatorRange_Params
{
	float*                                             AdditiveRangeModifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
struct UBabysitterEffect_IsInOriginatorRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.InitializeLifetime
struct UBabysitterEffect_InitializeLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
struct UBabysitterEffect_GetStatusEffectCooldownRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetShouldDisplay
struct UBabysitterEffect_GetShouldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
struct UBabysitterEffect_GetOriginatingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
struct UBabysitterEffect_GetLifetimeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
struct UBabysitterEffect_FireActiveStatusEffectEvent_Params
{
	float*                                             percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
struct UBabysitterEffect_BroadcastOriginatorGameEventNotification_Params
{
};

// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
struct UBabysitterEffect_BroadcastGameEventNotification_Params
{
	struct FGameplayNotificationData*                  notificationData;                                         // (Parm)
	bool*                                              addToHistory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
struct UBabysitterEffect_Authority_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
struct UBabysitterEffect_Authority_RemoveSelf_Params
{
};

// Function DeadByDaylight.StatusEffect.Authority_EndSelf
struct UBabysitterEffect_Authority_EndSelf_Params
{
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UBaseIsPerkUsableCondition_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UBaseIsPerkUsableCondition_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UBaseIsPerkUsableCondition_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UBaseIsPerkUsableCondition_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UBaseIsPerkUsableCondition_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
struct UBaseIsPlayerPerformingInteraction_UpdateIsTrue_Params
{
};

// Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
struct UBaseIsPlayerPerformingInteraction_SetInteractionSemantics_Params
{
	struct FGameplayTagContainer*                      interactionSemantics;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair
struct UBetterTogether_OnStartedGeneratorRepair_Params
{
	struct FGameplayTag*                               GameplayTag;                                              // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DBDCompetence.Breakout.OnSlasherSet
struct UBreakout_OnSlasherSet_Params
{
	class ASlasherPlayer**                             Slasher;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.Breakout.OnRep_IsPerkActive
struct UBreakout_OnRep_IsPerkActive_Params
{
};

// Function DBDCompetence.Breakout.Authority_OnRangeChanged
struct UBreakout_Authority_OnRangeChanged_Params
{
	bool*                                              InRange;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect
struct UBreakout_Authority_ImposeWiggleStatusEffect_Params
{
	class ACamperPlayer**                              Survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.Camaraderie.Authority_EnablePerk
struct UCamaraderie_Authority_EnablePerk_Params
{
};

// Function DBDCompetence.CorruptIntervention.Server_ActivatePerk
struct UCorruptIntervention_Server_ActivatePerk_Params
{
};

// Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted
struct UCorruptIntervention_Local_OnIntroCompleted_Params
{
};

// Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded
struct UDecisiveStrike_OnUnhookedTimerEnded_Params
{
};

// Function DBDCompetence.DecisiveStrike.OnSkillCheck
struct UDecisiveStrike_OnSkillCheck_Params
{
	bool*                                              hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted
struct UDecisiveStrike_OnRep_HasBeenAttempted_Params
{
};

// Function DBDCompetence.DecisiveStrike.OnPickUpEnded
struct UDecisiveStrike_OnPickUpEnded_Params
{
	class ADBDPlayer**                                 picker;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp
struct UDecisiveStrike_OnOwnerPickedUp_Params
{
	class ADBDPlayer**                                 picker;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
struct UDelayedHealEffect_ShouldDisplayStatusEffectIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
struct UDelayedHealEffect_SetStatusEffectIconPercentage_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetShouldDisplay
struct UDelayedHealEffect_SetShouldDisplay_Params
{
	bool*                                              On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
struct UDelayedHealEffect_OnShouldDisplayChanged_Params
{
	bool*                                              currentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
struct UDelayedHealEffect_OnRep_ShouldDisplay_Params
{
};

// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
struct UDelayedHealEffect_Multicast_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
struct UDelayedHealEffect_Multicast_InitializeStatusEffect_Params
{
	struct FName*                                      statusEffectId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer**                 originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              shouldDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
struct UDelayedHealEffect_IsOriginatorHooked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
struct UDelayedHealEffect_IsOriginatorAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
struct UDelayedHealEffect_IsKillerInOriginatorRange_Params
{
	float*                                             AdditiveRangeModifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
struct UDelayedHealEffect_IsInOriginatorRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.InitializeLifetime
struct UDelayedHealEffect_InitializeLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
struct UDelayedHealEffect_GetStatusEffectCooldownRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetShouldDisplay
struct UDelayedHealEffect_GetShouldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
struct UDelayedHealEffect_GetOriginatingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
struct UDelayedHealEffect_GetLifetimeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
struct UDelayedHealEffect_FireActiveStatusEffectEvent_Params
{
	float*                                             percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
struct UDelayedHealEffect_BroadcastOriginatorGameEventNotification_Params
{
};

// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
struct UDelayedHealEffect_BroadcastGameEventNotification_Params
{
	struct FGameplayNotificationData*                  notificationData;                                         // (Parm)
	bool*                                              addToHistory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
struct UDelayedHealEffect_Authority_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
struct UDelayedHealEffect_Authority_RemoveSelf_Params
{
};

// Function DeadByDaylight.StatusEffect.Authority_EndSelf
struct UDelayedHealEffect_Authority_EndSelf_Params
{
};

// Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive
struct UDistortion_OnRep_AuraBlockIsActive_Params
{
};

// Function DBDCompetence.Distortion.AuraBlockCanBeActive
struct UDistortion_AuraBlockCanBeActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.DoesPerkHaveToken.SetPerk
struct UDoesPerkHaveToken_SetPerk_Params
{
	class UPerk**                                      Perk;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk
struct UDoesPerkHaveToken_OnRep_Perk_Params
{
};

// Function DBDCompetence.DyingLight.OnObsessionChanged
struct UDyingLight_OnObsessionChanged_Params
{
	class ACamperPlayer**                              newObsession;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ACamperPlayer**                              previousObsession;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
struct UExposedEffect_ShouldDisplayStatusEffectIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
struct UExposedEffect_SetStatusEffectIconPercentage_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetShouldDisplay
struct UExposedEffect_SetShouldDisplay_Params
{
	bool*                                              On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
struct UExposedEffect_OnShouldDisplayChanged_Params
{
	bool*                                              currentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
struct UExposedEffect_OnRep_ShouldDisplay_Params
{
};

// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
struct UExposedEffect_Multicast_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
struct UExposedEffect_Multicast_InitializeStatusEffect_Params
{
	struct FName*                                      statusEffectId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer**                 originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              shouldDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
struct UExposedEffect_IsOriginatorHooked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
struct UExposedEffect_IsOriginatorAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
struct UExposedEffect_IsKillerInOriginatorRange_Params
{
	float*                                             AdditiveRangeModifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
struct UExposedEffect_IsInOriginatorRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.InitializeLifetime
struct UExposedEffect_InitializeLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
struct UExposedEffect_GetStatusEffectCooldownRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetShouldDisplay
struct UExposedEffect_GetShouldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
struct UExposedEffect_GetOriginatingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
struct UExposedEffect_GetLifetimeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
struct UExposedEffect_FireActiveStatusEffectEvent_Params
{
	float*                                             percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
struct UExposedEffect_BroadcastOriginatorGameEventNotification_Params
{
};

// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
struct UExposedEffect_BroadcastGameEventNotification_Params
{
	struct FGameplayNotificationData*                  notificationData;                                         // (Parm)
	bool*                                              addToHistory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
struct UExposedEffect_Authority_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
struct UExposedEffect_Authority_RemoveSelf_Params
{
};

// Function DeadByDaylight.StatusEffect.Authority_EndSelf
struct UExposedEffect_Authority_EndSelf_Params
{
};

// Function DeadByDaylight.Perk.SetIsUsable
struct UFixated_SetIsUsable_Params
{
	bool*                                              value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.OnRep_TokenCount
struct UFixated_OnRep_TokenCount_Params
{
	int*                                               oldCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.OnRep_IsUsable
struct UFixated_OnRep_IsUsable_Params
{
};

// Function DeadByDaylight.Perk.OnRep_CooldownTimer
struct UFixated_OnRep_CooldownTimer_Params
{
};

// Function DeadByDaylight.Perk.Multicast_InitializePerk
struct UFixated_Multicast_InitializePerk_Params
{
	struct FName*                                      PerkId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PerkLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             activatableInteractionInputType;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.IsHudIconTimerDone
struct UFixated_IsHudIconTimerDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Perk.IsCooldownTimerDone
struct UFixated_IsCooldownTimerDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Perk.GetTokenCount
struct UFixated_GetTokenCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Perk.GetPerkLevel
struct UFixated_GetPerkLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Perk.GetMaxTokenCount
struct UFixated_GetMaxTokenCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Perk.GetIsUsable
struct UFixated_GetIsUsable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Perk.GetHudIconTimerElapsedTimePercent
struct UFixated_GetHudIconTimerElapsedTimePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Perk.GetCooldownTimer
struct UFixated_GetCooldownTimer_Params
{
	class UTimerObject*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Perk.FireActivePerkEvent
struct UFixated_FireActivePerkEvent_Params
{
	float*                                             percentage;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               chargeCount;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.Authority_TriggerHudIconTimer
struct UFixated_Authority_TriggerHudIconTimer_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.Authority_TriggerCooldownTimer
struct UFixated_Authority_TriggerCooldownTimer_Params
{
	float*                                             coolddownTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.Authority_SetTokenCount
struct UFixated_Authority_SetTokenCount_Params
{
	int*                                               value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.Authority_SetMaxTokenCount
struct UFixated_Authority_SetMaxTokenCount_Params
{
	int*                                               value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.Authority_SetIsUsable
struct UFixated_Authority_SetIsUsable_Params
{
	bool*                                              value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.Authority_IncrementToken
struct UFixated_Authority_IncrementToken_Params
{
};

// Function DeadByDaylight.Perk.Authority_DecrementToken
struct UFixated_Authority_DecrementToken_Params
{
};

// Function DBDCompetence.FlipFlop.Authority_OnPickedUp
struct UFlipFlop_Authority_OnPickedUp_Params
{
	class ADBDPlayer**                                 picker;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HeadOn.OnPawnOverlapExit
struct UHeadOn_OnPawnOverlapExit_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HeadOn.OnPawnOverlapEnter
struct UHeadOn_OnPawnOverlapEnter_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete
struct UHeadOn_OnHeadOnAnimationComplete_Params
{
};

// Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction
struct UHeadOn_CanApplyHeadOnInteraction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.HeadOn.Authority_ActivatePerk
struct UHeadOn_Authority_ActivatePerk_Params
{
};

// Function DBDCompetence.HexPerk.ReceiveGameplayEvent
struct UHexPerk_ReceiveGameplayEvent_Params
{
	EDBDScoreTypes*                                    gameplayEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent
struct UHexPerk_OnHexPerkGameplayEvent_Params
{
	EDBDScoreTypes*                                    gameplayEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.Multicast_UnbindFromTotem
struct UHexPerk_Multicast_UnbindFromTotem_Params
{
	class ATotem**                                     aTotemActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.Multicast_BindToTotems
struct UHexPerk_Multicast_BindToTotems_Params
{
	TArray<class ATotem*>*                             totemActors;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
struct UHexPerk_IsCurseRevealedToPlayer_Params
{
	int*                                               playerUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.GetTotems
struct UHexPerk_GetTotems_Params
{
	TArray<class ATotem*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DBDCompetence.HexPerk.GetDistanceToOwner
struct UHexPerk_GetDistanceToOwner_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.GetBoundTotems
struct UHexPerk_GetBoundTotems_Params
{
	TArray<class ATotem*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DBDCompetence.HexPerk.FireCursedStatusOnLocalPlayer
struct UHexPerk_FireCursedStatusOnLocalPlayer_Params
{
};

// Function DBDCompetence.HexPerk.Authority_UnbindFromTotem
struct UHexPerk_Authority_UnbindFromTotem_Params
{
	class ATotem**                                     aTotemActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
struct UHexPerk_Authority_SetCurseRevealedToPlayer_Params
{
	int*                                               playerUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.Authority_BindToDullTotems
struct UHexPerk_Authority_BindToDullTotems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.ReceiveGameplayEvent
struct UHexHauntedGround_ReceiveGameplayEvent_Params
{
	EDBDScoreTypes*                                    gameplayEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent
struct UHexHauntedGround_OnHexPerkGameplayEvent_Params
{
	EDBDScoreTypes*                                    gameplayEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.Multicast_UnbindFromTotem
struct UHexHauntedGround_Multicast_UnbindFromTotem_Params
{
	class ATotem**                                     aTotemActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.Multicast_BindToTotems
struct UHexHauntedGround_Multicast_BindToTotems_Params
{
	TArray<class ATotem*>*                             totemActors;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
struct UHexHauntedGround_IsCurseRevealedToPlayer_Params
{
	int*                                               playerUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.GetTotems
struct UHexHauntedGround_GetTotems_Params
{
	TArray<class ATotem*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DBDCompetence.HexPerk.GetDistanceToOwner
struct UHexHauntedGround_GetDistanceToOwner_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.GetBoundTotems
struct UHexHauntedGround_GetBoundTotems_Params
{
	TArray<class ATotem*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DBDCompetence.HexPerk.FireCursedStatusOnLocalPlayer
struct UHexHauntedGround_FireCursedStatusOnLocalPlayer_Params
{
};

// Function DBDCompetence.HexPerk.Authority_UnbindFromTotem
struct UHexHauntedGround_Authority_UnbindFromTotem_Params
{
	class ATotem**                                     aTotemActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
struct UHexHauntedGround_Authority_SetCurseRevealedToPlayer_Params
{
	int*                                               playerUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HexPerk.Authority_BindToDullTotems
struct UHexHauntedGround_Authority_BindToDullTotems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.HexRuin.Authority_ConstructActivationTimersMap
struct UHexRuin_Authority_ConstructActivationTimersMap_Params
{
};

// Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel
struct UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Params
{
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays
struct UHighestLevelAndClosestEffectCondition_InitEffectArrays_Params
{
	struct FName*                                      effectIDLevel1;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      effectIDLevel2;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      effectIDLevel3;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise
struct UImAllEars_Server_OnCamperLoudNoise_Params
{
	struct FGameplayTag*                               GameplayTag;                                              // (ConstParm, Parm)
	struct FGameEventData*                             GameEventData;                                            // (ConstParm, Parm, ReferenceParm)
};

// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
struct UImmediateUndetectableEffect_ShouldDisplayStatusEffectIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
struct UImmediateUndetectableEffect_SetStatusEffectIconPercentage_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetShouldDisplay
struct UImmediateUndetectableEffect_SetShouldDisplay_Params
{
	bool*                                              On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
struct UImmediateUndetectableEffect_OnShouldDisplayChanged_Params
{
	bool*                                              currentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
struct UImmediateUndetectableEffect_OnRep_ShouldDisplay_Params
{
};

// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
struct UImmediateUndetectableEffect_Multicast_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
struct UImmediateUndetectableEffect_Multicast_InitializeStatusEffect_Params
{
	struct FName*                                      statusEffectId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer**                 originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              shouldDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
struct UImmediateUndetectableEffect_IsOriginatorHooked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
struct UImmediateUndetectableEffect_IsOriginatorAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
struct UImmediateUndetectableEffect_IsKillerInOriginatorRange_Params
{
	float*                                             AdditiveRangeModifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
struct UImmediateUndetectableEffect_IsInOriginatorRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.InitializeLifetime
struct UImmediateUndetectableEffect_InitializeLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
struct UImmediateUndetectableEffect_GetStatusEffectCooldownRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetShouldDisplay
struct UImmediateUndetectableEffect_GetShouldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
struct UImmediateUndetectableEffect_GetOriginatingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
struct UImmediateUndetectableEffect_GetLifetimeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
struct UImmediateUndetectableEffect_FireActiveStatusEffectEvent_Params
{
	float*                                             percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
struct UImmediateUndetectableEffect_BroadcastOriginatorGameEventNotification_Params
{
};

// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
struct UImmediateUndetectableEffect_BroadcastGameEventNotification_Params
{
	struct FGameplayNotificationData*                  notificationData;                                         // (Parm)
	bool*                                              addToHistory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
struct UImmediateUndetectableEffect_Authority_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
struct UImmediateUndetectableEffect_Authority_RemoveSelf_Params
{
};

// Function DeadByDaylight.StatusEffect.Authority_EndSelf
struct UImmediateUndetectableEffect_Authority_EndSelf_Params
{
};

// Function DBDCompetence.InfectiousFright.RevealSurvivorLocation
struct UInfectiousFright_RevealSurvivorLocation_Params
{
	class ACamperPlayer**                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount
struct UInfectiousFright_OnRep_PerkActivationCount_Params
{
};

// Function DBDCompetence.InnerStrength.OnRep_PerkEnabled
struct UInnerStrength_OnRep_PerkEnabled_Params
{
};

// Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged
struct UInnerStrength_OnPlayerImmobilizeStateChanged_Params
{
	ECamperImmobilizeState*                            oldImmobilizeState;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ECamperImmobilizeState*                            newImmobilizeState;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UIsActivationTimerActive_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UIsActivationTimerActive_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UIsActivationTimerActive_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UIsActivationTimerActive_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UIsActivationTimerActive_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UIsActivationTimerActiveAndNotPaused_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UIsActivationTimerActiveAndNotPaused_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UIsActivationTimerActiveAndNotPaused_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UIsActivationTimerActiveAndNotPaused_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UIsActivationTimerActiveAndNotPaused_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UIsClosestEffectCondition_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UIsClosestEffectCondition_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UIsClosestEffectCondition_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UIsClosestEffectCondition_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UIsClosestEffectCondition_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Competence.RangeBasedCondition.OnRep_Range
struct UIsInAnyHookedSurvivorOriginatorAuraReadingRange_OnRep_Range_Params
{
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UIsLifetimeActive_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UIsLifetimeActive_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UIsLifetimeActive_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UIsLifetimeActive_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UIsLifetimeActive_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UIsOriginatingPerkUsableCondition_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UIsOriginatingPerkUsableCondition_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UIsOriginatingPerkUsableCondition_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UIsOriginatingPerkUsableCondition_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UIsOriginatingPerkUsableCondition_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UIsOwningPlayerLastSurvivor_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UIsOwningPlayerLastSurvivor_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UIsOwningPlayerLastSurvivor_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UIsOwningPlayerLastSurvivor_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UIsOwningPlayerLastSurvivor_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UIsPerkUsableCondition_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UIsPerkUsableCondition_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UIsPerkUsableCondition_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UIsPerkUsableCondition_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UIsPerkUsableCondition_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
struct UIsPlayerPerformingItemInteraction_UpdateIsTrue_Params
{
};

// Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
struct UIsPlayerPerformingItemInteraction_SetInteractionSemantics_Params
{
	struct FGameplayTagContainer*                      interactionSemantics;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
struct UIsPlayerPerformingInteraction_UpdateIsTrue_Params
{
};

// Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
struct UIsPlayerPerformingInteraction_SetInteractionSemantics_Params
{
	struct FGameplayTagContainer*                      interactionSemantics;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DBDCompetence.LuckyBreak.OnDamageStateChanged
struct ULuckyBreak_OnDamageStateChanged_Params
{
	ECamperDamageState*                                oldDamageState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ECamperDamageState*                                currentDamageState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.LuckyBreak.ActivationTimerEnded
struct ULuckyBreak_ActivationTimerEnded_Params
{
};

// Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect
struct UNoOneLeftBehind_GetSpeedBoostEffect_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
struct UObliviousEffect_ShouldDisplayStatusEffectIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
struct UObliviousEffect_SetStatusEffectIconPercentage_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetShouldDisplay
struct UObliviousEffect_SetShouldDisplay_Params
{
	bool*                                              On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
struct UObliviousEffect_OnShouldDisplayChanged_Params
{
	bool*                                              currentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
struct UObliviousEffect_OnRep_ShouldDisplay_Params
{
};

// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
struct UObliviousEffect_Multicast_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
struct UObliviousEffect_Multicast_InitializeStatusEffect_Params
{
	struct FName*                                      statusEffectId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer**                 originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              shouldDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
struct UObliviousEffect_IsOriginatorHooked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
struct UObliviousEffect_IsOriginatorAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
struct UObliviousEffect_IsKillerInOriginatorRange_Params
{
	float*                                             AdditiveRangeModifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
struct UObliviousEffect_IsInOriginatorRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.InitializeLifetime
struct UObliviousEffect_InitializeLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
struct UObliviousEffect_GetStatusEffectCooldownRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetShouldDisplay
struct UObliviousEffect_GetShouldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
struct UObliviousEffect_GetOriginatingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
struct UObliviousEffect_GetLifetimeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
struct UObliviousEffect_FireActiveStatusEffectEvent_Params
{
	float*                                             percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
struct UObliviousEffect_BroadcastOriginatorGameEventNotification_Params
{
};

// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
struct UObliviousEffect_BroadcastGameEventNotification_Params
{
	struct FGameplayNotificationData*                  notificationData;                                         // (Parm)
	bool*                                              addToHistory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
struct UObliviousEffect_Authority_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
struct UObliviousEffect_Authority_RemoveSelf_Params
{
};

// Function DeadByDaylight.StatusEffect.Authority_EndSelf
struct UObliviousEffect_Authority_EndSelf_Params
{
};

// Function DBDCompetence.OwningSlasherHasBeenStill.Authority_SetSecondsOfStillnessRequired
struct UOwningSlasherHasBeenStill_Authority_SetSecondsOfStillnessRequired_Params
{
	float*                                             secondsRequired;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UPlayerIsInExitArea_SetSubjectProviderClass_Params
{
	class UClass**                                     subjectProviderClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UPlayerIsInExitArea_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UPlayerIsInExitArea_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UPlayerIsInExitArea_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UPlayerIsInExitArea_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse
struct USolidarity_Authority_OnSkillCheckResponse_Params
{
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TriggerLoudNoise;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ChargeChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied
struct USolidarity_Authority_OnHealthChargeApplied_Params
{
	float*                                             IndividualChargeAmount;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalChargeAmount;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ChargeInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WasCoop;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.SpiesFromTheShadows.StartCooldownIfInRange
struct USpiesFromTheShadows_StartCooldownIfInRange_Params
{
	struct FVector*                                    loudNoiseLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged
struct USprintBurst_Authority_OnIsRunningAndMovingChanged_Params
{
	bool*                                              IsRunningAndMoving;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.Surge.Client_TriggerEffects
struct USurge_Client_TriggerEffects_Params
{
	TArray<class AGenerator*>*                         generators;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DBDCompetence.SurvivorMadnessEffect.Server_AddMadness
struct USurvivorMadnessEffect_Server_AddMadness_Params
{
	float*                                             madnessToAdd;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.SurvivorMadnessEffect.OnStaticBlastReceived_BP
struct USurvivorMadnessEffect_OnStaticBlastReceived_BP_Params
{
};

// Function DBDCompetence.SurvivorMadnessEffect.OnStaticBlastReceived
struct USurvivorMadnessEffect_OnStaticBlastReceived_Params
{
};

// Function DBDCompetence.SurvivorMadnessEffect.OnSnapOutOfIt_BP
struct USurvivorMadnessEffect_OnSnapOutOfIt_BP_Params
{
};

// Function DBDCompetence.SurvivorMadnessEffect.OnSnapOutOfIt
struct USurvivorMadnessEffect_OnSnapOutOfIt_Params
{
};

// Function DBDCompetence.SurvivorMadnessEffect.OnShockTherapyReceived_BP
struct USurvivorMadnessEffect_OnShockTherapyReceived_BP_Params
{
};

// Function DBDCompetence.SurvivorMadnessEffect.OnShockTherapyReceived
struct USurvivorMadnessEffect_OnShockTherapyReceived_Params
{
};

// Function DBDCompetence.SurvivorMadnessEffect.OnMadnessTierUp_BP
struct USurvivorMadnessEffect_OnMadnessTierUp_BP_Params
{
};

// Function DBDCompetence.SurvivorMadnessEffect.OnMadnessTierDown_BP
struct USurvivorMadnessEffect_OnMadnessTierDown_BP_Params
{
};

// Function DBDCompetence.SurvivorMadnessEffect.Multicast_OnMadnessTierUp
struct USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Params
{
};

// Function DBDCompetence.SurvivorMadnessEffect.Multicast_OnMadnessTierDown
struct USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Params
{
};

// Function DBDCompetence.SurvivorMadnessEffect.GetMadnessValue
struct USurvivorMadnessEffect_GetMadnessValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.SurvivorMadnessEffect.GetMadnessTier
struct USurvivorMadnessEffect_GetMadnessTier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDCompetence.SurvivorMadnessEffect.Authority_OnMadnessScreamTimerEnd_BP
struct USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Params
{
};

// Function DeadByDaylight.Collectable.SetVisibility
struct ATestCollectable_SetVisibility_Params
{
	bool*                                              Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.SetItemInteractor
struct ATestCollectable_SetItemInteractor_Params
{
	class UInteractor**                                Interactor;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.SetCount
struct ATestCollectable_SetCount_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.OnUseReleased
struct ATestCollectable_OnUseReleased_Params
{
};

// Function DeadByDaylight.Collectable.OnUse
struct ATestCollectable_OnUse_Params
{
};

// Function DeadByDaylight.Collectable.OnRep_State
struct ATestCollectable_OnRep_State_Params
{
};

// Function DeadByDaylight.Collectable.OnRep_Collector
struct ATestCollectable_OnRep_Collector_Params
{
};

// Function DeadByDaylight.Collectable.OnRep_BegunPlayFenceName
struct ATestCollectable_OnRep_BegunPlayFenceName_Params
{
};

// Function DeadByDaylight.Collectable.OnPostItemAddonsCreation
struct ATestCollectable_OnPostItemAddonsCreation_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.OnFenceInitialized
struct ATestCollectable_OnFenceInitialized_Params
{
};

// Function DeadByDaylight.Collectable.OnDropped
struct ATestCollectable_OnDropped_Params
{
};

// Function DeadByDaylight.Collectable.OnCustomizationChanged
struct ATestCollectable_OnCustomizationChanged_Params
{
};

// Function DeadByDaylight.Collectable.OnCollectorEndPlay
struct ATestCollectable_OnCollectorEndPlay_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.OnCollected
struct ATestCollectable_OnCollected_Params
{
	class ADBDPlayer**                                 collector;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.NotifyUpdated
struct ATestCollectable_NotifyUpdated_Params
{
};

// Function DeadByDaylight.Collectable.Multicast_UseReleased
struct ATestCollectable_Multicast_UseReleased_Params
{
};

// Function DeadByDaylight.Collectable.Multicast_Use
struct ATestCollectable_Multicast_Use_Params
{
};

// Function DeadByDaylight.Collectable.Multicast_RemoveItemAddon
struct ATestCollectable_Multicast_RemoveItemAddon_Params
{
	class UItemAddon**                                 addon;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Multicast_Dropped
struct ATestCollectable_Multicast_Dropped_Params
{
	class ADBDPlayer**                                 droppedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Multicast_Collected
struct ATestCollectable_Multicast_Collected_Params
{
	class ADBDPlayer**                                 collector;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Local_Dropped_Location
struct ATestCollectable_Local_Dropped_Location_Params
{
	class ADBDPlayer**                                 droppedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsStored
struct ATestCollectable_IsStored_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsRechargeable
struct ATestCollectable_IsRechargeable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsOnGround
struct ATestCollectable_IsOnGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsLocallyControlled
struct ATestCollectable_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsEquipped
struct ATestCollectable_IsEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsCountDisplayForced
struct ATestCollectable_IsCountDisplayForced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsCollected
struct ATestCollectable_IsCollected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsBeingUsed
struct ATestCollectable_IsBeingUsed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.HasGameplayModifierFlag
struct ATestCollectable_HasGameplayModifierFlag_Params
{
	struct FGameplayTag*                               modifierFlag;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetUsePercentLeft
struct ATestCollectable_GetUsePercentLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetModifierSum
struct ATestCollectable_GetModifierSum_Params
{
	struct FGameplayTag*                               ModifierType;                                             // (Parm)
	float*                                             defaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetModifierMax
struct ATestCollectable_GetModifierMax_Params
{
	struct FGameplayTag*                               ModifierType;                                             // (Parm)
	float*                                             defaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetItemInteractor
struct ATestCollectable_GetItemInteractor_Params
{
	class UInteractor*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetItemIconIndex
struct ATestCollectable_GetItemIconIndex_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetItemAddons
struct ATestCollectable_GetItemAddons_Params
{
	TArray<class UItemAddon*>                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.Collectable.GetIconFilePath
struct ATestCollectable_GetIconFilePath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.Collectable.GetCount
struct ATestCollectable_GetCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetCollector
struct ATestCollectable_GetCollector_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Discard
struct ATestCollectable_Discard_Params
{
	bool*                                              consumedDiscard;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.DebugPrintStats
struct ATestCollectable_DebugPrintStats_Params
{
};

// Function DeadByDaylight.Collectable.CanUse
struct ATestCollectable_CanUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.CanBeDropped
struct ATestCollectable_CanBeDropped_Params
{
	class ADBDPlayer**                                 dropper;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.CanBeCollected
struct ATestCollectable_CanBeCollected_Params
{
	class ADBDPlayer**                                 collector;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Authority_Use
struct ATestCollectable_Authority_Use_Params
{
};

// Function DeadByDaylight.Collectable.Authority_RemoveItemAddon
struct ATestCollectable_Authority_RemoveItemAddon_Params
{
	class UItemAddon**                                 addon;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Authority_AddItemAddon
struct ATestCollectable_Authority_AddItemAddon_Params
{
	class UItemAddon**                                 addon;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.TravelToKillerServer
struct ATestDBDGameState_TravelToKillerServer_Params
{
};

// Function DeadByDaylight.DBDGameState.SortOfferings
struct ATestDBDGameState_SortOfferings_Params
{
};

// Function DeadByDaylight.DBDGameState.SetPlayersReadyToStart
struct ATestDBDGameState_SetPlayersReadyToStart_Params
{
	bool*                                              playersReadyToStart;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.SetKillerIntroCompletedNormalized
struct ATestDBDGameState_SetKillerIntroCompletedNormalized_Params
{
	float*                                             completedAmount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.SetGameLevelEnded
struct ATestDBDGameState_SetGameLevelEnded_Params
{
	EEndGameReason*                                    endGameReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.SetDisplayMapName
struct ATestDBDGameState_SetDisplayMapName_Params
{
	bool*                                              Display;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.SetBuiltLevelData
struct ATestDBDGameState_SetBuiltLevelData_Params
{
	struct FName*                                      ThemeName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      ThemeWeather;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString*                                    MapName;                                                  // (Parm, ZeroConstructor)
	int*                                               TileCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDependency>*                        levelDependencies;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      SpecialEventId;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Server_UpdateGameRole
struct ATestDBDGameState_Server_UpdateGameRole_Params
{
};

// Function DeadByDaylight.DBDGameState.ResetGameLevelStatus
struct ATestDBDGameState_ResetGameLevelStatus_Params
{
};

// Function DeadByDaylight.DBDGameState.RemoveTrap
struct ATestDBDGameState_RemoveTrap_Params
{
	class AInteractable**                              toRemove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DeadByDaylight.DBDGameState.OnSlasherSetMultiDelegate__DelegateSignature
struct ATestDBDGameState_OnSlasherSetMultiDelegate__DelegateSignature_Params
{
	class ASlasherPlayer**                             SlasherPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_SurvivorLeft
struct ATestDBDGameState_OnRep_SurvivorLeft_Params
{
	int*                                               oldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_SessionId
struct ATestDBDGameState_OnRep_SessionId_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_ServerJoiningData
struct ATestDBDGameState_OnRep_ServerJoiningData_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_SecondsLeftInLobby
struct ATestDBDGameState_OnRep_SecondsLeftInLobby_Params
{
	int*                                               oldValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_RequiredActivatedGeneratorCount
struct ATestDBDGameState_OnRep_RequiredActivatedGeneratorCount_Params
{
	int*                                               oldRequiredActivatedGeneratorCount;                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_PlayersReadyToStart
struct ATestDBDGameState_OnRep_PlayersReadyToStart_Params
{
	bool*                                              oldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_OnLevelReadyToPlay
struct ATestDBDGameState_OnRep_OnLevelReadyToPlay_Params
{
	bool*                                              oldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_OnGameLevelLoaded
struct ATestDBDGameState_OnRep_OnGameLevelLoaded_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_OnGameLevelCreated
struct ATestDBDGameState_OnRep_OnGameLevelCreated_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_OfferingSequenceReady
struct ATestDBDGameState_OnRep_OfferingSequenceReady_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_ObsessionTarget
struct ATestDBDGameState_OnRep_ObsessionTarget_Params
{
	class ACamperPlayer**                              previousObsessionTarget;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_LobbyId
struct ATestDBDGameState_OnRep_LobbyId_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_HatchOpened
struct ATestDBDGameState_OnRep_HatchOpened_Params
{
	bool*                                              oldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_GamePresetData
struct ATestDBDGameState_OnRep_GamePresetData_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_EscapeDoorActivated
struct ATestDBDGameState_OnRep_EscapeDoorActivated_Params
{
	bool*                                              oldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_BuildLevelData
struct ATestDBDGameState_OnRep_BuildLevelData_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_ActivatedGeneratorCount
struct ATestDBDGameState_OnRep_ActivatedGeneratorCount_Params
{
	int*                                               oldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DeadByDaylight.DBDGameState.OnLevelReadyToPlayDelegate__DelegateSignature
struct ATestDBDGameState_OnLevelReadyToPlayDelegate__DelegateSignature_Params
{
};

// Function DeadByDaylight.DBDGameState.Multicast_UpdateRemainingQueueTime
struct ATestDBDGameState_Multicast_UpdateRemainingQueueTime_Params
{
	int*                                               remainingQueueTimeSeconds;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsStable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Multicast_UpdateCharacterFromGamePreset
struct ATestDBDGameState_Multicast_UpdateCharacterFromGamePreset_Params
{
	class ADBDPlayerState_Menu**                       playerState_Menu;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGamePresetData*                            GamePresetData;                                           // (ConstParm, Parm, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.Multicast_SetServerLeftGame
struct ATestDBDGameState_Multicast_SetServerLeftGame_Params
{
	bool*                                              hasServerLeftGame;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Multicast_SetLostServerConnection
struct ATestDBDGameState_Multicast_SetLostServerConnection_Params
{
	bool*                                              hasLostServerConnection;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Multicast_SetGameLevelEnded
struct ATestDBDGameState_Multicast_SetGameLevelEnded_Params
{
	EEndGameReason*                                    endGameReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Multicast_SetGameEnded
struct ATestDBDGameState_Multicast_SetGameEnded_Params
{
	bool*                                              hasServerLeftGame;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Multicast_SetBuiltLevelData
struct ATestDBDGameState_Multicast_SetBuiltLevelData_Params
{
	struct FName*                                      ThemeName;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      ThemeWeather;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString*                                    MapName;                                                  // (Parm, ZeroConstructor)
	int*                                               TileCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDependency>*                        levelDependencies;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	struct FName*                                      SpecialEventId;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Multicast_OnGameStarted
struct ATestDBDGameState_Multicast_OnGameStarted_Params
{
};

// Function DeadByDaylight.DBDGameState.Multicast_KillerServerSearchFailed
struct ATestDBDGameState_Multicast_KillerServerSearchFailed_Params
{
};

// Function DeadByDaylight.DBDGameState.Multicast_KillerSearchStarted
struct ATestDBDGameState_Multicast_KillerSearchStarted_Params
{
};

// Function DeadByDaylight.DBDGameState.Multicast_JoinKillerServerFailed
struct ATestDBDGameState_Multicast_JoinKillerServerFailed_Params
{
};

// Function DeadByDaylight.DBDGameState.KillerServerFound
struct ATestDBDGameState_KillerServerFound_Params
{
	struct FServerJoiningData*                         joinParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.IsPlayerDistributionReady
struct ATestDBDGameState_IsPlayerDistributionReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsOnePlayerLeft
struct ATestDBDGameState_IsOnePlayerLeft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsOfferingReceived
struct ATestDBDGameState_IsOfferingReceived_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsObsessionTargetAliveInLevel
struct ATestDBDGameState_IsObsessionTargetAliveInLevel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsObsessionTargetAlive
struct ATestDBDGameState_IsObsessionTargetAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsLightingGenerated
struct ATestDBDGameState_IsLightingGenerated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsLevelSetupDone
struct ATestDBDGameState_IsLevelSetupDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsLevelReadyToPlay
struct ATestDBDGameState_IsLevelReadyToPlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsIntroCompleted
struct ATestDBDGameState_IsIntroCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsHatchVisible
struct ATestDBDGameState_IsHatchVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsEscapeRequirementCompleted
struct ATestDBDGameState_IsEscapeRequirementCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsEscapeDoorOpen
struct ATestDBDGameState_IsEscapeDoorOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsEscapeDoorActivated
struct ATestDBDGameState_IsEscapeDoorActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IntroCompleted
struct ATestDBDGameState_IntroCompleted_Params
{
};

// Function DeadByDaylight.DBDGameState.GetTraps
struct ATestDBDGameState_GetTraps_Params
{
	TArray<class AInteractable*>                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.GetSurvivorLeft
struct ATestDBDGameState_GetSurvivorLeft_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetSelectedOfferings
struct ATestDBDGameState_GetSelectedOfferings_Params
{
	TArray<struct FSelectedOffering>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.GetSelectedOffering
struct ATestDBDGameState_GetSelectedOffering_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSelectedOffering                           SelectedOffering;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetRequiredActivatedGeneratorCount
struct ATestDBDGameState_GetRequiredActivatedGeneratorCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetRemainingGeneratorsNeeded
struct ATestDBDGameState_GetRemainingGeneratorsNeeded_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetPlayerStateByMirrorsID
struct ATestDBDGameState_GetPlayerStateByMirrorsID_Params
{
	struct FString*                                    ID;                                                       // (Parm, ZeroConstructor)
	class ADBDPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetPlayerStateByIDString
struct ATestDBDGameState_GetPlayerStateByIDString_Params
{
	struct FString*                                    ID;                                                       // (Parm, ZeroConstructor)
	class ADBDPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetPlayersReadyToStart
struct ATestDBDGameState_GetPlayersReadyToStart_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetPlayerRoleCounts
struct ATestDBDGameState_GetPlayerRoleCounts_Params
{
	int                                                survivorCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                killerCount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                spectatorCount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetObsessionTarget
struct ATestDBDGameState_GetObsessionTarget_Params
{
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetNumberOfOtherActiveSurvivors
struct ATestDBDGameState_GetNumberOfOtherActiveSurvivors_Params
{
	class ADBDPlayer**                                 exception;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetNumberOfActiveSurvivors
struct ATestDBDGameState_GetNumberOfActiveSurvivors_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetMapThemeName
struct ATestDBDGameState_GetMapThemeName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetLocalPlayerState
struct ATestDBDGameState_GetLocalPlayerState_Params
{
	class ADBDPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetLocalPlayerPawn
struct ATestDBDGameState_GetLocalPlayerPawn_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetLocalPlayerBasePawn
struct ATestDBDGameState_GetLocalPlayerBasePawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetLevelData
struct ATestDBDGameState_GetLevelData_Params
{
	struct FBuiltLevelData                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.GetKillerIntroCompletedNormalized
struct ATestDBDGameState_GetKillerIntroCompletedNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetKiller
struct ATestDBDGameState_GetKiller_Params
{
	class ASlasherPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetIsGameEnded
struct ATestDBDGameState_GetIsGameEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetInGameSearchables
struct ATestDBDGameState_GetInGameSearchables_Params
{
	TArray<class ASearchable*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameState.GetInGamePallets
struct ATestDBDGameState_GetInGamePallets_Params
{
	TArray<class APallet*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameState.GetInGameMeatHooks
struct ATestDBDGameState_GetInGameMeatHooks_Params
{
	TArray<class AMeatHook*>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameState.GetInGameHatches
struct ATestDBDGameState_GetInGameHatches_Params
{
	TArray<class AHatch*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameState.GetInGameGenerators
struct ATestDBDGameState_GetInGameGenerators_Params
{
	TArray<class AGenerator*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameState.GetInGameEscapeDoors
struct ATestDBDGameState_GetInGameEscapeDoors_Params
{
	TArray<class AEscapeDoor*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameState.GetGameLevelLoaded
struct ATestDBDGameState_GetGameLevelLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetEndGameStateComponent
struct ATestDBDGameState_GetEndGameStateComponent_Params
{
	class UEndGameStateComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetCharacterCollection
struct ATestDBDGameState_GetCharacterCollection_Params
{
	class UCharacterCollection*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.CallOnSlasherSet
struct ATestDBDGameState_CallOnSlasherSet_Params
{
	struct FScriptDelegate*                            callback;                                                 // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameState.CallOnLevelReadyToPlay
struct ATestDBDGameState_CallOnLevelReadyToPlay_Params
{
	struct FScriptDelegate*                            callback;                                                 // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameState.BroadcastOnSetBuildLevelData
struct ATestDBDGameState_BroadcastOnSetBuildLevelData_Params
{
};

// Function DeadByDaylight.DBDGameState.Authority_SetSurvivorLeft
struct ATestDBDGameState_Authority_SetSurvivorLeft_Params
{
	int*                                               survivorRemaining;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Authority_SetServerJoiningData
struct ATestDBDGameState_Authority_SetServerJoiningData_Params
{
	struct FServerJoiningData*                         joiningData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.Authority_SetLevelReadyToPlay
struct ATestDBDGameState_Authority_SetLevelReadyToPlay_Params
{
};

// Function DeadByDaylight.DBDGameState.Authority_SetHatchOpen
struct ATestDBDGameState_Authority_SetHatchOpen_Params
{
	bool*                                              OPENED;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Authority_SetGameSelectedOffering
struct ATestDBDGameState_Authority_SetGameSelectedOffering_Params
{
	TArray<struct FSelectedOffering>*                  offerings;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.Authority_SetGameLevelLoaded
struct ATestDBDGameState_Authority_SetGameLevelLoaded_Params
{
};

// Function DeadByDaylight.DBDGameState.Authority_SetGameLevelEnded
struct ATestDBDGameState_Authority_SetGameLevelEnded_Params
{
	EEndGameReason*                                    endGameReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Authority_SetGameLevelCreated
struct ATestDBDGameState_Authority_SetGameLevelCreated_Params
{
};

// Function DeadByDaylight.DBDGameState.Authority_SetEscapeDoorOpened
struct ATestDBDGameState_Authority_SetEscapeDoorOpened_Params
{
	bool*                                              OPENED;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Authority_SetAllPlayerLoaded
struct ATestDBDGameState_Authority_SetAllPlayerLoaded_Params
{
};

// Function DeadByDaylight.DBDGameState.Authority_EvaluateObsessionTarget
struct ATestDBDGameState_Authority_EvaluateObsessionTarget_Params
{
	class ADBDPlayer**                                 potentialTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Authority_EscapeThroughHatch
struct ATestDBDGameState_Authority_EscapeThroughHatch_Params
{
};

// Function DeadByDaylight.DBDGameState.Authority_EnableObsession
struct ATestDBDGameState_Authority_EnableObsession_Params
{
};

// Function DeadByDaylight.DBDGameState.AddTrap
struct ATestDBDGameState_AddTrap_Params
{
	class AInteractable**                              toAdd;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
struct UTestStatusEffect_ShouldDisplayStatusEffectIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
struct UTestStatusEffect_SetStatusEffectIconPercentage_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetShouldDisplay
struct UTestStatusEffect_SetShouldDisplay_Params
{
	bool*                                              On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
struct UTestStatusEffect_OnShouldDisplayChanged_Params
{
	bool*                                              currentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
struct UTestStatusEffect_OnRep_ShouldDisplay_Params
{
};

// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
struct UTestStatusEffect_Multicast_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
struct UTestStatusEffect_Multicast_InitializeStatusEffect_Params
{
	struct FName*                                      statusEffectId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer**                 originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              shouldDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
struct UTestStatusEffect_IsOriginatorHooked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
struct UTestStatusEffect_IsOriginatorAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
struct UTestStatusEffect_IsKillerInOriginatorRange_Params
{
	float*                                             AdditiveRangeModifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
struct UTestStatusEffect_IsInOriginatorRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.InitializeLifetime
struct UTestStatusEffect_InitializeLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
struct UTestStatusEffect_GetStatusEffectCooldownRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetShouldDisplay
struct UTestStatusEffect_GetShouldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
struct UTestStatusEffect_GetOriginatingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
struct UTestStatusEffect_GetLifetimeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
struct UTestStatusEffect_FireActiveStatusEffectEvent_Params
{
	float*                                             percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
struct UTestStatusEffect_BroadcastOriginatorGameEventNotification_Params
{
};

// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
struct UTestStatusEffect_BroadcastGameEventNotification_Params
{
	struct FGameplayNotificationData*                  notificationData;                                         // (Parm)
	bool*                                              addToHistory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
struct UTestStatusEffect_Authority_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
struct UTestStatusEffect_Authority_RemoveSelf_Params
{
};

// Function DeadByDaylight.StatusEffect.Authority_EndSelf
struct UTestStatusEffect_Authority_EndSelf_Params
{
};

// Function DBDCompetence.TheMettleOfMan.ShowOnKOPreventedFX
struct UTheMettleOfMan_ShowOnKOPreventedFX_Params
{
};

// Function DBDCompetence.TheMettleOfMan.Multicast_OnKOPrevented
struct UTheMettleOfMan_Multicast_OnKOPrevented_Params
{
};

// Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators
struct UThrillingTremors_OnRep_BlockedGenerators_Params
{
};

// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
struct UTimedObliviousEffect_ShouldDisplayStatusEffectIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetStatusEffectIconPercentage
struct UTimedObliviousEffect_SetStatusEffectIconPercentage_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetShouldDisplay
struct UTimedObliviousEffect_SetShouldDisplay_Params
{
	bool*                                              On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnShouldDisplayChanged
struct UTimedObliviousEffect_OnShouldDisplayChanged_Params
{
	bool*                                              currentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnRep_ShouldDisplay
struct UTimedObliviousEffect_OnRep_ShouldDisplay_Params
{
};

// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
struct UTimedObliviousEffect_Multicast_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
struct UTimedObliviousEffect_Multicast_InitializeStatusEffect_Params
{
	struct FName*                                      statusEffectId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer**                 originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              shouldDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorHooked
struct UTimedObliviousEffect_IsOriginatorHooked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsOriginatorAlive
struct UTimedObliviousEffect_IsOriginatorAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsKillerInOriginatorRange
struct UTimedObliviousEffect_IsKillerInOriginatorRange_Params
{
	float*                                             AdditiveRangeModifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.IsInOriginatorRange
struct UTimedObliviousEffect_IsInOriginatorRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.InitializeLifetime
struct UTimedObliviousEffect_InitializeLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
struct UTimedObliviousEffect_GetStatusEffectCooldownRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetShouldDisplay
struct UTimedObliviousEffect_GetShouldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
struct UTimedObliviousEffect_GetOriginatingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetLifetimeDuration
struct UTimedObliviousEffect_GetLifetimeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
struct UTimedObliviousEffect_FireActiveStatusEffectEvent_Params
{
	float*                                             percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
struct UTimedObliviousEffect_BroadcastOriginatorGameEventNotification_Params
{
};

// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
struct UTimedObliviousEffect_BroadcastGameEventNotification_Params
{
	struct FGameplayNotificationData*                  notificationData;                                         // (Parm)
	bool*                                              addToHistory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
struct UTimedObliviousEffect_Authority_SetRemainingLifetime_Params
{
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
struct UTimedObliviousEffect_Authority_RemoveSelf_Params
{
};

// Function DeadByDaylight.StatusEffect.Authority_EndSelf
struct UTimedObliviousEffect_Authority_EndSelf_Params
{
};

// Function DeadByDaylight.ItemAddon.OnPostItemAddonsCreation
struct UWeddingRing_OnPostItemAddonsCreation_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ACollectable**                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Multicast_SetBaseItem
struct UWeddingRing_Multicast_SetBaseItem_Params
{
	class ACollectable**                               baseItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Multicast_InitializeItemAddon
struct UWeddingRing_Multicast_InitializeItemAddon_Params
{
	struct FName*                                      addonID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EInventoryItemType*                                ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Multicast_AddAddonToItem
struct UWeddingRing_Multicast_AddAddonToItem_Params
{
	class ACollectable**                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.IsReadyForInitialization
struct UWeddingRing_IsReadyForInitialization_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.InitializeAddon
struct UWeddingRing_InitializeAddon_Params
{
};

// Function DeadByDaylight.ItemAddon.DebugPrintStats
struct UWeddingRing_DebugPrintStats_Params
{
};

// Function DeadByDaylight.ItemAddon.Authority_OnCollectablePickedUp
struct UWeddingRing_Authority_OnCollectablePickedUp_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Authority_OnCollectableDropped
struct UWeddingRing_Authority_OnCollectableDropped_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.ApplyMetaModifiers
struct UWeddingRing_ApplyMetaModifiers_Params
{
};

// Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor
struct UYamaokaFamilyCrest_RevealSurvivor_Params
{
	class ACamperPlayer**                              survivorToReveal;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount
struct UYamaokaFamilyCrest_OnRep_AddonActivationCount_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
