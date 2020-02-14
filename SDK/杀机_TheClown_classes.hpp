#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_TheClown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TheClown.BaseGasCloudProjectile
// 0x0008 (0x0350 - 0x0348)
class ABaseGasCloudProjectile : public ABaseProjectile
{
public:
	float                                              _cumulativeLifetime;                                      // 0x0348(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheClown.BaseGasCloudProjectile"));

		return ptr;
	}


	void Authority_SetCumulativeLifetime(float* value);
	float Authority_GetCumulativeLifetime();
};


// Class TheClown.GassedStatusEffect
// 0x0078 (0x0338 - 0x02C0)
class UGassedStatusEffect : public UStatusEffect
{
public:
	struct FScriptMulticastDelegate                    _onIsInCloudChanged;                                      // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    _onOverlappingCloudAdded;                                 // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               _isInCloud;                                               // 0x02E0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x02E1(0x0050) UNKNOWN PROPERTY: SetProperty TheClown.GassedStatusEffect._overlappingClouds

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class TheClown.GassedStatusEffect"));

		return ptr;
	}


	void OnRep_IsInCloud();
	bool IsInCloud();
	void Authority_SetIsInCloud(bool* value);
	void Authority_RemoveOverlappingCloud(class ABaseGasCloudProjectile** cloud);
	void Authority_AddOverlappingCloud(class ABaseGasCloudProjectile** cloud);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
