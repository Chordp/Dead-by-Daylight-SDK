#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Hotfix_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Hotfix.OnlineHotfixManager
// 0x01F8 (0x0228 - 0x0030)
class UOnlineHotfixManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0030(0x01B8) MISSED OFFSET
	struct FString                                     OssName;                                                  // 0x01E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     HotfixManagerClassName;                                   // 0x01F8(0x0010) (ZeroConstructor, Config)
	struct FString                                     DebugPrefix;                                              // 0x0208(0x0010) (ZeroConstructor, Config)
	TArray<class UObject*>                             AssetsHotfixedFromIniFiles;                               // 0x0218(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Hotfix.OnlineHotfixManager"));

		return ptr;
	}


	void StartHotfixProcess();
};


// Class Hotfix.UpdateManager
// 0x00F0 (0x0120 - 0x0030)
class UUpdateManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
	float                                              HotfixCheckCompleteDelay;                                 // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateCheckCompleteDelay;                                 // 0x0094(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HotfixAvailabilityCheckCompleteDelay;                     // 0x0098(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateCheckAvailabilityCompleteDelay;                     // 0x009C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCheckPlatformOSSForUpdate;                               // 0x00A0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCheckOSSForUpdate;                                       // 0x00A1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	int                                                AppSuspendedUpdateCheckTimeSeconds;                       // 0x00A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	bool                                               bPlatformEnvironmentDetected;                             // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialUpdateFinished;                                   // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCheckHotfixAvailabilityOnly;                             // 0x00B2(0x0001) (ZeroConstructor, IsPlainOldData)
	EUpdateState                                       CurrentUpdateState;                                       // 0x00B3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                WorstNumFilesPendingLoadViewed;                           // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	EPatchCheckResult                                  LastPatchCheckResult;                                     // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	EHotfixResult                                      LastHotfixResult;                                         // 0x00B9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2E];                                      // 0x00BA(0x002E) MISSED OFFSET
	struct FDateTime                                   LastUpdateCheck[0x2];                                     // 0x00E8(0x0008) (ZeroConstructor)
	EUpdateCompletionStatus                            LastCompletionResult[0x2];                                // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x16];                                      // 0x00FA(0x0016) MISSED OFFSET
	class UEnum*                                       UpdateStateEnum;                                          // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEnum*                                       UpdateCompletionEnum;                                     // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Hotfix.UpdateManager"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
