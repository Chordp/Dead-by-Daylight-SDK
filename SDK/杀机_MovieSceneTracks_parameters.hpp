#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_MovieSceneTracks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
struct UMovieScene3DConstraintSection_SetConstraintBindingID_Params
{
	struct FMovieSceneObjectBindingID*                 InConstraintBindingID;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
struct UMovieScene3DConstraintSection_GetConstraintBindingID_Params
{
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
struct UMovieSceneAudioSection_SetStartOffset_Params
{
	struct FFrameNumber*                               InStartOffset;                                            // (Parm)
};

// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
struct UMovieSceneAudioSection_SetSound_Params
{
	class USoundBase**                                 InSound;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
struct UMovieSceneAudioSection_GetStartOffset_Params
{
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
struct UMovieSceneAudioSection_GetSound_Params
{
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
struct UMovieSceneCameraCutSection_SetCameraBindingID_Params
{
	struct FMovieSceneObjectBindingID*                 InCameraBindingID;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
struct UMovieSceneCameraCutSection_GetCameraBindingID_Params
{
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
struct UMovieSceneCinematicShotSection_SetShotDisplayName_Params
{
	struct FString*                                    InShotDisplayName;                                        // (Parm, ZeroConstructor)
};

// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
struct UMovieSceneCinematicShotSection_GetShotDisplayName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieScene.MovieSceneSection.SetRowIndex
struct UMovieSceneEventSectionBase_SetRowIndex_Params
{
	int*                                               NewRowIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetPreRollFrames
struct UMovieSceneEventSectionBase_SetPreRollFrames_Params
{
	int*                                               InPreRollFrames;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetPostRollFrames
struct UMovieSceneEventSectionBase_SetPostRollFrames_Params
{
	int*                                               InPostRollFrames;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetOverlapPriority
struct UMovieSceneEventSectionBase_SetOverlapPriority_Params
{
	int*                                               NewPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetIsLocked
struct UMovieSceneEventSectionBase_SetIsLocked_Params
{
	bool*                                              bInIsLocked;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.SetIsActive
struct UMovieSceneEventSectionBase_SetIsActive_Params
{
	bool*                                              bInIsActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.IsLocked
struct UMovieSceneEventSectionBase_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.IsActive
struct UMovieSceneEventSectionBase_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetRowIndex
struct UMovieSceneEventSectionBase_GetRowIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetPreRollFrames
struct UMovieSceneEventSectionBase_GetPreRollFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetPostRollFrames
struct UMovieSceneEventSectionBase_GetPostRollFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieScene.MovieSceneSection.GetOverlapPriority
struct UMovieSceneEventSectionBase_GetOverlapPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
struct UMovieSceneLevelVisibilitySection_SetVisibility_Params
{
	ELevelVisibility*                                  InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
struct UMovieSceneLevelVisibilitySection_SetLevelNames_Params
{
	TArray<struct FName>*                              InLevelNames;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
struct UMovieSceneLevelVisibilitySection_GetVisibility_Params
{
	ELevelVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
struct UMovieSceneLevelVisibilitySection_GetLevelNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
