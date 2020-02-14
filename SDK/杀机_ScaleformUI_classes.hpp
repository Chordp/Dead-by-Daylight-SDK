#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_ScaleformUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ScaleformUI.GFxEngine
// 0x0018 (0x0048 - 0x0030)
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                             // 0x0030(0x0010) (ZeroConstructor)
	int                                                RefCount;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ScaleformUI.GFxEngine"));

		return ptr;
	}

};


// Class ScaleformUI.GFxMoviePlayer
// 0x01B0 (0x01E0 - 0x0030)
class UGFxMoviePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FString                                     SwfAssetName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UGFxObject*                                  Root;                                                     // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bDisplayWithHudOff : 1;                                   // 0x0050(0x0001) (Edit)
	unsigned char                                      bEnableGammaCorrection : 1;                               // 0x0050(0x0001) (Edit)
	unsigned char                                      bAllowInput : 1;                                          // 0x0050(0x0001) (Edit, EditConst)
	unsigned char                                      bAllowFocus : 1;                                          // 0x0050(0x0001) (Edit, EditConst)
	unsigned char                                      bCloseOnLevelChange : 1;                                  // 0x0050(0x0001) (Edit)
	unsigned char                                      bOnlyOwnerFocusable : 1;                                  // 0x0050(0x0001) (Edit)
	unsigned char                                      bDiscardNonOwnerInput : 1;                                // 0x0050(0x0001) (Edit)
	unsigned char                                      bCaptureKeyboardInput : 1;                                // 0x0050(0x0001) (Edit)
	unsigned char                                      bCaptureMouseInput : 1;                                   // 0x0051(0x0001) (Edit)
	unsigned char                                      bCaptureGamepadInput : 1;                                 // 0x0051(0x0001) (Edit)
	unsigned char                                      bCaptureTouchInput : 1;                                   // 0x0051(0x0001) (Edit)
	unsigned char                                      bIsSplitscreenLayoutModified : 1;                         // 0x0051(0x0001) (Edit)
	unsigned char                                      bShowDefaultMouseCursor : 1;                              // 0x0051(0x0001) (Edit)
	unsigned char                                      bBlurLesserMovies : 1;                                    // 0x0051(0x0001) (Edit)
	unsigned char                                      bHideLesserMovies : 1;                                    // 0x0051(0x0001) (Edit)
	unsigned char                                      bIsPriorityBlurred : 1;                                   // 0x0051(0x0001) (Edit)
	unsigned char                                      bIsPriorityHidden : 1;                                    // 0x0052(0x0001) (Edit)
	unsigned char                                      bIgnoreVisibilityEffect : 1;                              // 0x0052(0x0001) (Edit)
	unsigned char                                      bIgnoreBlurEffect : 1;                                    // 0x0052(0x0001) (Edit)
	unsigned char                                      bRefreshed : 1;                                           // 0x0052(0x0001) (Edit)
	unsigned char                                      bPerformHitTest : 1;                                      // 0x0052(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	TEnumAsByte<EGFxHitTestType>                       HitTestType;                                              // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     ExternalInterface;                                        // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FKey>                                CaptureKeys;                                              // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FKey>                                FocusIgnoreKeys;                                          // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FExternalTexture>                    ExternalTextures;                                         // 0x0088(0x0010) (ZeroConstructor)
	TEnumAsByte<EGFxRenderTextureMode>                 RenderTextureMode;                                        // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Priority;                                                 // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
	TArray<struct FGFxWidgetBinding>                   WidgetBindings;                                           // 0x00A0(0x0010) (ZeroConstructor)
	int                                                SplitscreenLayoutYAdjust;                                 // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFsCommand;                                              // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartCommand;                                           // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloseCommand;                                           // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTickCommand;                                            // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusGainedCommand;                                     // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusLostCommand;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xB8];                                      // 0x0118(0x00B8) MISSED OFFSET
	TArray<class UGFxObject*>                          CachedMovieClipsArray;                                    // 0x01D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ScaleformUI.GFxMoviePlayer"));

		return ptr;
	}


	bool Start(bool* bRefresh);
	void SetVisibility(struct FString* MovieClipName, bool* bVisible);
	void SetViewScaleMode(TEnumAsByte<EGFxScaleMode>* ScaleMode);
	void SetViewport(int* X, int* Y, int* Width, int* Height);
	void SetView3D(struct FTransform* ViewTransform);
	void SetVariableValueArray(struct FString* MovieClipName, struct FString* MemberName, TArray<struct FASValue>* value);
	void SetVariableValue(struct FString* MovieClipName, struct FString* MemberName, struct FASValue* value);
	void SetTimingMode(TEnumAsByte<EGFxTimingMode>* TimingMode);
	void SetScale(struct FString* MovieClipName, float* XScale, float* YScale);
	void SetPosition(struct FString* MovieClipName, float* X, float* Y);
	void SetPerspective3D(struct FASPerspectiveTransform* PerspectiveTransform);
	void SetPause(bool* bPausePlayback);
	void SetMovieCanReceiveInput(bool* bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool* bCanReceiveFocus);
	void SetFocusIgnoreKeys(TArray<struct FKey>* Keys);
	bool SetExternalTexture(struct FString* Resource, class UTexture** Texture);
	void SetDisplayTransform(struct FString* MovieClipName, struct FTransform* DisplayTransform);
	void SetDisplayInfo(struct FString* MovieClipName, struct FASDisplayInfo* Info);
	void SetColorTransform(struct FString* MovieClipName, struct FASColorTransform* UnrealColorTransform);
	void SetCaptureKeys(TArray<struct FKey>* Keys);
	void SetAlignment(TEnumAsByte<EGFxAlign>* Align);
	void ReceiveGFxCommand(struct FString* Command, struct FString* Arguments);
	class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie** SwfMovie, class UObject** ExternalScriptInterface, class UTextureRenderTarget2D** RenderToTexture, class UGFxMoviePlayer** MoviePlayer, bool* DisplayWithHudOff, bool* StartPaused);
	void OnTick(float* DeltaTime);
	void OnStart();
	void OnFocusLost(int* LocalPlayerIndex);
	void OnFocusGained(int* LocalPlayerIndex);
	void OnClose();
	bool LoadAndStart(struct FString* InSwfAssetName, bool* bRefresh);
	struct FASValue Invoke(struct FString* MovieClipName, struct FString* FunctionName, TArray<struct FASValue>* Params);
	void GotoAndStopI(struct FString* MovieClipName, int* Frame);
	void GotoAndStop(struct FString* MovieClipName, struct FString* Frame);
	void GotoAndPlayI(struct FString* MovieClipName, int* Frame);
	void GotoAndPlay(struct FString* MovieClipName, struct FString* Frame);
	bool GetVisibility(struct FString* MovieClipName);
	struct FTransform GetView3D();
	TArray<struct FASValue> GetVariableValueArray(struct FString* MovieClipName, struct FString* MemberName);
	struct FASValue GetVariableValue(struct FString* MovieClipName, struct FString* MemberName);
	bool GetScale(struct FString* MovieClipName, float* XScale, float* YScale);
	bool GetPosition(struct FString* MovieClipName, float* X, float* Y);
	struct FASPerspectiveTransform GetPerspective3D();
	class UGFxObject* GetMovieClip(struct FString* MovieClipName);
	struct FTransform GetDisplayTransform(struct FString* MovieClipName);
	struct FASDisplayInfo GetDisplayInfo(struct FString* MovieClipName);
	struct FASColorTransform GetColorTransform(struct FString* MovieClipName);
	void Close(bool* Unload);
};


