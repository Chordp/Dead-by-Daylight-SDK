#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_DeadByDaylight_classes.hpp"
#include "杀机_Activation_classes.hpp"
#include "杀机_GameplayTags_classes.hpp"
#include "杀机_CoreUObject_classes.hpp"
#include "杀机_Engine_classes.hpp"
#include "杀机_DBDGameplay_classes.hpp"
#include "杀机_DBDCompetence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TheOni.EBloodOrbState
enum class EBloodOrbState : uint8_t
{
	Invalid                        = 0,
	BeingDropped                   = 1,
	Idle                           = 2,
	WaitingToMove                  = 3,
	Attracted                      = 4,
	Absorbed                       = 5,
	Destroyed                      = 6,
	EBloodOrbState_MAX             = 7
};


// Enum TheOni.EBloodOrbVisibilityMode
enum class EBloodOrbVisibilityMode : uint8_t
{
	VisibleWithinRange             = 0,
	HideAll                        = 1,
	EBloodOrbVisibilityMode_MAX    = 2
};


// Enum TheOni.EDemonModeState
enum class EDemonModeState : uint8_t
{
	Invalid                        = 0,
	NotInPower                     = 1,
	Activation                     = 2,
	InPower                        = 3,
	Cooldown                       = 4,
	EDemonModeState_MAX            = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TheOni.GameEventBloodOrbDropParams
// 0x0010
struct FGameEventBloodOrbDropParams
{
	struct FGameplayTag                                GameEvent;                                                // 0x0000(0x000C) (Edit, DisableEditOnInstance)
	float                                              ImpulseFactor;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct TheOni.Accumulator
// 0x0018
struct FAccumulator
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct TheOni.BloodOrbDropParams
// 0x0008
struct FBloodOrbDropParams
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
