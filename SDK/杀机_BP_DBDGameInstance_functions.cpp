// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_DBDGameInstance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeadByDaylight.DBDGameInstance.StartOfferingSequence
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806BA880              		 offset:15aa880                       

void UBP_DBDGameInstance_C::StartOfferingSequence()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.StartOfferingSequence"));

	UBP_DBDGameInstance_C_StartOfferingSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.SimulatePerk
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>*          Perks                          (Parm, ZeroConstructor)
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BA760              		 offset:15aa760                       

void UBP_DBDGameInstance_C::SimulatePerk(TArray<struct FName>* Perks, int* Level)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.SimulatePerk"));

	UBP_DBDGameInstance_C_SimulatePerk_Params params;
	params.Perks = Perks;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.SimulateOfferingSequence
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>*          offerings                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          playSequence                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806BA660              		 offset:15aa660                       

void UBP_DBDGameInstance_C::SimulateOfferingSequence(TArray<struct FName>* offerings, bool* playSequence)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.SimulateOfferingSequence"));

	UBP_DBDGameInstance_C_SimulateOfferingSequence_Params params;
	params.offerings = offerings;
	params.playSequence = playSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.RemoveActorKnowledgeCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorKnowledgeCollection** Collection                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6806BA5E0              		 offset:15aa5e0                       

void UBP_DBDGameInstance_C::RemoveActorKnowledgeCollection(class UActorKnowledgeCollection** Collection)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.RemoveActorKnowledgeCollection"));

	UBP_DBDGameInstance_C_RemoveActorKnowledgeCollection_Params params;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.OnTimeTravelComplete
// (Final, Native, Public, Const)
// Parameters:
// bool*                          success                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                date                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6806BA2E0              		 offset:15aa2e0                       

void UBP_DBDGameInstance_C::OnTimeTravelComplete(bool* success, struct FString* date)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.OnTimeTravelComplete"));

	UBP_DBDGameInstance_C_OnTimeTravelComplete_Params params;
	params.success = success;
	params.date = date;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.IsActorKnown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer**             knowledgePossessor             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 possiblyKnownActor             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9A60              		 offset:15a9a60                       

