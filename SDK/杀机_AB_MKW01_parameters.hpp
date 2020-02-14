#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_MKW01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AB_MKW01.AB_MKW01_C.IsOwnerInRollSelection
struct UAB_MKW01_C_IsOwnerInRollSelection_Params
{
};

// Function AB_MKW01.AB_MKW01_C.IsNeedEdgeCase
struct UAB_MKW01_C_IsNeedEdgeCase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AB_MKW01.AB_MKW01_C.IsOwnerAttackCarry
struct UAB_MKW01_C_IsOwnerAttackCarry_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AB_MKW01.AB_MKW01_C.IsOwnerInMenu
struct UAB_MKW01_C_IsOwnerInMenu_Params
{
	class ADBDMenuPlayer*                              AsDBDMenu_Player;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AB_MKW01.AB_MKW01_C.IsOwnerMori
struct UAB_MKW01_C_IsOwnerMori_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AB_MKW01.AB_MKW01_C.StartTimer
struct UAB_MKW01_C_StartTimer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AB_MKW01.AB_MKW01_C.IsOwnerTurnOffDynamic
struct UAB_MKW01_C_IsOwnerTurnOffDynamic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AB_MKW01.AB_MKW01_C.Check_VariablesAtStart
struct UAB_MKW01_C_Check_VariablesAtStart_Params
{
};

// Function AB_MKW01.AB_MKW01_C.IsOwnerAttackSwing
struct UAB_MKW01_C_IsOwnerAttackSwing_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AB_MKW01.AB_MKW01_C.Updating_Variables
struct UAB_MKW01_C_Updating_Variables_Params
{
};

// Function AB_MKW01.AB_MKW01_C.IsOwnerFirstPerson
struct UAB_MKW01_C_IsOwnerFirstPerson_Params
{
	bool                                               FPV;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB
struct UAB_MKW01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB_Params
{
};

// Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20
struct UAB_MKW01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20_Params
{
};

// Function AB_MKW01.AB_MKW01_C.BlueprintUpdateAnimation
struct UAB_MKW01_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AB_MKW01.AB_MKW01_C.BlueprintBeginPlay
struct UAB_MKW01_C_BlueprintBeginPlay_Params
{
};

// Function AB_MKW01.AB_MKW01_C.AnimNotify_End
struct UAB_MKW01_C_AnimNotify_End_Params
{
};

// Function AB_MKW01.AB_MKW01_C.AnimNotify_Start
struct UAB_MKW01_C_AnimNotify_Start_Params
{
};

// Function AB_MKW01.AB_MKW01_C.AnimNotify_FX_MK_Chain_Show
struct UAB_MKW01_C_AnimNotify_FX_MK_Chain_Show_Params
{
};

// Function AB_MKW01.AB_MKW01_C.AnimNotify_FX_MK_Chain_Hide
struct UAB_MKW01_C_AnimNotify_FX_MK_Chain_Hide_Params
{
};

// Function AB_MKW01.AB_MKW01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851
struct UAB_MKW01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851_Params
{
};

// Function AB_MKW01.AB_MKW01_C.ExecuteUbergraph_AB_MKW01
struct UAB_MKW01_C_ExecuteUbergraph_AB_MKW01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
