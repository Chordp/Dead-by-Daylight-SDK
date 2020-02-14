#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CoreUtilities.RealCaseGapEnum
enum class ERealCaseGapEnum : uint8_t
{
	None                           = 0,
	SavefileDeserializationFailure = 1,
	EarnPlayerXpParamError         = 2,
	RealCaseGapEnum_MAX            = 3
};


// Enum CoreUtilities.OutOfOrderEnum
enum class EOutOfOrderEnum : uint8_t
{
	Value1                         = 0,
	Value2                         = 1,
	Value3                         = 2,
	OutOfOrderEnum_MAX             = 3
};


// Enum CoreUtilities.GapEnum
enum class EGapEnum : uint8_t
{
	Value1                         = 0,
	Value2                         = 1,
	Value3                         = 2,
	GapEnum_MAX                    = 3
};


// Enum CoreUtilities.SimpleEnum
enum class ESimpleEnum : uint8_t
{
	Value1                         = 0,
	Value2                         = 1,
	Value3                         = 2,
	SimpleEnum_MAX                 = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
