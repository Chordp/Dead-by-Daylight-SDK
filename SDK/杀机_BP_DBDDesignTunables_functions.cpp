// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_DBDDesignTunables_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBP_DBDDesignTunables_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveBeginPlay"));

	UBP_DBDDesignTunables_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBP_DBDDesignTunables_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveTick"));

	UBP_DBDDesignTunables_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ExecuteUbergraph_BP_DBDDesignTunables
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UBP_DBDDesignTunables_C::ExecuteUbergraph_BP_DBDDesignTunables(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ExecuteUbergraph_BP_DBDDesignTunables"));

	UBP_DBDDesignTunables_C_ExecuteUbergraph_BP_DBDDesignTunables_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
