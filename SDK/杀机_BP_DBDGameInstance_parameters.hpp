#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_DBDGameInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeadByDaylight.DBDGameInstance.StartOfferingSequence
struct UBP_DBDGameInstance_C_StartOfferingSequence_Params
{
};

// Function DeadByDaylight.DBDGameInstance.SimulatePerk
struct UBP_DBDGameInstance_C_SimulatePerk_Params
{
	TArray<struct FName>*                              Perks;                                                    // (Parm, ZeroConstructor)
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.SimulateOfferingSequence
struct UBP_DBDGameInstance_C_SimulateOfferingSequence_Params
{
	TArray<struct FName>*                              offerings;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              playSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.RemoveActorKnowledgeCollection
struct UBP_DBDGameInstance_C_RemoveActorKnowledgeCollection_Params
{
	class UActorKnowledgeCollection**                  Collection;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.OnTimeTravelComplete
struct UBP_DBDGameInstance_C_OnTimeTravelComplete_Params
{
	bool*                                              success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    date;                                                     // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameInstance.IsActorKnown
struct UBP_DBDGameInstance_C_IsActorKnown_Params
{
	class ADBDPlayer**                                 knowledgePossessor;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     possiblyKnownActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.HasOfferingOfType
struct UBP_DBDGameInstance_C_HasOfferingOfType_Params
{
	EOfferingEffectType*                               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               playerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GotoSplashScreen
struct UBP_DBDGameInstance_C_GotoSplashScreen_Params
{
	bool*                                              showDefaultDialogueOnSplashScreen;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetSpecialEventManager
struct UBP_DBDGameInstance_C_GetSpecialEventManager_Params
{
	class USpecialEventManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetSoftBanManager
struct UBP_DBDGameInstance_C_GetSoftBanManager_Params
{
	class USoftBanManager*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetRankManager
struct UBP_DBDGameInstance_C_GetRankManager_Params
{
	class URankManager*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetPlayerLevelManager
struct UBP_DBDGameInstance_C_GetPlayerLevelManager_Params
{
	class UDBDPlayerLevelManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetMaxSurvivorCount
struct UBP_DBDGameInstance_C_GetMaxSurvivorCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetMapActorDB
struct UBP_DBDGameInstance_C_GetMapActorDB_Params
{
	class UMapActorDB*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLocalPlayerController
struct UBP_DBDGameInstance_C_GetLocalPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLocalPlayer
struct UBP_DBDGameInstance_C_GetLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLocallyControlledCharacter
struct UBP_DBDGameInstance_C_GetLocallyControlledCharacter_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLocalEventManager
struct UBP_DBDGameInstance_C_GetLocalEventManager_Params
{
	class ULocalEventManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLightInterpolator
struct UBP_DBDGameInstance_C_GetLightInterpolator_Params
{
	class ULightingInterpolator*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLightingHelper
struct UBP_DBDGameInstance_C_GetLightingHelper_Params
{
	class ULightingHelper*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLevelLighting
struct UBP_DBDGameInstance_C_GetLevelLighting_Params
{
	class ABaseSky*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetInventoryHandler
struct UBP_DBDGameInstance_C_GetInventoryHandler_Params
{
	class UInventoryHandler*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetInGameSurvivors
struct UBP_DBDGameInstance_C_GetInGameSurvivors_Params
{
	TArray<class ACamperPlayer*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameInstance.GetInGamePlayers
struct UBP_DBDGameInstance_C_GetInGamePlayers_Params
{
	TArray<class ADBDPlayer*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameInstance.GetInGameKillers
struct UBP_DBDGameInstance_C_GetInGameKillers_Params
{
	TArray<class ASlasherPlayer*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameInstance.GetInGameKiller
struct UBP_DBDGameInstance_C_GetInGameKiller_Params
{
	class ASlasherPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetInGameAliveSurvivors
struct UBP_DBDGameInstance_C_GetInGameAliveSurvivors_Params
{
	TArray<class ACamperPlayer*>                       outPlayingSurvivors;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameInstance.GetGameOn
struct UBP_DBDGameInstance_C_GetGameOn_Params
{
	class UGameOn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetGameEventDispatcher
struct UBP_DBDGameInstance_C_GetGameEventDispatcher_Params
{
	class UGameEventDispatcher*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetDecalSpawnerCollection
struct UBP_DBDGameInstance_C_GetDecalSpawnerCollection_Params
{
	class UDecalSpawnerCollection*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetDeadOrDisconnectedCampersCount
struct UBP_DBDGameInstance_C_GetDeadOrDisconnectedCampersCount_Params
{
	class ADBDPlayerState**                            exception;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetConsentManager
struct UBP_DBDGameInstance_C_GetConsentManager_Params
{
	class UConsentManager*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetCinematicManager
struct UBP_DBDGameInstance_C_GetCinematicManager_Params
{
	class UCinematicManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetCharacterDefaultItem
struct UBP_DBDGameInstance_C_GetCharacterDefaultItem_Params
{
	int*                                               inCharacterIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetCharacterClippingPrimitiveCollection
struct UBP_DBDGameInstance_C_GetCharacterClippingPrimitiveCollection_Params
{
	class UPrimitiveCollection*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetBonusPointEventsManager
struct UBP_DBDGameInstance_C_GetBonusPointEventsManager_Params
{
	class UBonusPointEventsManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GenerateBloodWebForCurrentCharacter
struct UBP_DBDGameInstance_C_GenerateBloodWebForCurrentCharacter_Params
{
};

// Function DeadByDaylight.DBDGameInstance.ForceCloseGame
struct UBP_DBDGameInstance_C_ForceCloseGame_Params
{
};

// Function DeadByDaylight.DBDGameInstance.FireSoundEvent
struct UBP_DBDGameInstance_C_FireSoundEvent_Params
{
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              shouldTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             audibleRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer**                                 instigatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isQuickAction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.EndLoadingScreen
struct UBP_DBDGameInstance_C_EndLoadingScreen_Params
{
	class UWorld**                                     loadedWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBDToggleLightingLoaded
struct UBP_DBDGameInstance_C_DBDToggleLightingLoaded_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDResetSaveData
struct UBP_DBDGameInstance_C_DBDResetSaveData_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDLogFindSessions
struct UBP_DBDGameInstance_C_DBDLogFindSessions_Params
{
	int*                                               searchType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ignoreVersion;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBDForceSave
struct UBP_DBDGameInstance_C_DBDForceSave_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDForceLoad
struct UBP_DBDGameInstance_C_DBDForceLoad_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDDeleteLocalSaveFile
struct UBP_DBDGameInstance_C_DBDDeleteLocalSaveFile_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDApplyOfferingModification
struct UBP_DBDGameInstance_C_DBDApplyOfferingModification_Params
{
	float*                                             fogModifier;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_UpdateSteamInventory
struct UBP_DBDGameInstance_C_DBD_UpdateSteamInventory_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ToggleOnlineRole
struct UBP_DBDGameInstance_C_DBD_ToggleOnlineRole_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_TestTickedDiceRoll
struct UBP_DBDGameInstance_C_DBD_TestTickedDiceRoll_Params
{
	float*                                             BaseProbability;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ticks;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MultiplicativeModifier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AdditiveModifier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_TestSaveFile
struct UBP_DBDGameInstance_C_DBD_TestSaveFile_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameInstance.DBD_TestRegion
struct UBP_DBDGameInstance_C_DBD_TestRegion_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_TestDiceRoll
struct UBP_DBDGameInstance_C_DBD_TestDiceRoll_Params
{
	float*                                             BaseProbability;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MultiplicativeModifier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AdditiveModifier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SetStatsUploadEnabled
struct UBP_DBDGameInstance_C_DBD_SetStatsUploadEnabled_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SetFearMarketDate
struct UBP_DBDGameInstance_C_DBD_SetFearMarketDate_Params
{
	struct FString*                                    dateString;                                               // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SetCursorStickySpeed
struct UBP_DBDGameInstance_C_DBD_SetCursorStickySpeed_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SetCursorStickIgnore
struct UBP_DBDGameInstance_C_DBD_SetCursorStickIgnore_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SetCursorDefaultSpeed
struct UBP_DBDGameInstance_C_DBD_SetCursorDefaultSpeed_Params
{
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SendFriendInvite
struct UBP_DBDGameInstance_C_DBD_SendFriendInvite_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ResetSaveGameInventory
struct UBP_DBDGameInstance_C_DBD_ResetSaveGameInventory_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ResetCurrentAchievementStats
struct UBP_DBDGameInstance_C_DBD_ResetCurrentAchievementStats_Params
{
	bool*                                              andUpload;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              andUpdateData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_ResetCurrentAchievementStat
struct UBP_DBDGameInstance_C_DBD_ResetCurrentAchievementStat_Params
{
	struct FName*                                      StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              andUpload;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_ResetAllRituals
struct UBP_DBDGameInstance_C_DBD_ResetAllRituals_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_RemoveRitual
struct UBP_DBDGameInstance_C_DBD_RemoveRitual_Params
{
	struct FName*                                      toRemove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_PrintAudioConfig
struct UBP_DBDGameInstance_C_DBD_PrintAudioConfig_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_PIXEndCapture
struct UBP_DBDGameInstance_C_DBD_PIXEndCapture_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_PIXBeginCapture
struct UBP_DBDGameInstance_C_DBD_PIXBeginCapture_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_LogBloodWebDefinition
struct UBP_DBDGameInstance_C_DBD_LogBloodWebDefinition_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_GetRegion
struct UBP_DBDGameInstance_C_DBD_GetRegion_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_GenerateNewRitual
struct UBP_DBDGameInstance_C_DBD_GenerateNewRitual_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_GenerateNewRandomRitual
struct UBP_DBDGameInstance_C_DBD_GenerateNewRandomRitual_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_GenerateBloodWeb
struct UBP_DBDGameInstance_C_DBD_GenerateBloodWeb_Params
{
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_DumpSessions
struct UBP_DBDGameInstance_C_DBD_DumpSessions_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_DisplayCurrentAchievementStat
struct UBP_DBDGameInstance_C_DBD_DisplayCurrentAchievementStat_Params
{
	struct FName*                                      StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_DestroySteamInventory
struct UBP_DBDGameInstance_C_DBD_DestroySteamInventory_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ClaimRitualRewardAtIndex
struct UBP_DBDGameInstance_C_DBD_ClaimRitualRewardAtIndex_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_ClaimRitualReward
struct UBP_DBDGameInstance_C_DBD_ClaimRitualReward_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_CheckForNewContent
struct UBP_DBDGameInstance_C_DBD_CheckForNewContent_Params
{
	struct FString*                                    debugGameVersion;                                         // (Parm, ZeroConstructor)
	bool*                                              forceDisplay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_ChangeSteamOverlayPosition
struct UBP_DBDGameInstance_C_DBD_ChangeSteamOverlayPosition_Params
{
	int*                                               Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               VerticalOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               horizontalOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AssignNewRitual
struct UBP_DBDGameInstance_C_DBD_AssignNewRitual_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_AnalyticsTest
struct UBP_DBDGameInstance_C_DBD_AnalyticsTest_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_AnalyticsReset
struct UBP_DBDGameInstance_C_DBD_AnalyticsReset_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddToRitual
struct UBP_DBDGameInstance_C_DBD_AddToRitual_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddToAchievementStat
struct UBP_DBDGameInstance_C_DBD_AddToAchievementStat_Params
{
	struct FName*                                      StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.BeginLoadingScreen
struct UBP_DBDGameInstance_C_BeginLoadingScreen_Params
{
	struct FString*                                    MapName;                                                  // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameInstance.AddActorKnowledgeCollection
struct UBP_DBDGameInstance_C_AddActorKnowledgeCollection_Params
{
	class UActorKnowledgeCollection**                  Collection;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
