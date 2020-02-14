#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_Engine_classes.hpp"
#include "杀机_Activation_classes.hpp"
#include "杀机_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameplayUtilities.ESightStatus
enum class ESightStatus : uint8_t
{
	OutOfSight                     = 0,
	Discerned                      = 1,
	Sighted                        = 2,
	ESightStatus_MAX               = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayUtilities.DelegateHandleWrapper
// 0x0008
struct FDelegateHandleWrapper
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayUtilities.AuthorityDiscernedCharacter
// 0x0010
struct FAuthorityDiscernedCharacter
{
	class ACharacter*                                  _character;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isSighted;                                               // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayUtilities.DiscernibleCharacter
// 0x0018
struct FDiscernibleCharacter
{
	class ACharacter*                                  _character;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
