#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_DBDGameplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DBDGameplay.FadeComponent
// 0x0020 (0x0120 - 0x0100)
class UFadeComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFadePercentChanged;                                     // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              _fadeDuration;                                            // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0114(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDGameplay.FadeComponent"));

		return ptr;
	}


	float GetFadePercent();
};


// Class DBDGameplay.InteractionStarterComponent
// 0x0018 (0x0118 - 0x0100)
class UInteractionStarterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	class UInteractionDefinition*                      _interaction;                                             // 0x0108(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               _shouldStartInteraction;                                  // 0x0110(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0111(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDGameplay.InteractionStarterComponent"));

		return ptr;
	}


	void OnRep_ShouldStartInteraction();
	void OnInteractionStarted();
};


// Class DBDGameplay.PowerChargeComponent
// 0x0058 (0x0158 - 0x0100)
class UPowerChargeComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPowerChargeChanged;                                     // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0110(0x003C) MISSED OFFSET
	float                                              _currentCharge;                                           // 0x014C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _forceFullCharge;                                         // 0x0150(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0151(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDGameplay.PowerChargeComponent"));

		return ptr;
	}


	void OnRep_CurrentCharge(float* previousCharge);
	void Debug_Server_SetForceFullCharge(bool* forceFullCharge);
};


// Class DBDGameplay.PowerChargePresentationItemProgressComponent
// 0x0018 (0x0118 - 0x0100)
class UPowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPowerChargeComponent*                       _powerChargeComponent;                                    // 0x0100(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPowerToggleComponent*                       _powerToggleComponent;                                    // 0x0108(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              _chargeReadyThreshold;                                    // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDGameplay.PowerChargePresentationItemProgressComponent"));

		return ptr;
	}

};


// Class DBDGameplay.PowerToggleComponent
// 0x0020 (0x0120 - 0x0100)
class UPowerToggleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET
	bool                                               _isInPower;                                               // 0x0118(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DBDGameplay.PowerToggleComponent"));

		return ptr;
	}


	void OnRep_IsInPower();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
