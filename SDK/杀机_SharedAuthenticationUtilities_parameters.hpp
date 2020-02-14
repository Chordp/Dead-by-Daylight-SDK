#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_SharedAuthenticationUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UMG.UserWidget.UnregisterInputComponent
struct UUMGAutheticationProviderSelection_UnregisterInputComponent_Params
{
};

// Function UMG.UserWidget.UnbindFromAnimationStarted
struct UUMGAutheticationProviderSelection_UnbindFromAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.UnbindFromAnimationFinished
struct UUMGAutheticationProviderSelection_UnbindFromAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.UnbindAllFromAnimationStarted
struct UUMGAutheticationProviderSelection_UnbindAllFromAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.UnbindAllFromAnimationFinished
struct UUMGAutheticationProviderSelection_UnbindAllFromAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.Tick
struct UUMGAutheticationProviderSelection_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForInputAction
struct UUMGAutheticationProviderSelection_StopListeningForInputAction_Params
{
	struct FName*                                      ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>*                          EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForAllInputActions
struct UUMGAutheticationProviderSelection_StopListeningForAllInputActions_Params
{
};

// Function UMG.UserWidget.StopAnimationsAndLatentActions
struct UUMGAutheticationProviderSelection_StopAnimationsAndLatentActions_Params
{
};

// Function UMG.UserWidget.StopAnimation
struct UUMGAutheticationProviderSelection_StopAnimation_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopAllAnimations
struct UUMGAutheticationProviderSelection_StopAllAnimations_Params
{
};

// Function UMG.UserWidget.SetPositionInViewport
struct UUMGAutheticationProviderSelection_SetPositionInViewport_Params
{
	struct FVector2D*                                  Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRemoveDPIScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetPlaybackSpeed
struct UUMGAutheticationProviderSelection_SetPlaybackSpeed_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetPadding
struct UUMGAutheticationProviderSelection_SetPadding_Params
{
	struct FMargin*                                    InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetOwningPlayer
struct UUMGAutheticationProviderSelection_SetOwningPlayer_Params
{
	class APlayerController**                          LocalPlayerController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetNumLoopsToPlay
struct UUMGAutheticationProviderSelection_SetNumLoopsToPlay_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionPriority
struct UUMGAutheticationProviderSelection_SetInputActionPriority_Params
{
	int*                                               NewPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionBlocking
struct UUMGAutheticationProviderSelection_SetInputActionBlocking_Params
{
	bool*                                              bShouldBlock;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetForegroundColor
struct UUMGAutheticationProviderSelection_SetForegroundColor_Params
{
	struct FSlateColor*                                InForegroundColor;                                        // (Parm)
};

// Function UMG.UserWidget.SetDesiredSizeInViewport
struct UUMGAutheticationProviderSelection_SetDesiredSizeInViewport_Params
{
	struct FVector2D*                                  Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetColorAndOpacity
struct UUMGAutheticationProviderSelection_SetColorAndOpacity_Params
{
	struct FLinearColor*                               InColorAndOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetAnchorsInViewport
struct UUMGAutheticationProviderSelection_SetAnchorsInViewport_Params
{
	struct FAnchors*                                   Anchors;                                                  // (Parm)
};

// Function UMG.UserWidget.SetAlignmentInViewport
struct UUMGAutheticationProviderSelection_SetAlignmentInViewport_Params
{
	struct FVector2D*                                  Alignment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.ReverseAnimation
struct UUMGAutheticationProviderSelection_ReverseAnimation_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.RemoveFromViewport
struct UUMGAutheticationProviderSelection_RemoveFromViewport_Params
{
};

// Function UMG.UserWidget.RegisterInputComponent
struct UUMGAutheticationProviderSelection_RegisterInputComponent_Params
{
};

// Function UMG.UserWidget.PreConstruct
struct UUMGAutheticationProviderSelection_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlaySound
struct UUMGAutheticationProviderSelection_PlaySound_Params
{
	class USoundBase**                                 SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationTimeRange
struct UUMGAutheticationProviderSelection_PlayAnimationTimeRange_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndAtTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>*                 PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationReverse
struct UUMGAutheticationProviderSelection_PlayAnimationReverse_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationForward
struct UUMGAutheticationProviderSelection_PlayAnimationForward_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimation
struct UUMGAutheticationProviderSelection_PlayAnimation_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>*                 PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PauseAnimation
struct UUMGAutheticationProviderSelection_PauseAnimation_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnTouchStarted
struct UUMGAutheticationProviderSelection_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchMoved
struct UUMGAutheticationProviderSelection_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchGesture
struct UUMGAutheticationProviderSelection_OnTouchGesture_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              GestureEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchForceChanged
struct UUMGAutheticationProviderSelection_OnTouchForceChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchEnded
struct UUMGAutheticationProviderSelection_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnRemovedFromFocusPath
struct UUMGAutheticationProviderSelection_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct UUMGAutheticationProviderSelection_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPreviewKeyDown
struct UUMGAutheticationProviderSelection_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPaint
struct UUMGAutheticationProviderSelection_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseWheel
struct UUMGAutheticationProviderSelection_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseMove
struct UUMGAutheticationProviderSelection_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseLeave
struct UUMGAutheticationProviderSelection_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseEnter
struct UUMGAutheticationProviderSelection_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseCaptureLost
struct UUMGAutheticationProviderSelection_OnMouseCaptureLost_Params
{
};

// Function UMG.UserWidget.OnMouseButtonUp
struct UUMGAutheticationProviderSelection_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDown
struct UUMGAutheticationProviderSelection_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct UUMGAutheticationProviderSelection_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMotionDetected
struct UUMGAutheticationProviderSelection_OnMotionDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FMotionEvent*                               InMotionEvent;                                            // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyUp
struct UUMGAutheticationProviderSelection_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyDown
struct UUMGAutheticationProviderSelection_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyChar
struct UUMGAutheticationProviderSelection_OnKeyChar_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FCharacterEvent*                            InCharacterEvent;                                         // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnInitialized
struct UUMGAutheticationProviderSelection_OnInitialized_Params
{
};

// Function UMG.UserWidget.OnFocusReceived
struct UUMGAutheticationProviderSelection_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnFocusLost
struct UUMGAutheticationProviderSelection_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.OnDrop
struct UUMGAutheticationProviderSelection_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragOver
struct UUMGAutheticationProviderSelection_OnDragOver_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragLeave
struct UUMGAutheticationProviderSelection_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragEnter
struct UUMGAutheticationProviderSelection_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragDetected
struct UUMGAutheticationProviderSelection_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragCancelled
struct UUMGAutheticationProviderSelection_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationStarted
struct UUMGAutheticationProviderSelection_OnAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationFinished
struct UUMGAutheticationProviderSelection_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnalogValueChanged
struct UUMGAutheticationProviderSelection_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnAddedToFocusPath
struct UUMGAutheticationProviderSelection_OnAddedToFocusPath_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.ListenForInputAction
struct UUMGAutheticationProviderSelection_ListenForInputAction_Params
{
	struct FName*                                      ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>*                          EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bConsume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            callback;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.IsPlayingAnimation
struct UUMGAutheticationProviderSelection_IsPlayingAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsListeningForInputAction
struct UUMGAutheticationProviderSelection_IsListeningForInputAction_Params
{
	struct FName*                                      ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsInViewport
struct UUMGAutheticationProviderSelection_IsInViewport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsInteractable
struct UUMGAutheticationProviderSelection_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnyAnimationPlaying
struct UUMGAutheticationProviderSelection_IsAnyAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlayingForward
struct UUMGAutheticationProviderSelection_IsAnimationPlayingForward_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlaying
struct UUMGAutheticationProviderSelection_IsAnimationPlaying_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayerPawn
struct UUMGAutheticationProviderSelection_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetIsVisible
struct UUMGAutheticationProviderSelection_GetIsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetAnimationCurrentTime
struct UUMGAutheticationProviderSelection_GetAnimationCurrentTime_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetAnchorsInViewport
struct UUMGAutheticationProviderSelection_GetAnchorsInViewport_Params
{
	struct FAnchors                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.GetAlignmentInViewport
struct UUMGAutheticationProviderSelection_GetAlignmentInViewport_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.Destruct
struct UUMGAutheticationProviderSelection_Destruct_Params
{
};

// Function UMG.UserWidget.Construct
struct UUMGAutheticationProviderSelection_Construct_Params
{
};

// Function UMG.UserWidget.CancelLatentActions
struct UUMGAutheticationProviderSelection_CancelLatentActions_Params
{
};

// Function UMG.UserWidget.BindToAnimationStarted
struct UUMGAutheticationProviderSelection_BindToAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.BindToAnimationFinished
struct UUMGAutheticationProviderSelection_BindToAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.BindToAnimationEvent
struct UUMGAutheticationProviderSelection_BindToAnimationEvent_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Delegate;                                                 // (Parm, ZeroConstructor)
	EWidgetAnimationEvent*                             AnimationEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      UserTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.AddToViewport
struct UUMGAutheticationProviderSelection_AddToViewport_Params
{
	int*                                               ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.AddToPlayerScreen
struct UUMGAutheticationProviderSelection_AddToPlayerScreen_Params
{
	int*                                               ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
