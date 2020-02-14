#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_Engine_classes.hpp"
#include "杀机_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VFXUtilities.ESpawnerStrategyType
enum class ESpawnerStrategyType : uint8_t
{
	None                           = 0,
	NoAccumulation                 = 1,
	ESpawnerStrategyType_MAX       = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
