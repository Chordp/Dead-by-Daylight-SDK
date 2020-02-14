// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_GS_Necklace_ACC01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_GS_Necklace_ACC01.AB_GS_Necklace_ACC01_C.ExecuteUbergraph_AB_GS_Necklace_ACC01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_GS_Necklace_ACC01_C::ExecuteUbergraph_AB_GS_Necklace_ACC01(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_GS_Necklace_ACC01.AB_GS_Necklace_ACC01_C.ExecuteUbergraph_AB_GS_Necklace_ACC01"));

	UAB_GS_Necklace_ACC01_C_ExecuteUbergraph_AB_GS_Necklace_ACC01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
