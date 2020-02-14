#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheDemogorgon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TheDemogorgon.DemogorgonPounceInteraction
// 0x00A0 (0x0680 - 0x05E0)
class UDemogorgonPounceInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x05E0(0x0068) MISSED OFFSET
	class UChargedAttackStateComponent*                _chargedAttackState;                                      // 0x0648(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ASlasherPlayer*                              _owningSlasher;                                           // 0x0650(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0658(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheDemogorgon.DemogorgonPounceInteraction"));

		return ptr;
	}


	void TriggerHuntingAudioEvent(bool* isHunting);
	void TriggerChargeCancelAudioEvent();
	void OnChargedAttackReadyChanged(bool* Ready);
	void OnCancelCooldownComplete();
};


// Class TheDemogorgon.DemogorgonPowerItemProgressComponent
// 0x0008 (0x0108 - 0x0100)
class UDemogorgonPowerItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                       // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheDemogorgon.DemogorgonPowerItemProgressComponent"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
