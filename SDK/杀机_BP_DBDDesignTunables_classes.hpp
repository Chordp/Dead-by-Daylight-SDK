#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_DBDDesignTunables_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DBDDesignTunables.BP_DBDDesignTunables_C
// 0x0008 (0x0240 - 0x0238)
class UBP_DBDDesignTunables_C : public UDBDDesignTunables
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_DBDDesignTunables.BP_DBDDesignTunables_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_DBDDesignTunables(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
