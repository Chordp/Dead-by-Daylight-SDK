#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_DBDInteraction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DBDInteraction.ActivePhaseWalkInteraction.ResetMovementSpeedMultipliers
struct UActivePhaseWalkInteraction_ResetMovementSpeedMultipliers_Params
{
};

// Function DBDInteraction.ActivePhaseWalkInteraction.ResetChargeVFX
struct UActivePhaseWalkInteraction_ResetChargeVFX_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDInteraction.ActivePhaseWalkInteraction.Local_SendPhaseWalkInfo
struct UActivePhaseWalkInteraction_Local_SendPhaseWalkInfo_Params
{
	bool*                                              startActivePhaseWalk;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TeleportToHusk;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter
struct UBaseStalkModeInteraction_ShouldStartUpdateMontageDuringEnter_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionInputType
struct UBaseStalkModeInteraction_SetSecondaryActionInputType_Params
{
	EInputInteractionType*                             inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionButtonType
struct UBaseStalkModeInteraction_SetSecondaryActionButtonType_Params
{
	EButtonType*                                       ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetCancelButtonType
struct UBaseStalkModeInteraction_SetCancelButtonType_Params
{
	EButtonType*                                       ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnUpdateMontageStart
struct UBaseStalkModeInteraction_OnUpdateMontageStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart
struct UBaseStalkModeInteraction_OnInterruptorUpdateStart_Params
{
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick
struct UBaseStalkModeInteraction_OnInteractionUpdateTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart
struct UBaseStalkModeInteraction_OnInteractionUpdateStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle
struct UBaseStalkModeInteraction_OnInteractionUpdateMontageReachedMiddle_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd
struct UBaseStalkModeInteraction_OnInteractionUpdateEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted
struct UBaseStalkModeInteraction_OnInteractionInterruptStarted_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart
struct UBaseStalkModeInteraction_OnInteractionInterruptStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd
struct UBaseStalkModeInteraction_OnInteractionInterruptEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInit
struct UBaseStalkModeInteraction_OnInteractionInit_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionFinished
struct UBaseStalkModeInteraction_OnInteractionFinished_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hasInteractionStarted;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitTick
struct UBaseStalkModeInteraction_OnInteractionExitTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart
struct UBaseStalkModeInteraction_OnInteractionExitStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd
struct UBaseStalkModeInteraction_OnInteractionExitEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick
struct UBaseStalkModeInteraction_OnInteractionEnterTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart
struct UBaseStalkModeInteraction_OnInteractionEnterStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             actualSnapTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed
struct UBaseStalkModeInteraction_OnInteractionEnterFailed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd
struct UBaseStalkModeInteraction_OnInteractionEnterEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled
struct UBaseStalkModeInteraction_OnInteractionCancelled_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent
struct UBaseStalkModeInteraction_OnInteractionAnimNotifyEvent_Params
{
	struct FName*                                      NotifyId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType
struct UBaseStalkModeInteraction_IsSupportedCharacterType_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible
struct UBaseStalkModeInteraction_IsInterruptionPossible_Params
{
	class ADBDPlayer**                                 interruptor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 interruptee;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    interruption;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionUsingOffering
struct UBaseStalkModeInteraction_IsInteractionUsingOffering_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient
struct UBaseStalkModeInteraction_IsInteractionPossibleClient_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP
struct UBaseStalkModeInteraction_IsInteractionPossibleBP_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionDone
struct UBaseStalkModeInteraction_IsInteractionDone_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInputPressed
struct UBaseStalkModeInteraction_IsInputPressed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection
struct UBaseStalkModeInteraction_IsCharacterFacingInteractorDirection_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsCancelable
struct UBaseStalkModeInteraction_IsCancelable_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateMontage
struct UBaseStalkModeInteraction_GetUpdateMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateHighlightOpacityUsingCharge
struct UBaseStalkModeInteraction_GetUpdateHighlightOpacityUsingCharge_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate
struct UBaseStalkModeInteraction_GetUpdateAnimationPlayRate_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition
struct UBaseStalkModeInteraction_GetUpdateAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart
struct UBaseStalkModeInteraction_GetSnapTimeAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapTime
struct UBaseStalkModeInteraction_GetSnapTime_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapSocketName
struct UBaseStalkModeInteraction_GetSnapSocketName_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart
struct UBaseStalkModeInteraction_GetSnapPointPositionAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition
struct UBaseStalkModeInteraction_GetSnapPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart
struct UBaseStalkModeInteraction_GetSnapDistanceAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapDistance
struct UBaseStalkModeInteraction_GetSnapDistance_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionInputType
struct UBaseStalkModeInteraction_GetSecondaryActionInputType_Params
{
	EInputInteractionType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionButtonType
struct UBaseStalkModeInteraction_GetSecondaryActionButtonType_Params
{
	EButtonType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPointAtStart
struct UBaseStalkModeInteraction_GetRotationToSnapPointAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPoint
struct UBaseStalkModeInteraction_GetRotationToSnapPoint_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetPowerProgressBar
struct UBaseStalkModeInteraction_GetPowerProgressBar_Params
{
	EPowerProgressBar                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy
struct UBaseStalkModeInteraction_GetPlayerDependancy_Params
{
	class ADBDPlayer**                                 interactingPlayer;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions
struct UBaseStalkModeInteraction_GetInterruptionDefinitions_Params
{
	TArray<class UInterruptionDefinition*>             ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractor
struct UBaseStalkModeInteraction_GetInteractor_Params
{
	class UInteractor*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionTimeMultiplier
struct UBaseStalkModeInteraction_GetInteractionTimeMultiplier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionTime
struct UBaseStalkModeInteraction_GetInteractionTime_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionText
struct UBaseStalkModeInteraction_GetInteractionText_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime
struct UBaseStalkModeInteraction_GetInteractionExitTime_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText
struct UBaseStalkModeInteraction_GetInteractionDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractable
struct UBaseStalkModeInteraction_GetInteractable_Params
{
	class AInteractable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition
struct UBaseStalkModeInteraction_GetFocalPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetExitMontage
struct UBaseStalkModeInteraction_GetExitMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition
struct UBaseStalkModeInteraction_GetExitAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetEnterMontage
struct UBaseStalkModeInteraction_GetEnterMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition
struct UBaseStalkModeInteraction_GetEnterAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetChargePercent
struct UBaseStalkModeInteraction_GetChargePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetCancelButtonType
struct UBaseStalkModeInteraction_GetCancelButtonType_Params
{
	EButtonType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetAllowNavigation
struct UBaseStalkModeInteraction_GetAllowNavigation_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart
struct UBaseStalkModeInteraction_GetActualSnapPointPositionAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition
struct UBaseStalkModeInteraction_GetActualSnapPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap
struct UBaseStalkModeInteraction_GetActorsToIgnoreOverlap_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta
struct UBaseStalkModeInteraction_GetActorHeightDelta_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath
struct UBaseStalkModeInteraction_DoesPlayerHaveClearPath_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CompleteCharge
struct UBaseStalkModeInteraction_CompleteCharge_Params
{
	class ADBDPlayer**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction
struct UBaseStalkModeInteraction_CanOverrideInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantSpeed
struct UBaseStalkModeInteraction_CalculateSnapTimeForConstantSpeed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Speed;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantMaxNormalMovementSpeed
struct UBaseStalkModeInteraction_CalculateSnapTimeForConstantMaxNormalMovementSpeed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             speedBoost;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AttachToZone
struct UBaseStalkModeInteraction_AttachToZone_Params
{
	class UPrimitiveComponent**                        zone;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AttachToInteractor
struct UBaseStalkModeInteraction_AttachToInteractor_Params
{
	class UInteractor**                                Interactor;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AtlantaItemUseToggleState
struct UBaseStalkModeInteraction_AtlantaItemUseToggleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AtlantaGetPowerButtonImageID
struct UBaseStalkModeInteraction_AtlantaGetPowerButtonImageID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction
struct UBaseStalkModeInteraction_AddMutuallyExclusiveInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DBDInteraction.CollectItemInteraction.GetItem
struct UCollectItemInteraction_GetItem_Params
{
	class ACollectable*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied
struct UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Params
{
	float*                                             IndividualChargeAmount;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalChargeAmount;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ChargeInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WasCoop;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.ShouldShowSpeedProficiencyForMultipleInteractors
struct UGeneratorDamageInteraction_ShouldShowSpeedProficiencyForMultipleInteractors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.SetSpeedBase
struct UGeneratorDamageInteraction_SetSpeedBase_Params
{
	float*                                             speedBase;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.SetChargeableComponent
struct UGeneratorDamageInteraction_SetChargeableComponent_Params
{
	class UChargeableComponent**                       ChargeableComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthorityBP
struct UGeneratorDamageInteraction_OnSkillCheckResponseAuthorityBP_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthority
struct UGeneratorDamageInteraction_OnSkillCheckResponseAuthority_Params
{
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TriggerLoudNoise;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAestheticBP
struct UGeneratorDamageInteraction_OnSkillCheckResponseAestheticBP_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAesthetic
struct UGeneratorDamageInteraction_OnSkillCheckResponseAesthetic_Params
{
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TriggerLoudNoise;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnInteractionCompletionStateChanged
struct UGeneratorDamageInteraction_OnInteractionCompletionStateChanged_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              complete;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnChargeableChangedBP
struct UGeneratorDamageInteraction_OnChargeableChangedBP_Params
{
	class UChargeableComponent**                       oldChargeable;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChargeableComponent**                       newChargeable;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.HasSkillCheckHappened
struct UGeneratorDamageInteraction_HasSkillCheckHappened_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetTunableValue
struct UGeneratorDamageInteraction_GetTunableValue_Params
{
	struct FName*                                      TunableValueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             defaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSuccessProbability
struct UGeneratorDamageInteraction_GetSuccessProbability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckProbability
struct UGeneratorDamageInteraction_GetSkillCheckProbability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailureTimePenalty
struct UGeneratorDamageInteraction_GetSkillCheckFailureTimePenalty_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailurePercentPenalty
struct UGeneratorDamageInteraction_GetSkillCheckFailurePercentPenalty_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckDifficulityModifier
struct UGeneratorDamageInteraction_GetSkillCheckDifficulityModifier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckCharge
struct UGeneratorDamageInteraction_GetSkillCheckCharge_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ESkillCheckCustomType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetPipsPassed
struct UGeneratorDamageInteraction_GetPipsPassed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetPerkMultiplier
struct UGeneratorDamageInteraction_GetPerkMultiplier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetMultiplicativeLuckBonus
struct UGeneratorDamageInteraction_GetMultiplicativeLuckBonus_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetMaxCharge
struct UGeneratorDamageInteraction_GetMaxCharge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetItemEfficiencyModifier
struct UGeneratorDamageInteraction_GetItemEfficiencyModifier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetGoodSkillCheckSuccessPercentReward
struct UGeneratorDamageInteraction_GetGoodSkillCheckSuccessPercentReward_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeSpeedModifier
struct UGeneratorDamageInteraction_GetChargeSpeedModifier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeAmountForTime
struct UGeneratorDamageInteraction_GetChargeAmountForTime_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeableComponent
struct UGeneratorDamageInteraction_GetChargeableComponent_Params
{
	class UChargeableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckZoneSizeModifier
struct UGeneratorDamageInteraction_GetBonusSkillCheckZoneSizeModifier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckSuccessPercentReward
struct UGeneratorDamageInteraction_GetBonusSkillCheckSuccessPercentReward_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetBlueprintChargeSpeedMultiplier
struct UGeneratorDamageInteraction_GetBlueprintChargeSpeedMultiplier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveLuckBonus
struct UGeneratorDamageInteraction_GetAdditiveLuckBonus_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveChargeTimeReductionAsMultiplier
struct UGeneratorDamageInteraction_GetAdditiveChargeTimeReductionAsMultiplier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.Authority_ChargeWithItem
struct UGeneratorDamageInteraction_Authority_ChargeWithItem_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ACollectable**                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.AddCharge
struct UGeneratorDamageInteraction_AddCharge_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.ShouldStartUpdateMontageDuringEnter
struct UGhostChargeStalkModeInteraction_ShouldStartUpdateMontageDuringEnter_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionInputType
struct UGhostChargeStalkModeInteraction_SetSecondaryActionInputType_Params
{
	EInputInteractionType*                             inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetSecondaryActionButtonType
struct UGhostChargeStalkModeInteraction_SetSecondaryActionButtonType_Params
{
	EButtonType*                                       ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.SetCancelButtonType
struct UGhostChargeStalkModeInteraction_SetCancelButtonType_Params
{
	EButtonType*                                       ButtonType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnUpdateMontageStart
struct UGhostChargeStalkModeInteraction_OnUpdateMontageStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart
struct UGhostChargeStalkModeInteraction_OnInterruptorUpdateStart_Params
{
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick
struct UGhostChargeStalkModeInteraction_OnInteractionUpdateTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart
struct UGhostChargeStalkModeInteraction_OnInteractionUpdateStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle
struct UGhostChargeStalkModeInteraction_OnInteractionUpdateMontageReachedMiddle_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd
struct UGhostChargeStalkModeInteraction_OnInteractionUpdateEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted
struct UGhostChargeStalkModeInteraction_OnInteractionInterruptStarted_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart
struct UGhostChargeStalkModeInteraction_OnInteractionInterruptStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd
struct UGhostChargeStalkModeInteraction_OnInteractionInterruptEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInit
struct UGhostChargeStalkModeInteraction_OnInteractionInit_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionFinished
struct UGhostChargeStalkModeInteraction_OnInteractionFinished_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              hasInteractionStarted;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitTick
struct UGhostChargeStalkModeInteraction_OnInteractionExitTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart
struct UGhostChargeStalkModeInteraction_OnInteractionExitStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd
struct UGhostChargeStalkModeInteraction_OnInteractionExitEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick
struct UGhostChargeStalkModeInteraction_OnInteractionEnterTick_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart
struct UGhostChargeStalkModeInteraction_OnInteractionEnterStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             actualSnapTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed
struct UGhostChargeStalkModeInteraction_OnInteractionEnterFailed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd
struct UGhostChargeStalkModeInteraction_OnInteractionEnterEnd_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled
struct UGhostChargeStalkModeInteraction_OnInteractionCancelled_Params
{
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent
struct UGhostChargeStalkModeInteraction_OnInteractionAnimNotifyEvent_Params
{
	struct FName*                                      NotifyId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType
struct UGhostChargeStalkModeInteraction_IsSupportedCharacterType_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible
struct UGhostChargeStalkModeInteraction_IsInterruptionPossible_Params
{
	class ADBDPlayer**                                 interruptor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 interruptee;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition**                    interruption;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionUsingOffering
struct UGhostChargeStalkModeInteraction_IsInteractionUsingOffering_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient
struct UGhostChargeStalkModeInteraction_IsInteractionPossibleClient_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP
struct UGhostChargeStalkModeInteraction_IsInteractionPossibleBP_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionDone
struct UGhostChargeStalkModeInteraction_IsInteractionDone_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EInputInteractionType*                             InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInputPressed
struct UGhostChargeStalkModeInteraction_IsInputPressed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection
struct UGhostChargeStalkModeInteraction_IsCharacterFacingInteractorDirection_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsCancelable
struct UGhostChargeStalkModeInteraction_IsCancelable_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateMontage
struct UGhostChargeStalkModeInteraction_GetUpdateMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateHighlightOpacityUsingCharge
struct UGhostChargeStalkModeInteraction_GetUpdateHighlightOpacityUsingCharge_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate
struct UGhostChargeStalkModeInteraction_GetUpdateAnimationPlayRate_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition
struct UGhostChargeStalkModeInteraction_GetUpdateAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart
struct UGhostChargeStalkModeInteraction_GetSnapTimeAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapTime
struct UGhostChargeStalkModeInteraction_GetSnapTime_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapSocketName
struct UGhostChargeStalkModeInteraction_GetSnapSocketName_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart
struct UGhostChargeStalkModeInteraction_GetSnapPointPositionAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition
struct UGhostChargeStalkModeInteraction_GetSnapPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart
struct UGhostChargeStalkModeInteraction_GetSnapDistanceAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapDistance
struct UGhostChargeStalkModeInteraction_GetSnapDistance_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionInputType
struct UGhostChargeStalkModeInteraction_GetSecondaryActionInputType_Params
{
	EInputInteractionType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSecondaryActionButtonType
struct UGhostChargeStalkModeInteraction_GetSecondaryActionButtonType_Params
{
	EButtonType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPointAtStart
struct UGhostChargeStalkModeInteraction_GetRotationToSnapPointAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetRotationToSnapPoint
struct UGhostChargeStalkModeInteraction_GetRotationToSnapPoint_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetPowerProgressBar
struct UGhostChargeStalkModeInteraction_GetPowerProgressBar_Params
{
	EPowerProgressBar                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy
struct UGhostChargeStalkModeInteraction_GetPlayerDependancy_Params
{
	class ADBDPlayer**                                 interactingPlayer;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions
struct UGhostChargeStalkModeInteraction_GetInterruptionDefinitions_Params
{
	TArray<class UInterruptionDefinition*>             ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractor
struct UGhostChargeStalkModeInteraction_GetInteractor_Params
{
	class UInteractor*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionTimeMultiplier
struct UGhostChargeStalkModeInteraction_GetInteractionTimeMultiplier_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionTime
struct UGhostChargeStalkModeInteraction_GetInteractionTime_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionText
struct UGhostChargeStalkModeInteraction_GetInteractionText_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime
struct UGhostChargeStalkModeInteraction_GetInteractionExitTime_Params
{
	class ADBDPlayer**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText
struct UGhostChargeStalkModeInteraction_GetInteractionDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractable
struct UGhostChargeStalkModeInteraction_GetInteractable_Params
{
	class AInteractable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition
struct UGhostChargeStalkModeInteraction_GetFocalPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetExitMontage
struct UGhostChargeStalkModeInteraction_GetExitMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition
struct UGhostChargeStalkModeInteraction_GetExitAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetEnterMontage
struct UGhostChargeStalkModeInteraction_GetEnterMontage_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition
struct UGhostChargeStalkModeInteraction_GetEnterAnimationPlayBackDefinition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetChargePercent
struct UGhostChargeStalkModeInteraction_GetChargePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetCancelButtonType
struct UGhostChargeStalkModeInteraction_GetCancelButtonType_Params
{
	EButtonType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetAllowNavigation
struct UGhostChargeStalkModeInteraction_GetAllowNavigation_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart
struct UGhostChargeStalkModeInteraction_GetActualSnapPointPositionAtStart_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition
struct UGhostChargeStalkModeInteraction_GetActualSnapPointPosition_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap
struct UGhostChargeStalkModeInteraction_GetActorsToIgnoreOverlap_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta
struct UGhostChargeStalkModeInteraction_GetActorHeightDelta_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath
struct UGhostChargeStalkModeInteraction_DoesPlayerHaveClearPath_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CompleteCharge
struct UGhostChargeStalkModeInteraction_CompleteCharge_Params
{
	class ADBDPlayer**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction
struct UGhostChargeStalkModeInteraction_CanOverrideInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantSpeed
struct UGhostChargeStalkModeInteraction_CalculateSnapTimeForConstantSpeed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Speed;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CalculateSnapTimeForConstantMaxNormalMovementSpeed
struct UGhostChargeStalkModeInteraction_CalculateSnapTimeForConstantMaxNormalMovementSpeed_Params
{
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             speedBoost;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AttachToZone
struct UGhostChargeStalkModeInteraction_AttachToZone_Params
{
	class UPrimitiveComponent**                        zone;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AttachToInteractor
struct UGhostChargeStalkModeInteraction_AttachToInteractor_Params
{
	class UInteractor**                                Interactor;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AtlantaItemUseToggleState
struct UGhostChargeStalkModeInteraction_AtlantaItemUseToggleState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AtlantaGetPowerButtonImageID
struct UGhostChargeStalkModeInteraction_AtlantaGetPowerButtonImageID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction
struct UGhostChargeStalkModeInteraction_AddMutuallyExclusiveInteraction_Params
{
	class UInteractionDefinition**                     Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DBDInteraction.LinkedVomitInteraction.IsVomiting
struct ULinkedVomitInteraction_IsVomiting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDInteraction.LinkedVomitInteraction.IsChargeComplete
struct ULinkedVomitInteraction_IsChargeComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent
struct ULinkedVomitInteraction_GetVomitStateComponent_Params
{
	class UVomitStateComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX
struct UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Params
{
};

// Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet
struct UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Params
{
	class ASlasherPlayer**                             Slasher;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime
struct UThrowInteraction_InitThrowCancellationExitTime_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBDInteraction.ThrowInteraction.HasCancelledThrow
struct UThrowInteraction_HasCancelledThrow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
