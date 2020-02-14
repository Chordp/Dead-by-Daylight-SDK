// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_PPAB_HS_Menu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PPAB_HS_Menu.PPAB_HS_Menu_C.ExecuteUbergraph_PPAB_HS_Menu
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UPPAB_HS_Menu_C::ExecuteUbergraph_PPAB_HS_Menu(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PPAB_HS_Menu.PPAB_HS_Menu_C.ExecuteUbergraph_PPAB_HS_Menu"));

	UPPAB_HS_Menu_C_ExecuteUbergraph_PPAB_HS_Menu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
