#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Lobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Lobby.LobbyBeaconClient
// 0x0088 (0x0450 - 0x03C8)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                           LobbyState;                                               // 0x03C8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ALobbyBeaconPlayerState*                     PlayerState;                                              // 0x03D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03D8(0x0001) MISSED OFFSET
	ELobbyBeaconJoinState                              LobbyJoinServerState;                                     // 0x03D9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x76];                                      // 0x03DA(0x0076) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Lobby.LobbyBeaconClient"));

		return ptr;
	}


	void ServerSetPartyOwner(struct FUniqueNetIdRepl* InUniqueId, struct FUniqueNetIdRepl* InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(struct FString* InSessionId, struct FUniqueNetIdRepl* InUniqueId, struct FString* UrlString);
	void ServerKickPlayer(struct FUniqueNetIdRepl* PlayerToKick, struct FText* Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(struct FString* Msg);
	void ClientWasKicked(struct FText* KickReason);
	void ClientSetInviteFlags(struct FJoinabilitySettings* Settings);
	void ClientPlayerLeft(struct FUniqueNetIdRepl* InUniqueId);
	void ClientPlayerJoined(struct FText* NewPlayerName, struct FUniqueNetIdRepl* InUniqueId);
	void ClientLoginComplete(struct FUniqueNetIdRepl* InUniqueId, bool* bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};


// Class Lobby.LobbyBeaconHost
// 0x0048 (0x03B0 - 0x0368)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x30];                                      // 0x0368(0x0030) UNKNOWN PROPERTY: SoftClassProperty Lobby.LobbyBeaconHost.LobbyStateClass
	class ALobbyBeaconState*                           LobbyState;                                               // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Lobby.LobbyBeaconHost"));

		return ptr;
	}

};


// Class Lobby.LobbyBeaconPlayerState
// 0x00A8 (0x03E8 - 0x0340)
class ALobbyBeaconPlayerState : public AInfo
{
public:
	struct FText                                       DisplayName;                                              // 0x0340(0x0018) (Net)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0358(0x0028) (Net)
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                       // 0x0380(0x0028) (Net)
	bool                                               bInLobby;                                                 // 0x03A8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class AOnlineBeaconClient*                         ClientActor;                                              // 0x03B0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x03B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Lobby.LobbyBeaconPlayerState"));

		return ptr;
	}


	void OnRep_PartyOwner();
	void OnRep_InLobby();
};


// Class Lobby.LobbyBeaconState
// 0x0150 (0x0490 - 0x0340)
class ALobbyBeaconState : public AInfo
{
public:
	int                                                MaxPlayers;                                               // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class UClass*                                      LobbyBeaconPlayerStateClass;                              // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0350(0x0008) MISSED OFFSET
	bool                                               bLobbyStarted;                                            // 0x0358(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              WaitForPlayersTimeRemaining;                              // 0x035C(0x0004) (Net, ZeroConstructor, Config, IsPlainOldData)
	struct FLobbyPlayerStateInfoArray                  Players;                                                  // 0x0360(0x00C8) (Net)
	unsigned char                                      UnknownData03[0x68];                                      // 0x0428(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Lobby.LobbyBeaconState"));

		return ptr;
	}


	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