bool UBP_DBDGameInstance_C::IsActorKnown(class ADBDPlayer** knowledgePossessor, class AActor** possiblyKnownActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.IsActorKnown"));

	UBP_DBDGameInstance_C_IsActorKnown_Params params;
	params.knowledgePossessor = knowledgePossessor;
	params.possiblyKnownActor = possiblyKnownActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.HasOfferingOfType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EOfferingEffectType*           Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9940              		 offset:15a9940                       

bool UBP_DBDGameInstance_C::HasOfferingOfType(EOfferingEffectType* Type, int* playerID, struct FName* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.HasOfferingOfType"));

	UBP_DBDGameInstance_C_HasOfferingOfType_Params params;
	params.Type = Type;
	params.playerID = playerID;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GotoSplashScreen
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          showDefaultDialogueOnSplashScreen (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B98B0              		 offset:15a98b0                       

void UBP_DBDGameInstance_C::GotoSplashScreen(bool* showDefaultDialogueOnSplashScreen)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GotoSplashScreen"));

	UBP_DBDGameInstance_C_GotoSplashScreen_Params params;
	params.showDefaultDialogueOnSplashScreen = showDefaultDialogueOnSplashScreen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.GetSpecialEventManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpecialEventManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9880              		 offset:15a9880                       

class USpecialEventManager* UBP_DBDGameInstance_C::GetSpecialEventManager()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetSpecialEventManager"));

	UBP_DBDGameInstance_C_GetSpecialEventManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetSoftBanManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USoftBanManager*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9850              		 offset:15a9850                       

class USoftBanManager* UBP_DBDGameInstance_C::GetSoftBanManager()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetSoftBanManager"));

	UBP_DBDGameInstance_C_GetSoftBanManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetRankManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URankManager*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B97A0              		 offset:15a97a0                       

class URankManager* UBP_DBDGameInstance_C::GetRankManager()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetRankManager"));

	UBP_DBDGameInstance_C_GetRankManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetPlayerLevelManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDBDPlayerLevelManager*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9770              		 offset:15a9770                       

class UDBDPlayerLevelManager* UBP_DBDGameInstance_C::GetPlayerLevelManager()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetPlayerLevelManager"));

	UBP_DBDGameInstance_C_GetPlayerLevelManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetMaxSurvivorCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9740              		 offset:15a9740                       

int UBP_DBDGameInstance_C::GetMaxSurvivorCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetMaxSurvivorCount"));

	UBP_DBDGameInstance_C_GetMaxSurvivorCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetMapActorDB
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMapActorDB*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9710              		 offset:15a9710                       

class UMapActorDB* UBP_DBDGameInstance_C::GetMapActorDB()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetMapActorDB"));

	UBP_DBDGameInstance_C_GetMapActorDB_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetLocalPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B96B0              		 offset:15a96b0                       

class APlayerController* UBP_DBDGameInstance_C::GetLocalPlayerController()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetLocalPlayerController"));

	UBP_DBDGameInstance_C_GetLocalPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetLocalPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9680              		 offset:15a9680                       

class ULocalPlayer* UBP_DBDGameInstance_C::GetLocalPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetLocalPlayer"));

	UBP_DBDGameInstance_C_GetLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetLocallyControlledCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B96E0              		 offset:15a96e0                       

class ADBDPlayer* UBP_DBDGameInstance_C::GetLocallyControlledCharacter()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetLocallyControlledCharacter"));

	UBP_DBDGameInstance_C_GetLocallyControlledCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetLocalEventManager
// (Final, Native, Public, Const)
// Parameters:
// class ULocalEventManager*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9650              		 offset:15a9650                       

class ULocalEventManager* UBP_DBDGameInstance_C::GetLocalEventManager()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetLocalEventManager"));

	UBP_DBDGameInstance_C_GetLocalEventManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetLightInterpolator
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULightingInterpolator*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B95F0              		 offset:15a95f0                       

class ULightingInterpolator* UBP_DBDGameInstance_C::GetLightInterpolator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetLightInterpolator"));

	UBP_DBDGameInstance_C_GetLightInterpolator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetLightingHelper
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULightingHelper*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9620              		 offset:15a9620                       

class ULightingHelper* UBP_DBDGameInstance_C::GetLightingHelper()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetLightingHelper"));

	UBP_DBDGameInstance_C_GetLightingHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetLevelLighting
// (Final, Native, Public)
// Parameters:
// class ABaseSky*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B95C0              		 offset:15a95c0                       

class ABaseSky* UBP_DBDGameInstance_C::GetLevelLighting()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetLevelLighting"));

	UBP_DBDGameInstance_C_GetLevelLighting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetInventoryHandler
// (Final, Native, Public, Const)
// Parameters:
// class UInventoryHandler*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9590              		 offset:15a9590                       

class UInventoryHandler* UBP_DBDGameInstance_C::GetInventoryHandler()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetInventoryHandler"));

	UBP_DBDGameInstance_C_GetInventoryHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetInGameSurvivors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ACamperPlayer*>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6806B9510              		 offset:15a9510                       

TArray<class ACamperPlayer*> UBP_DBDGameInstance_C::GetInGameSurvivors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetInGameSurvivors"));

	UBP_DBDGameInstance_C_GetInGameSurvivors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetInGamePlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ADBDPlayer*>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6806B9490              		 offset:15a9490                       

TArray<class ADBDPlayer*> UBP_DBDGameInstance_C::GetInGamePlayers()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetInGamePlayers"));

	UBP_DBDGameInstance_C_GetInGamePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetInGameKillers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ASlasherPlayer*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6806B9410              		 offset:15a9410                       

TArray<class ASlasherPlayer*> UBP_DBDGameInstance_C::GetInGameKillers()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetInGameKillers"));

	UBP_DBDGameInstance_C_GetInGameKillers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetInGameKiller
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASlasherPlayer*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B93E0              		 offset:15a93e0                       

class ASlasherPlayer* UBP_DBDGameInstance_C::GetInGameKiller()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetInGameKiller"));

	UBP_DBDGameInstance_C_GetInGameKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetInGameAliveSurvivors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ACamperPlayer*>   outPlayingSurvivors            (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6806B9330              		 offset:15a9330                       

void UBP_DBDGameInstance_C::GetInGameAliveSurvivors(TArray<class ACamperPlayer*>* outPlayingSurvivors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetInGameAliveSurvivors"));

	UBP_DBDGameInstance_C_GetInGameAliveSurvivors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outPlayingSurvivors != nullptr)
		*outPlayingSurvivors = params.outPlayingSurvivors;
}


// Function DeadByDaylight.DBDGameInstance.GetGameOn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameOn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9300              		 offset:15a9300                       

class UGameOn* UBP_DBDGameInstance_C::GetGameOn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetGameOn"));

	UBP_DBDGameInstance_C_GetGameOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetGameEventDispatcher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameEventDispatcher*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B92D0              		 offset:15a92d0                       

class UGameEventDispatcher* UBP_DBDGameInstance_C::GetGameEventDispatcher()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetGameEventDispatcher"));

	UBP_DBDGameInstance_C_GetGameEventDispatcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetDecalSpawnerCollection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDecalSpawnerCollection* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B92A0              		 offset:15a92a0                       

class UDecalSpawnerCollection* UBP_DBDGameInstance_C::GetDecalSpawnerCollection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetDecalSpawnerCollection"));

	UBP_DBDGameInstance_C_GetDecalSpawnerCollection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetDeadOrDisconnectedCampersCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ADBDPlayerState**        exception                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9210              		 offset:15a9210                       

int UBP_DBDGameInstance_C::GetDeadOrDisconnectedCampersCount(class ADBDPlayerState** exception)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetDeadOrDisconnectedCampersCount"));

	UBP_DBDGameInstance_C_GetDeadOrDisconnectedCampersCount_Params params;
	params.exception = exception;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetConsentManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UConsentManager*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B91E0              		 offset:15a91e0                       

class UConsentManager* UBP_DBDGameInstance_C::GetConsentManager()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetConsentManager"));

	UBP_DBDGameInstance_C_GetConsentManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetCinematicManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCinematicManager*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B91B0              		 offset:15a91b0                       

class UCinematicManager* UBP_DBDGameInstance_C::GetCinematicManager()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetCinematicManager"));

	UBP_DBDGameInstance_C_GetCinematicManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetCharacterDefaultItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           inCharacterIndex               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B9110              		 offset:15a9110                       

struct FName UBP_DBDGameInstance_C::GetCharacterDefaultItem(int* inCharacterIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetCharacterDefaultItem"));

	UBP_DBDGameInstance_C_GetCharacterDefaultItem_Params params;
	params.inCharacterIndex = inCharacterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetCharacterClippingPrimitiveCollection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveCollection*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B90E0              		 offset:15a90e0                       

class UPrimitiveCollection* UBP_DBDGameInstance_C::GetCharacterClippingPrimitiveCollection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetCharacterClippingPrimitiveCollection"));

	UBP_DBDGameInstance_C_GetCharacterClippingPrimitiveCollection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GetBonusPointEventsManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBonusPointEventsManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6806B90B0              		 offset:15a90b0                       

class UBonusPointEventsManager* UBP_DBDGameInstance_C::GetBonusPointEventsManager()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GetBonusPointEventsManager"));

	UBP_DBDGameInstance_C_GetBonusPointEventsManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadByDaylight.DBDGameInstance.GenerateBloodWebForCurrentCharacter
// (Final, Native, Public)
// FunctionAddress:0x00007FF6806B9090              		 offset:15a9090                       

void UBP_DBDGameInstance_C::GenerateBloodWebForCurrentCharacter()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.GenerateBloodWebForCurrentCharacter"));

	UBP_DBDGameInstance_C_GenerateBloodWebForCurrentCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.ForceCloseGame
// (Final, Native, Static, Public)
// FunctionAddress:0x00007FF6806B9070              		 offset:15a9070                       

void UBP_DBDGameInstance_C::STATIC_ForceCloseGame()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.ForceCloseGame"));

	UBP_DBDGameInstance_C_ForceCloseGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.FireSoundEvent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor**                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          shouldTrack                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         audibleRange                   (Parm, ZeroConstructor, IsPlainOldData)
// class ADBDPlayer**             instigatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isQuickAction                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B8E60              		 offset:15a8e60                       

void UBP_DBDGameInstance_C::FireSoundEvent(class AActor** Instigator, struct FVector* Location, bool* shouldTrack, float* audibleRange, class ADBDPlayer** instigatingPlayer, bool* isQuickAction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.FireSoundEvent"));

	UBP_DBDGameInstance_C_FireSoundEvent_Params params;
	params.Instigator = Instigator;
	params.Location = Location;
	params.shouldTrack = shouldTrack;
	params.audibleRange = audibleRange;
	params.instigatingPlayer = instigatingPlayer;
	params.isQuickAction = isQuickAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.EndLoadingScreen
// (Final, Native, Public)
// Parameters:
// class UWorld**                 loadedWorld                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF680684010              		 offset:1574010                       

void UBP_DBDGameInstance_C::EndLoadingScreen(class UWorld** loadedWorld)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.EndLoadingScreen"));

	UBP_DBDGameInstance_C_EndLoadingScreen_Params params;
	params.loadedWorld = loadedWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBDToggleLightingLoaded
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B7A80              		 offset:15a7a80                       

void UBP_DBDGameInstance_C::DBDToggleLightingLoaded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBDToggleLightingLoaded"));

	UBP_DBDGameInstance_C_DBDToggleLightingLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBDResetSaveData
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680095E40              		 offset:f85e40                        

void UBP_DBDGameInstance_C::DBDResetSaveData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBDResetSaveData"));

	UBP_DBDGameInstance_C_DBDResetSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBDLogFindSessions
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int*                           searchType                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Rank                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ignoreVersion                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B7980              		 offset:15a7980                       

void UBP_DBDGameInstance_C::DBDLogFindSessions(int* searchType, int* Rank, bool* ignoreVersion)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBDLogFindSessions"));

	UBP_DBDGameInstance_C_DBDLogFindSessions_Params params;
	params.searchType = searchType;
	params.Rank = Rank;
	params.ignoreVersion = ignoreVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBDForceSave
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B7960              		 offset:15a7960                       

void UBP_DBDGameInstance_C::DBDForceSave()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBDForceSave"));

	UBP_DBDGameInstance_C_DBDForceSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBDForceLoad
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B7940              		 offset:15a7940                       

void UBP_DBDGameInstance_C::DBDForceLoad()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBDForceLoad"));

	UBP_DBDGameInstance_C_DBDForceLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBDDeleteLocalSaveFile
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B7920              		 offset:15a7920                       

void UBP_DBDGameInstance_C::DBDDeleteLocalSaveFile()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBDDeleteLocalSaveFile"));

	UBP_DBDGameInstance_C_DBDDeleteLocalSaveFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBDApplyOfferingModification
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float*                         fogModifier                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B78A0              		 offset:15a78a0                       

void UBP_DBDGameInstance_C::DBDApplyOfferingModification(float* fogModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBDApplyOfferingModification"));

	UBP_DBDGameInstance_C_DBDApplyOfferingModification_Params params;
	params.fogModifier = fogModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_UpdateSteamInventory
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B8A70              		 offset:15a8a70                       

void UBP_DBDGameInstance_C::DBD_UpdateSteamInventory()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_UpdateSteamInventory"));

	UBP_DBDGameInstance_C_DBD_UpdateSteamInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_ToggleOnlineRole
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B8A50              		 offset:15a8a50                       

void UBP_DBDGameInstance_C::DBD_ToggleOnlineRole()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_ToggleOnlineRole"));

	UBP_DBDGameInstance_C_DBD_ToggleOnlineRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_TestTickedDiceRoll
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float*                         BaseProbability                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ticks                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MultiplicativeModifier         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AdditiveModifier               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B8900              		 offset:15a8900                       

void UBP_DBDGameInstance_C::DBD_TestTickedDiceRoll(float* BaseProbability, float* ticks, float* MultiplicativeModifier, float* AdditiveModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_TestTickedDiceRoll"));

	UBP_DBDGameInstance_C_DBD_TestTickedDiceRoll_Params params;
	params.BaseProbability = BaseProbability;
	params.ticks = ticks;
	params.MultiplicativeModifier = MultiplicativeModifier;
	params.AdditiveModifier = AdditiveModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_TestSaveFile
// (Final, Exec, Native, Public)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6806B8820              		 offset:15a8820                       

void UBP_DBDGameInstance_C::DBD_TestSaveFile(struct FString* Name)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_TestSaveFile"));

	UBP_DBDGameInstance_C_DBD_TestSaveFile_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_TestRegion
// (Final, Exec, Native, Public)
// FunctionAddress:0x00007FF6806B8800              		 offset:15a8800                       

void UBP_DBDGameInstance_C::DBD_TestRegion()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_TestRegion"));

	UBP_DBDGameInstance_C_DBD_TestRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_TestDiceRoll
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float*                         BaseProbability                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MultiplicativeModifier         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AdditiveModifier               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B86F0              		 offset:15a86f0                       

void UBP_DBDGameInstance_C::DBD_TestDiceRoll(float* BaseProbability, float* MultiplicativeModifier, float* AdditiveModifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_TestDiceRoll"));

	UBP_DBDGameInstance_C_DBD_TestDiceRoll_Params params;
	params.BaseProbability = BaseProbability;
	params.MultiplicativeModifier = MultiplicativeModifier;
	params.AdditiveModifier = AdditiveModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_SetStatsUploadEnabled
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B8660              		 offset:15a8660                       

void UBP_DBDGameInstance_C::DBD_SetStatsUploadEnabled(bool* Enabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_SetStatsUploadEnabled"));

	UBP_DBDGameInstance_C_DBD_SetStatsUploadEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_SetFearMarketDate
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                dateString                     (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6806B8580              		 offset:15a8580                       

void UBP_DBDGameInstance_C::DBD_SetFearMarketDate(struct FString* dateString)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_SetFearMarketDate"));

	UBP_DBDGameInstance_C_DBD_SetFearMarketDate_Params params;
	params.dateString = dateString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_SetCursorStickySpeed
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B8500              		 offset:15a8500                       

void UBP_DBDGameInstance_C::DBD_SetCursorStickySpeed(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_SetCursorStickySpeed"));

	UBP_DBDGameInstance_C_DBD_SetCursorStickySpeed_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_SetCursorStickIgnore
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B8480              		 offset:15a8480                       

void UBP_DBDGameInstance_C::DBD_SetCursorStickIgnore(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_SetCursorStickIgnore"));

	UBP_DBDGameInstance_C_DBD_SetCursorStickIgnore_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_SetCursorDefaultSpeed
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B8400              		 offset:15a8400                       

void UBP_DBDGameInstance_C::DBD_SetCursorDefaultSpeed(float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_SetCursorDefaultSpeed"));

	UBP_DBDGameInstance_C_DBD_SetCursorDefaultSpeed_Params params;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_SendFriendInvite
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B83E0              		 offset:15a83e0                       

void UBP_DBDGameInstance_C::DBD_SendFriendInvite()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_SendFriendInvite"));

	UBP_DBDGameInstance_C_DBD_SendFriendInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_ResetSaveGameInventory
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B83C0              		 offset:15a83c0                       

void UBP_DBDGameInstance_C::DBD_ResetSaveGameInventory()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_ResetSaveGameInventory"));

	UBP_DBDGameInstance_C_DBD_ResetSaveGameInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_ResetCurrentAchievementStats
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          andUpload                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          andUpdateData                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B82F0              		 offset:15a82f0                       

void UBP_DBDGameInstance_C::DBD_ResetCurrentAchievementStats(bool* andUpload, bool* andUpdateData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_ResetCurrentAchievementStats"));

	UBP_DBDGameInstance_C_DBD_ResetCurrentAchievementStats_Params params;
	params.andUpload = andUpload;
	params.andUpdateData = andUpdateData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_ResetCurrentAchievementStat
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  StatName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          andUpload                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B8210              		 offset:15a8210                       

void UBP_DBDGameInstance_C::DBD_ResetCurrentAchievementStat(struct FName* StatName, bool* andUpload)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_ResetCurrentAchievementStat"));

	UBP_DBDGameInstance_C_DBD_ResetCurrentAchievementStat_Params params;
	params.StatName = StatName;
	params.andUpload = andUpload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_ResetAllRituals
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B81F0              		 offset:15a81f0                       

void UBP_DBDGameInstance_C::DBD_ResetAllRituals()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_ResetAllRituals"));

	UBP_DBDGameInstance_C_DBD_ResetAllRituals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_RemoveRitual
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  toRemove                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B8150              		 offset:15a8150                       

void UBP_DBDGameInstance_C::DBD_RemoveRitual(struct FName* toRemove)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_RemoveRitual"));

	UBP_DBDGameInstance_C_DBD_RemoveRitual_Params params;
	params.toRemove = toRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_PrintAudioConfig
// (Final, Exec, Native, Public, BlueprintCallable, Const)
// FunctionAddress:0x00007FF6806B8130              		 offset:15a8130                       

void UBP_DBDGameInstance_C::DBD_PrintAudioConfig()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_PrintAudioConfig"));

	UBP_DBDGameInstance_C_DBD_PrintAudioConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_PIXEndCapture
// (Final, Exec, Native, Public)
// FunctionAddress:0x00007FF680095E40              		 offset:f85e40                        

void UBP_DBDGameInstance_C::DBD_PIXEndCapture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_PIXEndCapture"));

	UBP_DBDGameInstance_C_DBD_PIXEndCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_PIXBeginCapture
// (Final, Exec, Native, Public)
// FunctionAddress:0x00007FF680095E40              		 offset:f85e40                        

void UBP_DBDGameInstance_C::DBD_PIXBeginCapture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_PIXBeginCapture"));

	UBP_DBDGameInstance_C_DBD_PIXBeginCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_LogBloodWebDefinition
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B8110              		 offset:15a8110                       

void UBP_DBDGameInstance_C::DBD_LogBloodWebDefinition()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_LogBloodWebDefinition"));

	UBP_DBDGameInstance_C_DBD_LogBloodWebDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_GetRegion
// (Final, Exec, Native, Public)
// FunctionAddress:0x00007FF6806B80D0              		 offset:15a80d0                       

void UBP_DBDGameInstance_C::DBD_GetRegion()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_GetRegion"));

	UBP_DBDGameInstance_C_DBD_GetRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_GenerateNewRitual
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B8030              		 offset:15a8030                       

void UBP_DBDGameInstance_C::DBD_GenerateNewRitual(struct FName* Name)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_GenerateNewRitual"));

	UBP_DBDGameInstance_C_DBD_GenerateNewRitual_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_GenerateNewRandomRitual
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B8010              		 offset:15a8010                       

void UBP_DBDGameInstance_C::DBD_GenerateNewRandomRitual()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_GenerateNewRandomRitual"));

	UBP_DBDGameInstance_C_DBD_GenerateNewRandomRitual_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_GenerateBloodWeb
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B7F90              		 offset:15a7f90                       

void UBP_DBDGameInstance_C::DBD_GenerateBloodWeb(int* Level)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_GenerateBloodWeb"));

	UBP_DBDGameInstance_C_DBD_GenerateBloodWeb_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_DumpSessions
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B7F50              		 offset:15a7f50                       

void UBP_DBDGameInstance_C::DBD_DumpSessions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_DumpSessions"));

	UBP_DBDGameInstance_C_DBD_DumpSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_DisplayCurrentAchievementStat
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  StatName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B7EB0              		 offset:15a7eb0                       

void UBP_DBDGameInstance_C::DBD_DisplayCurrentAchievementStat(struct FName* StatName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_DisplayCurrentAchievementStat"));

	UBP_DBDGameInstance_C_DBD_DisplayCurrentAchievementStat_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_DestroySteamInventory
// (Final, Exec, Native, Public)
// FunctionAddress:0x00007FF6806B7E90              		 offset:15a7e90                       

void UBP_DBDGameInstance_C::DBD_DestroySteamInventory()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_DestroySteamInventory"));

	UBP_DBDGameInstance_C_DBD_DestroySteamInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_ClaimRitualRewardAtIndex
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B7E10              		 offset:15a7e10                       

void UBP_DBDGameInstance_C::DBD_ClaimRitualRewardAtIndex(int* Index)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_ClaimRitualRewardAtIndex"));

	UBP_DBDGameInstance_C_DBD_ClaimRitualRewardAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_ClaimRitualReward
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B7D70              		 offset:15a7d70                       

void UBP_DBDGameInstance_C::DBD_ClaimRitualReward(struct FName* Name)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_ClaimRitualReward"));

	UBP_DBDGameInstance_C_DBD_ClaimRitualReward_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_CheckForNewContent
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                debugGameVersion               (Parm, ZeroConstructor)
// bool*                          forceDisplay                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806AC8F0              		 offset:159c8f0                       

void UBP_DBDGameInstance_C::DBD_CheckForNewContent(struct FString* debugGameVersion, bool* forceDisplay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_CheckForNewContent"));

	UBP_DBDGameInstance_C_DBD_CheckForNewContent_Params params;
	params.debugGameVersion = debugGameVersion;
	params.forceDisplay = forceDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_ChangeSteamOverlayPosition
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Position                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           VerticalOffset                 (Parm, ZeroConstructor, IsPlainOldData)
// int*                           horizontalOffset               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B7C70              		 offset:15a7c70                       

void UBP_DBDGameInstance_C::DBD_ChangeSteamOverlayPosition(int* Position, int* VerticalOffset, int* horizontalOffset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_ChangeSteamOverlayPosition"));

	UBP_DBDGameInstance_C_DBD_ChangeSteamOverlayPosition_Params params;
	params.Position = Position;
	params.VerticalOffset = VerticalOffset;
	params.horizontalOffset = horizontalOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_AssignNewRitual
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6806B7C50              		 offset:15a7c50                       

void UBP_DBDGameInstance_C::DBD_AssignNewRitual()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_AssignNewRitual"));

	UBP_DBDGameInstance_C_DBD_AssignNewRitual_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_AnalyticsTest
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680095E40              		 offset:f85e40                        

void UBP_DBDGameInstance_C::DBD_AnalyticsTest()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_AnalyticsTest"));

	UBP_DBDGameInstance_C_DBD_AnalyticsTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_AnalyticsReset
// (Final, Exec, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF680095E40              		 offset:f85e40                        

void UBP_DBDGameInstance_C::DBD_AnalyticsReset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_AnalyticsReset"));

	UBP_DBDGameInstance_C_DBD_AnalyticsReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_AddToRitual
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B7B80              		 offset:15a7b80                       

void UBP_DBDGameInstance_C::DBD_AddToRitual(int* Index, float* value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_AddToRitual"));

	UBP_DBDGameInstance_C_DBD_AddToRitual_Params params;
	params.Index = Index;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.DBD_AddToAchievementStat
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  StatName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6806B7AA0              		 offset:15a7aa0                       

void UBP_DBDGameInstance_C::DBD_AddToAchievementStat(struct FName* StatName, float* amount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.DBD_AddToAchievementStat"));

	UBP_DBDGameInstance_C_DBD_AddToAchievementStat_Params params;
	params.StatName = StatName;
	params.amount = amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.BeginLoadingScreen
// (Final, Native, Public)
// Parameters:
// struct FString*                MapName                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6806A6CB0              		 offset:1596cb0                       

void UBP_DBDGameInstance_C::BeginLoadingScreen(struct FString* MapName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.BeginLoadingScreen"));

	UBP_DBDGameInstance_C_BeginLoadingScreen_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadByDaylight.DBDGameInstance.AddActorKnowledgeCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorKnowledgeCollection** Collection                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6806B75D0              		 offset:15a75d0                       

void UBP_DBDGameInstance_C::AddActorKnowledgeCollection(class UActorKnowledgeCollection** Collection)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function DeadByDaylight.DBDGameInstance.AddActorKnowledgeCollection"));

	UBP_DBDGameInstance_C_AddActorKnowledgeCollection_Params params;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
