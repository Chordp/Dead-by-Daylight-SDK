// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_MKW01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_MKW01.AB_MKW01_C.IsOwnerInRollSelection
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::IsOwnerInRollSelection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerInRollSelection"));

	UAB_MKW01_C_IsOwnerInRollSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.IsNeedEdgeCase
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

bool UAB_MKW01_C::IsNeedEdgeCase()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsNeedEdgeCase"));

	UAB_MKW01_C_IsNeedEdgeCase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AB_MKW01.AB_MKW01_C.IsOwnerAttackCarry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

bool UAB_MKW01_C::IsOwnerAttackCarry()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerAttackCarry"));

	UAB_MKW01_C_IsOwnerAttackCarry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AB_MKW01.AB_MKW01_C.IsOwnerInMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ADBDMenuPlayer*          AsDBDMenu_Player               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::IsOwnerInMenu(class ADBDMenuPlayer** AsDBDMenu_Player)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerInMenu"));

	UAB_MKW01_C_IsOwnerInMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsDBDMenu_Player != nullptr)
		*AsDBDMenu_Player = params.AsDBDMenu_Player;
}


// Function AB_MKW01.AB_MKW01_C.IsOwnerMori
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::IsOwnerMori(bool* Return)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerMori"));

	UAB_MKW01_C_IsOwnerMori_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function AB_MKW01.AB_MKW01_C.StartTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

bool UAB_MKW01_C::StartTimer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.StartTimer"));

	UAB_MKW01_C_StartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AB_MKW01.AB_MKW01_C.IsOwnerTurnOffDynamic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

bool UAB_MKW01_C::IsOwnerTurnOffDynamic()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerTurnOffDynamic"));

	UAB_MKW01_C_IsOwnerTurnOffDynamic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AB_MKW01.AB_MKW01_C.Check_VariablesAtStart
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::Check_VariablesAtStart()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.Check_VariablesAtStart"));

	UAB_MKW01_C_Check_VariablesAtStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.IsOwnerAttackSwing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::IsOwnerAttackSwing(bool* Return)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerAttackSwing"));

	UAB_MKW01_C_IsOwnerAttackSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function AB_MKW01.AB_MKW01_C.Updating_Variables
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::Updating_Variables()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.Updating_Variables"));

	UAB_MKW01_C_Updating_Variables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.IsOwnerFirstPerson
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           FPV                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::IsOwnerFirstPerson(bool* FPV)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.IsOwnerFirstPerson"));

	UAB_MKW01_C_IsOwnerFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FPV != nullptr)
		*FPV = params.FPV;
}


// Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB"));

	UAB_MKW01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20"));

	UAB_MKW01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.BlueprintUpdateAnimation"));

	UAB_MKW01_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::BlueprintBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.BlueprintBeginPlay"));

	UAB_MKW01_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.AnimNotify_End
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::AnimNotify_End()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.AnimNotify_End"));

	UAB_MKW01_C_AnimNotify_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.AnimNotify_Start
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::AnimNotify_Start()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.AnimNotify_Start"));

	UAB_MKW01_C_AnimNotify_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.AnimNotify_FX_MK_Chain_Show
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::AnimNotify_FX_MK_Chain_Show()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.AnimNotify_FX_MK_Chain_Show"));

	UAB_MKW01_C_AnimNotify_FX_MK_Chain_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.AnimNotify_FX_MK_Chain_Hide
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::AnimNotify_FX_MK_Chain_Hide()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.AnimNotify_FX_MK_Chain_Hide"));

	UAB_MKW01_C_AnimNotify_FX_MK_Chain_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851
// (BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851"));

	UAB_MKW01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_MKW01.AB_MKW01_C.ExecuteUbergraph_AB_MKW01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void UAB_MKW01_C::ExecuteUbergraph_AB_MKW01(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AB_MKW01.AB_MKW01_C.ExecuteUbergraph_AB_MKW01"));

	UAB_MKW01_C_ExecuteUbergraph_AB_MKW01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
