// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_StartScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StartScreen.StartScreen_C.K2Node_MatineeController_1_FadedOutEvent
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void AStartScreen_C::K2Node_MatineeController_1_FadedOutEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StartScreen.StartScreen_C.K2Node_MatineeController_1_FadedOutEvent"));

	AStartScreen_C_K2Node_MatineeController_1_FadedOutEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StartScreen.StartScreen_C.K2Node_MatineeController_1_Finished
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void AStartScreen_C::K2Node_MatineeController_1_Finished()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StartScreen.StartScreen_C.K2Node_MatineeController_1_Finished"));

	AStartScreen_C_K2Node_MatineeController_1_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StartScreen.StartScreen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void AStartScreen_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StartScreen.StartScreen_C.ReceiveBeginPlay"));

	AStartScreen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StartScreen.StartScreen_C.BeginDestroyTravelSequence
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void AStartScreen_C::BeginDestroyTravelSequence()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StartScreen.StartScreen_C.BeginDestroyTravelSequence"));

	AStartScreen_C_BeginDestroyTravelSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StartScreen.StartScreen_C.ExecuteUbergraph_StartScreen
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void AStartScreen_C::ExecuteUbergraph_StartScreen(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StartScreen.StartScreen_C.ExecuteUbergraph_StartScreen"));

	AStartScreen_C_ExecuteUbergraph_StartScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
