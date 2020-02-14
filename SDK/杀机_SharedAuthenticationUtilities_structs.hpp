#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_Engine_classes.hpp"
#include "杀机_UMG_classes.hpp"
#include "杀机_Slate_classes.hpp"
#include "杀机_CoreUObject_classes.hpp"
#include "杀机_SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SharedAuthenticationUtilities.ESharedAuthenticationProvider
enum class ESharedAuthenticationProvider : uint8_t
{
	None                           = 0,
	Facebook                       = 1,
	Google                         = 2,
	Kraken                         = 3,
	ESharedAuthenticationProvider_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SharedAuthenticationUtilities.AuthenticationRequestState
// 0x0018
struct FAuthenticationRequestState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
