// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Logo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Logo.BP_Logo_C.Anim__FinishedFunc
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Logo_C::Anim__FinishedFunc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Logo.BP_Logo_C.Anim__FinishedFunc"));

	ABP_Logo_C_Anim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Logo.BP_Logo_C.Anim__UpdateFunc
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Logo_C::Anim__UpdateFunc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Logo.BP_Logo_C.Anim__UpdateFunc"));

	ABP_Logo_C_Anim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Logo.BP_Logo_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Logo_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Logo.BP_Logo_C.Timeline_0__FinishedFunc"));

	ABP_Logo_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Logo.BP_Logo_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Logo_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Logo.BP_Logo_C.Timeline_0__UpdateFunc"));

	ABP_Logo_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Logo.BP_Logo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Logo_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Logo.BP_Logo_C.ReceiveBeginPlay"));

	ABP_Logo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Logo.BP_Logo_C.ExecuteUbergraph_BP_Logo
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Logo_C::ExecuteUbergraph_BP_Logo(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Logo.BP_Logo_C.ExecuteUbergraph_BP_Logo"));

	ABP_Logo_C_ExecuteUbergraph_BP_Logo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
