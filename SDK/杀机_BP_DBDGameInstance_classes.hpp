#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_DBDGameInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DBDGameInstance.BP_DBDGameInstance_C
// 0x0000 (0x1E08 - 0x1E08)
class UBP_DBDGameInstance_C : public UDBDGameInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_DBDGameInstance.BP_DBDGameInstance_C"));

		return ptr;
	}


	void StartOfferingSequence();
	void SimulatePerk(TArray<struct FName>* Perks, int* Level);
	void SimulateOfferingSequence(TArray<struct FName>* offerings, bool* playSequence);
	void RemoveActorKnowledgeCollection(class UActorKnowledgeCollection** Collection);
	void OnTimeTravelComplete(bool* success, struct FString* date);
	bool IsActorKnown(class ADBDPlayer** knowledgePossessor, class AActor** possiblyKnownActor);
	bool HasOfferingOfType(EOfferingEffectType* Type, int* playerID, struct FName* Tag);
	void GotoSplashScreen(bool* showDefaultDialogueOnSplashScreen);
	class USpecialEventManager* GetSpecialEventManager();
	class USoftBanManager* GetSoftBanManager();
	class URankManager* GetRankManager();
	class UDBDPlayerLevelManager* GetPlayerLevelManager();
	int GetMaxSurvivorCount();
	class UMapActorDB* GetMapActorDB();
	class APlayerController* GetLocalPlayerController();
	class ULocalPlayer* GetLocalPlayer();
	class ADBDPlayer* GetLocallyControlledCharacter();
	class ULocalEventManager* GetLocalEventManager();
	class ULightingInterpolator* GetLightInterpolator();
	class ULightingHelper* GetLightingHelper();
	class ABaseSky* GetLevelLighting();
	class UInventoryHandler* GetInventoryHandler();
	TArray<class ACamperPlayer*> GetInGameSurvivors();
	TArray<class ADBDPlayer*> GetInGamePlayers();
	TArray<class ASlasherPlayer*> GetInGameKillers();
	class ASlasherPlayer* GetInGameKiller();
	void GetInGameAliveSurvivors(TArray<class ACamperPlayer*>* outPlayingSurvivors);
	class UGameOn* GetGameOn();
	class UGameEventDispatcher* GetGameEventDispatcher();
	class UDecalSpawnerCollection* GetDecalSpawnerCollection();
	int GetDeadOrDisconnectedCampersCount(class ADBDPlayerState** exception);
	class UConsentManager* GetConsentManager();
	class UCinematicManager* GetCinematicManager();
	struct FName GetCharacterDefaultItem(int* inCharacterIndex);
	class UPrimitiveCollection* GetCharacterClippingPrimitiveCollection();
	class UBonusPointEventsManager* GetBonusPointEventsManager();
	void GenerateBloodWebForCurrentCharacter();
	void STATIC_ForceCloseGame();
	void FireSoundEvent(class AActor** Instigator, struct FVector* Location, bool* shouldTrack, float* audibleRange, class ADBDPlayer** instigatingPlayer, bool* isQuickAction);
	void EndLoadingScreen(class UWorld** loadedWorld);
	void DBDToggleLightingLoaded();
	void DBDResetSaveData();
	void DBDLogFindSessions(int* searchType, int* Rank, bool* ignoreVersion);
	void DBDForceSave();
	void DBDForceLoad();
	void DBDDeleteLocalSaveFile();
	void DBDApplyOfferingModification(float* fogModifier);
	void DBD_UpdateSteamInventory();
	void DBD_ToggleOnlineRole();
	void DBD_TestTickedDiceRoll(float* BaseProbability, float* ticks, float* MultiplicativeModifier, float* AdditiveModifier);
	void DBD_TestSaveFile(struct FString* Name);
	void DBD_TestRegion();
	void DBD_TestDiceRoll(float* BaseProbability, float* MultiplicativeModifier, float* AdditiveModifier);
	void DBD_SetStatsUploadEnabled(bool* Enabled);
	void DBD_SetFearMarketDate(struct FString* dateString);
	void DBD_SetCursorStickySpeed(float* value);
	void DBD_SetCursorStickIgnore(float* value);
	void DBD_SetCursorDefaultSpeed(float* value);
	void DBD_SendFriendInvite();
	void DBD_ResetSaveGameInventory();
	void DBD_ResetCurrentAchievementStats(bool* andUpload, bool* andUpdateData);
	void DBD_ResetCurrentAchievementStat(struct FName* StatName, bool* andUpload);
	void DBD_ResetAllRituals();
	void DBD_RemoveRitual(struct FName* toRemove);
	void DBD_PrintAudioConfig();
	void DBD_PIXEndCapture();
	void DBD_PIXBeginCapture();
	void DBD_LogBloodWebDefinition();
	void DBD_GetRegion();
	void DBD_GenerateNewRitual(struct FName* Name);
	void DBD_GenerateNewRandomRitual();
	void DBD_GenerateBloodWeb(int* Level);
	void DBD_DumpSessions();
	void DBD_DisplayCurrentAchievementStat(struct FName* StatName);
	void DBD_DestroySteamInventory();
	void DBD_ClaimRitualRewardAtIndex(int* Index);
	void DBD_ClaimRitualReward(struct FName* Name);
	void DBD_CheckForNewContent(struct FString* debugGameVersion, bool* forceDisplay);
	void DBD_ChangeSteamOverlayPosition(int* Position, int* VerticalOffset, int* horizontalOffset);
	void DBD_AssignNewRitual();
	void DBD_AnalyticsTest();
	void DBD_AnalyticsReset();
	void DBD_AddToRitual(int* Index, float* value);
	void DBD_AddToAchievementStat(struct FName* StatName, float* amount);
	void BeginLoadingScreen(struct FString* MapName);
	void AddActorKnowledgeCollection(class UActorKnowledgeCollection** Collection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
