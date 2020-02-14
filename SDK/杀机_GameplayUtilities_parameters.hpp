#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_GameplayUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed
struct UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired
struct UAuthoritativePoolableActorComponent_OnRep_Acquired_Params
{
};

// Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen
struct UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels
struct UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount
struct UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent
struct UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent
struct UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercent
struct UCharacterSightComponent_SetMinimumCharacterScreenPercent_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters
struct UCharacterSightComponent_Server_UpdateDiscernedCharacters_Params
{
	TArray<class ACharacter*>*                         Characters;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters
struct UCharacterSightComponent_OnRep_DiscernibleCharacters_Params
{
};

// Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee
struct UCharacterSightComponent_OnRep_CanSee_Params
{
};

// Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed
struct UMockAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
