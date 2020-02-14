#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheOni_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter
struct UAbsorbBloodOrbsInteraction_ShouldStartUpdateMontageDuringEnter_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionInputType
struct UAbsorbBloodOrbsInteraction_SetSecondaryActionInputType_Params
{
	EInputInteractionType*                             inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionButtonType
struct UAbsorbBloodOrbsInteraction_SetSecondaryActionButtonType_Params
{
	EButtonType*                                       ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetCancelButtonType
struct UAbsorbBloodOrbsInteraction_SetCancelButtonType_Params
{
	EButtonType*                                       ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnUpdateMontageStart
struct UAbsorbBloodOrbsInteraction_OnUpdateMontageStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart
struct UAbsorbBloodOrbsInteraction_OnInterruptorUpdateStart_Params
{
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick
struct UAbsorbBloodOrbsInteraction_OnInteractionUpdateTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart
struct UAbsorbBloodOrbsInteraction_OnInteractionUpdateStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle
struct UAbsorbBloodOrbsInteraction_OnInteractionUpdateMontageReachedMiddle_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd
struct UAbsorbBloodOrbsInteraction_OnInteractionUpdateEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted
struct UAbsorbBloodOrbsInteraction_OnInteractionInterruptStarted_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart
struct UAbsorbBloodOrbsInteraction_OnInteractionInterruptStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd
struct UAbsorbBloodOrbsInteraction_OnInteractionInterruptEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInit
struct UAbsorbBloodOrbsInteraction_OnInteractionInit_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionFinished
struct UAbsorbBloodOrbsInteraction_OnInteractionFinished_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hasInteractionStarted;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitTick
struct UAbsorbBloodOrbsInteraction_OnInteractionExitTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart
struct UAbsorbBloodOrbsInteraction_OnInteractionExitStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd
struct UAbsorbBloodOrbsInteraction_OnInteractionExitEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick
struct UAbsorbBloodOrbsInteraction_OnInteractionEnterTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart
struct UAbsorbBloodOrbsInteraction_OnInteractionEnterStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             actualSnapTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed
struct UAbsorbBloodOrbsInteraction_OnInteractionEnterFailed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd
struct UAbsorbBloodOrbsInteraction_OnInteractionEnterEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled
struct UAbsorbBloodOrbsInteraction_OnInteractionCancelled_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent
struct UAbsorbBloodOrbsInteraction_OnInteractionAnimNotifyEvent_Params
{
	struct FName*                                      NotifyId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType
struct UAbsorbBloodOrbsInteraction_IsSupportedCharacterType_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible
struct UAbsorbBloodOrbsInteraction_IsInterruptionPossible_Params
{
	class ADBDPlayer**                                 interruptor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 interruptee;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    interruption;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionUsingOffering
struct UAbsorbBloodOrbsInteraction_IsInteractionUsingOffering_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient
struct UAbsorbBloodOrbsInteraction_IsInteractionPossibleClient_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP
struct UAbsorbBloodOrbsInteraction_IsInteractionPossibleBP_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionDone
struct UAbsorbBloodOrbsInteraction_IsInteractionDone_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInputPressed
struct UAbsorbBloodOrbsInteraction_IsInputPressed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection
struct UAbsorbBloodOrbsInteraction_IsCharacterFacingInteractorDirection_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsCancelable
struct UAbsorbBloodOrbsInteraction_IsCancelable_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateMontage
struct UAbsorbBloodOrbsInteraction_GetUpdateMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateHighlightOpacityUsingCharge
struct UAbsorbBloodOrbsInteraction_GetUpdateHighlightOpacityUsingCharge_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate
struct UAbsorbBloodOrbsInteraction_GetUpdateAnimationPlayRate_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition
struct UAbsorbBloodOrbsInteraction_GetUpdateAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart
struct UAbsorbBloodOrbsInteraction_GetSnapTimeAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapTime
struct UAbsorbBloodOrbsInteraction_GetSnapTime_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapSocketName
struct UAbsorbBloodOrbsInteraction_GetSnapSocketName_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart
struct UAbsorbBloodOrbsInteraction_GetSnapPointPositionAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition
struct UAbsorbBloodOrbsInteraction_GetSnapPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart
struct UAbsorbBloodOrbsInteraction_GetSnapDistanceAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapDistance
struct UAbsorbBloodOrbsInteraction_GetSnapDistance_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionInputType
struct UAbsorbBloodOrbsInteraction_GetSecondaryActionInputType_Params
{
	EInputInteractionType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionButtonType
struct UAbsorbBloodOrbsInteraction_GetSecondaryActionButtonType_Params
{
	EButtonType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPointAtStart
struct UAbsorbBloodOrbsInteraction_GetRotationToSnapPointAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPoint
struct UAbsorbBloodOrbsInteraction_GetRotationToSnapPoint_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetPowerProgressBar
struct UAbsorbBloodOrbsInteraction_GetPowerProgressBar_Params
{
	EPowerProgressBar                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy
struct UAbsorbBloodOrbsInteraction_GetPlayerDependancy_Params
{
	class ADBDPlayer**                                 interactingPlayer;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions
struct UAbsorbBloodOrbsInteraction_GetInterruptionDefinitions_Params
{
	TArray<class UInterruptionDefinition*>             ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractor
struct UAbsorbBloodOrbsInteraction_GetInteractor_Params
{
	class UInteractor*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionTimeMultiplier
struct UAbsorbBloodOrbsInteraction_GetInteractionTimeMultiplier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionTime
struct UAbsorbBloodOrbsInteraction_GetInteractionTime_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionText
struct UAbsorbBloodOrbsInteraction_GetInteractionText_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime
struct UAbsorbBloodOrbsInteraction_GetInteractionExitTime_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText
struct UAbsorbBloodOrbsInteraction_GetInteractionDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractable
struct UAbsorbBloodOrbsInteraction_GetInteractable_Params
{
	class AInteractable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition
struct UAbsorbBloodOrbsInteraction_GetFocalPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetExitMontage
struct UAbsorbBloodOrbsInteraction_GetExitMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition
struct UAbsorbBloodOrbsInteraction_GetExitAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetEnterMontage
struct UAbsorbBloodOrbsInteraction_GetEnterMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition
struct UAbsorbBloodOrbsInteraction_GetEnterAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetChargePercent
struct UAbsorbBloodOrbsInteraction_GetChargePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetCancelButtonType
struct UAbsorbBloodOrbsInteraction_GetCancelButtonType_Params
{
	EButtonType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetAllowNavigation
struct UAbsorbBloodOrbsInteraction_GetAllowNavigation_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart
struct UAbsorbBloodOrbsInteraction_GetActualSnapPointPositionAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition
struct UAbsorbBloodOrbsInteraction_GetActualSnapPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap
struct UAbsorbBloodOrbsInteraction_GetActorsToIgnoreOverlap_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta
struct UAbsorbBloodOrbsInteraction_GetActorHeightDelta_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath
struct UAbsorbBloodOrbsInteraction_DoesPlayerHaveClearPath_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CompleteCharge
struct UAbsorbBloodOrbsInteraction_CompleteCharge_Params
{
	class ADBDPlayer**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction
struct UAbsorbBloodOrbsInteraction_CanOverrideInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantSpeed
struct UAbsorbBloodOrbsInteraction_CalculateSnapTimeForConstantSpeed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Speed;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantMaxNormalMovementSpeed
struct UAbsorbBloodOrbsInteraction_CalculateSnapTimeForConstantMaxNormalMovementSpeed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             speedBoost;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AttachToZone
struct UAbsorbBloodOrbsInteraction_AttachToZone_Params
{
	class UPrimitiveComponent**                        zone;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AttachToInteractor
struct UAbsorbBloodOrbsInteraction_AttachToInteractor_Params
{
	class UInteractor**                                Interactor;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AtlantaItemUseToggleState
struct UAbsorbBloodOrbsInteraction_AtlantaItemUseToggleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AtlantaGetPowerButtonImageID
struct UAbsorbBloodOrbsInteraction_AtlantaGetPowerButtonImageID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction
struct UAbsorbBloodOrbsInteraction_AddMutuallyExclusiveInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TheOni.BloodOrb.UpdateAttracted_Cosmetic
struct ABloodOrb_UpdateAttracted_Cosmetic_Params
{
	struct FVector*                                    destination;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 absorber;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrb.UpdateAbsorbed_Cosmetic
struct ABloodOrb_UpdateAbsorbed_Cosmetic_Params
{
	struct FVector*                                    destination;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 absorber;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrb.OnRep_State
struct ABloodOrb_OnRep_State_Params
{
	EBloodOrbState*                                    oldState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrb.OnIsAttractedChangedCosmetic
struct ABloodOrb_OnIsAttractedChangedCosmetic_Params
{
	bool*                                              isAttracted;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrb.OnDestroyedCosmetic
struct ABloodOrb_OnDestroyedCosmetic_Params
{
};

// Function TheOni.BloodOrb.OnAbsorbedCosmetic
struct ABloodOrb_OnAbsorbedCosmetic_Params
{
};

// Function TheOni.BloodOrb.GetDroppingPlayer
struct ABloodOrb_GetDroppingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheOni.BloodOrb.Authority_OnDropped
struct ABloodOrb_Authority_OnDropped_Params
{
	class ADBDPlayer**                                 droppedBy;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ImpulseFactor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrb.Authority_OnDropFinished
struct ABloodOrb_Authority_OnDropFinished_Params
{
};

// Function TheOni.BloodOrb.Authority_DestroyBloodOrb
struct ABloodOrb_Authority_DestroyBloodOrb_Params
{
};

// Function TheOni.BloodOrb.Authority_Despawn
struct ABloodOrb_Authority_Despawn_Params
{
};

// Function TheOni.BloodOrbAbsorberComponent.SetInAbsorbMode
struct UBloodOrbAbsorberComponent_SetInAbsorbMode_Params
{
	bool*                                              inAbsorptionMode;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrbAbsorberComponent.IsInAbsorbMode
struct UBloodOrbAbsorberComponent_IsInAbsorbMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange
struct UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Params
{
	class UBloodOrbVisibilityComponent**               BloodOrbVisibilityComponent;                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 Killer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges
struct UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Params
{
	class UBloodOrbVisibilityComponent**               BloodOrbVisibilityComponent;                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed
struct UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Params
{
	class UBloodOrbAbsorberComponent**                 BloodOrbAbsorberComponent;                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay
struct UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Params
{
};

// Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier
struct UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Params
{
	class ADBDPlayer**                                 Killer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ToggleActive
struct UBloodOrbDropperComponent_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UBloodOrbDropperComponent_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UBloodOrbDropperComponent_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UBloodOrbDropperComponent_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UBloodOrbDropperComponent_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UBloodOrbDropperComponent_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UBloodOrbDropperComponent_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UBloodOrbDropperComponent_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UBloodOrbDropperComponent_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UBloodOrbDropperComponent_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UBloodOrbDropperComponent_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UBloodOrbDropperComponent_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UBloodOrbDropperComponent_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UBloodOrbDropperComponent_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UBloodOrbDropperComponent_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UBloodOrbDropperComponent_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UBloodOrbDropperComponent_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UBloodOrbDropperComponent_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UBloodOrbDropperComponent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UBloodOrbDropperComponent_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UBloodOrbDropperComponent_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UBloodOrbDropperComponent_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UBloodOrbDropperComponent_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UBloodOrbDropperComponent_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UBloodOrbDropperComponent_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDGameplay.FadeComponent.GetFadePercent
struct UBloodOrbFadeComponent_GetFadePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs
struct UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Params
{
	int*                                               previousOverlappingOrbs;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb
struct UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged
struct UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Params
{
	EBloodOrbVisibilityMode*                           visibilityMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap
struct UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap
struct UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TheOni.BloodOrbOverlapRevealToKiller.GetRevealTimer
struct UBloodOrbOverlapRevealToKiller_GetRevealTimer_Params
{
	class UTimerObject*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged
struct UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Params
{
	EBloodOrbState*                                    oldState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EBloodOrbState*                                    newState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ABloodOrb**                                  BloodOrb;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned
struct UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Params
{
	class ABloodOrb**                                  BloodOrb;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed
struct UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Params
{
	class ABloodOrb**                                  BloodOrb;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ToggleActive
struct UBloodOrbVisibilityComponent_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UBloodOrbVisibilityComponent_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UBloodOrbVisibilityComponent_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UBloodOrbVisibilityComponent_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UBloodOrbVisibilityComponent_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UBloodOrbVisibilityComponent_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UBloodOrbVisibilityComponent_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UBloodOrbVisibilityComponent_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UBloodOrbVisibilityComponent_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UBloodOrbVisibilityComponent_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UBloodOrbVisibilityComponent_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UBloodOrbVisibilityComponent_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UBloodOrbVisibilityComponent_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UBloodOrbVisibilityComponent_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UBloodOrbVisibilityComponent_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UBloodOrbVisibilityComponent_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UBloodOrbVisibilityComponent_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UBloodOrbVisibilityComponent_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UBloodOrbVisibilityComponent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UBloodOrbVisibilityComponent_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UBloodOrbVisibilityComponent_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UBloodOrbVisibilityComponent_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UBloodOrbVisibilityComponent_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UBloodOrbVisibilityComponent_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UBloodOrbVisibilityComponent_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStunByPallet
struct UDemonModeComponent_ShouldLoseDemonModeOnStunByPallet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.OnPowerChargeFull
struct UDemonModeComponent_OnPowerChargeFull_Params
{
};

// Function TheOni.DemonModeComponent.OnPowerChargeEmpty
struct UDemonModeComponent_OnPowerChargeEmpty_Params
{
};

// Function TheOni.DemonModeComponent.OnIsPowerChanged
struct UDemonModeComponent_OnIsPowerChanged_Params
{
	bool*                                              isInPower;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.IsInDemonMode
struct UDemonModeComponent_IsInDemonMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.GetDemonModeState
struct UDemonModeComponent_GetDemonModeState_Params
{
	EDemonModeState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.GetCurrentCharge
struct UDemonModeComponent_GetCurrentCharge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.GetChargePercent
struct UDemonModeComponent_GetChargePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.DBD_DemonModeForever
struct UDemonModeComponent_DBD_DemonModeForever_Params
{
	bool*                                              forever;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.CanStartDemonMode
struct UDemonModeComponent_CanStartDemonMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction
struct UDemonModeComponent_Authority_SetDemonModeCooldownInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay
struct UDemonModeComponent_Authority_OnLevelReadyToPlay_Params
{
};

// Function TheOni.DemonModeComponent.Authority_OnChargeChanged
struct UDemonModeComponent_Authority_OnChargeChanged_Params
{
	float*                                             currentChargePercent;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.DemonModeComponent.Authority_AddCharge
struct UDemonModeComponent_Authority_AddCharge_Params
{
	float*                                             ChargeAmount;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter
struct UDemonModeCooldownInteraction_ShouldStartUpdateMontageDuringEnter_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionInputType
struct UDemonModeCooldownInteraction_SetSecondaryActionInputType_Params
{
	EInputInteractionType*                             inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionButtonType
struct UDemonModeCooldownInteraction_SetSecondaryActionButtonType_Params
{
	EButtonType*                                       ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetCancelButtonType
struct UDemonModeCooldownInteraction_SetCancelButtonType_Params
{
	EButtonType*                                       ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnUpdateMontageStart
struct UDemonModeCooldownInteraction_OnUpdateMontageStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart
struct UDemonModeCooldownInteraction_OnInterruptorUpdateStart_Params
{
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick
struct UDemonModeCooldownInteraction_OnInteractionUpdateTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart
struct UDemonModeCooldownInteraction_OnInteractionUpdateStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle
struct UDemonModeCooldownInteraction_OnInteractionUpdateMontageReachedMiddle_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd
struct UDemonModeCooldownInteraction_OnInteractionUpdateEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted
struct UDemonModeCooldownInteraction_OnInteractionInterruptStarted_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart
struct UDemonModeCooldownInteraction_OnInteractionInterruptStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd
struct UDemonModeCooldownInteraction_OnInteractionInterruptEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInit
struct UDemonModeCooldownInteraction_OnInteractionInit_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionFinished
struct UDemonModeCooldownInteraction_OnInteractionFinished_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hasInteractionStarted;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitTick
struct UDemonModeCooldownInteraction_OnInteractionExitTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart
struct UDemonModeCooldownInteraction_OnInteractionExitStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd
struct UDemonModeCooldownInteraction_OnInteractionExitEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick
struct UDemonModeCooldownInteraction_OnInteractionEnterTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart
struct UDemonModeCooldownInteraction_OnInteractionEnterStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             actualSnapTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed
struct UDemonModeCooldownInteraction_OnInteractionEnterFailed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd
struct UDemonModeCooldownInteraction_OnInteractionEnterEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled
struct UDemonModeCooldownInteraction_OnInteractionCancelled_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent
struct UDemonModeCooldownInteraction_OnInteractionAnimNotifyEvent_Params
{
	struct FName*                                      NotifyId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType
struct UDemonModeCooldownInteraction_IsSupportedCharacterType_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible
struct UDemonModeCooldownInteraction_IsInterruptionPossible_Params
{
	class ADBDPlayer**                                 interruptor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 interruptee;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    interruption;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionUsingOffering
struct UDemonModeCooldownInteraction_IsInteractionUsingOffering_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient
struct UDemonModeCooldownInteraction_IsInteractionPossibleClient_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP
struct UDemonModeCooldownInteraction_IsInteractionPossibleBP_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionDone
struct UDemonModeCooldownInteraction_IsInteractionDone_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInputPressed
struct UDemonModeCooldownInteraction_IsInputPressed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection
struct UDemonModeCooldownInteraction_IsCharacterFacingInteractorDirection_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsCancelable
struct UDemonModeCooldownInteraction_IsCancelable_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateMontage
struct UDemonModeCooldownInteraction_GetUpdateMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateHighlightOpacityUsingCharge
struct UDemonModeCooldownInteraction_GetUpdateHighlightOpacityUsingCharge_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate
struct UDemonModeCooldownInteraction_GetUpdateAnimationPlayRate_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition
struct UDemonModeCooldownInteraction_GetUpdateAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart
struct UDemonModeCooldownInteraction_GetSnapTimeAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapTime
struct UDemonModeCooldownInteraction_GetSnapTime_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapSocketName
struct UDemonModeCooldownInteraction_GetSnapSocketName_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart
struct UDemonModeCooldownInteraction_GetSnapPointPositionAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition
struct UDemonModeCooldownInteraction_GetSnapPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart
struct UDemonModeCooldownInteraction_GetSnapDistanceAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapDistance
struct UDemonModeCooldownInteraction_GetSnapDistance_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionInputType
struct UDemonModeCooldownInteraction_GetSecondaryActionInputType_Params
{
	EInputInteractionType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionButtonType
struct UDemonModeCooldownInteraction_GetSecondaryActionButtonType_Params
{
	EButtonType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPointAtStart
struct UDemonModeCooldownInteraction_GetRotationToSnapPointAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPoint
struct UDemonModeCooldownInteraction_GetRotationToSnapPoint_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetPowerProgressBar
struct UDemonModeCooldownInteraction_GetPowerProgressBar_Params
{
	EPowerProgressBar                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy
struct UDemonModeCooldownInteraction_GetPlayerDependancy_Params
{
	class ADBDPlayer**                                 interactingPlayer;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions
struct UDemonModeCooldownInteraction_GetInterruptionDefinitions_Params
{
	TArray<class UInterruptionDefinition*>             ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractor
struct UDemonModeCooldownInteraction_GetInteractor_Params
{
	class UInteractor*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionTimeMultiplier
struct UDemonModeCooldownInteraction_GetInteractionTimeMultiplier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionTime
struct UDemonModeCooldownInteraction_GetInteractionTime_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionText
struct UDemonModeCooldownInteraction_GetInteractionText_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime
struct UDemonModeCooldownInteraction_GetInteractionExitTime_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText
struct UDemonModeCooldownInteraction_GetInteractionDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractable
struct UDemonModeCooldownInteraction_GetInteractable_Params
{
	class AInteractable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition
struct UDemonModeCooldownInteraction_GetFocalPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetExitMontage
struct UDemonModeCooldownInteraction_GetExitMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition
struct UDemonModeCooldownInteraction_GetExitAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetEnterMontage
struct UDemonModeCooldownInteraction_GetEnterMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition
struct UDemonModeCooldownInteraction_GetEnterAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetChargePercent
struct UDemonModeCooldownInteraction_GetChargePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetCancelButtonType
struct UDemonModeCooldownInteraction_GetCancelButtonType_Params
{
	EButtonType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetAllowNavigation
struct UDemonModeCooldownInteraction_GetAllowNavigation_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart
struct UDemonModeCooldownInteraction_GetActualSnapPointPositionAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition
struct UDemonModeCooldownInteraction_GetActualSnapPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap
struct UDemonModeCooldownInteraction_GetActorsToIgnoreOverlap_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta
struct UDemonModeCooldownInteraction_GetActorHeightDelta_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath
struct UDemonModeCooldownInteraction_DoesPlayerHaveClearPath_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CompleteCharge
struct UDemonModeCooldownInteraction_CompleteCharge_Params
{
	class ADBDPlayer**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction
struct UDemonModeCooldownInteraction_CanOverrideInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantSpeed
struct UDemonModeCooldownInteraction_CalculateSnapTimeForConstantSpeed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Speed;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantMaxNormalMovementSpeed
struct UDemonModeCooldownInteraction_CalculateSnapTimeForConstantMaxNormalMovementSpeed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             speedBoost;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AttachToZone
struct UDemonModeCooldownInteraction_AttachToZone_Params
{
	class UPrimitiveComponent**                        zone;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AttachToInteractor
struct UDemonModeCooldownInteraction_AttachToInteractor_Params
{
	class UInteractor**                                Interactor;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AtlantaItemUseToggleState
struct UDemonModeCooldownInteraction_AtlantaItemUseToggleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AtlantaGetPowerButtonImageID
struct UDemonModeCooldownInteraction_AtlantaGetPowerButtonImageID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction
struct UDemonModeCooldownInteraction_AddMutuallyExclusiveInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.ToggleActive
struct UDemonModeMenuComponent_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UDemonModeMenuComponent_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UDemonModeMenuComponent_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UDemonModeMenuComponent_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UDemonModeMenuComponent_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UDemonModeMenuComponent_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UDemonModeMenuComponent_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UDemonModeMenuComponent_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UDemonModeMenuComponent_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UDemonModeMenuComponent_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UDemonModeMenuComponent_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UDemonModeMenuComponent_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UDemonModeMenuComponent_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UDemonModeMenuComponent_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UDemonModeMenuComponent_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UDemonModeMenuComponent_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UDemonModeMenuComponent_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UDemonModeMenuComponent_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UDemonModeMenuComponent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UDemonModeMenuComponent_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UDemonModeMenuComponent_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UDemonModeMenuComponent_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UDemonModeMenuComponent_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UDemonModeMenuComponent_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UDemonModeMenuComponent_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
struct UIsPlayerAbsorbingBloodOrbsCondition_UpdateIsTrue_Params
{
};

// Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
struct UIsPlayerAbsorbingBloodOrbsCondition_SetInteractionSemantics_Params
{
	struct FGameplayTagContainer*                      interactionSemantics;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Engine.ActorComponent.ToggleActive
struct UOniAttackPicker_ToggleActive_Params
{
};

// Function Engine.ActorComponent.SetTickGroup
struct UOniAttackPicker_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetTickableWhenPaused
struct UOniAttackPicker_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetIsReplicated
struct UOniAttackPicker_SetIsReplicated_Params
{
	bool*                                              ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickInterval
struct UOniAttackPicker_SetComponentTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetComponentTickEnabled
struct UOniAttackPicker_SetComponentTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetAutoActivate
struct UOniAttackPicker_SetAutoActivate_Params
{
	bool*                                              bNewAutoActivate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.SetActive
struct UOniAttackPicker_SetActive_Params
{
	bool*                                              bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
struct UOniAttackPicker_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
struct UOniAttackPicker_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveTick
struct UOniAttackPicker_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveEndPlay
struct UOniAttackPicker_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.ReceiveBeginPlay
struct UOniAttackPicker_ReceiveBeginPlay_Params
{
};

// Function Engine.ActorComponent.OnRep_IsActive
struct UOniAttackPicker_OnRep_IsActive_Params
{
};

// Function Engine.ActorComponent.K2_DestroyComponent
struct UOniAttackPicker_K2_DestroyComponent_Params
{
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.IsComponentTickEnabled
struct UOniAttackPicker_IsComponentTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsBeingDestroyed
struct UOniAttackPicker_IsBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.IsActive
struct UOniAttackPicker_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetOwner
struct UOniAttackPicker_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.GetComponentTickInterval
struct UOniAttackPicker_GetComponentTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.Deactivate
struct UOniAttackPicker_Deactivate_Params
{
};

// Function Engine.ActorComponent.ComponentHasTag
struct UOniAttackPicker_ComponentHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteComponent
struct UOniAttackPicker_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.ActorComponent.AddTickPrerequisiteActor
struct UOniAttackPicker_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.ActorComponent.Activate
struct UOniAttackPicker_Activate_Params
{
	bool*                                              bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode
struct UOniCustomizationItemAnimInstance_SetIsInDemonMode_Params
{
	bool*                                              IsInDemonMode;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.OniDashInteraction.SetPlayerOwner
struct UOniDashInteraction_SetPlayerOwner_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.OniDashInteraction.OnLevelReadyToPlay
struct UOniDashInteraction_OnLevelReadyToPlay_Params
{
};

// Function TheOni.OniDashInteraction.OnDashEnd
struct UOniDashInteraction_OnDashEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.OniDashInteraction.OnDashBegin
struct UOniDashInteraction_OnDashBegin_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.OniDashInteraction.OnChargeEnd
struct UOniDashInteraction_OnChargeEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              chargeCompleted;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.OniDashInteraction.OnChargeBegin
struct UOniDashInteraction_OnChargeBegin_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin
struct URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Params
{
	class AActor**                                     overlappingActor;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ABloodOrb**                                  BloodOrb;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.StartDemonModeInteraction.SetPlayerOwner
struct UStartDemonModeInteraction_SetPlayerOwner_Params
{
	class ADBDPlayer**                                 Owner;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay
struct UStartDemonModeInteraction_OnLevelReadyToPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
