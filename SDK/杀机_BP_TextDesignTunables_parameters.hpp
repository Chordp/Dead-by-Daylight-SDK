#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_TextDesignTunables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveBeginPlay
struct UBP_TextDesignTunables_C_ReceiveBeginPlay_Params
{
};

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick
struct UBP_TextDesignTunables_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables
struct UBP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
