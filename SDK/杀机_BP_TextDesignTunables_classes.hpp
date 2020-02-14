#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_TextDesignTunables_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TextDesignTunables.BP_TextDesignTunables_C
// 0x0008 (0x0120 - 0x0118)
class UBP_TextDesignTunables_C : public UDBDTextDesignTunables
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TextDesignTunables.BP_TextDesignTunables_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_TextDesignTunables(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
