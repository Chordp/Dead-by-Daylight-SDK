// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_SS_Laces_ACC01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_SS_Laces_ACC01.AB_SS_Laces_ACC01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_SS_Laces_ACC01_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_SS_Laces_ACC01.AB_SS_Laces_ACC01_C.BlueprintUpdateAnimation"));

	UAB_SS_Laces_ACC01_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_SS_Laces_ACC01.AB_SS_Laces_ACC01_C.ExecuteUbergraph_AB_SS_Laces_ACC01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_SS_Laces_ACC01_C::ExecuteUbergraph_AB_SS_Laces_ACC01(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_SS_Laces_ACC01.AB_SS_Laces_ACC01_C.ExecuteUbergraph_AB_SS_Laces_ACC01"));

	UAB_SS_Laces_ACC01_C_ExecuteUbergraph_AB_SS_Laces_ACC01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
