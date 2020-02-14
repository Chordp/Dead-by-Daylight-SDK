#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Audio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Audio.Audio_C
// 0x0008 (0x0350 - 0x0348)
class AAudio_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Audio.Audio_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Audio(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
