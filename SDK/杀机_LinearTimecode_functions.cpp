// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_LinearTimecode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDropTimecode*          Timecode                       (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           FrameNumber                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDropTimecode           OutTimecode                    (Parm, OutParm)
// FunctionAddress:0x00007FF67FFDC560              		 offset:ecc560                        

void ULinearTimecodeComponent::STATIC_SetDropTimecodeFrameNumber(struct FDropTimecode* Timecode, int* FrameNumber, struct FDropTimecode* OutTimecode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber"));

	ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params params;
	params.Timecode = Timecode;
	params.FrameNumber = FrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTimecode != nullptr)
		*OutTimecode = params.OutTimecode;
}


// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDropTimecode*          Timecode                       (ConstParm, Parm, OutParm, ReferenceParm)
// int                            FrameNumber                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FFDC470              		 offset:ecc470                        

void ULinearTimecodeComponent::STATIC_GetDropTimeCodeFrameNumber(struct FDropTimecode* Timecode, int* FrameNumber)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber"));

	ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params params;
	params.Timecode = Timecode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FrameNumber != nullptr)
		*FrameNumber = params.FrameNumber;
}


// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FFDC440              		 offset:ecc440                        

int ULinearTimecodeComponent::GetDropFrameNumber()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber"));

	ULinearTimecodeComponent_GetDropFrameNumber_Params params;

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
