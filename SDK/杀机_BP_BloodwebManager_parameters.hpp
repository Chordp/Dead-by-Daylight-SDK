#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_BloodwebManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeadByDaylight.BloodwebManager.Init
struct UBP_BloodwebManager_C_Init_Params
{
	class UDBDGameInstance**                           GameInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDBDDesignTunables**                         Tunables;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
