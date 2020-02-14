#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SocialParty.EPartyBusyReason
enum class EPartyBusyReason : uint8_t
{
	None                           = 0,
	CreatingParty                  = 1,
	LeavingParty                   = 2,
	SyncingParty                   = 3,
	DestroyingParty                = 4,
	InvitingPlayer                 = 5,
	AcceptingPartyInvite           = 6,
	RejectingPartyInvite           = 7,
	CancelingPartyInvite           = 8,
	RequestingJoinParty            = 9,
	AcceptingRequestJoinParty      = 10,
	RejectingRequestJoinParty      = 11,
	CancelingRequestJoinParty      = 12,
	AcceptingPartformInvite        = 13,
	EPartyBusyReason_MAX           = 14
};


// Enum SocialParty.EPartyError
enum class EPartyError : uint8_t
{
	None                           = 0,
	CreatePartyFail                = 1,
	CreatePartyFail_PlayerAlreadyInParty = 2,
	ConnectionToPartyManagementLost = 3,
	AcceptInvitationFail           = 4,
	AcceptInvitationFail_InvitationExpired = 5,
	AcceptInvitationFail_PartyIsFull = 6,
	AcceptInvitationFail_PartyDoesNotExists = 7,
	AcceptInvitationFail_VersionMismatch = 8,
	AcceptInvitationFail_StreamingInstallationIncomplete = 9,
	RejectInvitationFail           = 10,
	RejectInvitationFail_PartyDoesNotExists = 11,
	InvitationFail                 = 12,
	InvitationFail_PartyDoesNotExists = 13,
	InvitationFail_PlayerAlreadyInParty = 14,
	JoinRequestFail                = 15,
	JoinRequestFail_PartyDoesNotExists = 16,
	JoinRequestFail_PlayerAlreadyInPartyOrPartyFull = 17,
	JoinRequestAcceptedFail        = 18,
	JoinRequestAcceptedFail_PartyDoesNotExists = 19,
	AcceptJoinRequestFail          = 20,
	AcceptJoinRequestFail_RequestNotFound = 21,
	AcceptJoinRequestFail_PartyDoesNotExists = 22,
	RejectJoinRequestFail          = 23,
	RejectJoinRequestFail_RequestNotFound = 24,
	RejectJoinRequestFail_PartyDoesNotExists = 25,
	CancelJoinRequestFail          = 26,
	CancelJoinRequestFail_RequestNotFound = 27,
	RealTimeMessagingDisconnected  = 28,
	FriendBlocked_UnableToJoinParty = 29,
	FriendBlocked_UnableToRemainInParty = 30,
	CancelInvitationFail           = 31,
	CancelInvitationFail_PartyDoesNotExists = 32,
	SendPartyChatMessageFail       = 33,
	SendPartyChatMessageFail_PartyDoesNotExists = 34,
	SendPartyChatMessageFail_MessageNotAllowed = 35,
	InvitationValidationError      = 36,
	InvitationValidationError_PartyIsFull = 37,
	InvitationValidationError_PartyDoesNotExists = 38,
	InvitationValidationError_VersionMismatch = 39,
	InvitationValidationError_StreamingInstallationIncomplete = 40,
	InvitationValidationError_FriendBlocked = 41,
	UnknownError                   = 42,
	EPartyError_MAX                = 43
};


// Enum SocialParty.EPartyPostMatchmakingState
enum class EPartyPostMatchmakingState : uint8_t
{
	None                           = 0,
	InProgress                     = 1,
	Completed                      = 2,
	Error                          = 3,
	EPartyPostMatchmakingState_MAX = 4
};


// Enum SocialParty.EPartyPostMatchmakingRole
enum class EPartyPostMatchmakingRole : uint8_t
{
	None                           = 0,
	Client                         = 1,
	Host                           = 2,
	EPartyPostMatchmakingRole_MAX  = 3
};


// Enum SocialParty.EMatchmakingState
enum class EMatchmakingState : uint8_t
{
	None                           = 0,
	Searching                      = 1,
	MatchFound                     = 2,
	Error                          = 3,
	EMatchmakingState_MAX          = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SocialParty.SocialPartyMember
// 0x0080
struct FSocialPartyMember
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FName>                               _customizationMesh;                                       // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     _playerName;                                              // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     _platformSessionId;                                       // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     _uniquePlayerId;                                          // 0x0038(0x0010) (ZeroConstructor)
	int                                                _playerRank;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                _characterLevel;                                          // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                _prestigeLevel;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                _gameRole;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                _characterId;                                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       _powerId;                                                 // 0x005C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                _location;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               _ready;                                                   // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _crossplayAllowed;                                        // 0x006D(0x0001) (ZeroConstructor, IsPlainOldData)
	EPartyPostMatchmakingRole                          _postMatchmakingRole;                                     // 0x006E(0x0001) (ZeroConstructor, IsPlainOldData)
	EPartyPostMatchmakingState                         _postMatchmakingState;                                    // 0x006F(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _isStateInitialized;                                      // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	int64_t                                            _disconnectionPenaltyEndOfBan;                            // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SocialParty.CustomGamePresetData
// 0x0020
struct FCustomGamePresetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<unsigned char>                              _mapAvailabilities;                                       // 0x0008(0x0010) (ZeroConstructor)
	bool                                               _arePerkAvailable;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _areOfferingAvailable;                                    // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _areItemAvailable;                                        // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _areItemAddonAvailable;                                   // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _areDlcContentAllowed;                                    // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _isPrivateMatch;                                          // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct SocialParty.PartySessionSettings
// 0x0098
struct FPartySessionSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     _sessionId;                                               // 0x0008(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FString>               _gameSessionInfos;                                        // 0x0018(0x0050) (ZeroConstructor)
	struct FString                                     _owningUserId;                                            // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     _owningUserName;                                          // 0x0078(0x0010) (ZeroConstructor)
	bool                                               _isDedicated;                                             // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	int64_t                                            _matchmakingTimestamp;                                    // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SocialParty.PartyMatchmakingSettings
// 0x0020
struct FPartyMatchmakingSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FString>                             _playerIds;                                               // 0x0008(0x0010) (ZeroConstructor)
	EMatchmakingState                                  _matchmakingState;                                        // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct SocialParty.SocialPartyState
// 0x0138
struct FSocialPartyState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FCustomGamePresetData                       _customGamePresetData;                                    // 0x0008(0x0020)
	struct FPartySessionSettings                       _partySessionSettings;                                    // 0x0028(0x0098)
	struct FPartyMatchmakingSettings                   _partyMatchmakingSettings;                                // 0x00C0(0x0020)
	TMap<struct FName, unsigned char>                  _playerChatIndices;                                       // 0x00E0(0x0050) (ZeroConstructor)
	int                                                _gameType;                                                // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                _version;                                                 // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
