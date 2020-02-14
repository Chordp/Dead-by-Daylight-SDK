#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Slasher08_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller
struct UAB_Menu_Slasher08_C_GetKiller_Params
{
	class ABP_Menu_Slasher08_C*                        Menu_Slasher_08;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintUpdateAnimation
struct UAB_Menu_Slasher08_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear
struct UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetAppear_Params
{
};

// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear
struct UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetDisappear_Params
{
};

// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08
struct UAB_Menu_Slasher08_C_ExecuteUbergraph_AB_Menu_Slasher08_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
