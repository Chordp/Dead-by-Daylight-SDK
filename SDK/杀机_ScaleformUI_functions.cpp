// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_ScaleformUI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScaleformUI.GFxMoviePlayer.Start
// (Native, Public)
// Parameters:
// bool*                          bRefresh                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF681730E40              		 offset:2620e40                       

bool UGFxMoviePlayer::Start(bool* bRefresh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.Start"));

	UGFxMoviePlayer_Start_Params params;
	params.bRefresh = bRefresh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681730CD0              		 offset:2620cd0                       

void UGFxMoviePlayer::SetVisibility(struct FString* MovieClipName, bool* bVisible)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetVisibility"));

	UGFxMoviePlayer_SetVisibility_Params params;
	params.MovieClipName = MovieClipName;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGFxScaleMode>*    ScaleMode                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681730B10              		 offset:2620b10                       

void UGFxMoviePlayer::SetViewScaleMode(TEnumAsByte<EGFxScaleMode>* ScaleMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode"));

	UGFxMoviePlayer_SetViewScaleMode_Params params;
	params.ScaleMode = ScaleMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetViewport
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           X                              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Height                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681730B90              		 offset:2620b90                       

void UGFxMoviePlayer::SetViewport(int* X, int* Y, int* Width, int* Height)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetViewport"));

	UGFxMoviePlayer_SetViewport_Params params;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetView3D
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform*             ViewTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF681730A30              		 offset:2620a30                       

void UGFxMoviePlayer::SetView3D(struct FTransform* ViewTransform)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetView3D"));

	UGFxMoviePlayer_SetView3D_Params params;
	params.ViewTransform = ViewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FString*                MemberName                     (Parm, ZeroConstructor)
// TArray<struct FASValue>*       value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6817308A0              		 offset:26208a0                       

void UGFxMoviePlayer::SetVariableValueArray(struct FString* MovieClipName, struct FString* MemberName, TArray<struct FASValue>* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray"));

	UGFxMoviePlayer_SetVariableValueArray_Params params;
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetVariableValue
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FString*                MemberName                     (Parm, ZeroConstructor)
// struct FASValue*               value                          (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF681730730              		 offset:2620730                       

void UGFxMoviePlayer::SetVariableValue(struct FString* MovieClipName, struct FString* MemberName, struct FASValue* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetVariableValue"));

	UGFxMoviePlayer_SetVariableValue_Params params;
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetTimingMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGFxTimingMode>*   TimingMode                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6817306B0              		 offset:26206b0                       

void UGFxMoviePlayer::SetTimingMode(TEnumAsByte<EGFxTimingMode>* TimingMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetTimingMode"));

	UGFxMoviePlayer_SetTimingMode_Params params;
	params.TimingMode = TimingMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetScale
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// float*                         XScale                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YScale                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6817304D0              		 offset:26204d0                       

void UGFxMoviePlayer::SetScale(struct FString* MovieClipName, float* XScale, float* YScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetScale"));

	UGFxMoviePlayer_SetScale_Params params;
	params.MovieClipName = MovieClipName;
	params.XScale = XScale;
	params.YScale = YScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetPosition
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// float*                         X                              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Y                              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6817302F0              		 offset:26202f0                       

void UGFxMoviePlayer::SetPosition(struct FString* MovieClipName, float* X, float* Y)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetPosition"));

	UGFxMoviePlayer_SetPosition_Params params;
	params.MovieClipName = MovieClipName;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetPerspective3D
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FASPerspectiveTransform* PerspectiveTransform           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF681730240              		 offset:2620240                       

void UGFxMoviePlayer::SetPerspective3D(struct FASPerspectiveTransform* PerspectiveTransform)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetPerspective3D"));

	UGFxMoviePlayer_SetPerspective3D_Params params;
	params.PerspectiveTransform = PerspectiveTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetPause
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bPausePlayback                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6817301B0              		 offset:26201b0                       

void UGFxMoviePlayer::SetPause(bool* bPausePlayback)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetPause"));

	UGFxMoviePlayer_SetPause_Params params;
	params.bPausePlayback = bPausePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bCanReceiveInput               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681730120              		 offset:2620120                       

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool* bCanReceiveInput)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput"));

	UGFxMoviePlayer_SetMovieCanReceiveInput_Params params;
	params.bCanReceiveInput = bCanReceiveInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bCanReceiveFocus               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF681730090              		 offset:2620090                       

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool* bCanReceiveFocus)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus"));

	UGFxMoviePlayer_SetMovieCanReceiveFocus_Params params;
	params.bCanReceiveFocus = bCanReceiveFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FKey>*           Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF68172FCF0              		 offset:261fcf0                       

void UGFxMoviePlayer::SetFocusIgnoreKeys(TArray<struct FKey>* Keys)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys"));

	UGFxMoviePlayer_SetFocusIgnoreKeys_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetExternalTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Resource                       (Parm, ZeroConstructor)
// class UTexture**               Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68172FC00              		 offset:261fc00                       

bool UGFxMoviePlayer::SetExternalTexture(struct FString* Resource, class UTexture** Texture)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetExternalTexture"));

	UGFxMoviePlayer_SetExternalTexture_Params params;
	params.Resource = Resource;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FTransform*             DisplayTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF68172F9F0              		 offset:261f9f0                       

void UGFxMoviePlayer::SetDisplayTransform(struct FString* MovieClipName, struct FTransform* DisplayTransform)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform"));

	UGFxMoviePlayer_SetDisplayTransform_Params params;
	params.MovieClipName = MovieClipName;
	params.DisplayTransform = DisplayTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FASDisplayInfo*         Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68172F810              		 offset:261f810                       

void UGFxMoviePlayer::SetDisplayInfo(struct FString* MovieClipName, struct FASDisplayInfo* Info)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo"));

	UGFxMoviePlayer_SetDisplayInfo_Params params;
	params.MovieClipName = MovieClipName;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetColorTransform
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FASColorTransform*      UnrealColorTransform           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF68172F690              		 offset:261f690                       

void UGFxMoviePlayer::SetColorTransform(struct FString* MovieClipName, struct FASColorTransform* UnrealColorTransform)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetColorTransform"));

	UGFxMoviePlayer_SetColorTransform_Params params;
	params.MovieClipName = MovieClipName;
	params.UnrealColorTransform = UnrealColorTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FKey>*           Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF68172F590              		 offset:261f590                       

void UGFxMoviePlayer::SetCaptureKeys(TArray<struct FKey>* Keys)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys"));

	UGFxMoviePlayer_SetCaptureKeys_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.SetAlignment
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGFxAlign>*        Align                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68172F510              		 offset:261f510                       

void UGFxMoviePlayer::SetAlignment(TEnumAsByte<EGFxAlign>* Align)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.SetAlignment"));

	UGFxMoviePlayer_SetAlignment_Params params;
	params.Align = Align;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
// (Native, Public)
// Parameters:
// struct FString*                Command                        (Parm, ZeroConstructor)
// struct FString*                Arguments                      (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF68172F420              		 offset:261f420                       

void UGFxMoviePlayer::ReceiveGFxCommand(struct FString* Command, struct FString* Arguments)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand"));

	UGFxMoviePlayer_ReceiveGFxCommand_Params params;
	params.Command = Command;
	params.Arguments = Arguments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OpenMovie
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USwfMovie**              SwfMovie                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                ExternalScriptInterface        (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D** RenderToTexture                (Parm, ZeroConstructor, IsPlainOldData)
// class UGFxMoviePlayer**        MoviePlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DisplayWithHudOff              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          StartPaused                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGFxMoviePlayer*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68172F0C0              		 offset:261f0c0                       

class UGFxMoviePlayer* UGFxMoviePlayer::STATIC_OpenMovie(class USwfMovie** SwfMovie, class UObject** ExternalScriptInterface, class UTextureRenderTarget2D** RenderToTexture, class UGFxMoviePlayer** MoviePlayer, bool* DisplayWithHudOff, bool* StartPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.OpenMovie"));

	UGFxMoviePlayer_OpenMovie_Params params;
	params.SwfMovie = SwfMovie;
	params.ExternalScriptInterface = ExternalScriptInterface;
	params.RenderToTexture = RenderToTexture;
	params.MoviePlayer = MoviePlayer;
	params.DisplayWithHudOff = DisplayWithHudOff;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.OnTick
// (Native, Public)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68172F040              		 offset:261f040                       

void UGFxMoviePlayer::OnTick(float* DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.OnTick"));

	UGFxMoviePlayer_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OnStart
// (Native, Public)
// FunctionAddress:0x00007FF68172F020              		 offset:261f020                       

void UGFxMoviePlayer::OnStart()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.OnStart"));

	UGFxMoviePlayer_OnStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OnFocusLost
// (Native, Public)
// Parameters:
// int*                           LocalPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68172EF90              		 offset:261ef90                       

void UGFxMoviePlayer::OnFocusLost(int* LocalPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.OnFocusLost"));

	UGFxMoviePlayer_OnFocusLost_Params params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OnFocusGained
// (Native, Public)
// Parameters:
// int*                           LocalPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68172EF00              		 offset:261ef00                       

void UGFxMoviePlayer::OnFocusGained(int* LocalPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.OnFocusGained"));

	UGFxMoviePlayer_OnFocusGained_Params params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.OnClose
// (Native, Public)
// FunctionAddress:0x00007FF68076A140              		 offset:165a140                       

void UGFxMoviePlayer::OnClose()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.OnClose"));

	UGFxMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.LoadAndStart
// (Native, Public)
// Parameters:
// struct FString*                InSwfAssetName                 (Parm, ZeroConstructor)
// bool*                          bRefresh                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68172EDC0              		 offset:261edc0                       

bool UGFxMoviePlayer::LoadAndStart(struct FString* InSwfAssetName, bool* bRefresh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.LoadAndStart"));

	UGFxMoviePlayer_LoadAndStart_Params params;
	params.InSwfAssetName = InSwfAssetName;
	params.bRefresh = bRefresh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.Invoke
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FString*                FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FASValue>*       Params                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF68172E750              		 offset:261e750                       

struct FASValue UGFxMoviePlayer::Invoke(struct FString* MovieClipName, struct FString* FunctionName, TArray<struct FASValue>* Params)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.Invoke"));

	UGFxMoviePlayer_Invoke_Params params;
	params.MovieClipName = MovieClipName;
	params.FunctionName = FunctionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GotoAndStopI
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// int*                           Frame                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68172E5F0              		 offset:261e5f0                       

void UGFxMoviePlayer::GotoAndStopI(struct FString* MovieClipName, int* Frame)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GotoAndStopI"));

	UGFxMoviePlayer_GotoAndStopI_Params params;
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.GotoAndStop
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FString*                Frame                          (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF68172E460              		 offset:261e460                       

void UGFxMoviePlayer::GotoAndStop(struct FString* MovieClipName, struct FString* Frame)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GotoAndStop"));

	UGFxMoviePlayer_GotoAndStop_Params params;
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// int*                           Frame                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68172E300              		 offset:261e300                       

void UGFxMoviePlayer::GotoAndPlayI(struct FString* MovieClipName, int* Frame)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI"));

	UGFxMoviePlayer_GotoAndPlayI_Params params;
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.GotoAndPlay
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FString*                Frame                          (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF68172E170              		 offset:261e170                       

void UGFxMoviePlayer::GotoAndPlay(struct FString* MovieClipName, struct FString* Frame)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GotoAndPlay"));

	UGFxMoviePlayer_GotoAndPlay_Params params;
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScaleformUI.GFxMoviePlayer.GetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68172E090              		 offset:261e090                       

bool UGFxMoviePlayer::GetVisibility(struct FString* MovieClipName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetVisibility"));

	UGFxMoviePlayer_GetVisibility_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetView3D
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68172E020              		 offset:261e020                       

struct FTransform UGFxMoviePlayer::GetView3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetView3D"));

	UGFxMoviePlayer_GetView3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FString*                MemberName                     (Parm, ZeroConstructor)
// TArray<struct FASValue>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF68172DED0              		 offset:261ded0                       

TArray<struct FASValue> UGFxMoviePlayer::GetVariableValueArray(struct FString* MovieClipName, struct FString* MemberName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray"));

	UGFxMoviePlayer_GetVariableValueArray_Params params;
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetVariableValue
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FString*                MemberName                     (Parm, ZeroConstructor)
// struct FASValue                ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF68172DDA0              		 offset:261dda0                       

struct FASValue UGFxMoviePlayer::GetVariableValue(struct FString* MovieClipName, struct FString* MemberName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetVariableValue"));

	UGFxMoviePlayer_GetVariableValue_Params params;
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetScale
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// float                          XScale                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          YScale                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68172DB60              		 offset:261db60                       

bool UGFxMoviePlayer::GetScale(struct FString* MovieClipName, float* XScale, float* YScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetScale"));

	UGFxMoviePlayer_GetScale_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XScale != nullptr)
		*XScale = params.XScale;
	if (YScale != nullptr)
		*YScale = params.YScale;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetPosition
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68172D920              		 offset:261d920                       

bool UGFxMoviePlayer::GetPosition(struct FString* MovieClipName, float* X, float* Y)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetPosition"));

	UGFxMoviePlayer_GetPosition_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetPerspective3D
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FASPerspectiveTransform ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF68172D8D0              		 offset:261d8d0                       

struct FASPerspectiveTransform UGFxMoviePlayer::GetPerspective3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetPerspective3D"));

	UGFxMoviePlayer_GetPerspective3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetMovieClip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68172D820              		 offset:261d820                       

class UGFxObject* UGFxMoviePlayer::GetMovieClip(struct FString* MovieClipName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetMovieClip"));

	UGFxMoviePlayer_GetMovieClip_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF68172D430              		 offset:261d430                       

struct FTransform UGFxMoviePlayer::GetDisplayTransform(struct FString* MovieClipName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform"));

	UGFxMoviePlayer_GetDisplayTransform_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FASDisplayInfo          ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF68172D310              		 offset:261d310                       

struct FASDisplayInfo UGFxMoviePlayer::GetDisplayInfo(struct FString* MovieClipName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo"));

	UGFxMoviePlayer_GetDisplayInfo_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.GetColorTransform
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                MovieClipName                  (Parm, ZeroConstructor)
// struct FASColorTransform       ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF68172D210              		 offset:261d210                       

struct FASColorTransform UGFxMoviePlayer::GetColorTransform(struct FString* MovieClipName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.GetColorTransform"));

	UGFxMoviePlayer_GetColorTransform_Params params;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScaleformUI.GFxMoviePlayer.Close
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Unload                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF68172D110              		 offset:261d110                       

void UGFxMoviePlayer::Close(bool* Unload)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ScaleformUI.GFxMoviePlayer.Close"));

	UGFxMoviePlayer_Close_Params params;
	params.Unload = Unload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
