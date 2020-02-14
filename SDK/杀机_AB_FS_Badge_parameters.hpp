#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_FS_Badge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AB_FS_Badge.AB_FS_Badge_C.IsOwnerMenu
struct UAB_FS_Badge_C_IsOwnerMenu_Params
{
	bool                                               OwnerIsMenuCharacter;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AB_FS_Badge.AB_FS_Badge_C.BlueprintUpdateAnimation
struct UAB_FS_Badge_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AB_FS_Badge.AB_FS_Badge_C.ExecuteUbergraph_AB_FS_Badge
struct UAB_FS_Badge_C_ExecuteUbergraph_AB_FS_Badge_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
