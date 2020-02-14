// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Menu_CamperMale04_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__FinishedFunc
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Menu_CamperMale04_C::Cigarette__FinishedFunc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__FinishedFunc"));

	ABP_Menu_CamperMale04_C_Cigarette__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__UpdateFunc
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Menu_CamperMale04_C::Cigarette__UpdateFunc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__UpdateFunc"));

	ABP_Menu_CamperMale04_C_Cigarette__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Menu_CamperMale04_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveBeginPlay"));

	ABP_Menu_CamperMale04_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Menu_CamperMale04_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveTick"));

	ABP_Menu_CamperMale04_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.BeginDestroySequence_Internal
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Menu_CamperMale04_C::BeginDestroySequence_Internal()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.BeginDestroySequence_Internal"));

	ABP_Menu_CamperMale04_C_BeginDestroySequence_Internal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ExecuteUbergraph_BP_Menu_CamperMale04
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ABP_Menu_CamperMale04_C::ExecuteUbergraph_BP_Menu_CamperMale04(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ExecuteUbergraph_BP_Menu_CamperMale04"));

	ABP_Menu_CamperMale04_C_ExecuteUbergraph_BP_Menu_CamperMale04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
