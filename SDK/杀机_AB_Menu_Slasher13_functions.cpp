// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher13_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher13_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.BlueprintUpdateAnimation"));

	UAB_Menu_Slasher13_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponAppear
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_MenuInt_MakeWeaponAppear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponAppear"));

	UAB_Menu_Slasher13_C_AnimNotify_FX_HK_MenuInt_MakeWeaponAppear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear"));

	UAB_Menu_Slasher13_C_AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuBack_MakeSwordVisible
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_MenuBack_MakeSwordVisible()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuBack_MakeSwordVisible"));

	UAB_Menu_Slasher13_C_AnimNotify_FX_HK_MenuBack_MakeSwordVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_Menu_MakeSwordInvisible
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_Menu_MakeSwordInvisible()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_Menu_MakeSwordInvisible"));

	UAB_Menu_Slasher13_C_AnimNotify_FX_HK_Menu_MakeSwordInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.ExecuteUbergraph_AB_Menu_Slasher13
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_Menu_Slasher13_C::ExecuteUbergraph_AB_Menu_Slasher13(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.ExecuteUbergraph_AB_Menu_Slasher13"));

	UAB_Menu_Slasher13_C_ExecuteUbergraph_AB_Menu_Slasher13_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
