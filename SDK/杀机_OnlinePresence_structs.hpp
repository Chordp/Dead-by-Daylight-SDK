#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlinePresence.ERichPresenceUserType
enum class ERichPresenceUserType : uint8_t
{
	Player                         = 0,
	Server                         = 1,
	ERichPresenceUserType_MAX      = 2
};


// Enum OnlinePresence.ERichPresenceStatus
enum class ERichPresenceStatus : uint8_t
{
	Offline                        = 0,
	Connected                      = 1,
	InMenus                        = 2,
	InPartyLobby                   = 3,
	InOnlineLobby                  = 4,
	InMatch                        = 5,
	ERichPresenceStatus_MAX        = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
