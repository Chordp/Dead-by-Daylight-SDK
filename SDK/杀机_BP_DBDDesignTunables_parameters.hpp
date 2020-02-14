#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_DBDDesignTunables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveBeginPlay
struct UBP_DBDDesignTunables_C_ReceiveBeginPlay_Params
{
};

// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveTick
struct UBP_DBDDesignTunables_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ExecuteUbergraph_BP_DBDDesignTunables
struct UBP_DBDDesignTunables_C_ExecuteUbergraph_BP_DBDDesignTunables_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
