// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher08_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_Menu_Slasher08_C*    Menu_Slasher_08                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher08_C::GetKiller(class ABP_Menu_Slasher08_C** Menu_Slasher_08)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller"));

	UAB_Menu_Slasher08_C_GetKiller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Menu_Slasher_08 != nullptr)
		*Menu_Slasher_08 = params.Menu_Slasher_08;
}


// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher08_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintUpdateAnimation"));

	UAB_Menu_Slasher08_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher08_C::AnimNotify_FX_MakeHatchetAppear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear"));

	UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetAppear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher08_C::AnimNotify_FX_MakeHatchetDisappear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear"));

	UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetDisappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher08_C::ExecuteUbergraph_AB_Menu_Slasher08(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08"));

	UAB_Menu_Slasher08_C_ExecuteUbergraph_AB_Menu_Slasher08_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
