#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Audio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Audio.Audio_C.ReceiveBeginPlay
struct AAudio_C_ReceiveBeginPlay_Params
{
};

// Function Audio.Audio_C.ExecuteUbergraph_Audio
struct AAudio_C_ExecuteUbergraph_Audio_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
