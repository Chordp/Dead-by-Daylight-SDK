#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_StartScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StartScreen.StartScreen_C
// 0x0010 (0x0370 - 0x0360)
class AStartScreen_C : public AStartScreenBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AMatineeActor*                               MatineeActor_1_ExecuteUbergraph_StartScreen_RefProperty;  // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass StartScreen.StartScreen_C"));

		return ptr;
	}


	void K2Node_MatineeController_1_FadedOutEvent();
	void K2Node_MatineeController_1_Finished();
	void ReceiveBeginPlay();
	void BeginDestroyTravelSequence();
	void ExecuteUbergraph_StartScreen(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