// Class ScaleformUI.GFxObject
// 0x0030 (0x0060 - 0x0030)
class UGFxObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ScaleformUI.GFxObject"));

		return ptr;
	}

};


// Class ScaleformUI.ScaleformBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ScaleformUI.ScaleformBlueprintLibrary"));

		return ptr;
	}

};


// Class ScaleformUI.SwfMovie
// 0x0178 (0x01A8 - 0x0030)
class USwfMovie : public UObject
{
public:
	unsigned char                                      bUseGFxExport : 1;                                        // 0x0030(0x0001) (Edit)
	unsigned char                                      bOptimizeForMobiles : 1;                                  // 0x0030(0x0001) (Edit)
	unsigned char                                      bSetSRGBOnImportedTextures : 1;                           // 0x0030(0x0001) (Edit)
	unsigned char                                      bPackTextures : 1;                                        // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                PackTextureSize;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceSquarePacking : 1;                                  // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	TEnumAsByte<EFlashTextureRescale>                  TextureRescale;                                           // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FString                                     TextureFormat;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bReplaceImages : 1;                                       // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FString                                     SourceFile;                                               // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FString>                             FontMappings;                                             // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     SourceFileTimestamp;                                      // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
	uint64_t                                           ImportTimeStamp;                                          // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<unsigned char>                              RawData;                                                  // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             ReferencedAssetNames;                                     // 0x00A0(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             References;                                               // 0x00B0(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	TArray<class UObject*>                             UserReferences;                                           // 0x00C0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData04[0xD8];                                      // 0x00D0(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ScaleformUI.SwfMovie"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
