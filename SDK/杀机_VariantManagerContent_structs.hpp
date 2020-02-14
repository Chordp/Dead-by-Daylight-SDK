#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_CoreUObject_classes.hpp"
#include "杀机_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
	Undefined                      = 0,
	Generic                        = 1,
	RelativeLocation               = 2,
	RelativeRotation               = 3,
	RelativeScale3D                = 4,
	bVisible                       = 5,
	Material                       = 6,
	Color                          = 7,
	EPropertyValueCategory_MAX     = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VariantManagerContent.CapturedPropSegment
// 0x0028
struct FCapturedPropSegment
{
	struct FString                                     PropertyName;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                PropertyIndex;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     ComponentName;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct VariantManagerContent.FunctionCaller
// 0x000C
struct FFunctionCaller
{
	struct FName                                       FunctionName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
