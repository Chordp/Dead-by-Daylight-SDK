// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_LevelGenerator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelGenerator.LevelGenerator_C.OfferingAdjustFog
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Modifier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ALevelGenerator_C::OfferingAdjustFog(float* Modifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelGenerator.LevelGenerator_C.OfferingAdjustFog"));

	ALevelGenerator_C_OfferingAdjustFog_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void ALevelGenerator_C::ExecuteUbergraph_LevelGenerator(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator"));

	ALevelGenerator_C_ExecuteUbergraph_LevelGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
