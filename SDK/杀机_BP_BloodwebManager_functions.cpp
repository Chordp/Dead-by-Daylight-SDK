// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_BloodwebManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeadByDaylight.BloodwebManager.Init
// (Final, Native, Public)
// Parameters:
// class UDBDGameInstance**       GameInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// class UDBDDesignTunables**     Tunables                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680672340              		 offset:1562340                       

void UBP_BloodwebManager_C::Init(class UDBDGameInstance** GameInstance, class UDBDDesignTunables** Tunables)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.BloodwebManager.Init"));

	UBP_BloodwebManager_C_Init_Params params;
	params.GameInstance = GameInstance;
	params.Tunables = Tunables;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
