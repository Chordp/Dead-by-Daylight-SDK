// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_RedStainComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeadByDaylight.RedStainComponent.UpdateRedStain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          shouldBeHidden                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Alpha                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68074F040              		 offset:163f040                       

void UBP_RedStainComponent_C::UpdateRedStain(bool* shouldBeHidden, float* Alpha)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.RedStainComponent.UpdateRedStain"));

	UBP_RedStainComponent_C_UpdateRedStain_Params params;
	params.shouldBeHidden = shouldBeHidden;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
