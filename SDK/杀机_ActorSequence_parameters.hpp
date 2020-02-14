#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_ActorSequence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
struct UActorSequencePlayer_StopAtCurrentTime_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Stop
struct UActorSequencePlayer_Stop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
struct UActorSequencePlayer_SetTimeRange_Params
{
	float*                                             StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct UActorSequencePlayer_SetPlayRate_Params
{
	float*                                             PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
struct UActorSequencePlayer_SetPlaybackRange_Params
{
	float*                                             NewStartTime;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewEndTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct UActorSequencePlayer_SetPlaybackPosition_Params
{
	float*                                             NewPlaybackPosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
struct UActorSequencePlayer_SetFrameRate_Params
{
	struct FFrameRate*                                 FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
struct UActorSequencePlayer_SetFrameRange_Params
{
	int*                                               StartFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
struct UActorSequencePlayer_SetDisableCameraCuts_Params
{
	bool*                                              bInDisableCameraCuts;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
struct UActorSequencePlayer_ScrubToSeconds_Params
{
	float*                                             TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
struct UActorSequencePlayer_ScrubToMarkedFrame_Params
{
	struct FString*                                    InLabel;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
struct UActorSequencePlayer_ScrubToFrame_Params
{
	struct FFrameTime*                                 NewPosition;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.Scrub
struct UActorSequencePlayer_Scrub_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
struct UActorSequencePlayer_RPC_OnStopEvent_Params
{
	struct FFrameTime*                                 StoppedTime;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
struct UActorSequencePlayer_RPC_ExplicitServerUpdateEvent_Params
{
	EUpdatePositionMethod*                             Method;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameTime*                                 RelevantTime;                                             // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
struct UActorSequencePlayer_PlayToSeconds_Params
{
	float*                                             TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
struct UActorSequencePlayer_PlayToMarkedFrame_Params
{
	struct FString*                                    InLabel;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
struct UActorSequencePlayer_PlayToFrame_Params
{
	struct FFrameTime*                                 NewPosition;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
struct UActorSequencePlayer_PlayReverse_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct UActorSequencePlayer_PlayLooping_Params
{
	int*                                               NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.Play
struct UActorSequencePlayer_Play_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.Pause
struct UActorSequencePlayer_Pause_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
struct UActorSequencePlayer_JumpToSeconds_Params
{
	float*                                             TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
struct UActorSequencePlayer_JumpToPosition_Params
{
	float*                                             NewPlaybackPosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
struct UActorSequencePlayer_JumpToMarkedFrame_Params
{
	struct FString*                                    InLabel;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
struct UActorSequencePlayer_JumpToFrame_Params
{
	struct FFrameTime*                                 NewPosition;                                              // (Parm)
};

// Function MovieScene.MovieSceneSequencePlayer.IsReversed
struct UActorSequencePlayer_IsReversed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct UActorSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.IsPaused
struct UActorSequencePlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
struct UActorSequencePlayer_GoToEndAndStop_Params
{
};

// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
struct UActorSequencePlayer_GetStartTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct UActorSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
struct UActorSequencePlayer_GetPlaybackStart_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
struct UActorSequencePlayer_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
struct UActorSequencePlayer_GetPlaybackEnd_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
struct UActorSequencePlayer_GetObjectBindings_Params
{
	class UObject**                                    InObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieSceneObjectBindingID>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetLength
struct UActorSequencePlayer_GetLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
struct UActorSequencePlayer_GetFrameRate_Params
{
	struct FFrameRate                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
struct UActorSequencePlayer_GetFrameDuration_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
struct UActorSequencePlayer_GetEndTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetDuration
struct UActorSequencePlayer_GetDuration_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
struct UActorSequencePlayer_GetDisableCameraCuts_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
struct UActorSequencePlayer_GetCurrentTime_Params
{
	struct FQualifiedFrameTime                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
struct UActorSequencePlayer_GetBoundObjects_Params
{
	struct FMovieSceneObjectBindingID*                 ObjectBinding;                                            // (Parm)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
struct UActorSequencePlayer_ChangePlaybackDirection_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
