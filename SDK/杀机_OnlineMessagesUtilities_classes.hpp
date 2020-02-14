#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_OnlineMessagesUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineMessagesUtilities.OnlineMessagesContainerComponent
// 0x0030 (0x0130 - 0x0100)
class UOnlineMessagesContainerComponent : public UActorComponent
{
public:
	TArray<struct FInboxMessageData>                   _messages;                                                // 0x0100(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OnlineMessagesUtilities.OnlineMessagesContainerComponent"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
