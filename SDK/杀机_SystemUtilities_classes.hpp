#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_SystemUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SystemUtilities.PlatformUtilities
// 0x0000 (0x0030 - 0x0030)
class UPlatformUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SystemUtilities.PlatformUtilities"));

		return ptr;
	}

};


// Class SystemUtilities.TimerObject
// 0x0078 (0x0178 - 0x0100)
class UTimerObject : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0100(0x0058) MISSED OFFSET
	struct FReplicationTimerData                       _replicationData;                                         // 0x0158(0x0014) (Net, Transient)
	unsigned char                                      UnknownData01[0xC];                                       // 0x016C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SystemUtilities.TimerObject"));

		return ptr;
	}


	void OnRep_TimerDataUpdated(struct FReplicationTimerData* oldData);
	bool IsTimerActive();
	bool IsPaused();
	bool IsDone();
	float GetRemainingTimePercent();
	float GetRemainingTime();
	float GetElapsedTimePercent();
	float GetElapsedTime();
	float GetDuration();
	class UTimerObject* STATIC_CreateTimer(class AActor** Owner);
	void Authority_Unpause();
	void Authority_Start(float* Duration);
	void Authority_SetPaused(bool* paused);
	void Authority_Pause();
	void Authority_Clear();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
