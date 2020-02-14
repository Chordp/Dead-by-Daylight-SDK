#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_LinearTimecode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
struct ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params
{
	struct FDropTimecode*                              Timecode;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               FrameNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDropTimecode                               OutTimecode;                                              // (Parm, OutParm)
};

// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
struct ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params
{
	struct FDropTimecode*                              Timecode;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                FrameNumber;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
struct ULinearTimecodeComponent_GetDropFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
