// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_Lobby_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl*       InUniqueId                     (ConstParm, Parm, ReferenceParm)
// struct FUniqueNetIdRepl*       InPartyOwnerId                 (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF67FD18730              		 offset:c08730                        

void ALobbyBeaconClient::ServerSetPartyOwner(struct FUniqueNetIdRepl* InUniqueId, struct FUniqueNetIdRepl* InPartyOwnerId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerSetPartyOwner"));

	ALobbyBeaconClient_ServerSetPartyOwner_Params params;
	params.InUniqueId = InUniqueId;
	params.InPartyOwnerId = InPartyOwnerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// FunctionAddress:0x00007FF67FD186E0              		 offset:c086e0                        

void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer"));

	ALobbyBeaconClient_ServerNotifyJoiningServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString*                InSessionId                    (Parm, ZeroConstructor)
// struct FUniqueNetIdRepl*       InUniqueId                     (ConstParm, Parm, ReferenceParm)
// struct FString*                UrlString                      (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FD18520              		 offset:c08520                        

void ALobbyBeaconClient::ServerLoginPlayer(struct FString* InSessionId, struct FUniqueNetIdRepl* InUniqueId, struct FString* UrlString)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerLoginPlayer"));

	ALobbyBeaconClient_ServerLoginPlayer_Params params;
	params.InSessionId = InSessionId;
	params.InUniqueId = InUniqueId;
	params.UrlString = UrlString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ServerKickPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl*       PlayerToKick                   (ConstParm, Parm, ReferenceParm)
// struct FText*                  Reason                         (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF67FD18380              		 offset:c08380                        

void ALobbyBeaconClient::ServerKickPlayer(struct FUniqueNetIdRepl* PlayerToKick, struct FText* Reason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerKickPlayer"));

	ALobbyBeaconClient_ServerKickPlayer_Params params;
	params.PlayerToKick = PlayerToKick;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// FunctionAddress:0x00007FF67FD18330              		 offset:c08330                        

void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby"));

	ALobbyBeaconClient_ServerDisconnectFromLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ServerCheat
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString*                Msg                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF67FD18270              		 offset:c08270                        

void ALobbyBeaconClient::ServerCheat(struct FString* Msg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ServerCheat"));

	ALobbyBeaconClient_ServerCheat_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientWasKicked
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FText*                  KickReason                     (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF67FD18130              		 offset:c08130                        

void ALobbyBeaconClient::ClientWasKicked(struct FText* KickReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientWasKicked"));

	ALobbyBeaconClient_ClientWasKicked_Params params;
	params.KickReason = KickReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FJoinabilitySettings*   Settings                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF67FD180A0              		 offset:c080a0                        

void ALobbyBeaconClient::ClientSetInviteFlags(struct FJoinabilitySettings* Settings)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientSetInviteFlags"));

	ALobbyBeaconClient_ClientSetInviteFlags_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl*       InUniqueId                     (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF67FD17FB0              		 offset:c07fb0                        

void ALobbyBeaconClient::ClientPlayerLeft(struct FUniqueNetIdRepl* InUniqueId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientPlayerLeft"));

	ALobbyBeaconClient_ClientPlayerLeft_Params params;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FText*                  NewPlayerName                  (ConstParm, Parm, ReferenceParm)
// struct FUniqueNetIdRepl*       InUniqueId                     (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF67FD17E30              		 offset:c07e30                        

void ALobbyBeaconClient::ClientPlayerJoined(struct FText* NewPlayerName, struct FUniqueNetIdRepl* InUniqueId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientPlayerJoined"));

	ALobbyBeaconClient_ClientPlayerJoined_Params params;
	params.NewPlayerName = NewPlayerName;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientLoginComplete
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl*       InUniqueId                     (ConstParm, Parm, ReferenceParm)
// bool*                          bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF67FD17CF0              		 offset:c07cf0                        

void ALobbyBeaconClient::ClientLoginComplete(struct FUniqueNetIdRepl* InUniqueId, bool* bWasSuccessful)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientLoginComplete"));

	ALobbyBeaconClient_ClientLoginComplete_Params params;
	params.InUniqueId = InUniqueId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientJoinGame
// (Net, NetReliable, Native, Event, Public, NetClient)
// FunctionAddress:0x00007FF67FD17CD0              		 offset:c07cd0                        

void ALobbyBeaconClient::ClientJoinGame()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientJoinGame"));

	ALobbyBeaconClient_ClientJoinGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetClient)
// FunctionAddress:0x00007FF67FD17CB0              		 offset:c07cb0                        

void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconClient.ClientAckJoiningServer"));

	ALobbyBeaconClient_ClientAckJoiningServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
// (Final, Native, Protected)
// FunctionAddress:0x00007FF67FD18230              		 offset:c08230                        

void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner"));

	ALobbyBeaconPlayerState_OnRep_PartyOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
// (Final, Native, Protected)
// FunctionAddress:0x00007FF67FD181F0              		 offset:c081f0                        

void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby"));

	ALobbyBeaconPlayerState_OnRep_InLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
// (Final, Native, Protected)
// FunctionAddress:0x00007FF67FD18250              		 offset:c08250                        

void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining"));

	ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
// (Final, Native, Protected)
// FunctionAddress:0x00007FF67FD18210              		 offset:c08210                        

void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Lobby.LobbyBeaconState.OnRep_LobbyStarted"));

	ALobbyBeaconState_OnRep_LobbyStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
