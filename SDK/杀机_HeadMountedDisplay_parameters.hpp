#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_HeadMountedDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
struct UMotionControllerComponent_SetTrackingSource_Params
{
	EControllerHand*                                   NewSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
struct UMotionControllerComponent_SetTrackingMotionSource_Params
{
	struct FName*                                      NewSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
struct UMotionControllerComponent_SetShowDeviceModel_Params
{
	bool*                                              bShowControllerModel;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
struct UMotionControllerComponent_SetDisplayModelSource_Params
{
	struct FName*                                      NewDisplayModelSource;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
struct UMotionControllerComponent_SetCustomDisplayMesh_Params
{
	class UStaticMesh**                                NewDisplayMesh;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
struct UMotionControllerComponent_SetAssociatedPlayerIndex_Params
{
	int*                                               NewPlayer;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
struct UMotionControllerComponent_OnMotionControllerUpdated_Params
{
};

// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
struct UMotionControllerComponent_IsTracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
struct UMotionControllerComponent_GetTrackingSource_Params
{
	EControllerHand                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
struct UMotionControllerComponent_GetParameterValue_Params
{
	struct FName*                                      InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValueFound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
struct UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SystemName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      DeviceName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FXRDeviceId                                 XRDeviceId;                                               // (Parm, OutParm)
	class UPrimitiveComponent*                         NewComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAsyncTask_LoadXRDeviceVisComponent*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
struct UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXRDeviceId*                                XRDeviceId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         NewComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAsyncTask_LoadXRDeviceVisComponent*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
