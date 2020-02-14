#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_LinearTimecode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LinearTimecode.LinearTimecodeComponent
// 0x0060 (0x02D0 - 0x0270)
class ULinearTimecodeComponent : public USceneComponent
{
public:
	struct FDropTimecode                               DropTimecode;                                             // 0x0270(0x001C) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTimecodeChange;                                         // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x02A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class LinearTimecode.LinearTimecodeComponent"));

		return ptr;
	}


	void STATIC_SetDropTimecodeFrameNumber(struct FDropTimecode* Timecode, int* FrameNumber, struct FDropTimecode* OutTimecode);
	void STATIC_GetDropTimeCodeFrameNumber(struct FDropTimecode* Timecode, int* FrameNumber);
	int GetDropFrameNumber();
};


// Class LinearTimecode.DropTimecodeToStringConversion
// 0x0000 (0x0030 - 0x0030)
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class LinearTimecode.DropTimecodeToStringConversion"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
