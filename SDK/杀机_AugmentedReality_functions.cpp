// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AugmentedReality_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D0C70              		 offset:1fc0c70                       

class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::STATIC_ARSaveWorld(class UObject** WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld"));

	UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D0B50              		 offset:1fc0b50                       

class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::STATIC_ARGetCandidateObject(class UObject** WorldContextObject, struct FVector* Location, struct FVector* Extent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject"));

	UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D1BF0              		 offset:1fc1bf0                       

float UARBasicLightEstimate::GetAmbientIntensityLumens()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens"));

	UARBasicLightEstimate_GetAmbientIntensityLumens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D1BC0              		 offset:1fc1bc0                       

float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin"));

	UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D1B80              		 offset:1fc1b80                       

struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor"));

	UARBasicLightEstimate_GetAmbientColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARTrackingState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2EE0              		 offset:1fc2ee0                       

EARTrackingState UARPin::GetTrackingState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetTrackingState"));

	UARPin_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARTrackedGeometry*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2D80              		 offset:1fc2d80                       

class UARTrackedGeometry* UARPin::GetTrackedGeometry()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetTrackedGeometry"));

	UARPin_GetTrackedGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetPinnedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2A60              		 offset:1fc2a60                       

class USceneComponent* UARPin::GetPinnedComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetPinnedComponent"));

	UARPin_GetPinnedComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D27F0              		 offset:1fc27f0                       

struct FTransform UARPin::GetLocalToWorldTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetLocalToWorldTransform"));

	UARPin_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2610              		 offset:1fc2610                       

struct FTransform UARPin::GetLocalToTrackingTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetLocalToTrackingTransform"));

	UARPin_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D20E0              		 offset:1fc20e0                       

struct FName UARPin::GetDebugName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.GetDebugName"));

	UARPin_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.DebugDraw
// (Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// class UWorld**                 World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6810D1350              		 offset:1fc1350                       

void UARPin::DebugDraw(class UWorld** World, struct FLinearColor* Color, float* Scale, float* PersistForSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPin.DebugDraw"));

	UARPin_DebugDraw_Params params;
	params.World = World;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D4330              		 offset:1fc4330                       

bool UARSessionConfig::ShouldResetTrackedObjects()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects"));

	UARSessionConfig_ShouldResetTrackedObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D4300              		 offset:1fc4300                       

bool UARSessionConfig::ShouldResetCameraTracking()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking"));

	UARSessionConfig_ShouldResetCameraTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FF6B4A0              		 offset:e5b4a0                        

bool UARSessionConfig::ShouldRenderCameraOverlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay"));

	UARSessionConfig_ShouldRenderCameraOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D42D0              		 offset:1fc42d0                       

bool UARSessionConfig::ShouldEnableCameraTracking()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking"));

	UARSessionConfig_ShouldEnableCameraTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D42A0              		 offset:1fc42a0                       

bool UARSessionConfig::ShouldEnableAutoFocus()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus"));

	UARSessionConfig_ShouldEnableAutoFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.SetWorldMapData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>*         WorldMapData                   (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6810D41C0              		 offset:1fc41c0                       

void UARSessionConfig::SetWorldMapData(TArray<unsigned char>* WorldMapData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetWorldMapData"));

	UARSessionConfig_SetWorldMapData_Params params;
	params.WorldMapData = WorldMapData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6810D4130              		 offset:1fc4130                       

void UARSessionConfig::SetResetTrackedObjects(bool* bNewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects"));

	UARSessionConfig_SetResetTrackedObjects_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6810D40A0              		 offset:1fc40a0                       

void UARSessionConfig::SetResetCameraTracking(bool* bNewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking"));

	UARSessionConfig_SetResetCameraTracking_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EARFaceTrackingUpdate*         InUpdate                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6810D3F40              		 offset:1fc3f40                       

void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate* InUpdate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate"));

	UARSessionConfig_SetFaceTrackingUpdate_Params params;
	params.InUpdate = InUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EARFaceTrackingDirection*      InDirection                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6810D3EC0              		 offset:1fc3ec0                       

void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection* InDirection)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection"));

	UARSessionConfig_SetFaceTrackingDirection_Params params;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6810D3DB0              		 offset:1fc3db0                       

void UARSessionConfig::SetEnableAutoFocus(bool* bNewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus"));

	UARSessionConfig_SetEnableAutoFocus_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FARVideoFormat*         NewFormat                      (Parm)
// FunctionAddress:0x00007FF6810D3D10              		 offset:1fc3d10                       

void UARSessionConfig::SetDesiredVideoFormat(struct FARVideoFormat* NewFormat)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat"));

	UARSessionConfig_SetDesiredVideoFormat_Params params;
	params.NewFormat = NewFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UARCandidateObject*>* InCandidateObjects             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6810D3C60              		 offset:1fc3c60                       

void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*>* InCandidateObjects)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList"));

	UARSessionConfig_SetCandidateObjectList_Params params;
	params.InCandidateObjects = InCandidateObjects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.GetWorldMapData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6810D2F70              		 offset:1fc2f70                       

TArray<unsigned char> UARSessionConfig::GetWorldMapData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetWorldMapData"));

	UARSessionConfig_GetWorldMapData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARWorldAlignment              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2F40              		 offset:1fc2f40                       

EARWorldAlignment UARSessionConfig::GetWorldAlignment()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetWorldAlignment"));

	UARSessionConfig_GetWorldAlignment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetSessionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARSessionType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2B70              		 offset:1fc2b70                       

EARSessionType UARSessionConfig::GetSessionType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetSessionType"));

	UARSessionConfig_GetSessionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARPlaneDetectionMode          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2A90              		 offset:1fc2a90                       

EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode"));

	UARSessionConfig_GetPlaneDetectionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D29D0              		 offset:1fc29d0                       

int UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked"));

	UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARLightEstimationMode         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2540              		 offset:1fc2540                       

EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode"));

	UARSessionConfig_GetLightEstimationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARFrameSyncMode               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2450              		 offset:1fc2450                       

EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode"));

	UARSessionConfig_GetFrameSyncMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARFaceTrackingUpdate          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2420              		 offset:1fc2420                       

EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate"));

	UARSessionConfig_GetFaceTrackingUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARFaceTrackingDirection       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D23F0              		 offset:1fc23f0                       

EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection"));

	UARSessionConfig_GetFaceTrackingDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAREnvironmentCaptureProbeType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D22E0              		 offset:1fc22e0                       

EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType"));

	UARSessionConfig_GetEnvironmentCaptureProbeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FARVideoFormat          ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6810D2160              		 offset:1fc2160                       

struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat"));

	UARSessionConfig_GetDesiredVideoFormat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UARCandidateObject*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6810D1FD0              		 offset:1fc1fd0                       

TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList"));

	UARSessionConfig_GetCandidateObjectList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UARCandidateImage*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6810D1F10              		 offset:1fc1f10                       

TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.GetCandidateImageList"));

	UARSessionConfig_GetCandidateImageList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.AddCandidateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UARCandidateObject**     CandidateObject                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6810D0D70              		 offset:1fc0d70                       

void UARSessionConfig::AddCandidateObject(class UARCandidateObject** CandidateObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.AddCandidateObject"));

	UARSessionConfig_AddCandidateObject_Params params;
	params.CandidateObject = CandidateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.AddCandidateImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UARCandidateImage**      NewCandidateImage              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6810D0CF0              		 offset:1fc0cf0                       

void UARSessionConfig::AddCandidateImage(class UARCandidateImage** NewCandidateImage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSessionConfig.AddCandidateImage"));

	UARSessionConfig_AddCandidateImage_Params params;
	params.NewCandidateImage = NewCandidateImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>*         ImageData                      (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6810D3FC0              		 offset:1fc3fc0                       

void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char>* ImageData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData"));

	AARSharedWorldGameMode_SetPreviewImageData_Params params;
	params.ImageData = ImageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6810D3A20              		 offset:1fc3a20                       

void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady"));

	AARSharedWorldGameMode_SetARWorldSharingIsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>*         ARWorldData                    (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6810D3940              		 offset:1fc3940                       

void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char>* ARWorldData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData"));

	AARSharedWorldGameMode_SetARSharedWorldData_Params params;
	params.ARWorldData = ARWorldData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AARSharedWorldGameState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D1850              		 offset:1fc1850                       

class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState"));

	AARSharedWorldGameMode_GetARSharedWorldGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF680A88D70              		 offset:1978d70                       

void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady"));

	AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.WasInputKeyJustReleased
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D96C0              		 offset:2fc96c0                       

bool AARSharedWorldPlayerController::WasInputKeyJustReleased(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.WasInputKeyJustReleased"));

	AARSharedWorldPlayerController_WasInputKeyJustReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.WasInputKeyJustPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D95C0              		 offset:2fc95c0                       

bool AARSharedWorldPlayerController::WasInputKeyJustPressed(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.WasInputKeyJustPressed"));

	AARSharedWorldPlayerController_WasInputKeyJustPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.ToggleSpeaking
// (Exec, Native, Public)
// Parameters:
// bool*                          bInSpeaking                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D9530              		 offset:2fc9530                       

void AARSharedWorldPlayerController::ToggleSpeaking(bool* bInSpeaking)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ToggleSpeaking"));

	AARSharedWorldPlayerController_ToggleSpeaking_Params params;
	params.bInSpeaking = bInSpeaking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SwitchLevel
// (Exec, Native, Public)
// Parameters:
// struct FString*                URL                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6820D9490              		 offset:2fc9490                       

void AARSharedWorldPlayerController::SwitchLevel(struct FString* URL)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SwitchLevel"));

	AARSharedWorldPlayerController_SwitchLevel_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.StopHapticEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EControllerHand*               Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D9410              		 offset:2fc9410                       

void AARSharedWorldPlayerController::StopHapticEffect(EControllerHand* Hand)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.StopHapticEffect"));

	AARSharedWorldPlayerController_StopHapticEffect_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.StartFire
// (Exec, Native, Public)
// Parameters:
// unsigned char*                 FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D9390              		 offset:2fc9390                       

void AARSharedWorldPlayerController::StartFire(unsigned char* FireModeNum)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.StartFire"));

	AARSharedWorldPlayerController_StartFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetVirtualJoystickVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D9300              		 offset:2fc9300                       

void AARSharedWorldPlayerController::SetVirtualJoystickVisibility(bool* bVisible)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetVirtualJoystickVisibility"));

	AARSharedWorldPlayerController_SetVirtualJoystickVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetViewTargetWithBlend
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 NewViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EViewTargetBlendFunction>* BlendFunc                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendExp                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLockOutgoing                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D9180              		 offset:2fc9180                       

void AARSharedWorldPlayerController::SetViewTargetWithBlend(class AActor** NewViewTarget, float* BlendTime, TEnumAsByte<EViewTargetBlendFunction>* BlendFunc, float* BlendExp, bool* bLockOutgoing)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetViewTargetWithBlend"));

	AARSharedWorldPlayerController_SetViewTargetWithBlend_Params params;
	params.NewViewTarget = NewViewTarget;
	params.BlendTime = BlendTime;
	params.BlendFunc = BlendFunc;
	params.BlendExp = BlendExp;
	params.bLockOutgoing = bLockOutgoing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetName
// (Exec, Native, Public)
// Parameters:
// struct FString*                S                              (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6820D90E0              		 offset:2fc90e0                       

void AARSharedWorldPlayerController::SetName(struct FString* S)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetName"));

	AARSharedWorldPlayerController_SetName_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetMouseLocation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Y                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D9020              		 offset:2fc9020                       

void AARSharedWorldPlayerController::SetMouseLocation(int* X, int* Y)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetMouseLocation"));

	AARSharedWorldPlayerController_SetMouseLocation_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetMouseCursorWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMouseCursor>*     Cursor                         (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            CursorWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6820D8F60              		 offset:2fc8f60                       

void AARSharedWorldPlayerController::SetMouseCursorWidget(TEnumAsByte<EMouseCursor>* Cursor, class UUserWidget** CursorWidget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetMouseCursorWidget"));

	AARSharedWorldPlayerController_SetMouseCursorWidget_Params params;
	params.Cursor = Cursor;
	params.CursorWidget = CursorWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetHapticsByValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Frequency                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Amplitude                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand*               Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D8E60              		 offset:2fc8e60                       

void AARSharedWorldPlayerController::SetHapticsByValue(float* Frequency, float* Amplitude, EControllerHand* Hand)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetHapticsByValue"));

	AARSharedWorldPlayerController_SetHapticsByValue_Params params;
	params.Frequency = Frequency;
	params.Amplitude = Amplitude;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetDisableHaptics
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewDisabled                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D8DD0              		 offset:2fc8dd0                       

void AARSharedWorldPlayerController::SetDisableHaptics(bool* bNewDisabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetDisableHaptics"));

	AARSharedWorldPlayerController_SetDisableHaptics_Params params;
	params.bNewDisabled = bNewDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetControllerLightColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor*                 Color                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D8D60              		 offset:2fc8d60                       

void AARSharedWorldPlayerController::SetControllerLightColor(struct FColor* Color)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetControllerLightColor"));

	AARSharedWorldPlayerController_SetControllerLightColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetCinematicMode
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInCinematicMode               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHidePlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsHUD                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsMovement               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsTurning                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D8BA0              		 offset:2fc8ba0                       

void AARSharedWorldPlayerController::SetCinematicMode(bool* bInCinematicMode, bool* bHidePlayer, bool* bAffectsHUD, bool* bAffectsMovement, bool* bAffectsTurning)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetCinematicMode"));

	AARSharedWorldPlayerController_SetCinematicMode_Params params;
	params.bInCinematicMode = bInCinematicMode;
	params.bHidePlayer = bHidePlayer;
	params.bAffectsHUD = bAffectsHUD;
	params.bAffectsMovement = bAffectsMovement;
	params.bAffectsTurning = bAffectsTurning;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetAudioListenerOverride
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D8A80              		 offset:2fc8a80                       

void AARSharedWorldPlayerController::SetAudioListenerOverride(class USceneComponent** AttachToComponent, struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetAudioListenerOverride"));

	AARSharedWorldPlayerController_SetAudioListenerOverride_Params params;
	params.AttachToComponent = AttachToComponent;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetAudioListenerAttenuationOverride
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                AttenuationLocationOVerride    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D89B0              		 offset:2fc89b0                       

void AARSharedWorldPlayerController::SetAudioListenerAttenuationOverride(class USceneComponent** AttachToComponent, struct FVector* AttenuationLocationOVerride)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SetAudioListenerAttenuationOverride"));

	AARSharedWorldPlayerController_SetAudioListenerAttenuationOverride_Params params;
	params.AttachToComponent = AttachToComponent;
	params.AttenuationLocationOVerride = AttenuationLocationOVerride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerViewSelf
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FViewTargetTransitionParams* TransitionParams               (Parm)
// FunctionAddress:0x00007FF6820D88C0              		 offset:2fc88c0                       

void AARSharedWorldPlayerController::ServerViewSelf(struct FViewTargetTransitionParams* TransitionParams)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerViewSelf"));

	AARSharedWorldPlayerController_ServerViewSelf_Params params;
	params.TransitionParams = TransitionParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerViewPrevPlayer
// (Net, Native, Event, Public, NetServer, NetValidate)
// FunctionAddress:0x00007FF6820D8870              		 offset:2fc8870                       

void AARSharedWorldPlayerController::ServerViewPrevPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerViewPrevPlayer"));

	AARSharedWorldPlayerController_ServerViewPrevPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerViewNextPlayer
// (Net, Native, Event, Public, NetServer, NetValidate)
// FunctionAddress:0x00007FF6820D8820              		 offset:2fc8820                       

void AARSharedWorldPlayerController::ServerViewNextPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerViewNextPlayer"));

	AARSharedWorldPlayerController_ServerViewNextPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerVerifyViewTarget
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// FunctionAddress:0x00007FF6820D87D0              		 offset:2fc87d0                       

void AARSharedWorldPlayerController::ServerVerifyViewTarget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerVerifyViewTarget"));

	AARSharedWorldPlayerController_ServerVerifyViewTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FUpdateLevelVisibilityLevelInfo>* LevelVisibilities              (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6820D8710              		 offset:2fc8710                       

void AARSharedWorldPlayerController::ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>* LevelVisibilities)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility"));

	AARSharedWorldPlayerController_ServerUpdateMultipleLevelsVisibility_Params params;
	params.LevelVisibilities = LevelVisibilities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerUpdateLevelVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName*                  PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsVisible                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D85F0              		 offset:2fc85f0                       

void AARSharedWorldPlayerController::ServerUpdateLevelVisibility(struct FName* PackageName, bool* bIsVisible)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerUpdateLevelVisibility"));

	AARSharedWorldPlayerController_ServerUpdateLevelVisibility_Params params;
	params.PackageName = PackageName;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerUpdateCamera
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize*    CamLoc                         (Parm)
// int*                           CamPitchAndYaw                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D84D0              		 offset:2fc84d0                       

void AARSharedWorldPlayerController::ServerUpdateCamera(struct FVector_NetQuantize* CamLoc, int* CamPitchAndYaw)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerUpdateCamera"));

	AARSharedWorldPlayerController_ServerUpdateCamera_Params params;
	params.CamLoc = CamLoc;
	params.CamPitchAndYaw = CamPitchAndYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerUnmutePlayer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl*       playerID                       (Parm)
// FunctionAddress:0x00007FF6820D8360              		 offset:2fc8360                       

void AARSharedWorldPlayerController::ServerUnmutePlayer(struct FUniqueNetIdRepl* playerID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerUnmutePlayer"));

	AARSharedWorldPlayerController_ServerUnmutePlayer_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerToggleAILogging
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// FunctionAddress:0x00007FF6820D8310              		 offset:2fc8310                       

void AARSharedWorldPlayerController::ServerToggleAILogging()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerToggleAILogging"));

	AARSharedWorldPlayerController_ServerToggleAILogging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerShortTimeout
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// FunctionAddress:0x00007FF6820D82C0              		 offset:2fc82c0                       

void AARSharedWorldPlayerController::ServerShortTimeout()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerShortTimeout"));

	AARSharedWorldPlayerController_ServerShortTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerSetSpectatorWaiting
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool*                          bWaiting                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D8200              		 offset:2fc8200                       

void AARSharedWorldPlayerController::ServerSetSpectatorWaiting(bool* bWaiting)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerSetSpectatorWaiting"));

	AARSharedWorldPlayerController_ServerSetSpectatorWaiting_Params params;
	params.bWaiting = bWaiting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerSetSpectatorLocation
// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector*                NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               NewRot                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D80D0              		 offset:2fc80d0                       

void AARSharedWorldPlayerController::ServerSetSpectatorLocation(struct FVector* NewLoc, struct FRotator* NewRot)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerSetSpectatorLocation"));

	AARSharedWorldPlayerController_ServerSetSpectatorLocation_Params params;
	params.NewLoc = NewLoc;
	params.NewRot = NewRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerRestartPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// FunctionAddress:0x00007FF6820D8080              		 offset:2fc8080                       

void AARSharedWorldPlayerController::ServerRestartPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerRestartPlayer"));

	AARSharedWorldPlayerController_ServerRestartPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerPause
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// FunctionAddress:0x00007FF6820D8030              		 offset:2fc8030                       

void AARSharedWorldPlayerController::ServerPause()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerPause"));

	AARSharedWorldPlayerController_ServerPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerNotifyLoadedWorld
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName*                  WorldPackageName               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D7F50              		 offset:2fc7f50                       

void AARSharedWorldPlayerController::ServerNotifyLoadedWorld(struct FName* WorldPackageName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerNotifyLoadedWorld"));

	AARSharedWorldPlayerController_ServerNotifyLoadedWorld_Params params;
	params.WorldPackageName = WorldPackageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerMutePlayer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl*       playerID                       (Parm)
// FunctionAddress:0x00007FF6820D7DE0              		 offset:2fc7de0                       

void AARSharedWorldPlayerController::ServerMutePlayer(struct FUniqueNetIdRepl* playerID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerMutePlayer"));

	AARSharedWorldPlayerController_ServerMutePlayer_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerCheckClientPossessionReliable
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// FunctionAddress:0x00007FF6820D7D90              		 offset:2fc7d90                       

void AARSharedWorldPlayerController::ServerCheckClientPossessionReliable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerCheckClientPossessionReliable"));

	AARSharedWorldPlayerController_ServerCheckClientPossessionReliable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerCheckClientPossession
// (Net, Native, Event, Public, NetServer, NetValidate)
// FunctionAddress:0x00007FF6820D7D40              		 offset:2fc7d40                       

void AARSharedWorldPlayerController::ServerCheckClientPossession()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerCheckClientPossession"));

	AARSharedWorldPlayerController_ServerCheckClientPossession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerChangeName
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString*                S                              (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6820D7C80              		 offset:2fc7c80                       

void AARSharedWorldPlayerController::ServerChangeName(struct FString* S)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerChangeName"));

	AARSharedWorldPlayerController_ServerChangeName_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerCamera
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName*                  NewMode                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D7B90              		 offset:2fc7b90                       

void AARSharedWorldPlayerController::ServerCamera(struct FName* NewMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerCamera"));

	AARSharedWorldPlayerController_ServerCamera_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerAcknowledgePossession
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APawn**                  P                              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D7AD0              		 offset:2fc7ad0                       

void AARSharedWorldPlayerController::ServerAcknowledgePossession(class APawn** P)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ServerAcknowledgePossession"));

	AARSharedWorldPlayerController_ServerAcknowledgePossession_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SendToConsole
// (Exec, Native, Public)
// Parameters:
// struct FString*                Command                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6820D7A30              		 offset:2fc7a30                       

void AARSharedWorldPlayerController::SendToConsole(struct FString* Command)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.SendToConsole"));

	AARSharedWorldPlayerController_SendToConsole_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.RestartLevel
// (Exec, Native, Public)
// FunctionAddress:0x00007FF6820D7A10              		 offset:2fc7a10                       

void AARSharedWorldPlayerController::RestartLevel()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.RestartLevel"));

	AARSharedWorldPlayerController_RestartLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ResetControllerLightColor
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820D79F0              		 offset:2fc79f0                       

void AARSharedWorldPlayerController::ResetControllerLightColor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ResetControllerLightColor"));

	AARSharedWorldPlayerController_ResetControllerLightColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ProjectWorldLocationToScreen
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool*                          bPlayerViewportRelative        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D78C0              		 offset:2fc78c0                       

bool AARSharedWorldPlayerController::ProjectWorldLocationToScreen(struct FVector* WorldLocation, bool* bPlayerViewportRelative, struct FVector2D* ScreenLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ProjectWorldLocationToScreen"));

	AARSharedWorldPlayerController_ProjectWorldLocationToScreen_Params params;
	params.WorldLocation = WorldLocation;
	params.bPlayerViewportRelative = bPlayerViewportRelative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenLocation != nullptr)
		*ScreenLocation = params.ScreenLocation;

	return params.ReturnValue;
}


// Function Engine.PlayerController.PlayHapticEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHapticFeedbackEffect_Base** HapticEffect                   (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand*               Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D7770              		 offset:2fc7770                       

void AARSharedWorldPlayerController::PlayHapticEffect(class UHapticFeedbackEffect_Base** HapticEffect, EControllerHand* Hand, float* Scale, bool* bLoop)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.PlayHapticEffect"));

	AARSharedWorldPlayerController_PlayHapticEffect_Params params;
	params.HapticEffect = HapticEffect;
	params.Hand = Hand;
	params.Scale = Scale;
	params.bLoop = bLoop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PlayDynamicForceFeedback
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float*                         Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsLeftLarge              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsLeftSmall              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsRightLarge             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsRightSmall             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDynamicForceFeedbackAction>* action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo*      LatentInfo                     (Parm)
// FunctionAddress:0x00007FF6820D74F0              		 offset:2fc74f0                       

void AARSharedWorldPlayerController::PlayDynamicForceFeedback(float* Intensity, float* Duration, bool* bAffectsLeftLarge, bool* bAffectsLeftSmall, bool* bAffectsRightLarge, bool* bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction>* action, struct FLatentActionInfo* LatentInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.PlayDynamicForceFeedback"));

	AARSharedWorldPlayerController_PlayDynamicForceFeedback_Params params;
	params.Intensity = Intensity;
	params.Duration = Duration;
	params.bAffectsLeftLarge = bAffectsLeftLarge;
	params.bAffectsLeftSmall = bAffectsLeftSmall;
	params.bAffectsRightLarge = bAffectsRightLarge;
	params.bAffectsRightSmall = bAffectsRightSmall;
	params.action = action;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Pause
// (Exec, Native, Public)
// FunctionAddress:0x00007FF6820D74D0              		 offset:2fc74d0                       

void AARSharedWorldPlayerController::Pause()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.Pause"));

	AARSharedWorldPlayerController_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.OnServerStartedVisualLogger
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool*                          bIsLogging                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D7440              		 offset:2fc7440                       

void AARSharedWorldPlayerController::OnServerStartedVisualLogger(bool* bIsLogging)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.OnServerStartedVisualLogger"));

	AARSharedWorldPlayerController_OnServerStartedVisualLogger_Params params;
	params.bIsLogging = bIsLogging;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.LocalTravel
// (Exec, Native, Public)
// Parameters:
// struct FString*                URL                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6820D73A0              		 offset:2fc73a0                       

void AARSharedWorldPlayerController::LocalTravel(struct FString* URL)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.LocalTravel"));

	AARSharedWorldPlayerController_LocalTravel_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.K2_ClientPlayForceFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UForceFeedbackEffect**   ForceFeedbackEffect            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLooping                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIgnoreTimeDilation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPlayWhilePaused               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D7200              		 offset:2fc7200                       

void AARSharedWorldPlayerController::K2_ClientPlayForceFeedback(class UForceFeedbackEffect** ForceFeedbackEffect, struct FName* Tag, bool* bLooping, bool* bIgnoreTimeDilation, bool* bPlayWhilePaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.K2_ClientPlayForceFeedback"));

	AARSharedWorldPlayerController_K2_ClientPlayForceFeedback_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Tag = Tag;
	params.bLooping = bLooping;
	params.bIgnoreTimeDilation = bIgnoreTimeDilation;
	params.bPlayWhilePaused = bPlayWhilePaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.IsInputKeyDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D7100              		 offset:2fc7100                       

bool AARSharedWorldPlayerController::IsInputKeyDown(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.IsInputKeyDown"));

	AARSharedWorldPlayerController_IsInputKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetViewportSize
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D7020              		 offset:2fc7020                       

void AARSharedWorldPlayerController::GetViewportSize(int* SizeX, int* SizeY)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetViewportSize"));

	AARSharedWorldPlayerController_GetViewportSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
}


// Function Engine.PlayerController.GetSpectatorPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASpectatorPawn*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D7000              		 offset:2fc7000                       

class ASpectatorPawn* AARSharedWorldPlayerController::GetSpectatorPawn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetSpectatorPawn"));

	AARSharedWorldPlayerController_GetSpectatorPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetMousePosition
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          LocationX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D6F10              		 offset:2fc6f10                       

bool AARSharedWorldPlayerController::GetMousePosition(float* LocationX, float* LocationY)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetMousePosition"));

	AARSharedWorldPlayerController_GetMousePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetInputVectorKeyState
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey*                   Key                            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D6E00              		 offset:2fc6e00                       

struct FVector AARSharedWorldPlayerController::GetInputVectorKeyState(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetInputVectorKeyState"));

	AARSharedWorldPlayerController_GetInputVectorKeyState_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetInputTouchState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCurrentlyPressed            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D6C80              		 offset:2fc6c80                       

void AARSharedWorldPlayerController::GetInputTouchState(TEnumAsByte<ETouchIndex>* FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetInputTouchState"));

	AARSharedWorldPlayerController_GetInputTouchState_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;
	if (bIsCurrentlyPressed != nullptr)
		*bIsCurrentlyPressed = params.bIsCurrentlyPressed;
}


// Function Engine.PlayerController.GetInputMouseDelta
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DeltaY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D6BA0              		 offset:2fc6ba0                       

void AARSharedWorldPlayerController::GetInputMouseDelta(float* DeltaX, float* DeltaY)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetInputMouseDelta"));

	AARSharedWorldPlayerController_GetInputMouseDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeltaX != nullptr)
		*DeltaX = params.DeltaX;
	if (DeltaY != nullptr)
		*DeltaY = params.DeltaY;
}


// Function Engine.PlayerController.GetInputMotionState
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Tilt                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RotationRate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Acceleration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D6A10              		 offset:2fc6a10                       

void AARSharedWorldPlayerController::GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetInputMotionState"));

	AARSharedWorldPlayerController_GetInputMotionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tilt != nullptr)
		*Tilt = params.Tilt;
	if (RotationRate != nullptr)
		*RotationRate = params.RotationRate;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;
	if (Acceleration != nullptr)
		*Acceleration = params.Acceleration;
}


// Function Engine.PlayerController.GetInputKeyTimeDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey*                   Key                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D6910              		 offset:2fc6910                       

float AARSharedWorldPlayerController::GetInputKeyTimeDown(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetInputKeyTimeDown"));

	AARSharedWorldPlayerController_GetInputKeyTimeDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetInputAnalogStickState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EControllerAnalogStick>* WhichStick                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          StickX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StickY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D67F0              		 offset:2fc67f0                       

void AARSharedWorldPlayerController::GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick>* WhichStick, float* StickX, float* StickY)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetInputAnalogStickState"));

	AARSharedWorldPlayerController_GetInputAnalogStickState_Params params;
	params.WhichStick = WhichStick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StickX != nullptr)
		*StickX = params.StickX;
	if (StickY != nullptr)
		*StickY = params.StickY;
}


// Function Engine.PlayerController.GetInputAnalogKeyState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey*                   Key                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D66F0              		 offset:2fc66f0                       

float AARSharedWorldPlayerController::GetInputAnalogKeyState(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetInputAnalogKeyState"));

	AARSharedWorldPlayerController_GetInputAnalogKeyState_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AHUD*                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D5D80              		 offset:2fc5d80                       

class AHUD* AARSharedWorldPlayerController::GetHUD()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetHUD"));

	AARSharedWorldPlayerController_GetHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderFingerForObjects
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D6530              		 offset:2fc6530                       

bool AARSharedWorldPlayerController::GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex>* FingerIndex, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetHitResultUnderFingerForObjects"));

	AARSharedWorldPlayerController_GetHitResultUnderFingerForObjects_Params params;
	params.FingerIndex = FingerIndex;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderFingerByChannel
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>*  TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D6390              		 offset:2fc6390                       

bool AARSharedWorldPlayerController::GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex>* FingerIndex, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetHitResultUnderFingerByChannel"));

	AARSharedWorldPlayerController_GetHitResultUnderFingerByChannel_Params params;
	params.FingerIndex = FingerIndex;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderFinger
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel>* TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D61F0              		 offset:2fc61f0                       

bool AARSharedWorldPlayerController::GetHitResultUnderFinger(TEnumAsByte<ETouchIndex>* FingerIndex, TEnumAsByte<ECollisionChannel>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetHitResultUnderFinger"));

	AARSharedWorldPlayerController_GetHitResultUnderFinger_Params params;
	params.FingerIndex = FingerIndex;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderCursorForObjects
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D6070              		 offset:2fc6070                       

bool AARSharedWorldPlayerController::GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetHitResultUnderCursorForObjects"));

	AARSharedWorldPlayerController_GetHitResultUnderCursorForObjects_Params params;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderCursorByChannel
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETraceTypeQuery>*  TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D5F10              		 offset:2fc5f10                       

bool AARSharedWorldPlayerController::GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetHitResultUnderCursorByChannel"));

	AARSharedWorldPlayerController_GetHitResultUnderCursorByChannel_Params params;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderCursor
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel>* TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D5DB0              		 offset:2fc5db0                       

bool AARSharedWorldPlayerController::GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetHitResultUnderCursor"));

	AARSharedWorldPlayerController_GetHitResultUnderCursor_Params params;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetFocalLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D5D40              		 offset:2fc5d40                       

struct FVector AARSharedWorldPlayerController::GetFocalLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.GetFocalLocation"));

	AARSharedWorldPlayerController_GetFocalLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.FOV
// (Exec, Native, Public)
// Parameters:
// float*                         NewFOV                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D5CC0              		 offset:2fc5cc0                       

void AARSharedWorldPlayerController::FOV(float* NewFOV)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.FOV"));

	AARSharedWorldPlayerController_FOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.EnableCheats
// (Exec, Native, Public)
// FunctionAddress:0x00007FF6820D5CA0              		 offset:2fc5ca0                       

void AARSharedWorldPlayerController::EnableCheats()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.EnableCheats"));

	AARSharedWorldPlayerController_EnableCheats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.DeprojectScreenPositionToWorld
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         ScreenX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScreenY                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldDirection                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D5B20              		 offset:2fc5b20                       

bool AARSharedWorldPlayerController::DeprojectScreenPositionToWorld(float* ScreenX, float* ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.DeprojectScreenPositionToWorld"));

	AARSharedWorldPlayerController_DeprojectScreenPositionToWorld_Params params;
	params.ScreenX = ScreenX;
	params.ScreenY = ScreenY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (WorldDirection != nullptr)
		*WorldDirection = params.WorldDirection;

	return params.ReturnValue;
}


// Function Engine.PlayerController.DeprojectMousePositionToWorld
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldDirection                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D5A20              		 offset:2fc5a20                       

bool AARSharedWorldPlayerController::DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.DeprojectMousePositionToWorld"));

	AARSharedWorldPlayerController_DeprojectMousePositionToWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (WorldDirection != nullptr)
		*WorldDirection = params.WorldDirection;

	return params.ReturnValue;
}


// Function Engine.PlayerController.ConsoleKey
// (Exec, Native, Public)
// Parameters:
// struct FKey*                   Key                            (Parm)
// FunctionAddress:0x00007FF6820D5930              		 offset:2fc5930                       

void AARSharedWorldPlayerController::ConsoleKey(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ConsoleKey"));

	AARSharedWorldPlayerController_ConsoleKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientWasKicked
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint32_t*                      KickReason                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t*                      ErrorCode                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                AdditionalInfo                 (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6820D5810              		 offset:2fc5810                       

void AARSharedWorldPlayerController::ClientWasKicked(uint32_t* KickReason, uint32_t* ErrorCode, struct FString* AdditionalInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientWasKicked"));

	AARSharedWorldPlayerController_ClientWasKicked_Params params;
	params.KickReason = KickReason;
	params.ErrorCode = ErrorCode;
	params.AdditionalInfo = AdditionalInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientVoiceHandshakeComplete
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF6820D57F0              		 offset:2fc57f0                       

void AARSharedWorldPlayerController::ClientVoiceHandshakeComplete()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientVoiceHandshakeComplete"));

	AARSharedWorldPlayerController_ClientVoiceHandshakeComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FUpdateLevelStreamingLevelStatus>* LevelStatuses                  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6820D5750              		 offset:2fc5750                       

void AARSharedWorldPlayerController::ClientUpdateMultipleLevelsStreamingStatus(TArray<struct FUpdateLevelStreamingLevelStatus>* LevelStatuses)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus"));

	AARSharedWorldPlayerController_ClientUpdateMultipleLevelsStreamingStatus_Params params;
	params.LevelStatuses = LevelStatuses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientUpdateLevelStreamingStatus
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FName*                  PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewShouldBeLoaded             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewShouldBeVisible            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewShouldBlockOnLoad          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D55B0              		 offset:2fc55b0                       

void AARSharedWorldPlayerController::ClientUpdateLevelStreamingStatus(struct FName* PackageName, bool* bNewShouldBeLoaded, bool* bNewShouldBeVisible, bool* bNewShouldBlockOnLoad, int* LODIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientUpdateLevelStreamingStatus"));

	AARSharedWorldPlayerController_ClientUpdateLevelStreamingStatus_Params params;
	params.PackageName = PackageName;
	params.bNewShouldBeLoaded = bNewShouldBeLoaded;
	params.bNewShouldBeVisible = bNewShouldBeVisible;
	params.bNewShouldBlockOnLoad = bNewShouldBlockOnLoad;
	params.LODIndex = LODIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientUnmutePlayer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FUniqueNetIdRepl*       playerID                       (Parm)
// FunctionAddress:0x00007FF6820D5490              		 offset:2fc5490                       

void AARSharedWorldPlayerController::ClientUnmutePlayer(struct FUniqueNetIdRepl* playerID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientUnmutePlayer"));

	AARSharedWorldPlayerController_ClientUnmutePlayer_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientTravelInternal
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FString*                URL                            (Parm, ZeroConstructor)
// TEnumAsByte<ETravelType>*      TravelType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSeamless                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid*                  MapPackageGuid                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D5320              		 offset:2fc5320                       

void AARSharedWorldPlayerController::ClientTravelInternal(struct FString* URL, TEnumAsByte<ETravelType>* TravelType, bool* bSeamless, struct FGuid* MapPackageGuid)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientTravelInternal"));

	AARSharedWorldPlayerController_ClientTravelInternal_Params params;
	params.URL = URL;
	params.TravelType = TravelType;
	params.bSeamless = bSeamless;
	params.MapPackageGuid = MapPackageGuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientTravel
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString*                URL                            (Parm, ZeroConstructor)
// TEnumAsByte<ETravelType>*      TravelType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSeamless                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid*                  MapPackageGuid                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D51B0              		 offset:2fc51b0                       

void AARSharedWorldPlayerController::ClientTravel(struct FString* URL, TEnumAsByte<ETravelType>* TravelType, bool* bSeamless, struct FGuid* MapPackageGuid)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientTravel"));

	AARSharedWorldPlayerController_ClientTravel_Params params;
	params.URL = URL;
	params.TravelType = TravelType;
	params.bSeamless = bSeamless;
	params.MapPackageGuid = MapPackageGuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientTeamMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APlayerState**           SenderPlayerState              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                S                              (Parm, ZeroConstructor)
// struct FName*                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MsgLifeTime                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D5040              		 offset:2fc5040                       

void AARSharedWorldPlayerController::ClientTeamMessage(class APlayerState** SenderPlayerState, struct FString* S, struct FName* Type, float* MsgLifeTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientTeamMessage"));

	AARSharedWorldPlayerController_ClientTeamMessage_Params params;
	params.SenderPlayerState = SenderPlayerState;
	params.S = S;
	params.Type = Type;
	params.MsgLifeTime = MsgLifeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientStopForceFeedback
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// class UForceFeedbackEffect**   ForceFeedbackEffect            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4F60              		 offset:2fc4f60                       

void AARSharedWorldPlayerController::ClientStopForceFeedback(class UForceFeedbackEffect** ForceFeedbackEffect, struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientStopForceFeedback"));

	AARSharedWorldPlayerController_ClientStopForceFeedback_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientStopCameraShake
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// class UClass**                 Shake                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bImmediately                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4E90              		 offset:2fc4e90                       

void AARSharedWorldPlayerController::ClientStopCameraShake(class UClass** Shake, bool* bImmediately)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientStopCameraShake"));

	AARSharedWorldPlayerController_ClientStopCameraShake_Params params;
	params.Shake = Shake;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientStopCameraAnim
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UCameraAnim**            AnimToStop                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4E00              		 offset:2fc4e00                       

void AARSharedWorldPlayerController::ClientStopCameraAnim(class UCameraAnim** AnimToStop)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientStopCameraAnim"));

	AARSharedWorldPlayerController_ClientStopCameraAnim_Params params;
	params.AnimToStop = AnimToStop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientStartOnlineSession
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF6820D4DE0              		 offset:2fc4de0                       

void AARSharedWorldPlayerController::ClientStartOnlineSession()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientStartOnlineSession"));

	AARSharedWorldPlayerController_ClientStartOnlineSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSpawnCameraLensEffect
// (Net, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// class UClass**                 LensEffectEmitterClass         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4D50              		 offset:2fc4d50                       

void AARSharedWorldPlayerController::ClientSpawnCameraLensEffect(class UClass** LensEffectEmitterClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientSpawnCameraLensEffect"));

	AARSharedWorldPlayerController_ClientSpawnCameraLensEffect_Params params;
	params.LensEffectEmitterClass = LensEffectEmitterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetViewTarget
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AActor**                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FViewTargetTransitionParams* TransitionParams               (Parm)
// FunctionAddress:0x00007FF6820D4C60              		 offset:2fc4c60                       

void AARSharedWorldPlayerController::ClientSetViewTarget(class AActor** A, struct FViewTargetTransitionParams* TransitionParams)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientSetViewTarget"));

	AARSharedWorldPlayerController_ClientSetViewTarget_Params params;
	params.A = A;
	params.TransitionParams = TransitionParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetSpectatorWaiting
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool*                          bWaiting                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4BD0              		 offset:2fc4bd0                       

void AARSharedWorldPlayerController::ClientSetSpectatorWaiting(bool* bWaiting)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientSetSpectatorWaiting"));

	AARSharedWorldPlayerController_ClientSetSpectatorWaiting_Params params;
	params.bWaiting = bWaiting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetHUD
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// class UClass**                 NewHUDClass                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4B40              		 offset:2fc4b40                       

void AARSharedWorldPlayerController::ClientSetHUD(class UClass** NewHUDClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientSetHUD"));

	AARSharedWorldPlayerController_ClientSetHUD_Params params;
	params.NewHUDClass = NewHUDClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForceDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4A40              		 offset:2fc4a40                       

void AARSharedWorldPlayerController::ClientSetForceMipLevelsToBeResident(class UMaterialInterface** Material, float* ForceDuration, int* CinematicTextureGroups)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident"));

	AARSharedWorldPlayerController_ClientSetForceMipLevelsToBeResident_Params params;
	params.Material = Material;
	params.ForceDuration = ForceDuration;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetCinematicMode
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool*                          bInCinematicMode               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsMovement               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsTurning                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsHUD                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D48D0              		 offset:2fc48d0                       

void AARSharedWorldPlayerController::ClientSetCinematicMode(bool* bInCinematicMode, bool* bAffectsMovement, bool* bAffectsTurning, bool* bAffectsHUD)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientSetCinematicMode"));

	AARSharedWorldPlayerController_ClientSetCinematicMode_Params params;
	params.bInCinematicMode = bInCinematicMode;
	params.bAffectsMovement = bAffectsMovement;
	params.bAffectsTurning = bAffectsTurning;
	params.bAffectsHUD = bAffectsHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetCameraMode
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FName*                  NewCamMode                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4830              		 offset:2fc4830                       

void AARSharedWorldPlayerController::ClientSetCameraMode(struct FName* NewCamMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientSetCameraMode"));

	AARSharedWorldPlayerController_ClientSetCameraMode_Params params;
	params.NewCamMode = NewCamMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetCameraFade
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// bool*                          bEnableFading                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor*                 FadeColor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              FadeAlpha                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFadeAudio                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D46A0              		 offset:2fc46a0                       

void AARSharedWorldPlayerController::ClientSetCameraFade(bool* bEnableFading, struct FColor* FadeColor, struct FVector2D* FadeAlpha, float* FadeTime, bool* bFadeAudio)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientSetCameraFade"));

	AARSharedWorldPlayerController_ClientSetCameraFade_Params params;
	params.bEnableFading = bEnableFading;
	params.FadeColor = FadeColor;
	params.FadeAlpha = FadeAlpha;
	params.FadeTime = FadeTime;
	params.bFadeAudio = bFadeAudio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetBlockOnAsyncLoading
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF6820D4680              		 offset:2fc4680                       

void AARSharedWorldPlayerController::ClientSetBlockOnAsyncLoading()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientSetBlockOnAsyncLoading"));

	AARSharedWorldPlayerController_ClientSetBlockOnAsyncLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FText*                  ReturnReason                   (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF6820D45C0              		 offset:2fc45c0                       

void AARSharedWorldPlayerController::ClientReturnToMainMenuWithTextReason(struct FText* ReturnReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason"));

	AARSharedWorldPlayerController_ClientReturnToMainMenuWithTextReason_Params params;
	params.ReturnReason = ReturnReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientReturnToMainMenu
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString*                ReturnReason                   (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6820D4520              		 offset:2fc4520                       

void AARSharedWorldPlayerController::ClientReturnToMainMenu(struct FString* ReturnReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientReturnToMainMenu"));

	AARSharedWorldPlayerController_ClientReturnToMainMenu_Params params;
	params.ReturnReason = ReturnReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientRetryClientRestart
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APawn**                  NewPawn                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681FF0680              		 offset:2ee0680                       

void AARSharedWorldPlayerController::ClientRetryClientRestart(class APawn** NewPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientRetryClientRestart"));

	AARSharedWorldPlayerController_ClientRetryClientRestart_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientRestart
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APawn**                  NewPawn                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4490              		 offset:2fc4490                       

void AARSharedWorldPlayerController::ClientRestart(class APawn** NewPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientRestart"));

	AARSharedWorldPlayerController_ClientRestart_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientReset
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF6820D4470              		 offset:2fc4470                       

void AARSharedWorldPlayerController::ClientReset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientReset"));

	AARSharedWorldPlayerController_ClientReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientRepObjRef
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D43E0              		 offset:2fc43e0                       

void AARSharedWorldPlayerController::ClientRepObjRef(class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientRepObjRef"));

	AARSharedWorldPlayerController_ClientRepObjRef_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientReceiveLocalizedMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass**                 Message                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           switch                         (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState**           RelatedPlayerState             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState**           RelatedPlayerState02           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                OptionalObject                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4260              		 offset:2fc4260                       

void AARSharedWorldPlayerController::ClientReceiveLocalizedMessage(class UClass** Message, int* switch, class APlayerState** RelatedPlayerState, class APlayerState** RelatedPlayerState02, class UObject** OptionalObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientReceiveLocalizedMessage"));

	AARSharedWorldPlayerController_ClientReceiveLocalizedMessage_Params params;
	params.Message = Message;
	params.switch = switch;
	params.RelatedPlayerState = RelatedPlayerState;
	params.RelatedPlayerState02 = RelatedPlayerState02;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPrestreamTextures
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AActor**                 ForcedActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForceDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnableStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D4110              		 offset:2fc4110                       

void AARSharedWorldPlayerController::ClientPrestreamTextures(class AActor** ForcedActor, float* ForceDuration, bool* bEnableStreaming, int* CinematicTextureGroups)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientPrestreamTextures"));

	AARSharedWorldPlayerController_ClientPrestreamTextures_Params params;
	params.ForcedActor = ForcedActor;
	params.ForceDuration = ForceDuration;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPrepareMapChange
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FName*                  LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFirst                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLast                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D3FF0              		 offset:2fc3ff0                       

void AARSharedWorldPlayerController::ClientPrepareMapChange(struct FName* LevelName, bool* bFirst, bool* bLast)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientPrepareMapChange"));

	AARSharedWorldPlayerController_ClientPrepareMapChange_Params params;
	params.LevelName = LevelName;
	params.bFirst = bFirst;
	params.bLast = bLast;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlaySoundAtLocation
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// class USoundBase**             Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D3EA0              		 offset:2fc3ea0                       

void AARSharedWorldPlayerController::ClientPlaySoundAtLocation(class USoundBase** Sound, struct FVector* Location, float* VolumeMultiplier, float* PitchMultiplier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientPlaySoundAtLocation"));

	AARSharedWorldPlayerController_ClientPlaySoundAtLocation_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlaySound
// (Net, Native, Event, Public, NetClient)
// Parameters:
// class USoundBase**             Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D3DA0              		 offset:2fc3da0                       

void AARSharedWorldPlayerController::ClientPlaySound(class USoundBase** Sound, float* VolumeMultiplier, float* PitchMultiplier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientPlaySound"));

	AARSharedWorldPlayerController_ClientPlaySound_Params params;
	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlayForceFeedback_Internal
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// class UForceFeedbackEffect**   ForceFeedbackEffect            (Parm, ZeroConstructor, IsPlainOldData)
// struct FForceFeedbackParameters* Params                         (Parm)
// FunctionAddress:0x00007FF6820D3CC0              		 offset:2fc3cc0                       

void AARSharedWorldPlayerController::ClientPlayForceFeedback_Internal(class UForceFeedbackEffect** ForceFeedbackEffect, struct FForceFeedbackParameters* Params)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientPlayForceFeedback_Internal"));

	AARSharedWorldPlayerController_ClientPlayForceFeedback_Internal_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlayCameraShake
// (Net, Native, Event, Public, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class UClass**                 Shake                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraAnimPlaySpace>* PlaySpace                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               UserPlaySpaceRot               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D3B60              		 offset:2fc3b60                       

void AARSharedWorldPlayerController::ClientPlayCameraShake(class UClass** Shake, float* Scale, TEnumAsByte<ECameraAnimPlaySpace>* PlaySpace, struct FRotator* UserPlaySpaceRot)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientPlayCameraShake"));

	AARSharedWorldPlayerController_ClientPlayCameraShake_Params params;
	params.Shake = Shake;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlayCameraAnim
// (Net, Native, Event, Public, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class UCameraAnim**            AnimToPlay                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendInTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRandomStartTime               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraAnimPlaySpace>* space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               CustomPlaySpace                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D38C0              		 offset:2fc38c0                       

void AARSharedWorldPlayerController::ClientPlayCameraAnim(class UCameraAnim** AnimToPlay, float* Scale, float* Rate, float* BlendInTime, float* BlendOutTime, bool* bLoop, bool* bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace>* space, struct FRotator* CustomPlaySpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientPlayCameraAnim"));

	AARSharedWorldPlayerController_ClientPlayCameraAnim_Params params;
	params.AnimToPlay = AnimToPlay;
	params.Scale = Scale;
	params.Rate = Rate;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.bLoop = bLoop;
	params.bRandomStartTime = bRandomStartTime;
	params.space = space;
	params.CustomPlaySpace = CustomPlaySpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientMutePlayer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FUniqueNetIdRepl*       playerID                       (Parm)
// FunctionAddress:0x00007FF6820D37A0              		 offset:2fc37a0                       

void AARSharedWorldPlayerController::ClientMutePlayer(struct FUniqueNetIdRepl* playerID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientMutePlayer"));

	AARSharedWorldPlayerController_ClientMutePlayer_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString*                S                              (Parm, ZeroConstructor)
// struct FName*                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MsgLifeTime                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D3660              		 offset:2fc3660                       

void AARSharedWorldPlayerController::ClientMessage(struct FString* S, struct FName* Type, float* MsgLifeTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientMessage"));

	AARSharedWorldPlayerController_ClientMessage_Params params;
	params.S = S;
	params.Type = Type;
	params.MsgLifeTime = MsgLifeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientIgnoreMoveInput
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool*                          bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D35D0              		 offset:2fc35d0                       

void AARSharedWorldPlayerController::ClientIgnoreMoveInput(bool* bIgnore)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientIgnoreMoveInput"));

	AARSharedWorldPlayerController_ClientIgnoreMoveInput_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientIgnoreLookInput
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool*                          bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D3540              		 offset:2fc3540                       

void AARSharedWorldPlayerController::ClientIgnoreLookInput(bool* bIgnore)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientIgnoreLookInput"));

	AARSharedWorldPlayerController_ClientIgnoreLookInput_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientGotoState
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FName*                  newState                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D34A0              		 offset:2fc34a0                       

void AARSharedWorldPlayerController::ClientGotoState(struct FName* newState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientGotoState"));

	AARSharedWorldPlayerController_ClientGotoState_Params params;
	params.newState = newState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientGameEnded
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AActor**                 EndGameFocus                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsWinner                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D33D0              		 offset:2fc33d0                       

void AARSharedWorldPlayerController::ClientGameEnded(class AActor** EndGameFocus, bool* bIsWinner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientGameEnded"));

	AARSharedWorldPlayerController_ClientGameEnded_Params params;
	params.EndGameFocus = EndGameFocus;
	params.bIsWinner = bIsWinner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientForceGarbageCollection
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF6820D33B0              		 offset:2fc33b0                       

void AARSharedWorldPlayerController::ClientForceGarbageCollection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientForceGarbageCollection"));

	AARSharedWorldPlayerController_ClientForceGarbageCollection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientFlushLevelStreaming
// (Final, Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF6820D3390              		 offset:2fc3390                       

void AARSharedWorldPlayerController::ClientFlushLevelStreaming()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientFlushLevelStreaming"));

	AARSharedWorldPlayerController_ClientFlushLevelStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientEndOnlineSession
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF6820D3370              		 offset:2fc3370                       

void AARSharedWorldPlayerController::ClientEndOnlineSession()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientEndOnlineSession"));

	AARSharedWorldPlayerController_ClientEndOnlineSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientEnableNetworkVoice
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D32E0              		 offset:2fc32e0                       

void AARSharedWorldPlayerController::ClientEnableNetworkVoice(bool* bEnable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientEnableNetworkVoice"));

	AARSharedWorldPlayerController_ClientEnableNetworkVoice_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientCommitMapChange
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF6820D32C0              		 offset:2fc32c0                       

void AARSharedWorldPlayerController::ClientCommitMapChange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientCommitMapChange"));

	AARSharedWorldPlayerController_ClientCommitMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientClearCameraLensEffects
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// FunctionAddress:0x00007FF6820D32A0              		 offset:2fc32a0                       

void AARSharedWorldPlayerController::ClientClearCameraLensEffects()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientClearCameraLensEffects"));

	AARSharedWorldPlayerController_ClientClearCameraLensEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientCapBandwidth
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int*                           Cap                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D3210              		 offset:2fc3210                       

void AARSharedWorldPlayerController::ClientCapBandwidth(int* Cap)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientCapBandwidth"));

	AARSharedWorldPlayerController_ClientCapBandwidth_Params params;
	params.Cap = Cap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientCancelPendingMapChange
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF6820D31F0              		 offset:2fc31f0                       

void AARSharedWorldPlayerController::ClientCancelPendingMapChange()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientCancelPendingMapChange"));

	AARSharedWorldPlayerController_ClientCancelPendingMapChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientAddTextureStreamingLoc
// (Final, Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector*                InLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideLocation              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D30D0              		 offset:2fc30d0                       

void AARSharedWorldPlayerController::ClientAddTextureStreamingLoc(struct FVector* InLoc, float* Duration, bool* bOverrideLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClientAddTextureStreamingLoc"));

	AARSharedWorldPlayerController_ClientAddTextureStreamingLoc_Params params;
	params.InLoc = InLoc;
	params.Duration = Duration;
	params.bOverrideLocation = bOverrideLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClearAudioListenerOverride
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820D30B0              		 offset:2fc30b0                       

void AARSharedWorldPlayerController::ClearAudioListenerOverride()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClearAudioListenerOverride"));

	AARSharedWorldPlayerController_ClearAudioListenerOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClearAudioListenerAttenuationOverride
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6820D3090              		 offset:2fc3090                       

void AARSharedWorldPlayerController::ClearAudioListenerAttenuationOverride()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ClearAudioListenerAttenuationOverride"));

	AARSharedWorldPlayerController_ClearAudioListenerAttenuationOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.CanRestartPlayer
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6820D3060              		 offset:2fc3060                       

bool AARSharedWorldPlayerController::CanRestartPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.CanRestartPlayer"));

	AARSharedWorldPlayerController_CanRestartPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.Camera
// (Exec, Native, Public)
// Parameters:
// struct FName*                  NewMode                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D2FC0              		 offset:2fc2fc0                       

void AARSharedWorldPlayerController::Camera(struct FName* NewMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.Camera"));

	AARSharedWorldPlayerController_Camera_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AddYawInput
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D2F40              		 offset:2fc2f40                       

void AARSharedWorldPlayerController::AddYawInput(float* Val)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.AddYawInput"));

	AARSharedWorldPlayerController_AddYawInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AddRollInput
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D2EC0              		 offset:2fc2ec0                       

void AARSharedWorldPlayerController::AddRollInput(float* Val)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.AddRollInput"));

	AARSharedWorldPlayerController_AddRollInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AddPitchInput
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D2E40              		 offset:2fc2e40                       

void AARSharedWorldPlayerController::AddPitchInput(float* Val)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.AddPitchInput"));

	AARSharedWorldPlayerController_AddPitchInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ActivateTouchInterface
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTouchInterface**        NewTouchInterface              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6820D2DB0              		 offset:2fc2db0                       

void AARSharedWorldPlayerController::ActivateTouchInterface(class UTouchInterface** NewTouchInterface)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PlayerController.ActivateTouchInterface"));

	AARSharedWorldPlayerController_ActivateTouchInterface_Params params;
	params.NewTouchInterface = NewTouchInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAREnvironmentCaptureProbe** InCaptureProbe                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6810D3E40              		 offset:1fc3e40                       

void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe** InCaptureProbe)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe"));

	AARSkyLight_SetEnvironmentCaptureProbe_Params params;
	params.InCaptureProbe = InCaptureProbe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D3110              		 offset:1fc3110                       

bool UARTrackedGeometry::IsTracked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.IsTracked"));

	UARTrackedGeometry_IsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARTrackingState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2F10              		 offset:1fc2f10                       

EARTrackingState UARTrackedGeometry::GetTrackingState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetTrackingState"));

	UARTrackedGeometry_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2970              		 offset:1fc2970                       

struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform"));

	UARTrackedGeometry_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2790              		 offset:1fc2790                       

struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform"));

	UARTrackedGeometry_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2510              		 offset:1fc2510                       

float UARTrackedGeometry::GetLastUpdateTimestamp()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp"));

	UARTrackedGeometry_GetLastUpdateTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D24E0              		 offset:1fc24e0                       

int UARTrackedGeometry::GetLastUpdateFrameNumber()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber"));

	UARTrackedGeometry_GetLastUpdateFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2120              		 offset:1fc2120                       

struct FName UARTrackedGeometry::GetDebugName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetDebugName"));

	UARTrackedGeometry_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARPlaneGeometry*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2BA0              		 offset:1fc2ba0                       

class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy"));

	UARPlaneGeometry_GetSubsumedBy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D23C0              		 offset:1fc23c0                       

struct FVector UARPlaneGeometry::GetExtent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetExtent"));

	UARPlaneGeometry_GetExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2080              		 offset:1fc2080                       

struct FVector UARPlaneGeometry::GetCenter()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetCenter"));

	UARPlaneGeometry_GetCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6810D1DC0              		 offset:1fc1dc0                       

TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace"));

	UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D3110              		 offset:1fc3110                       

bool UARTrackedPoint::IsTracked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.IsTracked"));

	UARTrackedPoint_IsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARTrackingState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2F10              		 offset:1fc2f10                       

EARTrackingState UARTrackedPoint::GetTrackingState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetTrackingState"));

	UARTrackedPoint_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2970              		 offset:1fc2970                       

struct FTransform UARTrackedPoint::GetLocalToWorldTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform"));

	UARTrackedPoint_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2790              		 offset:1fc2790                       

struct FTransform UARTrackedPoint::GetLocalToTrackingTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform"));

	UARTrackedPoint_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2510              		 offset:1fc2510                       

float UARTrackedPoint::GetLastUpdateTimestamp()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp"));

	UARTrackedPoint_GetLastUpdateTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D24E0              		 offset:1fc24e0                       

int UARTrackedPoint::GetLastUpdateFrameNumber()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber"));

	UARTrackedPoint_GetLastUpdateFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2120              		 offset:1fc2120                       

struct FName UARTrackedPoint::GetDebugName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedGeometry.GetDebugName"));

	UARTrackedPoint_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetEstimateSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2340              		 offset:1fc2340                       

struct FVector2D UARTrackedImage::GetEstimateSize()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedImage.GetEstimateSize"));

	UARTrackedImage_GetEstimateSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetDetectedImage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARCandidateImage*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D21A0              		 offset:1fc21a0                       

class UARCandidateImage* UARTrackedImage::GetDetectedImage()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedImage.GetDetectedImage"));

	UARTrackedImage_GetDetectedImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAREye*                        Eye                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2FE0              		 offset:1fc2fe0                       

struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye* Eye)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform"));

	UARFaceGeometry_GetWorldSpaceEyeTransform_Params params;
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAREye*                        Eye                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2570              		 offset:1fc2570                       

struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye* Eye)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform"));

	UARFaceGeometry_GetLocalSpaceEyeTransform_Params params;
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARFaceBlendShape*             BlendShape                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D1C20              		 offset:1fc1c20                       

float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape* BlendShape)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue"));

	UARFaceGeometry_GetBlendShapeValue_Params params;
	params.BlendShape = BlendShape;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<EARFaceBlendShape, float> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6810D1CB0              		 offset:1fc1cb0                       

TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARFaceGeometry.GetBlendShapes"));

	UARFaceGeometry_GetBlendShapes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2380              		 offset:1fc2380                       

struct FVector UAREnvironmentCaptureProbe::GetExtent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent"));

	UAREnvironmentCaptureProbe_GetExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAREnvironmentCaptureProbeTexture* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2310              		 offset:1fc2310                       

class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture"));

	UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedObject.GetDetectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARCandidateObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D21C0              		 offset:1fc21c0                       

class UARCandidateObject* UARTrackedObject::GetDetectedObject()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARTrackedObject.GetDetectedObject"));

	UARTrackedObject_GetDetectedObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2A40              		 offset:1fc2a40                       

float UARCandidateImage::GetPhysicalWidth()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth"));

	UARCandidateImage_GetPhysicalWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2A20              		 offset:1fc2a20                       

float UARCandidateImage::GetPhysicalHeight()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight"));

	UARCandidateImage_GetPhysicalHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARCandidateImageOrientation   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2A00              		 offset:1fc2a00                       

EARCandidateImageOrientation UARCandidateImage::GetOrientation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetOrientation"));

	UARCandidateImage_GetOrientation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6810D2480              		 offset:1fc2480                       

struct FString UARCandidateImage::GetFriendlyName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetFriendlyName"));

	UARCandidateImage_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D2060              		 offset:1fc2060                       

class UTexture2D* UARCandidateImage::GetCandidateTexture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateImage.GetCandidateTexture"));

	UARCandidateImage_GetCandidateTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>*         InCandidateObject              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6810D3BB0              		 offset:1fc3bb0                       

void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char>* InCandidateObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData"));

	UARCandidateObject_SetCandidateObjectData_Params params;
	params.InCandidateObject = InCandidateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARCandidateObject.SetBoundingBox
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox*                   InBoundingBox                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D3B10              		 offset:1fc3b10                       

void UARCandidateObject::SetBoundingBox(struct FBox* InBoundingBox)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.SetBoundingBox"));

	UARCandidateObject_SetBoundingBox_Params params;
	params.InBoundingBox = InBoundingBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARCandidateObject.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6810D24B0              		 offset:1fc24b0                       

struct FString UARCandidateObject::GetFriendlyName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.GetFriendlyName"));

	UARCandidateObject_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF6810D1FA0              		 offset:1fc1fa0                       

TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData"));

	UARCandidateObject_GetCandidateObjectData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6810D1E80              		 offset:1fc1e80                       

struct FBox UARCandidateObject::GetBoundingBox()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AugmentedReality.ARCandidateObject.GetBoundingBox"));

	UARCandidateObject_GetBoundingBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
