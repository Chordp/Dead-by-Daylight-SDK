#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineMessagesUtilities.EClaimableInboxMessageState
enum class EClaimableInboxMessageState : uint8_t
{
	NONE                           = 0,
	CLAIMED                        = 1,
	EClaimableInboxMessageState_MAX = 2
};


// Enum OnlineMessagesUtilities.EClaimableInboxMessageType
enum class EClaimableInboxMessageType : uint8_t
{
	None                           = 0,
	Currency                       = 1,
	Inventory                      = 2,
	EClaimableInboxMessageType_MAX = 3
};


// Enum OnlineMessagesUtilities.EOnlineMessageFlag
enum class EOnlineMessageFlag : uint8_t
{
	New                            = 0,
	Read                           = 1,
	Archived                       = 2,
	EOnlineMessageFlag_MAX         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineMessagesUtilities.ClaimableInboxMessageData
// 0x0018
struct FClaimableInboxMessageData
{
	EClaimableInboxMessageType                         Type;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                amount;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     ID;                                                       // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineMessagesUtilities.InboxMessageData
// 0x0070
struct FInboxMessageData
{
	int64_t                                            ID;                                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Origin;                                                   // 0x0008(0x0010) (ZeroConstructor, Transient)
	struct FString                                     RecipientId;                                              // 0x0018(0x0010) (ZeroConstructor, Transient)
	int64_t                                            ReceivedTimestamp;                                        // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Subject;                                                  // 0x0030(0x0010) (ZeroConstructor, Transient)
	struct FString                                     Body;                                                     // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<struct FClaimableInboxMessageData>          Claimable;                                                // 0x0050(0x0010) (ZeroConstructor, Transient)
	bool                                               AreRewardsClaimed;                                        // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsRead;                                                   // 0x0061(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	int64_t                                            ExpireTimestamp;                                          // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OnlineMessagesUtilities.ClaimableInboxMessage
// 0x0018
struct FClaimableInboxMessage
{
	TArray<struct FClaimableInboxMessageData>          Data;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EClaimableInboxMessageState                        State;                                                    // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
