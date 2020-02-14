#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_KS_Beeropener_ACC01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.IsOwnerInMenu
struct UAB_KS_Beeropener_ACC01_C_IsOwnerInMenu_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.Update_Variables
struct UAB_KS_Beeropener_ACC01_C_Update_Variables_Params
{
};

// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.BlueprintUpdateAnimation
struct UAB_KS_Beeropener_ACC01_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.ExecuteUbergraph_AB_KS_Beeropener_ACC01
struct UAB_KS_Beeropener_ACC01_C_ExecuteUbergraph_AB_KS_Beeropener_ACC01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
