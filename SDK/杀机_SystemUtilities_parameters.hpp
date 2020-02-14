#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_SystemUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SystemUtilities.TimerObject.OnRep_TimerDataUpdated
struct UTimerObject_OnRep_TimerDataUpdated_Params
{
	struct FReplicationTimerData*                      oldData;                                                  // (Parm)
};

// Function SystemUtilities.TimerObject.IsTimerActive
struct UTimerObject_IsTimerActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.IsPaused
struct UTimerObject_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.IsDone
struct UTimerObject_IsDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.GetRemainingTimePercent
struct UTimerObject_GetRemainingTimePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.GetRemainingTime
struct UTimerObject_GetRemainingTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.GetElapsedTimePercent
struct UTimerObject_GetElapsedTimePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.GetElapsedTime
struct UTimerObject_GetElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.GetDuration
struct UTimerObject_GetDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.CreateTimer
struct UTimerObject_CreateTimer_Params
{
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTimerObject*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.Authority_Unpause
struct UTimerObject_Authority_Unpause_Params
{
};

// Function SystemUtilities.TimerObject.Authority_Start
struct UTimerObject_Authority_Start_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.Authority_SetPaused
struct UTimerObject_Authority_SetPaused_Params
{
	bool*                                              paused;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SystemUtilities.TimerObject.Authority_Pause
struct UTimerObject_Authority_Pause_Params
{
};

// Function SystemUtilities.TimerObject.Authority_Clear
struct UTimerObject_Authority_Clear_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
