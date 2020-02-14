#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_Engine_classes.hpp"
#include "杀机_CoreUObject_classes.hpp"
#include "杀机_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Activation.EActivationStrategy
enum class EActivationStrategy : uint8_t
{
	ActivateIfAnyTagMatches        = 0,
	ActivateIfAllTagMatches        = 1,
	DeactivateIfAnyTagMatches      = 2,
	DeactivateIfAllTagMatches      = 3,
	DeactivateWhenDependenciesAreDeactivated = 4,
	EActivationStrategy_MAX        = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Activation.ActivationDefinition
// 0x0028
struct FActivationDefinition
{
	EActivationStrategy                                _activationStrategy;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       _activationTags;                                          // 0x0008(0x0020) (Edit)
};

// ScriptStruct Activation.TestableActivationDefinition
// 0x0000 (0x0028 - 0x0028)
struct FTestableActivationDefinition : public FActivationDefinition
{
	EActivationStrategy                                _activationStrategy;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       _activationTags;                                          // 0x0008(0x0020) (Edit)
};

// ScriptStruct Activation.DependencyBasedActivationStrategy
// 0x0020
struct FDependencyBasedActivationStrategy
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
