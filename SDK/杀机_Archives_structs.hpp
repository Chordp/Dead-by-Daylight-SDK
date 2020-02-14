#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_DeadByDaylight_classes.hpp"
#include "杀机_GameplayTags_classes.hpp"
#include "杀机_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Archives.PlayerDataForQuestConditions
// 0x0078
struct FPlayerDataForQuestConditions
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
