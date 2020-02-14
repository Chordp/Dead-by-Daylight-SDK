// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_KS_Beeropener_ACC01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.IsOwnerInMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_KS_Beeropener_ACC01_C::IsOwnerInMenu(bool* Return)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.IsOwnerInMenu"));

	UAB_KS_Beeropener_ACC01_C_IsOwnerInMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.Update_Variables
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_KS_Beeropener_ACC01_C::Update_Variables()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.Update_Variables"));

	UAB_KS_Beeropener_ACC01_C_Update_Variables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_KS_Beeropener_ACC01_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.BlueprintUpdateAnimation"));

	UAB_KS_Beeropener_ACC01_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.ExecuteUbergraph_AB_KS_Beeropener_ACC01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_KS_Beeropener_ACC01_C::ExecuteUbergraph_AB_KS_Beeropener_ACC01(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.ExecuteUbergraph_AB_KS_Beeropener_ACC01"));

	UAB_KS_Beeropener_ACC01_C_ExecuteUbergraph_AB_KS_Beeropener_ACC01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
