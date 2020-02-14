// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_SK_Armor_ACC01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SK_Armor_ACC01.BP_SK_Armor_ACC01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_SK_Armor_ACC01_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_SK_Armor_ACC01.BP_SK_Armor_ACC01_C.ReceiveBeginPlay"));

	ABP_SK_Armor_ACC01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SK_Armor_ACC01.BP_SK_Armor_ACC01_C.ExecuteUbergraph_BP_SK_Armor_ACC01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_SK_Armor_ACC01_C::ExecuteUbergraph_BP_SK_Armor_ACC01(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_SK_Armor_ACC01.BP_SK_Armor_ACC01_C.ExecuteUbergraph_BP_SK_Armor_ACC01"));

	ABP_SK_Armor_ACC01_C_ExecuteUbergraph_BP_SK_Armor_ACC01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
