#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Qos_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Qos.QosBeaconClient
// 0x0038 (0x0400 - 0x03C8)
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03C8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Qos.QosBeaconClient"));

		return ptr;
	}


	void ClientOnConnected();
};


// Class Qos.QosBeaconHost
// 0x0010 (0x0378 - 0x0368)
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Qos.QosBeaconHost"));

		return ptr;
	}

};


// Class Qos.QosEvaluator
// 0x0058 (0x0088 - 0x0030)
class UQosEvaluator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	bool                                               bInProgress;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelOperation;                                         // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	TArray<struct FDatacenterQosInstance>              Datacenters;                                              // 0x0058(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Qos.QosEvaluator"));

		return ptr;
	}

};


// Class Qos.QosRegionManager
// 0x0098 (0x00C8 - 0x0030)
class UQosRegionManager : public UObject
{
public:
	int                                                NumTestsPerRegion;                                        // 0x0030(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PingTimeout;                                              // 0x0034(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FQosRegionInfo>                      RegionDefinitions;                                        // 0x0038(0x0010) (ZeroConstructor, Config)
	TArray<struct FQosDatacenterInfo>                  DatacenterDefinitions;                                    // 0x0048(0x0010) (ZeroConstructor, Config)
	struct FDateTime                                   LastCheckTimestamp;                                       // 0x0058(0x0008) (ZeroConstructor)
	class UQosEvaluator*                               Evaluator;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	EQosCompletionResult                               QosEvalResult;                                            // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<struct FRegionQosInstance>                  RegionOptions;                                            // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     ForceRegionId;                                            // 0x0080(0x0010) (ZeroConstructor)
	bool                                               bRegionForcedViaCommandline;                              // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FString                                     SelectedRegionId;                                         // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Qos.QosRegionManager"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
