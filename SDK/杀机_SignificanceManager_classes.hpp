#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_SignificanceManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SignificanceManager.SignificanceManager
// 0x00F8 (0x0128 - 0x0030)
class USignificanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0030(0x00D8) MISSED OFFSET
	struct FSoftClassPath                              SignificanceManagerClassName;                             // 0x0108(0x0020) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SignificanceManager.SignificanceManager"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
