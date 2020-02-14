#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_OnlinePresence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlinePresence.MirrorsConfig
// 0x0000 (0x0030 - 0x0030)
class UMirrorsConfig : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OnlinePresence.MirrorsConfig"));

		return ptr;
	}

};


// Class OnlinePresence.OnlinePresenceExternalCommands
// 0x0018 (0x0048 - 0x0030)
class UOnlinePresenceExternalCommands : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OnlinePresence.OnlinePresenceExternalCommands"));

		return ptr;
	}

};


// Class OnlinePresence.SteamConfig
// 0x0000 (0x0030 - 0x0030)
class USteamConfig : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OnlinePresence.SteamConfig"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
