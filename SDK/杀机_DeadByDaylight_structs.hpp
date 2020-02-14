#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_AIModule_classes.hpp"
#include "杀机_VFXUtilities_classes.hpp"
#include "杀机_CoreUObject_classes.hpp"
#include "杀机_Activation_classes.hpp"
#include "杀机_GameplayTags_classes.hpp"
#include "杀机_Competence_classes.hpp"
#include "杀机_Engine_classes.hpp"
#include "杀机_UMG_classes.hpp"
#include "杀机_SlateCore_classes.hpp"
#include "杀机_AnimationUtilities_classes.hpp"
#include "杀机_Projectile_classes.hpp"
#include "杀机_SystemUtilities_classes.hpp"
#include "杀机_GameplayTagUtilities_classes.hpp"
#include "杀机_NetworkUtilities_classes.hpp"
#include "杀机_Customization_classes.hpp"
#include "杀机_InputCore_classes.hpp"
#include "杀机_BHVRAnalytics_classes.hpp"
#include "杀机_DataTableUtilities_classes.hpp"
#include "杀机_OnlinePresence_classes.hpp"
#include "杀机_OnlineSubsystemUtils_classes.hpp"
#include "杀机_GFXUtilities_classes.hpp"
#include "杀机_SocialParty_classes.hpp"
#include "杀机_OnlineMessagesUtilities_classes.hpp"
#include "杀机_Slate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DeadByDaylight.EDBDScoreTypes
enum class EDBDScoreTypes : uint8_t
{
	DBDCamperScore_SurviveHealthy  = 0,
	DBDCamperScore_SurviveWounded  = 1,
	DBDCamperScore_SurviveKO       = 2,
	DBDCamperScore_UnlockHatch     = 3,
	DBDCamperScore_EscapeThroughHatch = 4,
	DBDCamperScore_AllEscapeThroughHatch = 5,
	DBDCamperScore_EscapeCarry     = 6,
	DBDCamperScore_SurviveStreakSmall = 7,
	DBDCamperScore_SurviveStreakBig = 8,
	DBDCamperScore_DamageStateChanged = 9,
	DBDCamperScore_NearFriendInNeed = 10,
	DBDCamperScore_NearFriendInNeed_PostExit = 11,
	DBDCamperScore_FoundCamper     = 12,
	DBDCamperScore_CoopObjectives  = 13,
	DBDCamperScore_OpenDoorPercent = 14,
	DBDCamperScore_OpenDoor        = 15,
	DBDCamperScore_GeneratorPercent = 16,
	DBDCamperScore_GeneratorSkillCheckSuccess = 17,
	DBDCamperScore_GeneratorSkillCheckBonus = 18,
	DBDCamperScore_SearchablePercent = 19,
	DBDCamperScore_SearchCompleteFinalContributionPercent = 20,
	DBDCamperScore_AddItemToMap    = 21,
	DBDCamperScore_FixGenerator    = 22,
	DBDCamperScore_FixSpecialMapGenerator = 23,
	DBDCamperScore_LastSurvivorFixGenerator = 24,
	DBDCamperScore_RepairDamagedGenerator = 25,
	DBDCamperScore_PowerExitGates  = 26,
	DBDCamperScore_CoopAltruism    = 27,
	DBDCamperScore_HealPercent     = 28,
	DBDCamperScore_HealPercent_PostExit = 29,
	DBDCamperScore_HealFromDying   = 30,
	DBDCamperScore_HealFromDying_PostExit = 31,
	DBDCamperScore_HealFromInjured = 32,
	DBDCamperScore_HealFromInjured_PostExit = 33,
	DBDCamperScore_HealSkillCheckSuccess = 34,
	DBDCamperScore_HealSkillCheckBonus = 35,
	DBDCamperScore_HealSelfPercent = 36,
	DBDCamperScore_HealSelfSkillCheckSuccess = 37,
	DBDCamperScore_HealSelfSkillCheckBonus = 38,
	DBDCamperScore_HitAfterHookSave = 39,
	DBDCamperScore_HitNearFriendInNeed = 40,
	DBDCamperScore_HitNearUnhookedFriendInNeed = 41,
	DBDCamperScore_SabotageHook    = 42,
	DBDCamperScore_SabotageHookSkillCheckSuccess = 43,
	DBDCamperScore_SabotageHookSkillCheckBonus = 44,
	DBDCamperScore_EscapeFromHook  = 45,
	DBDCamperScore_HookStrugglePerSecond = 46,
	DBDCamperScore_SaveFromHook    = 47,
	DBDCamperScore_SaveFromHook_PostExit = 48,
	DBDCamperScore_WasUnhooked     = 49,
	DBDCamperScore_SabotageBearTrap = 50,
	DBDCamperScore_SabotageBearTrapSkillCheckSuccess = 51,
	DBDCamperScore_SabotageBearTrapSkillCheckBonus = 52,
	DBDCamperScore_DisableBearTrap = 53,
	DBDCamperScore_SaveFromBearTrap = 54,
	DBDCamperScore_SaveFromBearTrap_PostExit = 55,
	DBDCamperScore_EscapeBearTrap  = 56,
	DBDCamperScore_BasementChillingPerSecond = 57,
	DBDCamperScore_CoopBoldness    = 58,
	DBDCamperScore_SlasherStun     = 59,
	DBDCamperScore_SlasherStunCarrying = 60,
	DBDCamperScore_SlasherBlind    = 61,
	DBDCamperScore_SlasherBurnInvisibility = 62,
	DBDCamperScore_ChasePerSecond  = 63,
	DBDCamperScore_ChaseEscape     = 64,
	DBDCamperScore_ChaseSteal      = 65,
	DBDCamperScore_ChaseBlind      = 66,
	DBDCamperScore_VaultInChase    = 67,
	DBDCamperScore_NoiseDistraction = 68,
	DBDCamperScore_SprintingNearSlasherPerSecond = 69,
	DBDCamperScore_UnhideNearSlasher = 70,
	DBDCamperScore_EscapeWhileChased = 71,
	DBDCamperScore_DestroyPhantomTrap = 72,
	DBDCamperScore_NewItem         = 73,
	DBDCamperScore_StartMatchWithUltraRareItem = 74,
	DBDCamperScore_ItemFrom        = 75,
	DBDCamperScore_ExposerAdded    = 76,
	DBDSlasherScore_Destroy        = 77,
	DBDSlasherScore_Kill           = 78,
	DBDSlasherScore_BleedOut       = 79,
	DBDSlasherScore_BleedOutPercent = 80,
	DBDSlasherScore_AttackSuccess  = 81,
	DBDSlasherScore_AttackDeviousness = 82,
	DBDSlasherScore_InterruptGenerator = 83,
	DBDSlasherScore_InterruptWindow = 84,
	DBDSlasherScore_InterruptHide  = 85,
	DBDSlasherScore_InterruptExit  = 86,
	DBDSlasherScore_InterruptUnhook = 87,
	DBDSlasherScore_InterruptChest = 88,
	DBDSlasherScore_InterruptOpenHatch = 89,
	DBDSlasherScore_InterruptExitHatch = 90,
	DBDSlasherScore_FindHiding     = 91,
	DBDSlasherScore_PlaceTrap      = 92,
	DBDSlasherScore_Trap           = 93,
	DBDSlasherScore_TrapPickup     = 94,
	DBDSlasherScore_Hook           = 95,
	DBDSlasherScore_SacrificePercent = 96,
	DBDSlasherScore_SacrificeSuccess = 97,
	DBDSlasherScore_SacrificedCount = 98,
	DBDSlasherScore_NoEscape       = 99,
	DBDSlasherScore_ChaseStart     = 100,
	DBDSlasherScore_ChasePerSecond = 101,
	DBDSlasherScore_CloakStalkPerSecond = 102,
	DBDSlasherScore_UncloakInView  = 103,
	DBDSlasherScore_UncloakAttack  = 104,
	DBDSlasherScore_EvadeInvisBurn = 105,
	DBDSlasherScore_EvadeBlind     = 106,
	DBDSlasherScore_CamperDisconnect = 107,
	DBDSlasherScore_HitCamperWithChainsaw = 108,
	DBDSlasherScore_RunningWithChainsaw = 109,
	DBDSlasherScore_ChainBlinkAttack = 110,
	DBDSlasherScore_ChainBlinkInterrupt = 111,
	DBDSlasherScore_ChainBlinkInterruptAfter3 = 112,
	DBDSlasherScore_ChainBlinkStartChase = 113,
	DBDSlasherScore_StalkpointGained = 114,
	DBDSlasherScore_StalkerTierIncrement = 115,
	DBDSlasherScore_StalkerTierFirstTime = 116,
	DBDSlasherScore_StalkerKillAllCampers = 117,
	DBDSlasherScore_PhantomTrapSet = 118,
	DBDSlasherScore_PhantomTrapTrigger = 119,
	DBDSlasherScore_PhantomTrapTriggerAttack = 120,
	DBDSlasherScore_PhantomTrapTeleportAttack = 121,
	DBDSlasherScore_PhantomTrapTeleportAttackAllCampers = 122,
	DBDSlasherScore_ThrillOfTheHunt = 123,
	DBDPlayerScore_BloodwebLevelUp = 124,
	DBDPlayerScore_BloodwebPrestigeLevelUp = 125,
	DBDPlayerScore_BloodwebPrestige3LevelUp = 126,
	DBDPlayerScore_AwardPips       = 127,
	DBDPlayerScore_AddBloodpoints  = 128,
	DBDPlayerScore_BloodpointsOneCategory = 129,
	DBDPlayerScore_MaxBloodpointsAllCategories = 130,
	DBDPlayerScore_AddNewPerk      = 131,
	DBDPlayerScore_PerkLevelUp     = 132,
	DBDPlayerScore_BurnOfferingUltraRare = 133,
	DBDPlayerScore_StartGame       = 134,
	DBDPlayerScore_UnlockRanking   = 135,
	DBDPlayerScore_FinishWithPerks = 136,
	DBDCamperScore_CheatObjectives = 137,
	DBDCamperScore_CheatSurvival   = 138,
	DBDCamperScore_CheatAltruism   = 139,
	DBDCamperScore_CheatBoldness   = 140,
	DBDSlasherScore_CheatSacrifice = 141,
	DBDSlasherScore_CheatBrutality = 142,
	DBDSlasherScore_CheatDeviousness = 143,
	DBDSlasherScore_CheatHunter    = 144,
	DBDCamperScore_CleanseDullTotem = 145,
	DBDCamperScore_CleanseHexTotem = 146,
	DBDPlayerScore_BalancedLanding = 147,
	DBDPlayerScore_Lithe           = 148,
	DBDPlayerScore_PharmacyItemGranted = 149,
	DBDSlasherScore_DamageGenerator = 150,
	DBDSlasherScore_Vault          = 151,
	DBDCamperScore_StartInjuredBleedout = 152,
	DBDCamperScore_FullRecovery    = 153,
	DBDCamperScore_FirstTimeDying  = 154,
	DBDCamperScore_SecondTimeDying = 155,
	DBDCamperScore_FirecrackerDisturbance = 156,
	DBDCamperScore_GeneratorSkillCheckRuinBonus = 157,
	DBDCamperScore_SlasherBurnBlink = 158,
	DBDCamperScore_DieSacrificed   = 159,
	DBDCamperScore_DieBleedOut     = 160,
	DBDCamperScore_DieKill         = 161,
	DBDPlayerScore_EndGame         = 162,
	DBDPlayerScore_EnterParadise   = 163,
	DBDSlasherScore_CamperHookedFirstTime = 164,
	DBDSlasherScore_CamperEnterHookStrugglePhase = 165,
	DBDSlasherScore_ElectroShockSurvivor = 166,
	DBDSlasherScore_BringAllSurvivorsToMadnessTier3 = 167,
	DBDSlasherScore_BringSurvivorUpOneMadnessTier = 168,
	DBDSlasherScore_HitSurvivorAfterElectroShock = 169,
	DBDSlasherScore_PickupCamper   = 170,
	DBDSlasherScore_Blink          = 171,
	DBDSlasherScore_TeleportToPhantomTrap = 172,
	DBDSlasherScore_HatchetThrow   = 173,
	DBDSlasherScore_HatchetHit     = 174,
	DBDSlasherScore_HatchetSkillShotHit = 175,
	DBDSlasherScore_HatchetFarHit  = 176,
	DBDCamperScore_QuickVault      = 177,
	DBDCamperScore_QuickCloset     = 178,
	DBDCamperScore_StartGeneratorRepair = 179,
	DBDCamperScore_StartCleansingTotem = 180,
	DBDCamperScore_FirstRepairSkillCheck = 181,
	DBDSlasherScore_CamperDisconnectedBeforeMatchStart = 182,
	DBDSlasherScore_CamperDisconnectedDuringMatch = 183,
	DBDCamperScore_NearFriendInNeed_GeneratorsComplete = 184,
	DBDCamperScore_HealPercent_GeneratorsComplete = 185,
	DBDCamperScore_HealFromDying_GeneratorsComplete = 186,
	DBDCamperScore_SaveFromHook_GeneratorsComplete = 187,
	DBDCamperScore_SaveFromBearTrap_GeneratorsComplete = 188,
	DBDCamperScore_SnapOutOfIt     = 189,
	DBDSlasherScore_HookInBasement = 190,
	DBDSlasherScore_LFChainsawHit  = 191,
	DBDCamperScore_PalletDrop      = 192,
	DBDCamperScore_Vault           = 193,
	DBDSlasherScore_StartChaseWithChainsawAttack = 194,
	DBDSlasherScore_MissedAttackInChase = 195,
	DBDCamperScore_DodgeAndVault   = 196,
	DBDCamperScore_BeginQuickVault = 197,
	DBDSlasherScore_StartChainsawAttack = 198,
	DBDCamperScore_WakeUpBySkillCheck = 199,
	DBDCamperScore_FallAsleep      = 200,
	DBDCamperScore_WakeUpSelf      = 201,
	DBDCamperScore_WakeUpOther     = 202,
	DBDSlasherScore_RecentlyAsleepAttack = 203,
	DBDSlasherScore_SurvivorPartyOnBasementHooks = 204,
	DBDCamperScore_LootBasementChest = 205,
	DBDPlayerScore_OpenMysteryBox  = 206,
	DBDGameEvent_SurvivorDowned    = 207,
	DBDGameEvent_SurvivorDied      = 208,
	DBDGameEvent_KillerCloak       = 209,
	DBDSlasherScore_SetReverseBearTrap = 210,
	DBDSlasherScore_AbductionDash  = 211,
	DBDSlasherScore_DashHitSuccess = 212,
	DBDSlasherScore_KillWithReverseBearTrap = 213,
	DBDCamperScore_SearchRBTKey    = 214,
	DBDCamperScore_EscapeRBT       = 215,
	DBDGameEvent_ReplacedGoodSkillCheckAsGreat = 216,
	DBDCamperScore_RemoveReverseBearTrapSkillCheckSuccess = 217,
	DBDCamperScore_RemoveReverseBearTrapSkillCheckBonus = 218,
	DBDSlasherScore_DamageGeneratorWhileHooked = 219,
	DBDGameEvent_SurvivorDamaged   = 220,
	DBDGameEvent_SurvivorHealed    = 221,
	DBDGameEvent_Interruption      = 222,
	DBDGameEvent_SurvivorFailedHealSkillcheck = 223,
	DBDGameEvent_HookedSurvivorSacrificeBegin = 224,
	DBDGameEvent_AcquireEventKillerCoin = 225,
	DBDGameEvent_AcquireEventSurvivorCoin = 226,
	DBDCamperScore_EventGeneratorFixed = 227,
	DBDSlasherScore_HookedOnEventHook = 228,
	DBDGameEvent_GeneratorProgress = 229,
	DBDSlasherScore_DownSmokedCamper = 230,
	DBDSlasherScore_HitSmokedCamper = 231,
	DBDSlasherScore_SurvivorEnterGasCloud = 232,
	DBDSlasherScore_BombDirectHit  = 233,
	DBDSlasherScore_ThrowBomb      = 234,
	DBDGameEvent_CoopAction        = 235,
	DBDSlasherScore_StartActivePhaseWalk = 236,
	DBDScore_Count                 = 237,
	EDBDScoreTypes_MAX             = 238
};


// Enum DeadByDaylight.EGameState
enum class EGameState : uint8_t
{
	VE_Active                      = 0,
	VE_Dead                        = 1,
	VE_Escaped                     = 2,
	VE_EscapedInjured              = 3,
	VE_Sacrificed                  = 4,
	VE_None                        = 5,
	VE_Disconnected                = 6,
	VE_ManuallyLeftMatch           = 7,
	VE_MAX                         = 8
};


// Enum DeadByDaylight.EEndGameReason
enum class EEndGameReason : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	KillerLeft                     = 2,
	PlayerLeftDuringLoading        = 3,
	KillerLeftEarly                = 4,
	InvalidPlayerRoles             = 5,
	EEndGameReason_MAX             = 6
};


// Enum DeadByDaylight.EServerJoiningDataType
enum class EServerJoiningDataType : uint8_t
{
	Idle                           = 0,
	KillerServerFound              = 1,
	TravelToKiller                 = 2,
	EServerJoiningDataType_MAX     = 3
};


// Enum DeadByDaylight.ETileSpawnPointType
enum class ETileSpawnPointType : uint8_t
{
	Unspecified                    = 0,
	Survivor                       = 1,
	SurvivorItem                   = 2,
	Killer                         = 3,
	KillerItem                     = 4,
	InteractableObject             = 5,
	Count                          = 6,
	ETileSpawnPointType_MAX        = 7
};


// Enum DeadByDaylight.ELeanState
enum class ELeanState : uint8_t
{
	NotLeaning                     = 0,
	LeanLeft                       = 1,
	LeanRight                      = 2,
	ELeanState_MAX                 = 3
};


// Enum DeadByDaylight.EDBDCameraSocketID
enum class EDBDCameraSocketID : uint8_t
{
	VE_None                        = 0,
	VE_Default                     = 1,
	VE_Killcam                     = 2,
	VE_Reaction                    = 3,
	VE_Struggle                    = 4,
	VE_Sacrifice                   = 5,
	VE_MAX                         = 6
};


// Enum DeadByDaylight.EAttackType
enum class EAttackType : uint8_t
{
	VE_None                        = 0,
	VE_Slash                       = 1,
	VE_Pounce                      = 2,
	VE_Chainsaw                    = 3,
	VE_Blink                       = 4,
	VE_Lunge                       = 5,
	VE_LFChainsaw                  = 6,
	VE_Ambush                      = 7,
	VE_Frenzy                      = 8,
	VE_GhostCrouch                 = 9,
	VE_QatarDash                   = 10,
	VE_OniBasicAttack              = 11,
	VE_OniDemonBasicAttack         = 12,
	VE_OniDemonPowerAttack         = 13,
	VE_OniDemonDashAttack          = 14,
	VE_MAX                         = 15
};


// Enum DeadByDaylight.EDetectionZone
enum class EDetectionZone : uint8_t
{
	VE_None                        = 0,
	VE_Slash                       = 1,
	VE_Pounce                      = 2,
	VE_Chainsaw                    = 3,
	VE_Obstructed                  = 4,
	VE_Interruption                = 5,
	VE_ChainsawLockExtended        = 6,
	VE_Damage                      = 7,
	VE_ChainsawObstruction         = 8,
	VE_Blink                       = 9,
	VE_ChainsawDamageExtended      = 10,
	VE_Stalker                     = 11,
	VE_Lunge                       = 12,
	VE_PowerAttack                 = 13,
	VE_Max                         = 14,
	VE_Max01                       = 15
};


// Enum DeadByDaylight.EStunType
enum class EStunType : uint8_t
{
	VE_None                        = 0,
	VE_Bookshelf                   = 1,
	VE_BearTrap                    = 2,
	VE_Flashlight                  = 3,
	VE_WiggleFree                  = 4,
	VE_EvilWithin                  = 5,
	VE_Kicked                      = 6,
	VE_Closet                      = 7,
	VE_MAX                         = 8
};


// Enum DeadByDaylight.EAttackSubstate
enum class EAttackSubstate : uint8_t
{
	VE_None                        = 0,
	VE_Open                        = 1,
	VE_Hitting                     = 2,
	VE_HitSucceed                  = 3,
	VE_HitMiss                     = 4,
	VE_HitObstructed               = 5,
	VE_Done                        = 6,
	VE_MAX                         = 7
};


// Enum DeadByDaylight.EInputInteractionType
enum class EInputInteractionType : uint8_t
{
	VE_None                        = 0,
	VE_Interact                    = 1,
	VE_AttackInteract              = 2,
	VE_ItemInteract                = 3,
	VE_Rush                        = 4,
	VE_ItemUse                     = 5,
	VE_ItemDrop                    = 6,
	VE_InteractMash                = 7,
	VE_LeftRightMash               = 8,
	VE_ExternalRequestDrop         = 9,
	VE_ExternalRequestFlashlightStunUncloak = 10,
	VE_ExternalRequestPalletStun   = 11,
	VE_ExternalRequestStunUncloak  = 12,
	VE_ExternalRequestPalletStunUncloak = 13,
	VE_ExternalRequestStun         = 14,
	VE_ExternalRequestDropByStunning = 15,
	VE_ExternalRequestDropByStunningByPallet = 16,
	VE_ExternalRequestDropByWiggleFree = 17,
	VE_ExternalRequestDropBySkillCheck = 18,
	VE_ExternalRequestKillerCaughtInBearTrap = 19,
	VE_ExternalRequestDestroyWithPowerAttack = 20,
	VE_FastInteract                = 21,
	VE_ExternalRequestSlashedOutOfTrap = 22,
	VE_ExternalRequestSacrifice    = 23,
	VE_Gesture01                   = 24,
	VE_Gesture02                   = 25,
	VE_Gesture03                   = 26,
	VE_Gesture04                   = 27,
	VE_ExternalChainBlink          = 28,
	VE_ExternalRequestStunEvilWithin = 29,
	VE_ExternalRequestKickStun     = 30,
	VE_ExternalRequestEscape       = 31,
	VE_Struggle                    = 32,
	VE_Action                      = 33,
	VE_ExternalRequestPutToSleepStun = 34,
	VE_Crouch                      = 35,
	VE_ExternalRequestRBTExecute   = 36,
	VE_ActionKiller                = 37,
	VE_ExternalRequestRBTExecuteAtExit = 38,
	VE_ExternalRequestStunBySkillCheck = 39,
	VE_AbilityUse                  = 40,
	VE_ExternalRequestClosetStun   = 41,
	VE_ExternalRequestClosetExitFast = 42,
	VE_ActivatablePerk01           = 43,
	VE_ActivatablePerk02           = 44,
	VE_ActivatablePerk03           = 45,
	VE_ActivatablePerk04           = 46,
	VE_CancelCharge                = 47,
	VE_Count                       = 48,
	VE_MAX                         = 49
};


// Enum DeadByDaylight.ECharacterStance
enum class ECharacterStance : uint8_t
{
	VE_Stand                       = 0,
	VE_Crouch                      = 1,
	VE_Crawl                       = 2,
	VE_MAX                         = 3
};


// Enum DeadByDaylight.EInteractionAnimation
enum class EInteractionAnimation : uint8_t
{
	VE_None                        = 0,
	VE_Generator                   = 1,
	VE_PullDownLeft                = 2,
	VE_PullDownRight               = 3,
	VE_Hiding                      = 4,
	VE_SearchCloset                = 5,
	VE_HealingOther                = 6,
	VE_OpenEscape                  = 7,
	VE_StruggleFree                = 8,
	VE_HealOther                   = 9,
	VE_HealSelf                    = 10,
	VE_PickedUp                    = 11,
	VE_Unused01                    = 12,
	VE_Dropped                     = 13,
	VE_Unused02                    = 14,
	VE_BeingHooked                 = 15,
	VE_Sabotage                    = 16,
	VE_ChargeBlink                 = 17,
	VE_ThrowFirecracker            = 18,
	VE_WakeUpOther                 = 19,
	VE_RemoveReverseBearTrap       = 20,
	VE_DeadHard                    = 21,
	VE_DestroyPortal               = 22,
	VE_OniDash                     = 23,
	VE_MAX                         = 24
};


// Enum DeadByDaylight.EPlayerRole
enum class EPlayerRole : uint8_t
{
	VE_None                        = 0,
	VE_Slasher                     = 1,
	VE_Camper                      = 2,
	VE_Observer                    = 3,
	VE_MAX                         = 4
};


// Enum DeadByDaylight.EAuthoritativeMovementFlag
enum class EAuthoritativeMovementFlag : uint8_t
{
	INTERACTION                    = 0,
	SLASHED                        = 1,
	CHEAT                          = 2,
	DROPPED                        = 3,
	NOPUSH                         = 4,
	INTERACTIONNOPUSH              = 5,
	DREAMWORLD_NOSLASHERCOLLISION  = 6,
	COUNT                          = 7,
	EAuthoritativeMovementFlag_MAX = 8
};


// Enum DeadByDaylight.EAnimNotifyType
enum class EAnimNotifyType : uint8_t
{
	VE_None                        = 0,
	VE_Pickup                      = 1,
	VE_Release                     = 2,
	VE_MAX                         = 3
};


// Enum DeadByDaylight.ECustomizationCategory
enum class ECustomizationCategory : uint8_t
{
	None                           = 0,
	SurvivorHead                   = 1,
	SurvivorTorso                  = 2,
	SurvivorLegs                   = 3,
	KillerHead                     = 4,
	KillerBody                     = 5,
	KillerWeapon                   = 6,
	Outfits                        = 7,
	Charm                          = 8,
	ECustomizationCategory_MAX     = 9
};


// Enum DeadByDaylight.ECamperState
enum class ECamperState : uint8_t
{
	VE_None                        = 0,
	VE_Navigate                    = 1,
	VE_Interact                    = 2,
	VE_MAX                         = 3
};


// Enum DeadByDaylight.EKillerAbilities
enum class EKillerAbilities : uint8_t
{
	VE_None                        = 0,
	VE_SpawnTraps                  = 1,
	VE_Cloak                       = 2,
	VE_Chainsaw                    = 3,
	VE_Blink                       = 4,
	VE_PhantomTrap                 = 5,
	VE_Stalker                     = 6,
	VE_Killer07Ability             = 7,
	VE_Killer08Ability             = 8,
	VE_LFChainsaw                  = 9,
	VE_InduceDreams                = 10,
	VE_ReverseBearTrap             = 11,
	VE_GasBomb                     = 12,
	VE_PhaseWalk                   = 13,
	VE_Frenzy                      = 14,
	VE_Vomit                       = 15,
	VE_GhostStalker                = 16,
	VE_GroundPortals               = 17,
	VE_DemonMode                   = 18,
	VE_MAX                         = 19
};


// Enum DeadByDaylight.EAttackZoneSet
enum class EAttackZoneSet : uint8_t
{
	VE_OriginalZones               = 0,
	VE_WedgeZones                  = 1,
	VE_MAX                         = 2
};


// Enum DeadByDaylight.ESlasherGuidedAction
enum class ESlasherGuidedAction : uint8_t
{
	VE_None                        = 0,
	VE_Hooking                     = 1,
	VE_PickingUp                   = 2,
	VE_PuttingDown                 = 3,
	VE_MAX                         = 4
};


// Enum DeadByDaylight.EKillerMoodInfluence
enum class EKillerMoodInfluence : uint8_t
{
	VE_None                        = 0,
	VE_Chuckles                    = 1,
	VE_Banshee                     = 2,
	VE_Hillbilly                   = 3,
	VE_Nurse                       = 4,
	VE_Shape                       = 5,
	VE_MAX                         = 6
};


// Enum DeadByDaylight.ETutorialStep
enum class ETutorialStep : uint8_t
{
	Survivor_NotStarted            = 0,
	Survivor_CompleteGenerator     = 1,
	Survivor_EvadeKiller           = 2,
	Survivor_OnHook                = 3,
	Done                           = 4,
	Invalid                        = 5,
	ETutorialStep_MAX              = 6
};


// Enum DeadByDaylight.EItemRarity
enum class EItemRarity : uint8_t
{
	Common                         = 0,
	Uncommon                       = 1,
	Rare                           = 2,
	VeryRare                       = 3,
	UltraRare                      = 4,
	Artifact                       = 5,
	Spectral                       = 6,
	Teachable                      = 7,
	SpecialEvent                   = 8,
	Legendary                      = 9,
	Count                          = 10,
	None                           = 11,
	EItemRarity_MAX                = 12
};


// Enum DeadByDaylight.EInventoryItemType
enum class EInventoryItemType : uint8_t
{
	None                           = 0,
	Item                           = 1,
	ItemAddOn                      = 2,
	CamperPerk                     = 3,
	Power                          = 4,
	PowerAddOn                     = 5,
	SlasherPerk                    = 6,
	Favor                          = 7,
	Customization                  = 8,
	Count                          = 9,
	EInventoryItemType_MAX         = 10
};


// Enum DeadByDaylight.EPerkCategory
enum class EPerkCategory : uint8_t
{
	None                           = 0,
	Navigation                     = 1,
	Perception                     = 2,
	Safeguard                      = 3,
	Concealment                    = 4,
	Strategy                       = 5,
	Support                        = 6,
	Adaptation                     = 7,
	Chasing                        = 8,
	Tracking                       = 9,
	Cruelty                        = 10,
	Trickery                       = 11,
	Obstruction                    = 12,
	Hinderance                     = 13,
	Enhancement                    = 14,
	EPerkCategory_MAX              = 15
};


// Enum DeadByDaylight.ECurrencyType
enum class ECurrencyType : uint8_t
{
	None                           = 0,
	BloodPoints                    = 1,
	FearTokens                     = 2,
	Cells                          = 3,
	HalloweenCoins                 = 4,
	LunarNewYearCoins              = 5,
	HalloweenEventCurrency         = 6,
	ECurrencyType_MAX              = 7
};


// Enum DeadByDaylight.ECamperImmobilizeState
enum class ECamperImmobilizeState : uint8_t
{
	VE_None                        = 0,
	VE_Hooked                      = 1,
	VE_Trapped                     = 2,
	VE_Hiding                      = 3,
	VE_Dead                        = 4,
	VE_MAX                         = 5
};


// Enum DeadByDaylight.ESkillCheckCustomType
enum class ESkillCheckCustomType : uint8_t
{
	VE_None                        = 0,
	VE_OnPickedUp                  = 1,
	VE_OnAttacked                  = 2,
	VE_DecisiveStrikeWhileWiggling = 3,
	VE_GeneratorOvercharge1        = 4,
	VE_GeneratorOvercharge2        = 5,
	VE_GeneratorOvercharge3        = 6,
	VE_Insane                      = 7,
	VE_BrandNewPart                = 8,
	VE_MAX                         = 9
};


// Enum DeadByDaylight.ELanternState
enum class ELanternState : uint8_t
{
	Collectable                    = 0,
	Collected                      = 1,
	Destroyed                      = 2,
	Destroyable                    = 3,
	ELanternState_MAX              = 4
};


// Enum DeadByDaylight.ECamperDamageState
enum class ECamperDamageState : uint8_t
{
	VE_Healthy                     = 0,
	VE_Injured                     = 1,
	VE_KO                          = 2,
	VE_Dead                        = 3,
	VE_MAX                         = 4
};


// Enum DeadByDaylight.EClosetAnimState
enum class EClosetAnimState : uint8_t
{
	None                           = 0,
	OpenIn                         = 1,
	OpenOut                        = 2,
	OpenInFast                     = 3,
	OpenOutFast                    = 4,
	OpenOutSwing                   = 5,
	SearchEmpty                    = 6,
	SearchPlayer                   = 7,
	ReloadHatchet                  = 8,
	EClosetAnimState_MAX           = 9
};


// Enum DeadByDaylight.EGhostStealthState
enum class EGhostStealthState : uint8_t
{
	AWAITING_ACTIVATION            = 0,
	ACTIVATED                      = 1,
	COOLDOWN                       = 2,
	EGhostStealthState_MAX         = 3
};


// Enum DeadByDaylight.EAudioCustomizationCategory
enum class EAudioCustomizationCategory : uint8_t
{
	AudioCharacterName             = 0,
	AudioCharacterHead             = 1,
	AudioCharacterClothes          = 2,
	AudioCharacterShoes            = 3,
	AudioCharacterWeapon           = 4,
	AudioCharacterAmbiance         = 5,
	AudioCharacterState            = 6,
	EAudioCustomizationCategory_MAX = 7
};


// Enum DeadByDaylight.EActionButtonState
enum class EActionButtonState : uint8_t
{
	Normal                         = 0,
	Toggled                        = 1,
	Disabled                       = 2,
	Hidden                         = 3,
	EActionButtonState_MAX         = 4
};


// Enum DeadByDaylight.EActionOnFriendType
enum class EActionOnFriendType : uint8_t
{
	None                           = 0,
	SendFriendRequest              = 1,
	ConfirmFriendRequest           = 2,
	DeclineFriendRequest           = 3,
	CancelFriendInvite             = 4,
	RemoveFriend                   = 5,
	AddToFavorite                  = 6,
	RemoveToFavorite               = 7,
	Mute                           = 8,
	Unmute                         = 9,
	InviteToParty                  = 10,
	Select                         = 11,
	Count                          = 12,
	EActionOnFriendType_MAX        = 13
};


// Enum DeadByDaylight.EKnowledgeSharingType
enum class EKnowledgeSharingType : uint8_t
{
	Possessor                      = 0,
	Survivors                      = 1,
	Killers                        = 2,
	All                            = 3,
	EKnowledgeSharingType_MAX      = 4
};


// Enum DeadByDaylight.EGameplayElementType
enum class EGameplayElementType : uint8_t
{
	Generic                        = 0,
	MeatLocker_Small               = 1,
	TileLights                     = 2,
	MeatLocker_Big                 = 3,
	Searchable                     = 4,
	EdgeObjects                    = 5,
	LivingWorldObjects             = 6,
	Hatch                          = 7,
	Bookshelves                    = 8,
	Totems                         = 9,
	QuadrantSpawn                  = 10,
	EdgeObjectsBlocker             = 11,
	Count                          = 12,
	EGameplayElementType_MAX       = 13
};


// Enum DeadByDaylight.ECharacterMovementTypes
enum class ECharacterMovementTypes : uint8_t
{
	Normal                         = 0,
	Run                            = 1,
	Crouch                         = 2,
	ECharacterMovementTypes_MAX    = 3
};


// Enum DeadByDaylight.EArchivesTab
enum class EArchivesTab : uint8_t
{
	CurrentStory                   = 0,
	Rewards                        = 1,
	PastStories                    = 2,
	TabCount                       = 3,
	EArchivesTab_MAX               = 4
};


// Enum DeadByDaylight.EArchiveNodeType
enum class EArchiveNodeType : uint8_t
{
	Task                           = 0,
	Challenge                      = 1,
	Narrative                      = 2,
	None                           = 3,
	EArchiveNodeType_MAX           = 4
};


// Enum DeadByDaylight.EArchiveNodeStatus
enum class EArchiveNodeStatus : uint8_t
{
	Closed                         = 0,
	Completed                      = 1,
	Open                           = 2,
	Paused                         = 3,
	Waiting                        = 4,
	Error                          = 5,
	EArchiveNodeStatus_MAX         = 6
};


// Enum DeadByDaylight.EArm
enum class EArm : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	EArm_MAX                       = 2
};


// Enum DeadByDaylight.EAtlantaFriendUIStatus
enum class EAtlantaFriendUIStatus : uint8_t
{
	Undefined                      = 0,
	FriendSuggestion               = 1,
	FriendRequestSent              = 2,
	FriendRequestReceived          = 3,
	Available                      = 4,
	InAMatch                       = 5,
	Offline                        = 6,
	AddFriendToSeeStatus           = 7,
	EAtlantaFriendUIStatus_MAX     = 8
};


// Enum DeadByDaylight.EAtlantaRitualRewardUIType
enum class EAtlantaRitualRewardUIType : uint8_t
{
	Item                           = 0,
	AddOn                          = 1,
	Offering                       = 2,
	BloodPoints                    = 3,
	IridescentShards               = 4,
	AuricCells                     = 5,
	Customization                  = 6,
	CustoTicket                    = 7,
	MysteryBox                     = 8,
	EAtlantaRitualRewardUIType_MAX = 9
};


// Enum DeadByDaylight.EAltantaRitualUIType
enum class EAltantaRitualUIType : uint8_t
{
	Single                         = 0,
	Master                         = 1,
	Special                        = 2,
	EAltantaRitualUIType_MAX       = 3
};


// Enum DeadByDaylight.EBlinkerState
enum class EBlinkerState : uint8_t
{
	VE_Ready                       = 0,
	VE_ChainBlink                  = 1,
	VE_AttackBlink                 = 2,
	VE_CooldownRequested           = 3,
	VE_Cooldown                    = 4,
	VE_MAX                         = 5
};


// Enum DeadByDaylight.EBloodwebFillingMethod
enum class EBloodwebFillingMethod : uint8_t
{
	RestrictionsBasedOnData        = 0,
	FillAll                        = 1,
	EBloodwebFillingMethod_MAX     = 2
};


// Enum DeadByDaylight.EBloodwebDefinitionContentType
enum class EBloodwebDefinitionContentType : uint8_t
{
	Empty                          = 0,
	Nodes                          = 1,
	Paths                          = 2,
	NodesAndPaths                  = 3,
	NodesNoPath                    = 4,
	EBloodwebDefinitionContentType_MAX = 5
};


// Enum DeadByDaylight.EBloodwebDistributionType
enum class EBloodwebDistributionType : uint8_t
{
	PerWeb                         = 0,
	PerRing                        = 1,
	EBloodwebDistributionType_MAX  = 2
};


// Enum DeadByDaylight.EBloodwebDataSource
enum class EBloodwebDataSource : uint8_t
{
	ByLevel                        = 0,
	ByRing                         = 1,
	EBloodwebDataSource_MAX        = 2
};


// Enum DeadByDaylight.EBloodwebNodeGateTypes
enum class EBloodwebNodeGateTypes : uint8_t
{
	RequiredRank                   = 0,
	RequiredItem                   = 1,
	Count                          = 2,
	EBloodwebNodeGateTypes_MAX     = 3
};


// Enum DeadByDaylight.EBloodwebNodeContentType
enum class EBloodwebNodeContentType : uint8_t
{
	Empty                          = 0,
	Perks                          = 1,
	PerkBuffs_Do_Not_Use_Deprecated = 2,
	Offerings                      = 3,
	Items                          = 4,
	AddOn                          = 5,
	Chests                         = 6,
	PerksPacks                     = 7,
	IridiscentShards               = 8,
	EBloodwebNodeContentType_MAX   = 9
};


// Enum DeadByDaylight.EBloodwebNodeState
enum class EBloodwebNodeState : uint8_t
{
	Inactive                       = 0,
	Available                      = 1,
	Locked_Do_Not_Use_Deprecated   = 2,
	Collected                      = 3,
	Consumed                       = 4,
	EBloodwebNodeState_MAX         = 5
};


// Enum DeadByDaylight.EBloodwebRing
enum class EBloodwebRing : uint8_t
{
	CenterRing                     = 0,
	InnerRing                      = 1,
	MiddleRing                     = 2,
	OuterRing                      = 3,
	EntityRing                     = 4,
	RingCount                      = 5,
	EBloodwebRing_MAX              = 6
};


// Enum DeadByDaylight.EBreakableState
enum class EBreakableState : uint8_t
{
	Unbroken                       = 0,
	Broken                         = 1,
	EBreakableState_MAX            = 2
};


// Enum DeadByDaylight.EEscapeType
enum class EEscapeType : uint8_t
{
	Escape_ExitGate                = 0,
	Escape_Hatch                   = 1,
	Escape_MAX                     = 2
};


// Enum DeadByDaylight.EInventoryType
enum class EInventoryType : uint8_t
{
	Main                           = 0,
	Backpack                       = 1,
	EInventoryType_MAX             = 2
};


// Enum DeadByDaylight.EChargeableInteractionBarType
enum class EChargeableInteractionBarType : uint8_t
{
	VE_Normal                      = 0,
	VE_ProgressPips                = 1,
	VE_MAX                         = 2
};


// Enum DeadByDaylight.EAtlantaItemProgressionBarEnum
enum class EAtlantaItemProgressionBarEnum : uint8_t
{
	PrimaryBar                     = 0,
	SecondaryBar                   = 1,
	EAtlantaItemProgressionBarEnum_MAX = 2
};


// Enum DeadByDaylight.EAttachToSocketNameEnum
enum class EAttachToSocketNameEnum : uint8_t
{
	ManualAttachment               = 0,
	HandItemSocket                 = 1,
	Weapon_SocketLT                = 2,
	LanternCollectableSocket       = 3,
	EAttachToSocketNameEnum_MAX    = 4
};


// Enum DeadByDaylight.ECollectableState
enum class ECollectableState : uint8_t
{
	OnGround                       = 0,
	Stored                         = 1,
	Equipped                       = 2,
	ToBeDropped                    = 3,
	ECollectableState_MAX          = 4
};


// Enum DeadByDaylight.ECollectableCategory
enum class ECollectableCategory : uint8_t
{
	Common                         = 0,
	Rare                           = 1,
	ECollectableCategory_MAX       = 2
};


// Enum DeadByDaylight.EItemDomain
enum class EItemDomain : uint8_t
{
	Store                          = 0,
	Local                          = 1,
	Any                            = 2,
	EItemDomain_MAX                = 3
};


// Enum DeadByDaylight.EOwnership
enum class EOwnership : uint8_t
{
	Owned                          = 0,
	NotOwned                       = 1,
	Any                            = 2,
	EOwnership_MAX                 = 3
};


// Enum DeadByDaylight.EDBDAnalyticsGameMode
enum class EDBDAnalyticsGameMode : uint8_t
{
	AnalyticsServer                = 0,
	AnalyticsClient                = 1,
	AnalyticsLoading               = 2,
	AnalyticsLobby                 = 3,
	AnalyticsMenu                  = 4,
	AnalyticsPostGame              = 5,
	AnalyticsPerfTests             = 6,
	AnalyticsSplashScreen          = 7,
	EDBDAnalyticsGameMode_MAX      = 8
};


// Enum DeadByDaylight.ECamperGuidedAction
enum class ECamperGuidedAction : uint8_t
{
	VE_None                        = 0,
	VE_PrepBeingKilled             = 1,
	VE_BeingKilled                 = 2,
	VE_PrepGuidedAction            = 3,
	VE_BeingHelpedOffHookFront     = 4,
	VE_BeingHelpedOffHookBack      = 5,
	VE_BeingPickedUp               = 6,
	VE_BeingPutDown                = 7,
	VE_BeingCarried                = 8,
	VE_BeingPutOnHook              = 9,
	VE_BeingHealed                 = 10,
	VE_BeingPulledFromCloset       = 11,
	VE_BeingHelpedFromTrap         = 12,
	VE_AttachReverseBearTrap       = 13,
	VE_BeingMended                 = 14,
	VE_MAX                         = 15
};


// Enum DeadByDaylight.ECustomMovementMode
enum class ECustomMovementMode : uint8_t
{
	CUSTOM_MOVE_None               = 0,
	CUSTOM_MOVE_Snapping           = 1,
	CUSTOM_MOVE_MAX                = 2
};


// Enum DeadByDaylight.EDiceRollType
enum class EDiceRollType : uint8_t
{
	VE_EscapeHook                  = 0,
	VE_EscapeTrap                  = 1,
	VE_TrapInflictsDying           = 2,
	VE_TriggerSkillCheck           = 3,
	VE_TriggerFootNoise            = 4,
	VE_TriggerCrowAlert            = 5,
	VE_MAX                         = 6
};


// Enum DeadByDaylight.EEmblemProgressionType
enum class EEmblemProgressionType : uint8_t
{
	SurvivorLightbringerStartingValue = 0,
	SurvivorLightbringerGeneratorRepair = 1,
	SurvivorLightbringerTotemCleanse = 2,
	SurvivorLightbringerKillerDiversion = 3,
	SurvivorLightbringerExitGameOpen = 4,
	SurvivorUnbrokenTimeAlive      = 5,
	SurvivorBenevolentStartingValue = 6,
	SurvivorBenevolentHealing      = 7,
	SurvivorBenevolentHooked       = 8,
	SurvivorBenevolentUnhook       = 9,
	SurvivorBenevolentPerformUnhook = 10,
	SurvivorBenevolentSaveFromKiller = 11,
	SurvivorBenevolentUnsafeUnhook = 12,
	SurvivorBenevolentHitWhileCarrying = 13,
	SurvivorEvaderStartingValue    = 14,
	SurvivorEvaderSneaking         = 15,
	SurvivorEvaderChaseWon         = 16,
	SurvivorEvaderChaseLost        = 17,
	SurvivorEvaderPalletStun       = 18,
	KillerGatekeeperStartingValue  = 19,
	KillerGatekeeperGeneratorDefense = 20,
	KillerGatekeeperGatesClosed    = 21,
	KillerDevoutStartingValue      = 22,
	KillerDevoutSacrifice          = 23,
	KillerDevoutDisconnect         = 24,
	KillerDevoutMoris              = 25,
	KillerDevoutAllSurvivorsHooked = 26,
	KillerDevoutHooksBonus         = 27,
	KillerMaliciousStartingValue   = 28,
	KillerMaliciousInjuries        = 29,
	KillerMaliciousHookStages      = 30,
	KillerMaliciousInjuriesHealed  = 31,
	KillerMaliciousEscapeGrasp     = 32,
	KillerMaliciousDisconnect      = 33,
	KillerChaserStartingValue      = 34,
	KillerChaserSurvivorFound      = 35,
	KillerChaserSurvivorLost       = 36,
	KillerChaserHit                = 37,
	KillerChaserChaseWon           = 38,
	KillerChaserProximityToHookPenalty = 39,
	EEmblemProgressionType_MAX     = 40
};


// Enum DeadByDaylight.EEmblemQuality
enum class EEmblemQuality : uint8_t
{
	None                           = 0,
	Bronze                         = 1,
	Silver                         = 2,
	Gold                           = 3,
	Iridescent                     = 4,
	Count                          = 5,
	EEmblemQuality_MAX             = 6
};


// Enum DeadByDaylight.EEmblemEvaluation
enum class EEmblemEvaluation : uint8_t
{
	Authority                      = 0,
	Local                          = 1,
	EEmblemEvaluation_MAX          = 2
};


// Enum DeadByDaylight.EErrorCodes
enum class EErrorCodes : uint8_t
{
	None                           = 0,
	SavefileDeserializationFailure = 1,
	SavefileDecryptionFailure      = 2,
	SavefileEmpty                  = 3,
	SavefileBadPlayerId            = 4,
	SavefileEmptyPlayerUID         = 5,
	SavefileInvalidUniqueNetID     = 6,
	SavefileInvalidPlayerState     = 7,
	SavefileBackendError           = 8,
	KrakenRankError                = 9,
	KrakenRatingsError             = 10,
	SavefileEncryptionFailure      = 11,
	SaveFailedInvalidData          = 12,
	SaveFailedInvalidJSON          = 13,
	SaveFailedDecodeDataString     = 14,
	SaveFailedCompressDataString   = 15,
	SaveFailedEncryptString        = 16,
	SaveFailedCloudErrorTimeout    = 17,
	JsonToPersistenDataFailed      = 18,
	SaveFailedCloudErrorAfterRetries = 19,
	GetPlayerLevelRequestError     = 20,
	EarnPlayerXpRequestError       = 21,
	EarnPlayerXpParamError         = 22,
	EErrorCodes_MAX                = 23
};


// Enum DeadByDaylight.EGameIntroSteps
enum class EGameIntroSteps : uint8_t
{
	Idling                         = 0,
	PlayingIntro                   = 1,
	LoopingCamView                 = 2,
	EGameIntroSteps_MAX            = 3
};


// Enum DeadByDaylight.ELoadCompleteState
enum class ELoadCompleteState : uint8_t
{
	InProgress                     = 0,
	Success                        = 1,
	ReloginRequested               = 2,
	FailedEAC                      = 3,
	FailedRecoverable              = 4,
	FailedRecoverableProfileLoad   = 5,
	FailedBlocking                 = 6,
	FailedBlockingNoDBDServer      = 7,
	FailedBlockingNotConnected     = 8,
	FailedBlockedNoNetworkConnection = 9,
	FailedBlockingPlatformNotAuthenticated = 10,
	FailedBlockingPlatformSubsystemNotInitialized = 11,
	FailedBlockingOnlinePresenceNotInitialized = 12,
	FailedBlockingPlatformNetUniqueIdInvalid = 13,
	FailedBlockingInvalidLocalPlayer = 14,
	FailedBlockingInvalidGameObjects = 15,
	FailedBlockingInvalidSDA       = 16,
	FailedBlockingInvalidClientVersion = 17,
	FailedBlockingWindowsStoreAccountNotLoggedIn = 18,
	FailedBlockingSSLCACert        = 19,
	ELoadCompleteState_MAX         = 20
};


// Enum DeadByDaylight.EDisconnectErrors
enum class EDisconnectErrors : uint8_t
{
	None                           = 0,
	SteamAuthFailure               = 1,
	SteamAuthFailureKickedFromServer = 2,
	EACServerValidationFailure     = 3,
	EACValidationFailureKickedFromServer = 4,
	EACClientNotRunning            = 5,
	EACClientIntegrityViolation    = 6,
	PlayerRemovedOnSuspend         = 7,
	LostConnectionToHost           = 8,
	LostConnectionToProfileService = 9,
	MirrorsUnscheduledSessionDestruction = 10,
	SessionKilledByMirrors         = 11,
	UnableToSaveProfileAfterRetries = 12,
	UnableToGetPlayerLevel         = 13,
	UnableToEarnPlayerXp           = 14,
	UnableToUpdatePips             = 15,
	UnableToUpdateRatings          = 16,
	EDisconnectErrors_MAX          = 17
};


// Enum DeadByDaylight.ELevelLoadingSteps
enum class ELevelLoadingSteps : uint8_t
{
	Invalid                        = 0,
	WaitingForPlayersToBeSpawned   = 1,
	WaitingForLoadoutAndTheme      = 2,
	WaitingForIntroToBeDone        = 3,
	LoadingCompleted               = 4,
	ELevelLoadingSteps_MAX         = 5
};


// Enum DeadByDaylight.ELoadProgress
enum class ELoadProgress : uint8_t
{
	NotStarted                     = 0,
	Init                           = 1,
	ArtificialDelay                = 2,
	DisconnectingPresencePlugin    = 3,
	ValidateOnlineSubsystem        = 4,
	CheckingPlatformService        = 5,
	ConnectingToMirrors            = 6,
	StartEAC                       = 7,
	LoadingBackendConfigs          = 8,
	SetupRichPresence              = 9,
	LoadingBackendTunables         = 10,
	ApplyingCDNPatch               = 11,
	AquiringExternalAuthentication = 12,
	LoadingPlayerIndependentShopData = 13,
	LicenseCache                   = 14,
	LoadingEvents                  = 15,
	LoadingInventory               = 16,
	SyncingOwnedCharacters         = 17,
	LoadingProfile                 = 18,
	LoadingMirrorCurrencies        = 19,
	LoadingWallet                  = 20,
	LoadingConsent                 = 21,
	LoadingGameConfigs             = 22,
	LoadingCharacterXPTables       = 23,
	CheckingPendingTransactions    = 24,
	LoadingContentSchedule         = 25,
	LoadingNews                    = 26,
	SendingAnalytics               = 27,
	ValidateData                   = 28,
	ValidatingClientVersion        = 29,
	CheckingNeedForCurrencyMigration = 30,
	MigratingCurrenciesToMirror    = 31,
	SyncingFriendsList             = 32,
	Complete                       = 33,
	Locating                       = 34,
	ELoadProgress_MAX              = 35
};


// Enum DeadByDaylight.ESurvivorGroupTransitionSteps
enum class ESurvivorGroupTransitionSteps : uint8_t
{
	Idle                           = 0,
	JoiningKiller                  = 1,
	TravellingToKiller             = 2,
	ESurvivorGroupTransitionSteps_MAX = 3
};


// Enum DeadByDaylight.EProceduralDebugMode
enum class EProceduralDebugMode : uint8_t
{
	None                           = 0,
	NoMap                          = 1,
	TilesSmall                     = 2,
	TilesBig                       = 3,
	Count                          = 4,
	EProceduralDebugMode_MAX       = 5
};


// Enum DeadByDaylight.ECharacterDifficulty
enum class ECharacterDifficulty : uint8_t
{
	VE_Easy                        = 0,
	VE_Intermediate                = 1,
	VE_Hard                        = 2,
	VE_MAX                         = 3
};


// Enum DeadByDaylight.EGender
enum class EGender : uint8_t
{
	VE_Male                        = 0,
	VE_Female                      = 1,
	VE_Multiple                    = 2,
	VE_NotHuman                    = 3,
	VE_Undefined                   = 4,
	VE_MAX                         = 5
};


// Enum DeadByDaylight.EAttackSuccess
enum class EAttackSuccess : uint8_t
{
	VE_None                        = 0,
	VE_Success                     = 1,
	VE_Failure                     = 2,
	VE_Obstructed                  = 3,
	VE_MAX                         = 4
};


// Enum DeadByDaylight.EBlindType
enum class EBlindType : uint8_t
{
	VE_None                        = 0,
	VE_Flashlight                  = 1,
	VE_SacrificeSuspended          = 2,
	VE_Firecracker                 = 3,
	VE_MAX                         = 4
};


// Enum DeadByDaylight.EPawnType
enum class EPawnType : uint8_t
{
	VE_Killer                      = 0,
	VE_Survivor                    = 1,
	VE_MAX                         = 2
};


// Enum DeadByDaylight.EPlayerGameplayEventType
enum class EPlayerGameplayEventType : uint8_t
{
	VE_UnhookedOther               = 0,
	VE_UntrappedOther              = 1,
	VE_HealedOther                 = 2,
	VE_MAX                         = 3
};


// Enum DeadByDaylight.EKillerJoiningState
enum class EKillerJoiningState : uint8_t
{
	Disconnected                   = 0,
	Connected                      = 1,
	ConnectionFailed               = 2,
	EKillerJoiningState_MAX        = 3
};


// Enum DeadByDaylight.EVisibleMenuActorType
enum class EVisibleMenuActorType : uint8_t
{
	None                           = 0,
	Pawn                           = 1,
	Hook                           = 2,
	Charm                          = 3,
	EVisibleMenuActorType_MAX      = 4
};


// Enum DeadByDaylight.EDBDScoreCategory
enum class EDBDScoreCategory : uint8_t
{
	DBD_CamperScoreCat_Objectives  = 0,
	DBD_CamperScoreCat_Survival    = 1,
	DBD_CamperScoreCat_Altruism    = 2,
	DBD_CamperScoreCat_Boldness    = 3,
	DBD_SlasherScoreCat_Brutality  = 4,
	DBD_SlasherScoreCat_Deviousness = 5,
	DBD_SlasherScoreCat_Hunter     = 6,
	DBD_SlasherScoreCat_Sacrifice  = 7,
	DBD_CamperScoreCat_Untracked   = 8,
	DBD_CamperScoreCat_Streak      = 9,
	DBD_ScoreCat_SpecialEvents     = 10,
	DBD_MAX                        = 11
};


// Enum DeadByDaylight.ELoginType
enum class ELoginType : uint8_t
{
	Reservation                    = 0,
	Join                           = 1,
	None                           = 2,
	ELoginType_MAX                 = 3
};


// Enum DeadByDaylight.EGameType
enum class EGameType : uint8_t
{
	Online                         = 0,
	KillYourFriends                = 1,
	SurvivorGroup                  = 2,
	Tutorial                       = 3,
	None                           = 4,
	EGameType_MAX                  = 5
};


// Enum DeadByDaylight.EToastInputType
enum class EToastInputType : uint8_t
{
	Toast_Accept                   = 0,
	Toast_Reject                   = 1,
	Toast_Close                    = 2,
	Toast_MAX                      = 3
};


// Enum DeadByDaylight.EDemogorgonPortalState
enum class EDemogorgonPortalState : uint8_t
{
	Hidden                         = 0,
	InUse                          = 1,
	Exposed                        = 2,
	EDemogorgonPortalState_MAX     = 3
};


// Enum DeadByDaylight.ECharacterStatus
enum class ECharacterStatus : uint8_t
{
	Crawling                       = 0,
	BeingPickedUp                  = 1,
	BeingCarried                   = 2,
	BeingHealed                    = 3,
	BeingMended                    = 4,
	BeingPutDown                   = 5,
	BeingPutOnHook                 = 6,
	BeingPulledFromCloset          = 7,
	BeingKilled                    = 8,
	OnHook                         = 9,
	ECharacterStatus_MAX           = 10
};


// Enum DeadByDaylight.EHealthStatus
enum class EHealthStatus : uint8_t
{
	Healthy                        = 0,
	Wounded                        = 1,
	DeepWounded                    = 2,
	Dying                          = 3,
	EHealthStatus_MAX              = 4
};


// Enum DeadByDaylight.EDoorStatus
enum class EDoorStatus : uint8_t
{
	Closed                         = 0,
	Powered                        = 1,
	Open                           = 2,
	EDoorStatus_MAX                = 3
};


// Enum DeadByDaylight.EHatchStatus
enum class EHatchStatus : uint8_t
{
	Hidden                         = 0,
	Visible                        = 1,
	Open                           = 2,
	Closed                         = 3,
	ClosedOrHidden                 = 4,
	EHatchStatus_MAX               = 5
};


// Enum DeadByDaylight.EDoctorAbilityPhase
enum class EDoctorAbilityPhase : uint8_t
{
	VE_Charging                    = 0,
	VE_Firing                      = 1,
	VE_None                        = 2,
	VE_MAX                         = 3
};


// Enum DeadByDaylight.EDoctorAbilityType
enum class EDoctorAbilityType : uint8_t
{
	VE_ShockTherapy                = 0,
	VE_StaticBlast                 = 1,
	VE_None                        = 2,
	VE_MAX                         = 3
};


// Enum DeadByDaylight.EEndGameScenarioTrigger
enum class EEndGameScenarioTrigger : uint8_t
{
	ClosedHatch                    = 0,
	OpenedGate                     = 1,
	CheatUsed                      = 2,
	NotActivated                   = 3,
	EEndGameScenarioTrigger_MAX    = 4
};


// Enum DeadByDaylight.EEnergyTypeEnum
enum class EEnergyTypeEnum : uint8_t
{
	EInvalid                       = 0,
	EBattery                       = 1,
	EHealth                        = 2,
	EEnergyTypeEnum_MAX            = 3
};


// Enum DeadByDaylight.EEscapeDoorActivationMode
enum class EEscapeDoorActivationMode : uint8_t
{
	Standard                       = 0,
	Tutorial                       = 1,
	EEscapeDoorActivationMode_MAX  = 2
};


// Enum DeadByDaylight.EConditionSubject
enum class EConditionSubject : uint8_t
{
	Instigator                     = 0,
	Target                         = 1,
	EConditionSubject_MAX          = 2
};


// Enum DeadByDaylight.ELoadoutType
enum class ELoadoutType : uint8_t
{
	Item                           = 0,
	Perk                           = 1,
	Offering                       = 2,
	ELoadoutType_MAX               = 3
};


// Enum DeadByDaylight.EFrenzyEndReason
enum class EFrenzyEndReason : uint8_t
{
	OutOfTime                      = 0,
	Manual                         = 1,
	PickUpCamper                   = 2,
	Stunned                        = 3,
	Mori                           = 4,
	Blinded                        = 5,
	EFrenzyEndReason_MAX           = 6
};


// Enum DeadByDaylight.EFriendshipStatus
enum class EFriendshipStatus : uint8_t
{
	None                           = 0,
	RequestSent                    = 1,
	RequestReceived                = 2,
	Friend                         = 3,
	EFriendshipStatus_MAX          = 4
};


// Enum DeadByDaylight.EFriendSuggestionType
enum class EFriendSuggestionType : uint8_t
{
	None                           = 0,
	Facebook                       = 1,
	Google                         = 2,
	EFriendSuggestionType_MAX      = 3
};


// Enum DeadByDaylight.EFriendUIRichPresence
enum class EFriendUIRichPresence : uint8_t
{
	Undefined                      = 0,
	InMenus                        = 1,
	InLobby                        = 2,
	InMatch                        = 3,
	Connected                      = 4,
	Closing                        = 5,
	EFriendUIRichPresence_MAX      = 6
};


// Enum DeadByDaylight.EFriendUIStatus
enum class EFriendUIStatus : uint8_t
{
	Offline                        = 0,
	Online                         = 1,
	PlayingDBD                     = 2,
	EFriendUIStatus_MAX            = 3
};


// Enum DeadByDaylight.EUIFlowEvent
enum class EUIFlowEvent : uint8_t
{
	None                           = 0,
	AtlantaRoleSelectionScreenReady = 1,
	AtlantaNavigationScreenReady   = 2,
	InGameHudReady                 = 3,
	LoadingScreenReady             = 4,
	OfflineLobbyScreenReady        = 5,
	OnlineLobbyScreenReady         = 6,
	RoleSelecttionScreenReady      = 7,
	SplashScreenReady              = 8,
	TallyScreenReady               = 9,
	PartyLobbyScreenReady          = 10,
	StoreScreenReady               = 11,
	EUIFlowEvent_MAX               = 12
};


// Enum DeadByDaylight.EWorldFlowEvent
enum class EWorldFlowEvent : uint8_t
{
	None                           = 0,
	GameLevelLoaded                = 1,
	LoadingGameLevel               = 2,
	LoadingOfflineParadise         = 3,
	LoadingOnlineLobbyLevel        = 4,
	OfflineLobbyMapLoaded          = 5,
	OfflineParadiseLoaded          = 6,
	OnlineLobbyMapLoaded           = 7,
	StartScreenMapLoaded           = 8,
	LoadingSplashScreen            = 9,
	EWorldFlowEvent_MAX            = 10
};


// Enum DeadByDaylight.EGameFlowStep
enum class EGameFlowStep : uint8_t
{
	None                           = 0,
	InGame                         = 1,
	OfflineLobby                   = 2,
	OfflineTally                   = 3,
	OnlineLobby                    = 4,
	SplashScreen                   = 5,
	PartyLobby                     = 6,
	Store                          = 7,
	EGameFlowStep_MAX              = 8
};


// Enum DeadByDaylight.EGameOnTournamentState
enum class EGameOnTournamentState : uint8_t
{
	OPEN                           = 0,
	WAITING_TO_BE_CLOSED           = 1,
	CLOSED                         = 2,
	WAIITNG_TO_BE_COMPLETED        = 3,
	COMPLETED                      = 4,
	Count                          = 5,
	EGameOnTournamentState_MAX     = 6
};


// Enum DeadByDaylight.EGameOnTimePeriod
enum class EGameOnTimePeriod : uint8_t
{
	day                            = 0,
	week                           = 1,
	month                          = 2,
	all                            = 3,
	Count                          = 4,
	EGameOnTimePeriod_MAX          = 5
};


// Enum DeadByDaylight.EGameOnTournamentStatus
enum class EGameOnTournamentStatus : uint8_t
{
	upcoming                       = 0,
	live                           = 1,
	Count                          = 2,
	EGameOnTournamentStatus_MAX    = 3
};


// Enum DeadByDaylight.EGameplayModifierSource
enum class EGameplayModifierSource : uint8_t
{
	VE_Perk                        = 0,
	VE_StatusEffect                = 1,
	VE_Item                        = 2,
	VE_ItemAddon                   = 3,
	VE_All                         = 4,
	VE_PerkAndStatusEffect         = 5,
	VE_PerkStatusAndAddon          = 6,
	VE_MAX                         = 7
};


// Enum DeadByDaylight.EGateType
enum class EGateType : uint8_t
{
	VE_AndGate                     = 0,
	VE_TimerGate                   = 1,
	VE_MAX                         = 2
};


// Enum DeadByDaylight.EGestureID
enum class EGestureID : uint8_t
{
	POINT                          = 0,
	COME                           = 1,
	EGestureID_MAX                 = 2
};


// Enum DeadByDaylight.EHatchState
enum class EHatchState : uint8_t
{
	DefaultClose                   = 0,
	Opened                         = 1,
	ForcedClose                    = 2,
	EHatchState_MAX                = 3
};


// Enum DeadByDaylight.EHelpType
enum class EHelpType : uint8_t
{
	General                        = 0,
	Survivor                       = 1,
	Killer                         = 2,
	EHelpType_MAX                  = 3
};


// Enum DeadByDaylight.EHintCategory
enum class EHintCategory : uint8_t
{
	Lore                           = 0,
	Survivor                       = 1,
	Killer                         = 2,
	EHintCategory_MAX              = 3
};


// Enum DeadByDaylight.EBarColor
enum class EBarColor : uint8_t
{
	Default                        = 0,
	Yellow                         = 1,
	Red                            = 2,
	EBarColor_MAX                  = 3
};


// Enum DeadByDaylight.EInteractionLayer
enum class EInteractionLayer : uint8_t
{
	VE_Camper                      = 0,
	VE_Slasher                     = 1,
	VE_MAX                         = 2
};


// Enum DeadByDaylight.EPowerProgressBar
enum class EPowerProgressBar : uint8_t
{
	NoProgressBar                  = 0,
	ChargeBar                      = 1,
	EPowerProgressBar_MAX          = 2
};


// Enum DeadByDaylight.EInteractionOwnership
enum class EInteractionOwnership : uint8_t
{
	AnyCanUse                      = 0,
	OnlyOwnerCanUse                = 1,
	OwnerCannotUse                 = 2,
	EInteractionOwnership_MAX      = 3
};


// Enum DeadByDaylight.EItemHandPosition
enum class EItemHandPosition : uint8_t
{
	None                           = 0,
	HandleItem                     = 1,
	AimItem                        = 2,
	SmallItem                      = 3,
	FirecrackerItem                = 4,
	EItemHandPosition_MAX          = 5
};


// Enum DeadByDaylight.ELoadoutItemType
enum class ELoadoutItemType : uint8_t
{
	None                           = 0,
	Medkit                         = 1,
	Toolbox                        = 2,
	Flashlight                     = 3,
	Key                            = 4,
	Map                            = 5,
	Firecracker                    = 6,
	Count                          = 7,
	ELoadoutItemType_MAX           = 8
};


// Enum DeadByDaylight.EKillerHeight
enum class EKillerHeight : uint8_t
{
	Short                          = 0,
	Average                        = 1,
	Tall                           = 2,
	EKillerHeight_MAX              = 3
};


// Enum DeadByDaylight.EKillerTutorialSections
enum class EKillerTutorialSections : uint8_t
{
	Intro                          = 0,
	Chase                          = 1,
	Escape                         = 2,
	EKillerTutorialSections_MAX    = 3
};


// Enum DeadByDaylight.EMainMenuButton
enum class EMainMenuButton : uint8_t
{
	News                           = 0,
	PlaySurvivor                   = 1,
	PlayKiller                     = 2,
	KillYourFriends                = 3,
	DailyRituals                   = 4,
	Store                          = 5,
	Settings                       = 6,
	Help                           = 7,
	Credits                        = 8,
	QuitGame                       = 9,
	Tournaments                    = 10,
	Friends                        = 11,
	Archives                       = 12,
	EMainMenuButton_MAX            = 13
};


// Enum DeadByDaylight.EMapActorCategory
enum class EMapActorCategory : uint8_t
{
	None                           = 0,
	Objective                      = 1,
	BlackLock                      = 2,
	KillerObject                   = 3,
	ExitGate                       = 4,
	EMapActorCategory_MAX          = 5
};


// Enum DeadByDaylight.EQuadDirection
enum class EQuadDirection : uint8_t
{
	None                           = 0,
	Up                             = 1,
	Down                           = 2,
	Left                           = 3,
	Right                          = 4,
	Empty                          = 5,
	EQuadDirection_MAX             = 6
};


// Enum DeadByDaylight.ETileVariation
enum class ETileVariation : uint8_t
{
	None                           = 0,
	BlueTag                        = 1,
	PinkTag                        = 2,
	YellowTag                      = 3,
	GreenTag                       = 4,
	Empty                          = 5,
	ETileVariation_MAX             = 6
};


// Enum DeadByDaylight.EPathType
enum class EPathType : uint8_t
{
	None                           = 0,
	Straight                       = 1,
	DeadEnd                        = 2,
	Corner                         = 3,
	Crossroads                     = 4,
	TJunction                      = 5,
	OrientationOnly                = 6,
	Unspecified                    = 7,
	OrientedCrossroads             = 8,
	EPathType_MAX                  = 9
};


// Enum DeadByDaylight.EDensity
enum class EDensity : uint8_t
{
	Unspecified                    = 0,
	Light                          = 1,
	Moderate                       = 2,
	Heavy                          = 3,
	Empty                          = 4,
	EDensity_MAX                   = 5
};


// Enum DeadByDaylight.ETileType
enum class ETileType : uint8_t
{
	None                           = 0,
	Blocker                        = 1,
	Any                            = 2,
	Forest                         = 3,
	Building                       = 4,
	Maze                           = 5,
	Landmark                       = 6,
	Signature                      = 7,
	ETileType_MAX                  = 8
};


// Enum DeadByDaylight.EDirection
enum class EDirection : uint8_t
{
	Up                             = 0,
	Down                           = 1,
	Left                           = 2,
	Right                          = 3,
	UpLeft                         = 4,
	UpRight                        = 5,
	DownLeft                       = 6,
	DownRight                      = 7,
	EDirection_MAX                 = 8
};


// Enum DeadByDaylight.EQuadrantSpawnType
enum class EQuadrantSpawnType : uint8_t
{
	L_Shape                        = 0,
	Square                         = 1,
	Rect_X                         = 2,
	Rect_Y                         = 3,
	Rect                           = 4,
	None                           = 5,
	EQuadrantSpawnType_MAX         = 6
};


// Enum DeadByDaylight.EQuadrant
enum class EQuadrant : uint8_t
{
	BottomRight                    = 0,
	BottomLeft                     = 1,
	TopLeft                        = 2,
	TopRight                       = 3,
	Count                          = 4,
	EQuadrant_MAX                  = 5
};


// Enum DeadByDaylight.EMatchmakingQueueResult
enum class EMatchmakingQueueResult : uint8_t
{
	Success                        = 0,
	SessionIsFull                  = 1,
	SessionDoesNotExist            = 2,
	SessionClosed                  = 3,
	SessionCanceled                = 4,
	CouldNotRetrieveAddress        = 5,
	AlreadyInSession               = 6,
	UnknownError                   = 7,
	EMatchmakingQueueResult_MAX    = 8
};


// Enum DeadByDaylight.ELobbyWaitStopReason
enum class ELobbyWaitStopReason : uint8_t
{
	StartMatchWait                 = 0,
	PlayerCancelled                = 1,
	Unknown                        = 2,
	ELobbyWaitStopReason_MAX       = 3
};


// Enum DeadByDaylight.EPlayerAnimState
enum class EPlayerAnimState : uint8_t
{
	VE_Default                     = 0,
	VE_Injured                     = 1,
	VE_InjuredCrouch               = 2,
	VE_Crouch                      = 3,
	VE_MAX                         = 4
};


// Enum DeadByDaylight.EOfferingEffectType
enum class EOfferingEffectType : uint8_t
{
	SlasherPointsAll               = 0,
	PointsBrutality                = 1,
	PointsDeviouness               = 2,
	PointsSacrice                  = 3,
	PointsHunting                  = 4,
	CamperPointsAll                = 5,
	PointsObjective                = 6,
	PointsSurvival                 = 7,
	PointsAltruism                 = 8,
	PointsBoldness                 = 9,
	CamperItemLostPrevention       = 10,
	KillerItemLostPrevention       = 11,
	Luck                           = 12,
	IndustrialThemeSelectionModifier = 13,
	JunkyardThemeSelectionModifier = 14,
	FarmThemeSelectionModifier     = 15,
	SwampThemeSelectionModifier    = 16,
	MapModifier                    = 17,
	ChestCountModifier             = 18,
	PortableHookCountModifier      = 19,
	LairCountModifier              = 20,
	PlayerGrouping                 = 21,
	FarKiller                      = 22,
	KillAllowedModifier            = 23,
	LightingModification           = 24,
	FogModification                = 25,
	LivingWorldObjectCountModifier = 26,
	LivingWorldObjectMultModifier  = 27,
	KillLastSurvivor               = 28,
	SuburbsThemeSelectionModifier  = 29,
	AsylumThemeSelectionModifier   = 30,
	KillerSelectionModifier        = 31,
	HospitalThemeSelectionModifier = 32,
	KillAllowedAfterHook           = 33,
	BorealThemeSelectionModifier   = 34,
	SpringwoodThemeSelectionModifier = 35,
	FinlandThemeSelectionModifier  = 36,
	JapaneseCountrySideSelectionModifier = 37,
	KenyaThemeSelectionModifier    = 38,
	QatarThemeSelectionModifier    = 39,
	SpecialEvent                   = 40,
	ObjectSubsitution              = 41,
	ObjectAddition                 = 42,
	EOfferingEffectType_MAX        = 43
};


// Enum DeadByDaylight.EOfferingCategory
enum class EOfferingCategory : uint8_t
{
	None                           = 0,
	Bloodpoints                    = 1,
	Mapmods                        = 2,
	Realms                         = 3,
	Shrouds                        = 4,
	Wards                          = 5,
	Luck                           = 6,
	Moris                          = 7,
	EOfferingCategory_MAX          = 8
};


// Enum DeadByDaylight.EOfferingType
enum class EOfferingType : uint8_t
{
	None                           = 0,
	Atmosphere                     = 1,
	Lighting                       = 2,
	Points                         = 3,
	Zone                           = 4,
	Position                       = 5,
	Chest                          = 6,
	Hook                           = 7,
	Protection                     = 8,
	Hatch                          = 9,
	Odds                           = 10,
	Killing                        = 11,
	World                          = 12,
	Luck                           = 13,
	Killer                         = 14,
	Count                          = 15,
	EOfferingType_MAX              = 16
};


// Enum DeadByDaylight.EOfferingCombinationResult
enum class EOfferingCombinationResult : uint8_t
{
	None                           = 0,
	Stacked                        = 1,
	CoConsummed                    = 2,
	Overruling                     = 3,
	Cancelled                      = 4,
	EOfferingCombinationResult_MAX = 5
};


// Enum DeadByDaylight.EOfferingAnimState
enum class EOfferingAnimState : uint8_t
{
	None                           = 0,
	Idle                           = 1,
	Init                           = 2,
	Reveal                         = 3,
	ShowInteraction                = 4,
	Burned                         = 5,
	Returned                       = 6,
	Cancel                         = 7,
	Hidden                         = 8,
	EOfferingAnimState_MAX         = 9
};


// Enum DeadByDaylight.EOfferingSequenceState
enum class EOfferingSequenceState : uint8_t
{
	SmokeIn                        = 0,
	FadeOut                        = 1,
	FadeIn                         = 2,
	NotInitialized                 = 3,
	Idle                           = 4,
	Init                           = 5,
	InitDone                       = 6,
	Reveal                         = 7,
	RevealDone                     = 8,
	ShowInteraction                = 9,
	Finalize                       = 10,
	Done                           = 11,
	EOfferingSequenceState_MAX     = 12
};


// Enum DeadByDaylight.EOfflineLobbyState
enum class EOfflineLobbyState : uint8_t
{
	None                           = 0,
	RoleSelection                  = 1,
	OfflineLobby                   = 2,
	Store                          = 3,
	PartyLobby                     = 4,
	Archives                       = 5,
	EOfflineLobbyState_MAX         = 6
};


// Enum DeadByDaylight.EOniAttackType
enum class EOniAttackType : uint8_t
{
	VE_NotDemonMode                = 0,
	VE_DemonBasicAttack            = 1,
	VE_DemonPowerAttack            = 2,
	VE_DemonDashAttack             = 3,
	VE_MAX                         = 4
};


// Enum DeadByDaylight.EJoinSessionFailureType
enum class EJoinSessionFailureType : uint8_t
{
	None                           = 0,
	JoiningAlreadyStartedGame      = 1,
	JoiningPrivateGame             = 2,
	JoiningAlreadyFullGame         = 3,
	JoiningInvitation              = 4,
	JoiningFailedOnDisconnect      = 5,
	JoiningHostUnreachable         = 6,
	EJoinSessionFailureType_MAX    = 7
};


// Enum DeadByDaylight.EOnlineOperation
enum class EOnlineOperation : uint8_t
{
	None                           = 0,
	HostGame                       = 1,
	EndingSession                  = 2,
	DestroyingSession              = 3,
	JoinGame                       = 4,
	JoinCancelled                  = 5,
	FindCustomSessions             = 6,
	OnlineCheck                    = 7,
	EOnlineOperation_MAX           = 8
};


// Enum DeadByDaylight.EOverlayContext
enum class EOverlayContext : uint8_t
{
	MainMenus                      = 0,
	InGame                         = 1,
	Tutorial                       = 2,
	TutorialLevel                  = 3,
	EOverlayContext_MAX            = 4
};


// Enum DeadByDaylight.EOverlayTabs
enum class EOverlayTabs : uint8_t
{
	Settings                       = 0,
	Controls                       = 1,
	Help                           = 2,
	Survivors                      = 3,
	About                          = 4,
	Language                       = 5,
	EOverlayTabs_MAX               = 6
};


// Enum DeadByDaylight.EPalletState
enum class EPalletState : uint8_t
{
	Up                             = 0,
	Falling                        = 1,
	Fallen                         = 2,
	Destroyed                      = 3,
	Illusionary                    = 4,
	EPalletState_MAX               = 5
};


// Enum DeadByDaylight.EInventoryGridFormat
enum class EInventoryGridFormat : uint8_t
{
	DEFAULT                        = 0,
	DIAMOND                        = 1,
	HONEYCOMB                      = 2,
	EInventoryGridFormat_MAX       = 3
};


// Enum DeadByDaylight.EPlatformFlag
enum class EPlatformFlag : uint8_t
{
	None                           = 0,
	Android                        = 1,
	DMM                            = 2,
	IOS                            = 3,
	Nintendo                       = 4,
	PSN                            = 5,
	Steam                          = 6,
	GRDK                           = 7,
	Xbox                           = 8,
	EPlatformFlag_MAX              = 9
};


// Enum DeadByDaylight.ERequestState
enum class ERequestState : uint8_t
{
	VE_None                        = 0,
	VE_Pending                     = 1,
	VE_Success                     = 2,
	VE_Fail                        = 3,
	VE_MAX                         = 4
};


// Enum DeadByDaylight.EPreLevelGenerationModifierType
enum class EPreLevelGenerationModifierType : uint8_t
{
	None                           = 0,
	ModifyKillerObjectCount        = 1,
	EPreLevelGenerationModifierType_MAX = 2
};


// Enum DeadByDaylight.EThemeColorId
enum class EThemeColorId : uint8_t
{
	Invalid                        = 0,
	Blue                           = 1,
	Green                          = 2,
	Yellow                         = 3,
	EThemeColorId_MAX              = 4
};


// Enum DeadByDaylight.ESurvivorGrouping
enum class ESurvivorGrouping : uint8_t
{
	Invalid                        = 0,
	Separated                      = 1,
	Grouped2                       = 2,
	Grouped3                       = 3,
	Grouped4                       = 4,
	ESurvivorGrouping_MAX          = 5
};


// Enum DeadByDaylight.EscapeStrategyType
enum class EscapeStrategyType : uint8_t
{
	EscapeDoor                     = 0,
	EscapeHatch                    = 1,
	EscapeStrategyType_MAX         = 2
};


// Enum DeadByDaylight.ELevelBuildingState
enum class ELevelBuildingState : uint8_t
{
	NotInitialized                 = 0,
	WaitingForInitialSync          = 1,
	SyncSeeds                      = 2,
	GetAvailableItems              = 3,
	PendingGettingItems            = 4,
	GettingLevelsDone              = 5,
	PendingPremadeMapStreaming     = 6,
	GetThemedTiles                 = 7,
	PendingGettingTiles            = 8,
	SpawnRequiredTiles             = 9,
	SpawningLevelTiles             = 10,
	SpawnInterTileElements         = 11,
	PendingInterTileElementsSpawning = 12,
	SpawningActors                 = 13,
	SpawningMultiPassActors        = 14,
	StallingForRemotes             = 15,
	BuildingDone                   = 16,
	BuildingStateCount             = 17,
	ELevelBuildingState_MAX        = 18
};


// Enum DeadByDaylight.EScreenType
enum class EScreenType : uint8_t
{
	eScaleformScreen               = 0,
	eUMGScreen                     = 1,
	eMixedScaleformUMG             = 2,
	EScreenType_MAX                = 3
};


// Enum DeadByDaylight.EShopLoadProgress
enum class EShopLoadProgress : uint8_t
{
	None                           = 0,
	LoadCatalog                    = 1,
	LoadCurrencyPacks              = 2,
	PlatformStoreCatalog           = 3,
	Inventory                      = 4,
	Wallet                         = 5,
	FeaturedPageContent            = 6,
	EShopLoadProgress_MAX          = 7
};


// Enum DeadByDaylight.ESoftBanReason
enum class ESoftBanReason : uint8_t
{
	Invalid                        = 0,
	Harassment                     = 1,
	Griefing                       = 2,
	Exploits                       = 3,
	Unsportsmanlike                = 4,
	Count                          = 5,
	ESoftBanReason_MAX             = 6
};


// Enum DeadByDaylight.ESpecialEventGameMode
enum class ESpecialEventGameMode : uint8_t
{
	Progression                    = 0,
	Counter                        = 1,
	ESpecialEventGameMode_MAX      = 2
};


// Enum DeadByDaylight.ESpecialEventStatus
enum class ESpecialEventStatus : uint8_t
{
	Inactive                       = 0,
	ActiveMain                     = 1,
	ActivePost                     = 2,
	ESpecialEventStatus_MAX        = 3
};


// Enum DeadByDaylight.EStoreBannerLocation
enum class EStoreBannerLocation : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	EStoreBannerLocation_MAX       = 2
};


// Enum DeadByDaylight.ETextBannerPosition
enum class ETextBannerPosition : uint8_t
{
	TopLeft                        = 0,
	MiddleLeft                     = 1,
	BottomLeft                     = 2,
	MiddleRight                    = 3,
	BottomRight                    = 4,
	TopCenter                      = 5,
	MiddleCenter                   = 6,
	BottomCenter                   = 7,
	ETextBannerPosition_MAX        = 8
};


// Enum DeadByDaylight.EStoreTab
enum class EStoreTab : uint8_t
{
	Featured                       = 0,
	Characters                     = 1,
	Currency                       = 2,
	ShrineOfSecrets                = 3,
	TabCount                       = 4,
	EStoreTab_MAX                  = 5
};


// Enum DeadByDaylight.EStoreState
enum class EStoreState : uint8_t
{
	None                           = 0,
	Featured                       = 1,
	CharacterSelection             = 2,
	CharacterStory                 = 3,
	CharacterCatalog               = 4,
	BuyCurrency                    = 5,
	ShrineOfSecrets                = 6,
	EStoreState_MAX                = 7
};


// Enum DeadByDaylight.EStoryNodeState
enum class EStoryNodeState : uint8_t
{
	None                           = 0,
	Unavailable                    = 1,
	AvailableDefault               = 2,
	AvailableActive                = 3,
	AvailablePaused                = 4,
	Completed                      = 5,
	Claimed                        = 6,
	EStoryNodeState_MAX            = 7
};


// Enum DeadByDaylight.EStoryNodeType
enum class EStoryNodeType : uint8_t
{
	Narrative                      = 0,
	Task                           = 1,
	Challenge                      = 2,
	EStoryNodeType_MAX             = 3
};


// Enum DeadByDaylight.ESurvivorTutorialSections
enum class ESurvivorTutorialSections : uint8_t
{
	Intro                          = 0,
	Skillchecks                    = 1,
	Killer                         = 2,
	Stealth                        = 3,
	Hook                           = 4,
	Health                         = 5,
	Rescue                         = 6,
	Escape                         = 7,
	ESurvivorTutorialSections_MAX  = 8
};


// Enum DeadByDaylight.ETeachableStatus
enum class ETeachableStatus : uint8_t
{
	Unknown                        = 0,
	Locked                         = 1,
	AvailableInBloodWeb            = 2,
	AvailableInShrine              = 3,
	Acquired                       = 4,
	ETeachableStatus_MAX           = 5
};


// Enum DeadByDaylight.EPromptType
enum class EPromptType : uint8_t
{
	None                           = 0,
	ExitsPowered                   = 1,
	HatchSpawned                   = 2,
	HatchOpened                    = 3,
	EPromptType_MAX                = 4
};


// Enum DeadByDaylight.ENotificationStyle
enum class ENotificationStyle : uint8_t
{
	None                           = 0,
	Game                           = 1,
	Tutorial                       = 2,
	ENotificationStyle_MAX         = 3
};


// Enum DeadByDaylight.EPromptPriority
enum class EPromptPriority : uint8_t
{
	Tutorial                       = 0,
	High                           = 1,
	Medium                         = 2,
	Low                            = 3,
	EPromptPriority_MAX            = 4
};


// Enum DeadByDaylight.ELegalTermsStatus
enum class ELegalTermsStatus : uint8_t
{
	None                           = 0,
	Accepted                       = 1,
	Declined                       = 2,
	ELegalTermsStatus_MAX          = 3
};


// Enum DeadByDaylight.ETestBuildType
enum class ETestBuildType : uint8_t
{
	None                           = 0,
	PublicTestBuild                = 1,
	PaxBuild                       = 2,
	ConsolePreAlphaBuild           = 3,
	ETestBuildType_MAX             = 4
};


// Enum DeadByDaylight.ELoadoutSlot
enum class ELoadoutSlot : uint8_t
{
	SKIN                           = 0,
	ITEM_POWER                     = 1,
	ADD_ON                         = 2,
	ADD_ON01                       = 3,
	PERK                           = 4,
	PERK01                         = 5,
	PERK02                         = 6,
	PERK03                         = 7,
	FAVOR                          = 8,
	ELoadoutSlot_MAX               = 9
};


// Enum DeadByDaylight.EPlatform
enum class EPlatform : uint8_t
{
	STEAM                          = 0,
	XBOX                           = 1,
	PSN                            = 2,
	SWITCH                         = 3,
	GRDK                           = 4,
	EPlatform_MAX                  = 5
};


// Enum DeadByDaylight.EControlMode
enum class EControlMode : uint8_t
{
	MOUSE_KB                       = 0,
	XBOX                           = 1,
	PS                             = 2,
	VITA                           = 3,
	SWITCH                         = 4,
	UNDEFINED                      = 5,
	EControlMode_MAX               = 6
};


// Enum DeadByDaylight.ENewContentType
enum class ENewContentType : uint8_t
{
	COMING_SOON                    = 0,
	NEW_CONTENT                    = 1,
	PATCH_NOTES                    = 2,
	DEV_MESSAGES                   = 3,
	EVENTS                         = 4,
	ENewContentType_MAX            = 5
};


// Enum DeadByDaylight.EOverlayButtonOptions
enum class EOverlayButtonOptions : uint8_t
{
	HIDDEN                         = 0,
	DISABLED                       = 1,
	ENABLED                        = 2,
	EOverlayButtonOptions_MAX      = 3
};


// Enum DeadByDaylight.EHudComponent
enum class EHudComponent : uint8_t
{
	ACTION_PROMPT                  = 0,
	ACTION_PROGRESS_BAR            = 1,
	GENERATOR_ICON                 = 2,
	HATCH_ICON                     = 3,
	LOCAL_PLAYER_STATUS            = 4,
	OTHER_PLAYER_STATUSES          = 5,
	CROUCH_BUTTON                  = 6,
	CENTER_INTERACT_BUTTON         = 7,
	DIRECTIONAL_STICK              = 8,
	WIGGLE_BUTTONS                 = 9,
	STRUGGLE_BUTTONS               = 10,
	POWER_BUTTON                   = 11,
	ATTACK_BUTTON                  = 12,
	OBJECTIVES                     = 13,
	LOUD_NOISE_INDICATOR           = 14,
	EHudComponent_MAX              = 15
};


// Enum DeadByDaylight.EUIControllerType
enum class EUIControllerType : uint8_t
{
	KeyboardMouse                  = 0,
	GamePad                        = 1,
	EUIControllerType_MAX          = 2
};


// Enum DeadByDaylight.EHudOffscreenIndicatorType
enum class EHudOffscreenIndicatorType : uint8_t
{
	None                           = 0,
	LoudNoise                      = 1,
	StealthBroken                  = 2,
	EHudOffscreenIndicatorType_MAX = 3
};


// Enum DeadByDaylight.EHudIndicatorIconType
enum class EHudIndicatorIconType : uint8_t
{
	None                           = 0,
	EHudIndicatorIconType_MAX      = 1
};


// Enum DeadByDaylight.EScreenShotBatching
enum class EScreenShotBatching : uint8_t
{
	SelectedItemOrOutfit           = 0,
	SelectedCharacter              = 1,
	SelectedCharacterAndCategory   = 2,
	ItemsMissingIcon               = 3,
	AllItems                       = 4,
	SelectedCharacterOutfits       = 5,
	AllOutfits                     = 6,
	AllCharms                      = 7,
	EScreenShotBatching_MAX        = 8
};


// Enum DeadByDaylight.ELeaveLobbyReason
enum class ELeaveLobbyReason : uint8_t
{
	eNone                          = 0,
	eNetworkDisconnect             = 1,
	eProfileOffline                = 2,
	eAppSuspended                  = 3,
	eInternetDisconnect            = 4,
	eHostDisconnect                = 5,
	eDLCInstalled                  = 6,
	eSessionKilled                 = 7,
	eTrialExtensionExpired         = 8,
	ePartyManagementError          = 9,
	ELeaveLobbyReason_MAX          = 10
};


// Enum DeadByDaylight.EFriendContainerType
enum class EFriendContainerType : uint8_t
{
	Connected                      = 0,
	Disconnected                   = 1,
	PendingSentRequest             = 2,
	RecentlyPlayed                 = 3,
	SocialSuggestions              = 4,
	PendingReceivedRequest         = 5,
	Unknown                        = 6,
	EFriendContainerType_MAX       = 7
};


// Enum DeadByDaylight.EAtlantaSettingMenuType
enum class EAtlantaSettingMenuType : uint8_t
{
	TabButton                      = 0,
	AlwaysDisplay                  = 1,
	EAtlantaSettingMenuType_MAX    = 2
};


// Enum DeadByDaylight.EBloodStoreRowStyle
enum class EBloodStoreRowStyle : uint8_t
{
	FiveItemRow                    = 0,
	ThreeItemRow                   = 1,
	EBloodStoreRowStyle_MAX        = 2
};


// Enum DeadByDaylight.EButtonType
enum class EButtonType : uint8_t
{
	None                           = 0,
	AttackButton                   = 1,
	PowerButton                    = 2,
	CancelButton                   = 3,
	EButtonType_MAX                = 4
};


// Enum DeadByDaylight.EInboxMessageTimeUnit
enum class EInboxMessageTimeUnit : uint8_t
{
	Days                           = 0,
	Hours                          = 1,
	Minutes                        = 2,
	EInboxMessageTimeUnit_MAX      = 3
};


// Enum DeadByDaylight.EInboxMessageUIState
enum class EInboxMessageUIState : uint8_t
{
	New                            = 0,
	Read                           = 1,
	Archived                       = 2,
	EInboxMessageUIState_MAX       = 3
};


// Enum DeadByDaylight.EInboxMessageUIType
enum class EInboxMessageUIType : uint8_t
{
	None                           = 0,
	Social                         = 1,
	Rewards                        = 2,
	News                           = 3,
	EInboxMessageUIType_MAX        = 4
};


// Enum DeadByDaylight.EPartyPlayerSlotWidgetState
enum class EPartyPlayerSlotWidgetState : uint8_t
{
	None                           = 0,
	Empty                          = 1,
	NotReady                       = 2,
	Ready                          = 3,
	Hidden                         = 4,
	EPartyPlayerSlotWidgetState_MAX = 5
};


// Enum DeadByDaylight.ESettingScreenButtonData
enum class ESettingScreenButtonData : uint8_t
{
	PRIVACY                        = 0,
	EULA                           = 1,
	CREDITS                        = 2,
	ESettingScreenButtonData_MAX   = 3
};


// Enum DeadByDaylight.ENavigationState
enum class ENavigationState : uint8_t
{
	RoleSelection                  = 0,
	Customization                  = 1,
	CharacterSelection             = 2,
	Lobby                          = 3,
	BloodStore                     = 4,
	None                           = 5,
	ENavigationState_MAX           = 6
};


// Enum DeadByDaylight.ELobbyState
enum class ELobbyState : uint8_t
{
	Searching                      = 0,
	Joined                         = 1,
	Offering                       = 2,
	Fog                            = 3,
	ELobbyState_MAX                = 4
};


// Enum DeadByDaylight.EInventoryButtonState
enum class EInventoryButtonState : uint8_t
{
	StateDisabled                  = 0,
	StateEmpty                     = 1,
	StateLocked                    = 2,
	StateWithItem                  = 3,
	StateWithItemDisabled          = 4,
	StateWithItemLocked            = 5,
	StatePrivate                   = 6,
	EInventoryButtonState_MAX      = 7
};


// Enum DeadByDaylight.ERoleSelectionScreenButton
enum class ERoleSelectionScreenButton : uint8_t
{
	DailyRitual                    = 0,
	Inbox                          = 1,
	InviteFriend                   = 2,
	Setting                        = 3,
	ERoleSelectionScreenButton_MAX = 4
};


// Enum DeadByDaylight.ENavigationScreenButton
enum class ENavigationScreenButton : uint8_t
{
	AddCurrency                    = 0,
	Start                          = 1,
	ChangeRole                     = 2,
	CharacterSelection             = 3,
	Loadout                        = 4,
	Customization                  = 5,
	Bloodweb                       = 6,
	Back                           = 7,
	ENavigationScreenButton_MAX    = 8
};


// Enum DeadByDaylight.EInboxScreenButton
enum class EInboxScreenButton : uint8_t
{
	Rewards                        = 0,
	Social                         = 1,
	News                           = 2,
	Back                           = 3,
	EInboxScreenButton_MAX         = 4
};


// Enum DeadByDaylight.ETallyListPageID
enum class ETallyListPageID : uint8_t
{
	Scoreboard                     = 0,
	Bloodpoints                    = 1,
	Rank                           = 2,
	PlayerLevel                    = 3,
	CharacterLevel                 = 4,
	NumberOfPages                  = 5,
	ETallyListPageID_MAX           = 6
};


// Enum DeadByDaylight.EToastWidgetType
enum class EToastWidgetType : uint8_t
{
	Simple                         = 0,
	Interactable                   = 1,
	EToastWidgetType_MAX           = 2
};


// Enum DeadByDaylight.ELinkedVomitState
enum class ELinkedVomitState : uint8_t
{
	Idle                           = 0,
	Charging                       = 1,
	Vomiting                       = 2,
	ELinkedVomitState_MAX          = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DeadByDaylight.GameEventData
// 0x0028
struct FGameEventData
{
	class ADBDPlayer*                                  Instigator;                                               // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CustomValue;                                              // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UObject*                                     CustomObjectParameter;                                    // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CustomIntValue;                                           // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.StatusViewSource
// 0x0028
struct FStatusViewSource
{
	struct FName                                       SourceID;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               IsActive;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              _remainingTime;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentageFill;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInventoryItemType                                 SourceType;                                               // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                SourceIconIndex;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SourceLevel;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.GameplayNotificationData
// 0x0058
struct FGameplayNotificationData
{
	struct FName                                       SourceID;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EInventoryItemType                                 SourceType;                                               // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                SourceIconIndex;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SourceLevel;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectID;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0018(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData03[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     EffectIconFilePath;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EStatusEffectType                                  EffectType;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FText                                       EffectDisplayName;                                        // 0x0040(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.InteractionArray
// 0x0010
struct FInteractionArray
{
	TArray<TWeakObjectPtr<class UInteractionDefinition>> _interactions;                                            // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.Dependency
// 0x0038
struct FDependency
{
	ETileSpawnPointType                                Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             AssetReference;                                           // 0x0008(0x0020) (Edit, ZeroConstructor)
	class UClass*                                      Object;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Unique;                                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BuiltLevelData
// 0x0050
struct FBuiltLevelData
{
	struct FName                                       ThemeName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       ThemeWeather;                                             // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     MapName;                                                  // 0x0018(0x0010) (ZeroConstructor)
	int                                                TileCount;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FDependency>                         Dependencies;                                             // 0x0030(0x0010) (ZeroConstructor)
	struct FName                                       SpecialEventId;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0040(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData04[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SelectedOffering
// 0x0010
struct FSelectedOffering
{
	int                                                ownerId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OfferingName;                                             // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.OfferingData
// 0x0018
struct FOfferingData
{
	bool                                               OfferingReady;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSelectedOffering>                   offerings;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.DBDJoinParamSetting
// 0x0020
struct FDBDJoinParamSetting
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ServerJoiningData
// 0x0058
struct FServerJoiningData
{
	uint64_t                                           SESSIONID;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SessionIdStr;                                             // 0x0008(0x0010) (ZeroConstructor)
	EServerJoiningDataType                             Step;                                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FDBDJoinParamSetting>                Settings;                                                 // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     OwningUserId;                                             // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     OwningUserName;                                           // 0x0040(0x0010) (ZeroConstructor)
	bool                                               IsDedicated;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GamePresetData
// 0x0078
struct FGamePresetData
{
	TArray<unsigned char>                              _mapAvailabilities;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _perkAvailabilities;                                      // 0x0010(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _offeringAvailabilities;                                  // 0x0020(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _itemAvailabilities;                                      // 0x0030(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _itemAddonAvailabilities;                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _customizationItemAvailabilities;                         // 0x0050(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _characterAvailabilities;                                 // 0x0060(0x0010) (ZeroConstructor)
	bool                                               _allowDlcContent;                                         // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _privateMatch;                                            // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.AnimationMontageDescriptor
// 0x0020
struct FAnimationMontageDescriptor
{
	struct FName                                       MontageID;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FName>                               Tags;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MontagePlaybackDefinition
// 0x0028
struct FMontagePlaybackDefinition
{
	struct FAnimationMontageDescriptor                 Descriptor;                                               // 0x0000(0x0020) (BlueprintVisible, BlueprintReadOnly)
	float                                              PlayRate;                                                 // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Follower;                                                 // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ClippedActor
// 0x0060
struct FClippedActor
{
	TArray<TWeakObjectPtr<class UPrimitiveComponent>>  DisplayComponents;                                        // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
	TMap<class UPrimitiveComponent*, TWeakObjectPtr<class UPrimitiveComponent>> CollidingPrimitives;                                      // 0x0010(0x0050) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.ActorSpawnerProperties
// 0x0038
struct FActorSpawnerProperties
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.ActorSpawnerProperties.SceneElement
	float                                              Weight;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SpawnerElement
// 0x0010
struct FSpawnerElement
{
	TArray<struct FActorSpawnerProperties>             ObjectsToBeSpawned;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ActorVariationElements
// 0x0038
struct FActorVariationElements
{
	ETileVariation                                     Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x30];                                      // 0x0001(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.ActorVariationElements.Element
};

// ScriptStruct DeadByDaylight.ArmIKSensorDatum
// 0x0028
struct FArmIKSensorDatum
{
	struct FName                                       ShoulderBoneName;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.AssetLibraryLoader
// 0x0028
struct FAssetLibraryLoader
{
	class UAssetLibrary*                               AssetLibrary;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.AtlCookedMapDescription
// 0x0040
struct FAtlCookedMapDescription
{
	struct FName                                       ThemeName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x30];                                      // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.AtlCookedMapDescription.MapAsset
};

// ScriptStruct DeadByDaylight.BlockableReplicatedDatum
// 0x0020
struct FBlockableReplicatedDatum
{
	TArray<TWeakObjectPtr<class UObject>>              Sources;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class ADBDPlayer>>           BlockedPlayers;                                           // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.BorderElements
// 0x0018
struct FBorderElements
{
	EDirection                                         Direction;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UActorSpawner*>                       Elements;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CameraAttachment
// 0x0018
struct FCameraAttachment
{
	class USceneComponent*                             Parent;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SurvivorSleepiness
// 0x0008
struct FSurvivorSleepiness
{
	float                                              _sleepiness;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              _sleepThreshold;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.DBDTimer
// 0x0028
struct FDBDTimer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              _startTime;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               _startTimeDirty;                                          // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FFloat_NetQuantize8                         _timeLeft;                                                // 0x0010(0x0008)
	bool                                               _replicateTimeLeft;                                       // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0019(0x000B) MISSED OFFSET
	float                                              _interpSpeed;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.Offering
// 0x0178
struct FOffering
{
	unsigned char                                      UnknownData00[0x178];                                     // 0x0000(0x0178) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EffectCameraTypeSettings
// 0x0003
struct FEffectCameraTypeSettings
{
	ECustomizationCategory                             Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisibilityInFirstPerson;                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisibilityInThirdPerson;                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ScoreEventData
// 0x0018
struct FScoreEventData
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PercentToAward;                                           // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UObject*                                     CustomObjectParameter;                                    // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.InteractionPlayerProperties
// 0x0048
struct FInteractionPlayerProperties
{
	struct FVector_NetQuantize                         AverageVelocityAtStart;                                   // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FVector_NetQuantize                         PlayerPositionAtStart;                                    // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	class ADBDPlayer*                                  Requester;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector_NetQuantize                         SnapPositionAtStart;                                      // 0x0020(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FRotator                                    SnapRotationAtStart;                                      // 0x002C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SnapDistanceAtStart;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SnapTimeAtStart;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               shouldSnapPosition;                                       // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.AnimData
// 0x0001
struct FAnimData
{
	ECharacterStance                                   Stance;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterToolData
// 0x0070
struct FCharacterToolData
{
	EPlayerRole                                        Role;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                characterId;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       OutfitId;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       CharmId;                                                  // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SurvivorHead;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0020(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SurvivorTorso;                                            // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x002C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SurvivorLegs;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0038(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       KillerHead;                                               // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       KillerBody;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0050(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       KillerWeapon;                                             // 0x005C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.NamedButton
// 0x0018
struct FNamedButton
{
	int                                                ClickCounter;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ChargeData
// 0x0010
struct FChargeData
{
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ChargeAmount;                                             // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BypassSkillCheckFail;                                     // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CharmAttacherAnimationTweak
// 0x0020
struct FCharmAttacherAnimationTweak
{
	struct FVector                                     AttachPointTranslation;                                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AttachPointRotation;                                      // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ConstraintType;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MagicTweakingFloat;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharmSlot
// 0x00B0
struct FCharmSlot
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x30];                                      // 0x0004(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.CharmSlot.CharmAttacherClass
	struct FCharmAttacherAnimationTweak                DefaultAnimationTweak;                                    // 0x0038(0x0020) (Edit)
	TMap<struct FName, struct FCharmAttacherAnimationTweak> AnimationTweakByTag;                                      // 0x0058(0x0050) (Edit, ZeroConstructor)
	class ACharmAttacher*                              CharmAttacherSpawned;                                     // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.TargetFocusTimer
// 0x0038
struct FTargetFocusTimer
{
	class ACamperPlayer*                               _camper;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Cinematic
// 0x0058
struct FCinematic
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.Cinematic.Source
	struct FVector2D                                   SourceSize;                                               // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               SourceHasAudio;                                           // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0039(0x001F) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MaterialOriginalState
// 0x0018
struct FMaterialOriginalState
{
	class UMeshComponent*                              MeshWithChangedMaterials;                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OriginalMaterial;                                         // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.DataTableDropdown
// 0x0030
struct FDataTableDropdown
{
	struct FName                                       RowValue;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     DataTableName;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ColumnName;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0020(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData03[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CustomizedMeshPart
// 0x0048
struct FCustomizedMeshPart
{
	ECustomizationCategory                             Category;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDataTableDropdown                          DefaultItemId;                                            // 0x0008(0x0030) (Edit)
	struct FName                                       SocketName;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0038(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MapMeshToAkAudioEvent
// 0x0040
struct FMapMeshToAkAudioEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.MapMeshToAkAudioEvent.Mesh
	class UAkAudioEvent*                               SoundEvent;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDelayBetweenEvents;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDelayBetweenObject;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.MapSoundsToAvoid
// 0x0010
struct FMapSoundsToAvoid
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBD_SoundSpawnerData
// 0x0028
struct FDBD_SoundSpawnerData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty DeadByDaylight.DBD_SoundSpawnerData.TriggerObject
	bool                                               TriggerVisualForCamper;                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerVisualForSlasher;                                  // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0012(0x0010) UNKNOWN PROPERTY: ArrayProperty DeadByDaylight.DBD_SoundSpawnerData.ActorToSpawnVisual
};

// ScriptStruct DeadByDaylight.AuthenticationInfo
// 0x0018
struct FAuthenticationInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SpawnInfo
// 0x0040
struct FSpawnInfo
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AffectedMaterialAndVariant
// 0x0010
struct FAffectedMaterialAndVariant
{
	class UMaterialInterface*                          AffectedMaterial;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaterialVariant;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CustomTransformation
// 0x0014
struct FCustomTransformation
{
	bool                                               UseCustomTransformation;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   CustomScale;                                              // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CustomTranslation;                                        // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ItemUIData
// 0x0068
struct FItemUIData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0018(0x0018) (Edit)
	TArray<struct FString>                             IconFilePathList;                                         // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FCustomTransformation                       CustomTransformation;                                     // 0x0040(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FString>                             IconUnlicensedFilePathListOverride;                       // 0x0058(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ItemAvailability
// 0x0030
struct FItemAvailability
{
	bool                                               Disabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     DLCId;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                CloudInventoryId;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     CommunityId;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CustomizationData
// 0x00B0 (0x00B8 - 0x0008)
struct FCustomizationData : public FDBDTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                AssociatedCharacter;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPlayerRole                                        AssociatedRole;                                           // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EItemRarity                                        Rarity;                                                   // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	struct FItemUIData                                 UIData;                                                   // 0x0020(0x0068) (Edit)
	struct FItemAvailability                           Availability;                                             // 0x0088(0x0030) (Edit)
};

// ScriptStruct DeadByDaylight.MaterialReplacerData
// 0x0060
struct FMaterialReplacerData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.MaterialReplacerData.From
	unsigned char                                      UnknownData01[0x30];                                      // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.MaterialReplacerData.To
};

// ScriptStruct DeadByDaylight.MaterialReplacerArray
// 0x0010
struct FMaterialReplacerArray
{
	TArray<struct FMaterialReplacerData>               MaterialsMap;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ConditionalMaterialReplacer
// 0x0060
struct FConditionalMaterialReplacer
{
	struct FName                                       ItemTag;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TMap<struct FName, struct FMaterialReplacerArray>  ConditionalMaterials;                                     // 0x0010(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BPAttachementSocketData
// 0x00E0
struct FBPAttachementSocketData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.BPAttachementSocketData.AttachementBlueprint
	unsigned char                                      UnknownData01[0x30];                                      // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.BPAttachementSocketData.SkeletalMesh
	struct FName                                       SocketName;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0060(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FMaterialReplacerData>               MaterialsMap;                                             // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FConditionalMaterialReplacer                ConditionalMaterialReplacer;                              // 0x0080(0x0060) (Edit)
};

// ScriptStruct DeadByDaylight.UnlockSaveStatCondition
// 0x0014
struct FUnlockSaveStatCondition
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ValueRequired;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isCharacterSpecific;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CustomSoundFXData
// 0x0018
struct FCustomSoundFXData
{
	EAudioCustomizationCategory                        AudioCategory;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     switchState;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CustomAnimData
// 0x0060
struct FCustomAnimData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.CustomAnimData.MenuAnimationBlueprint
	unsigned char                                      UnknownData01[0x30];                                      // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.CustomAnimData.InGameAnimationBlueprint
};

// ScriptStruct DeadByDaylight.CustomizationItemData
// 0x01D8 (0x0290 - 0x00B8)
struct FCustomizationItemData : public FCustomizationData
{
	ECustomizationCategory                             Category;                                                 // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x30];                                      // 0x00B9(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.CustomizationItemData.ItemMesh
	unsigned char                                      UnknownData02[0x30];                                      // 0x00F0(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.CustomizationItemData.ItemBlueprint
	TArray<struct FMaterialReplacerData>               MaterialsMap;                                             // 0x0120(0x0010) (Edit, ZeroConstructor)
	struct FConditionalMaterialReplacer                ConditionalMaterialReplacer;                              // 0x0130(0x0060) (Edit)
	TArray<struct FName>                               SkeletalComponentTags;                                    // 0x0190(0x0010) (Edit, ZeroConstructor)
	struct FText                                       CollectionName;                                           // 0x01A0(0x0018) (Edit)
	struct FText                                       CollectionDescription;                                    // 0x01B8(0x0018) (Edit)
	int                                                PrestigeUlockLevel;                                       // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	struct FString                                     PrestigeUnlockDate;                                       // 0x01D8(0x0010) (ZeroConstructor)
	struct FName                                       EventId;                                                  // 0x01E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01E8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData05[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	TArray<struct FBPAttachementSocketData>            SocketAttachements;                                       // 0x01F8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FUnlockSaveStatCondition>            UnlockingConditions;                                      // 0x0208(0x0010) (Edit, ZeroConstructor)
	bool                                               IsInStore;                                                // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsInNonViolentBuild;                                      // 0x0219(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvailableInAtlantaBuild;                                // 0x021A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x021B(0x0001) MISSED OFFSET
	uint32_t                                           PlatformExclusiveFlag;                                    // 0x021C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCustomSoundFXData>                  CustomSFXs;                                               // 0x0220(0x0010) (Edit, ZeroConstructor)
	struct FCustomAnimData                             AnimationData;                                            // 0x0230(0x0060) (Edit)
};

// ScriptStruct DeadByDaylight.DBDCustomizationToolData
// 0x0AB8
struct FDBDCustomizationToolData
{
	struct FCustomizationItemData                      Head;                                                     // 0x0000(0x0290) (Edit)
	struct FCustomizationItemData                      Torso;                                                    // 0x0290(0x0290) (Edit)
	struct FCustomizationItemData                      Leg;                                                      // 0x0520(0x0290) (Edit)
	struct FCustomizationItemData                      Bodies;                                                   // 0x07B0(0x0290) (Edit)
	struct FString                                     CharacterName;                                            // 0x0A40(0x0010) (Edit, ZeroConstructor)
	struct FString                                     RoleName;                                                 // 0x0A50(0x0010) (Edit, ZeroConstructor)
	class USkeletalMesh*                               BaseSkeleton;                                             // 0x0A60(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // 0x0A68(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x0A70(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StrHeadDLC;                                               // 0x0A78(0x0010) (Edit, ZeroConstructor)
	struct FString                                     StrTorsoDLC;                                              // 0x0A88(0x0010) (Edit, ZeroConstructor)
	struct FString                                     StrLegDLC;                                                // 0x0A98(0x0010) (Edit, ZeroConstructor)
	struct FString                                     StrBodiesDLC;                                             // 0x0AA8(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.RoleDropdown
// 0x0002
struct FRoleDropdown
{
	bool                                               ShowRoleSelection;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPlayerRole                                        Role;                                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterDropdown
// 0x0006 (0x0008 - 0x0002)
struct FCharacterDropdown : public FRoleDropdown
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                characterId;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterCustomizationDropdown
// 0x0054 (0x005C - 0x0008)
struct FCharacterCustomizationDropdown : public FCharacterDropdown
{
	struct FName                                       OutfitId;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SurvivorHead;                                             // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SurvivorTorso;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0020(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       SurvivorLegs;                                             // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x002C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       KillerHead;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0038(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       KillerBody;                                               // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       KillerWeapon;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0050(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.CharmDropdown
// 0x000E (0x0010 - 0x0002)
struct FCharmDropdown : public FRoleDropdown
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       CharmId;                                                  // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0002(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.DebugLoadoutAddon
// 0x0030
struct FDebugLoadoutAddon
{
	struct FDataTableDropdown                          addonID;                                                  // 0x0000(0x0030) (Edit)
};

// ScriptStruct DeadByDaylight.DebugLoadoutPerk
// 0x0038
struct FDebugLoadoutPerk
{
	struct FDataTableDropdown                          PerkId;                                                   // 0x0000(0x0030) (Edit)
	int                                                PerkLevel;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CamperLoadout
// 0x00E0
struct FCamperLoadout
{
	struct FCharacterCustomizationDropdown             camper;                                                   // 0x0000(0x005C) (Edit)
	struct FCharmDropdown                              Slot0_CharmID;                                            // 0x005C(0x0010) (Edit)
	struct FCharmDropdown                              Slot1_CharmID;                                            // 0x006C(0x0010) (Edit)
	struct FCharmDropdown                              Slot2_CharmID;                                            // 0x007C(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FDataTableDropdown                          ItemId;                                                   // 0x0090(0x0030) (Edit)
	TArray<struct FDebugLoadoutAddon>                  AddonIDs;                                                 // 0x00C0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugLoadoutPerk>                   Perks;                                                    // 0x00D0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SlasherLoadout
// 0x0080
struct FSlasherLoadout
{
	struct FCharacterCustomizationDropdown             Slasher;                                                  // 0x0000(0x005C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FDebugLoadoutAddon>                  PowerAddonIDs;                                            // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugLoadoutPerk>                   Perks;                                                    // 0x0070(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PerkLevelDefinition
// 0x0004
struct FPerkLevelDefinition
{
	int                                                CountRequired;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ForceSpawnTileData
// 0x0020
struct FForceSpawnTileData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                matrixX;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                matrixY;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rotation;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ParadiseData
// 0x0040
struct FParadiseData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SharedAuthenticationTokenInformation
// 0x0020
struct FSharedAuthenticationTokenInformation
{
	struct FString                                     LoginProvider;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     AuthToken;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.KeyDisplayInfo
// 0x0020
struct FKeyDisplayInfo
{
	struct FString                                     KeyDisplayName;                                           // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PromptType;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.DBDOutlineRenderStrategySelector
// 0x0010
struct FDBDOutlineRenderStrategySelector
{
	class AActor*                                      _actorForStrategy;                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.OutlineConfiguration
// 0x0020
struct FOutlineConfiguration
{
	TArray<class UMaterialInterface*>                  TranslucencyMaterials;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  LocallyControlledTranslucencyMaterials;                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct DeadByDaylight.OutlineColourConfiguration
// 0x0010
struct FOutlineColourConfiguration
{
	struct FLinearColor                                ColourValue;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.GamePersistentData
// 0x00E0
struct FGamePersistentData
{
	int                                                PlayerCount;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                spectatorCount;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGamePresetData                             GamePresetData;                                           // 0x0008(0x0078)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0080(0x0060) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlayerLoadoutData
// 0x0098
struct FPlayerLoadoutData
{
	struct FName                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FName>                               ItemAddOns;                                               // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FName>                               CamperPerks;                                              // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        CamperPerkLevels;                                         // 0x0030(0x0010) (ZeroConstructor)
	struct FName                                       CamperFavor;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0040(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Power;                                                    // 0x004C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x004C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FName>                               PowerAddOns;                                              // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FName>                               SlasherPerks;                                             // 0x0068(0x0010) (ZeroConstructor)
	TArray<int>                                        SlasherPerkLevels;                                        // 0x0078(0x0010) (ZeroConstructor)
	struct FName                                       SlasherFavor;                                             // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData05[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DailyRitualInstance
// 0x0078
struct FDailyRitualInstance
{
	struct FName                                       RitualKey;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                DifficultyTier;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<EDBDScoreTypes>                             TrackedEvents;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FGameplayTag>                        TrackedGameEvents;                                        // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        CharacterIDs;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EPlayerRole>                                Roles;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Progress;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DisplayThreshold;                                         // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ExpReward;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNew;                                                    // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	struct FDateTime                                   DateAssigned;                                             // 0x0068(0x0008) (ZeroConstructor)
	int                                                NbGameElapsed;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileDataShared
// 0x0058
struct FPlayerSavedProfileDataShared
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     SteamId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	int                                                _slasherPips;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                _camperPips;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedCamperIndex;                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedSlasherIndex;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SelectedCharacterCustomization;                           // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FCharmIdSlot>                        SelectedCharacterCharms;                                  // 0x0040(0x0010) (ZeroConstructor)
	int                                                CamperStreak;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DailyRitualContainer
// 0x0028
struct FDailyRitualContainer
{
	struct FDateTime                                   LastRitualReceivedDate;                                   // 0x0000(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastRitualPopupDate;                                      // 0x0008(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastRitualDismissedDate;                                  // 0x0010(0x0008) (ZeroConstructor)
	TArray<struct FDailyRitualInstance>                Rituals;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.FearMarketItemInstance
// 0x0018
struct FFearMarketItemInstance
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Cost;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloodpointConversion;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Purchased;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.FearMarketOfferingInstance
// 0x0020
struct FFearMarketOfferingInstance
{
	TArray<struct FFearMarketItemInstance>             ObjectsForSale;                                           // 0x0000(0x0010) (ZeroConstructor)
	struct FDateTime                                   StartTime;                                                // 0x0010(0x0008) (ZeroConstructor)
	struct FDateTime                                   EndTime;                                                  // 0x0018(0x0008) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BloodwebNodeProperties
// 0x0018
struct FBloodwebNodeProperties
{
	EBloodwebNodeContentType                           ContentType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemRarity                                        Rarity;                                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FString>                             Tags;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BloodwebNodeGate
// 0x0000 (0x0008 - 0x0008)
struct FBloodwebNodeGate : public FDBDTableRowBase
{

};

// ScriptStruct DeadByDaylight.BloodwebChest
// 0x0030 (0x0038 - 0x0008)
struct FBloodwebChest : public FDBDTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       EventId;                                                  // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EItemRarity                                        Rarity;                                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<float>                                      GivenItemRarity;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BloodwebNode
// 0x0088
struct FBloodwebNode
{
	struct FBloodwebNodeProperties                     Properties;                                               // 0x0000(0x0018)
	TArray<struct FBloodwebNodeGate>                   Gates;                                                    // 0x0018(0x0010) (ZeroConstructor)
	EBloodwebNodeState                                 State;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     nodeID;                                                   // 0x0030(0x0010) (ZeroConstructor)
	struct FName                                       ContentId;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0040(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FBloodwebChest                              BloodwebChest;                                            // 0x0050(0x0038)
};

// ScriptStruct DeadByDaylight.BloodWebRingPersistentData
// 0x0010
struct FBloodWebRingPersistentData
{
	TArray<struct FBloodwebNode>                       NodeData;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BloodWebPersistentData
// 0x0040
struct FBloodWebPersistentData
{
	int                                                VersionNumber;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBloodWebRingPersistentData>         RingData;                                                 // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               Paths;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     EntityCurrentNode;                                        // 0x0028(0x0010) (ZeroConstructor)
	struct FDateTime                                   GenerationDate;                                           // 0x0038(0x0008) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileCumulativeData
// 0x0030
struct FPlayerSavedProfileCumulativeData
{
	bool                                               FirstTimePlaying;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                CumulativeMatches;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsSurvivor;                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsKiller;                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   LastMatchTimestamp;                                       // 0x0010(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastSessionTimestamp;                                     // 0x0018(0x0008) (ZeroConstructor)
	int                                                CumulativeSessions;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FTimespan                                   CumulativePlaytime;                                       // 0x0028(0x0008) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SavedStatsData
// 0x0014
struct FSavedStatsData
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterSavedInventoryData
// 0x0010
struct FCharacterSavedInventoryData
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.AssignedPerkProperties
// 0x0014
struct FAssignedPerkProperties
{
	struct FName                                       PerkId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                PerkLevel;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsTeachable;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SavedCharacterLevelData
// 0x0018
struct FSavedCharacterLevelData
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HasPerksBeenSelected;                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FAssignedPerkProperties>             PerkSelection;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CharacterSavedProfileData
// 0x0158
struct FCharacterSavedProfileData
{
	int                                                BloodWebLevel;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PrestigeLevel;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CharacterExperience;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimesConfronted;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDateTime>                           PrestigeEarnedDates;                                      // 0x0010(0x0010) (ZeroConstructor)
	struct FBloodWebPersistentData                     BloodWebData;                                             // 0x0020(0x0040)
	struct FPlayerLoadoutData                          CharacterLoadoutData;                                     // 0x0060(0x0098)
	TArray<struct FCharacterSavedInventoryData>        InventoryData;                                            // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FSavedCharacterLevelData>            CharacterLevelData;                                       // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FSavedStatsData>                     StatProgression;                                          // 0x0118(0x0010) (ZeroConstructor)
	TArray<struct FName>                               CurrentCustomization;                                     // 0x0128(0x0010) (ZeroConstructor)
	TArray<struct FCharmIdSlot>                        CurrentCharmCustomization;                                // 0x0138(0x0010) (ZeroConstructor)
	TArray<struct FName>                               UniquePerksAdded;                                         // 0x0148(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SpecialEventSavedData
// 0x0010
struct FSpecialEventSavedData
{
	TArray<int>                                        SeenCinematics;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileDataLocal
// 0x03C0
struct FPlayerSavedProfileDataLocal
{
	int                                                Tokens;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               offerings;                                                // 0x0008(0x0010) (ZeroConstructor)
	TMap<struct FName, bool>                           PageVisited;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<struct FName, bool>                           ChatVisible;                                              // 0x0068(0x0050) (ZeroConstructor)
	TMap<struct FName, bool>                           OnBoardingCompleted;                                      // 0x00B8(0x0050) (ZeroConstructor)
	int                                                ConsecutiveMatchStreak;                                   // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Wins;                                                     // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Losses;                                                   // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	uint64_t                                           CurrentSeasonTicks;                                       // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDailyRitualContainer                       DailyRituals;                                             // 0x0120(0x0028)
	struct FFearMarketOfferingInstance                 FearMarket;                                               // 0x0148(0x0020)
	struct FPlayerLoadoutData                          LastConnectedLoadout;                                     // 0x0168(0x0098)
	int                                                LastConnectedCharacterIndex;                              // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	struct FDateTime                                   DisconnectPenaltyTime;                                    // 0x0208(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastMatchEndTime;                                         // 0x0210(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastMatchStartTime;                                       // 0x0218(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastKillerMatchEndTime;                                   // 0x0220(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastSurvivorMatchEndTime;                                 // 0x0228(0x0008) (ZeroConstructor)
	struct FBloodWebPersistentData                     BloodStoreKillers;                                        // 0x0230(0x0040)
	struct FBloodWebPersistentData                     BloodStoreSurvivors;                                      // 0x0270(0x0040)
	bool                                               CrossplayAllowed;                                         // 0x02B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	int                                                _bloodpoints;                                             // 0x02B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                _bonusBloodpoints;                                        // 0x02B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                _fearTokens;                                              // 0x02BC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   _ongoingGameTime;                                         // 0x02C0(0x0008) (ZeroConstructor)
	struct FPlayerSavedProfileCumulativeData           _cumulativeData;                                          // 0x02C8(0x0030)
	TArray<struct FSavedStatsData>                     _savedPlayerStats;                                        // 0x02F8(0x0010) (ZeroConstructor)
	bool                                               _fearTokensMigrated;                                      // 0x0308(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _hasBeenGivenKillerTutorialEndReward;                     // 0x0309(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _hasBeenGivenSurvivorTutorialEndReward;                   // 0x030A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x030B(0x0005) MISSED OFFSET
	TMap<int, struct FCharacterSavedProfileData>       _characterData;                                           // 0x0310(0x0050) (ZeroConstructor)
	TArray<struct FString>                             _ownedContent;                                            // 0x0360(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FSpecialEventSavedData>  _specialEvent;                                            // 0x0370(0x0050) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ConsoleUserSettings
// 0x0040
struct FConsoleUserSettings
{
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	int                                                MainVolume;                                               // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                MenuMusicVolume;                                          // 0x0024(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               UseHeadphones;                                            // 0x0028(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HideTutorial;                                             // 0x0029(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               MuteOnFocusLost;                                          // 0x002A(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	int                                                KillerControllerSensitivity;                              // 0x002C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SurvivorControllerSensitivity;                            // 0x0030(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               InvertY;                                                  // 0x0034(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                HighestWeightSeenNews;                                    // 0x0038(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileData
// 0x0468
struct FPlayerSavedProfileData
{
	struct FString                                     PlayerUID;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FPlayerSavedProfileDataShared               SharedData;                                               // 0x0010(0x0058)
	struct FPlayerSavedProfileDataLocal                LocalData;                                                // 0x0068(0x03C0)
	struct FConsoleUserSettings                        ConsoleUserSettings;                                      // 0x0428(0x0040)
};

// ScriptStruct DeadByDaylight.PlayerPersistentData
// 0x06D8
struct FPlayerPersistentData
{
	EPlayerRole                                        GameRole;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPlayerLoadoutData                          StartingLoadout;                                          // 0x0008(0x0098) (Transient)
	struct FPlayerLoadoutData                          CurrentLoadout;                                           // 0x00A0(0x0098) (Transient)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0138(0x0098) MISSED OFFSET
	struct FDailyRitualInstance                        CachedAvailableRitual;                                    // 0x01D0(0x0078) (Transient)
	struct FPlayerSavedProfileData                     SavedData;                                                // 0x0248(0x0468)
	EPlatformFlag                                      PlayerPlatform;                                           // 0x06B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06B0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                PreviousSlasherPips;                                      // 0x06B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PreviousCamperPips;                                       // 0x06B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PreviousBloodpoints;                                      // 0x06BC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           _playerId;                                                // 0x06C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	struct FString                                     _contentVersion;                                          // 0x06C8(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.CloudInventoryItem
// 0x0010
struct FCloudInventoryItem
{
	int                                                DefinitionId;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	uint64_t                                           InstanceId;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterStateData
// 0x0020
struct FCharacterStateData
{
	int                                                _pips;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       _powerId;                                                 // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FName>                               _addonIds;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerStateData
// 0x0038
struct FPlayerStateData
{
	int                                                CharacterLevel;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EquipedFavorId;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FName>                               EquipedPerkIds;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        EquipedPerkLevels;                                        // 0x0020(0x0010) (ZeroConstructor)
	bool                                               IsLeavingMatch;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameState                                         _playerGameState;                                         // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                _prestigeLevel;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SkillCheckInteractionData
// 0x0020
struct FSkillCheckInteractionData
{
	bool                                               IsActive;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              HitAreaStart;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitAreaLength;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BonusAreaLength;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHexed;                                                  // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                xOffset;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                yOffset;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AwardedScore
// 0x0010
struct FAwardedScore
{
	struct FName                                       ScoreTypeId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              BloodpointsAwarded;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AwardedScores
// 0x0010
struct FAwardedScores
{
	TArray<struct FAwardedScore>                       Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.UserGameStats
// 0x00B0
struct FUserGameStats
{
	bool                                               Disconnected;                                             // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                FearTokens;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Skulls;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TMap<EDBDScoreCategory, int>                       BonusBloodpoints;                                         // 0x0010(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0060(0x0050) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.OngoingScoreData
// 0x0030
struct FOngoingScoreData
{
	EDBDScoreTypes                                     scoreType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGameplayTag                                scoreTypeTag;                                             // 0x0004(0x000C)
	float                                              TimeSinceScore;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ApplyScoreTimeout;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedPercent;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     CustomObjectParameter;                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.DBDRecentGameplayEvents
// 0x0050
struct FDBDRecentGameplayEvents
{
	TMap<EDBDScoreTypes, struct FDateTime>             _recentGameplayEvents;                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.EffectsLocatorTargets
// 0x0008
struct FEffectsLocatorTargets
{
	class UClass*                                      TargetActorClass;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.FirecrackerEffectData
// 0x0010
struct FFirecrackerEffectData
{
	class AFirecracker*                                Firecracker;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInRange;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstTime;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.FootStep
// 0x0028
struct FFootStep
{
	class UDecalComponent*                             Decal;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GameEventDispatcherHandleBP
// 0x0020
struct FGameEventDispatcherHandleBP
{
	struct FGameplayTag                                Filter;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible)
	struct FScriptDelegate                             GameEventDelegate;                                        // 0x000C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.DamageData
// 0x0020
struct FDamageData
{
	bool                                               _isDamaged;                                               // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isIntense;                                               // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	TWeakObjectPtr<class ADBDPlayer>                   _lastDamageChangeSource;                                  // 0x0004(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.UniquelyIdentifiedAnalytic
// 0x0040 (0x0058 - 0x0018)
struct FUniquelyIdentifiedAnalytic : public FBaseSingleStructIndexAnalytics
{
	struct FString                                     MirrorsId;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     ClientId;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     platform;                                                 // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     BackendEnv;                                               // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.GhostKillerAnalytics
// 0x0048 (0x00A0 - 0x0058)
struct FGhostKillerAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	int                                                Stalk;                                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StalkStealth;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stalk25;                                                  // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stalk50;                                                  // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stalk75;                                                  // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stalk100;                                                 // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StalkLean25;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StalkLean50;                                              // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StalkLean75;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StalkLean100;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Lean;                                                     // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DownExposedSurvivor;                                      // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInStealthMode;                                        // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.InboxMessageUIData
// 0x0060
struct FInboxMessageUIData
{
	struct FString                                     MessageId;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   ReceivedTime;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EInboxMessageUIType                                MessageType;                                              // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     MessageTitle;                                             // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MessageBody;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EInboxMessageUIState                               MessageState;                                             // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FClaimableInboxMessage                      AttachedClaimable;                                        // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct DeadByDaylight.Lock
// 0x0008
struct FLock
{
	TWeakObjectPtr<class UObject>                      _lockingObject;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.LightingSpecifics
// 0x0030
struct FLightingSpecifics
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.LightingSpecifics.LightBlueprint
};

// ScriptStruct DeadByDaylight.SceneLightingDescription
// 0x00D0
struct FSceneLightingDescription
{
	struct FName                                       ThemeName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FLightingSpecifics                          LightingDetailsLowMedium;                                 // 0x0010(0x0030) (Edit)
	struct FLightingSpecifics                          LightingDetailsHighUltra;                                 // 0x0040(0x0030) (Edit)
	struct FLightingSpecifics                          LightingAtlanta;                                          // 0x0070(0x0030) (Edit)
	unsigned char                                      UnknownData02[0x30];                                      // 0x00A0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.SceneLightingDescription.TextureCube
};

// ScriptStruct DeadByDaylight.LoudNoiseIndicatorData
// 0x0020
struct FLoudNoiseIndicatorData
{
	class UStaticMeshComponent*                        MeshMask;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DistortionMesh;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.TileProperties
// 0x0078
struct FTileProperties
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.HookAnalyticsController
// 0x0100
struct FHookAnalyticsController
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0000(0x0100) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MontageInstanceInfo
// 0x0030
struct FMontageInstanceInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.RarityTexture
// 0x0030
struct FRarityTexture
{
	struct FName                                       Type;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EItemRarity                                        Rarity;                                                   // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FSoftObjectPath                             Texture;                                                  // 0x0010(0x0020) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.OfferingTypeTexture
// 0x0030
struct FOfferingTypeTexture
{
	struct FName                                       Type;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             TextureBack;                                              // 0x0010(0x0020) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.OfferingRevealDelays
// 0x0008
struct FOfferingRevealDelays
{
	EOfferingSequenceState                             RevealState;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Delay;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SpecialEventUIInfo
// 0x0050
struct FSpecialEventUIInfo
{
	struct FString                                     EventId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     EventBannerFrameLabel;                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FText                                       EventName;                                                // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               IsPastEvent;                                              // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     BloodwebCollectSoundEvent;                                // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.InventorySlotData
// 0x00F8
struct FInventorySlotData
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     IconFilePath;                                             // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     ParentDisplayName;                                        // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     Description;                                              // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<EPerkCategory>                              PerkCategory;                                             // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	EInventoryItemType                                 ItemType;                                                 // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EItemRarity                                        Rarity;                                                   // 0x0061(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EStatusEffectType                                  StatusEffectType;                                         // 0x0062(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	int                                                Level;                                                    // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Subtitle;                                                 // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                StackCount;                                               // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Disabled;                                                 // 0x007C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsTeachablePerk;                                          // 0x007D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSlasherPerk;                                            // 0x007E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsPerkAvailableInFearMarket;                              // 0x007F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsPerkAvailableInBloodWeb;                                // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                TeachableLevel;                                           // 0x0084(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     DlcDisplayName;                                           // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               IsLocked;                                                 // 0x0098(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FSpecialEventUIInfo                         EventInfo;                                                // 0x00A0(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient)
	int                                                UnlockableLevel;                                          // 0x00F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDBidirectionalTimer
// 0x0000 (0x0028 - 0x0028)
struct FDBDBidirectionalTimer : public FDBDTimer
{
	float                                              _startTime;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               _startTimeDirty;                                          // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FFloat_NetQuantize8                         _timeLeft;                                                // 0x0010(0x0008)
	bool                                               _replicateTimeLeft;                                       // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0019(0x000B) MISSED OFFSET
	float                                              _interpSpeed;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.PhaseWalkInfo
// 0x0020
struct FPhaseWalkInfo
{
	bool                                               IsActivePhaseWalking;                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassivePhaseWalking;                                    // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInteractionPhaseWalking;                                // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     HuskLocation;                                             // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    HuskRotation;                                             // 0x0010(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeleportToHusk;                                           // 0x001C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PortalRestrictedLocation
// 0x0010
struct FPortalRestrictedLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceSquared;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SectionLenghtsProperties
// 0x0008
struct FSectionLenghtsProperties
{
	EDirection                                         Direction;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Lenght;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.QuadrantSpawnTypeProperties
// 0x0018
struct FQuadrantSpawnTypeProperties
{
	EQuadrantSpawnType                                 QuadrantSpawnType;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSectionLenghtsProperties>           SectionLenghts;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.WeightedItem
// 0x0038
struct FWeightedItem
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.WeightedItem.Element
	float                                              Weight;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.QuadrantSpawnItem
// 0x0018
struct FQuadrantSpawnItem
{
	EQuadrantSpawnType                                 Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FWeightedItem>                       Elements;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.QuadrantSpawnCategories
// 0x0020
struct FQuadrantSpawnCategories
{
	struct FName                                       QuadrantSpawnTag;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FQuadrantSpawnItem>                  Items;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ElementSubstitutions
// 0x0010
struct FElementSubstitutions
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SubstitutionElements
// 0x0060
struct FSubstitutionElements
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.SubstitutionElements._elementToReplace
	unsigned char                                      UnknownData01[0x30];                                      // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.SubstitutionElements._elementToReplaceWith
};

// ScriptStruct DeadByDaylight.GameplayElementSubstitutions
// 0x0018 (0x0028 - 0x0010)
struct FGameplayElementSubstitutions : public FElementSubstitutions
{
	TArray<struct FSubstitutionElements>               _replacements;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EGameplayElementType                               _type;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ThemeProperties
// 0x0080
struct FThemeProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Weather;                                                  // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     TilePath;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MapPath;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ThemeNumber;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0040(0x0018) (Edit, BlueprintVisible)
	EThemeColorId                                      ThemeColorId;                                             // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EOfferingEffectType                                ThemeSelectionOfferingEffectType;                         // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	TArray<struct FGameplayElementSubstitutions>       SubstitutionElements;                                     // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DlcIDString;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.KillerItemProperty
// 0x0040
struct FKillerItemProperty
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.KillerItemProperty.Object
	class UCurveFloat*                                 Population;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGameplayElementType                               _gameplayElementType;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.KillerItemDependencies
// 0x0018
struct FKillerItemDependencies
{
	EKillerAbilities                                   killerAbility;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FKillerItemProperty>                 Items;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SurvivorItemProperties
// 0x000C
struct FSurvivorItemProperties
{
	ECollectableCategory                               Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPopulation;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.EscapeStrategyProperty
// 0x0018
struct FEscapeStrategyProperty
{
	EscapeStrategyType                                 Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCurveFloat*                                 Population;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EscapeTypeObjects
// 0x0018
struct FEscapeTypeObjects
{
	EscapeStrategyType                                 Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0001(0x0010) UNKNOWN PROPERTY: ArrayProperty DeadByDaylight.EscapeTypeObjects.EscapeObjects
};

// ScriptStruct DeadByDaylight.GameplayElementsPopulation
// 0x0048
struct FGameplayElementsPopulation
{
	EGameplayElementType                               Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x30];                                      // 0x0001(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.GameplayElementsPopulation.GameplayElementBlueprint
	int                                                MinPopulation;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxPopulation;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpawnPass;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ManagedGameplayElementsPopulation
// 0x0048
struct FManagedGameplayElementsPopulation
{
	EGameplayElementType                               Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x30];                                      // 0x0001(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.ManagedGameplayElementsPopulation.GameplayElementBlueprint
	float                                              MinDistance;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinPopulation;                                            // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPopulation;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SurvivorGroupingProbability
// 0x0008
struct FSurvivorGroupingProbability
{
	ESurvivorGrouping                                  Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Probability;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.DependencyElementSubstitutions
// 0x0018 (0x0028 - 0x0010)
struct FDependencyElementSubstitutions : public FElementSubstitutions
{
	TArray<struct FSubstitutionElements>               _replacements;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ETileSpawnPointType                                _type;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DependencyElementAddition
// 0x0038
struct FDependencyElementAddition
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.DependencyElementAddition._object
	ETileSpawnPointType                                _type;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                _numberToAdd;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.GameplayElementAddition
// 0x0038
struct FGameplayElementAddition
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.GameplayElementAddition._elementToAdd
	EGameplayElementType                               _spawnerType;                                             // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                _numberToAdd;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.EventSubstitionData
// 0x0058
struct FEventSubstitionData
{
	struct FName                                       _name;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               _allowSubstitutionInKYF;                                  // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                _baseNumOfSubstitutionPerGroup;                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FGameplayElementSubstitutions>       _gameplaySubstitutionElements;                            // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDependencyElementSubstitutions>     _dependencySubstitutionElements;                          // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDependencyElementAddition>          _dependencyElementAdditions;                              // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameplayElementAddition>            _gameplayElementAdditions;                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ManagedGameplayElementData
// 0x0050
struct FManagedGameplayElementData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UActorSpawner*>                       ActivatedSpawners;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UActorSpawner*>                       RemovedSpawners;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	EGameplayElementType                               PopulationType;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              CurrentPopulationCost;                                    // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxPopulationCost;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinPopulationCost;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MapWidth;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinProximityBetweenElements;                              // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDistSqrBetweenElements;                                // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileWidth;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FactorToAdjustToWhenOutOfProximity;                       // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GeneratedLevelData
// 0x01C0
struct FGeneratedLevelData
{
	struct FString                                     UsedPaperTileMap;                                         // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PremadeMap;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                AvailableEscapeCount;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AvailableSurvivorItemCount;                               // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESurvivorGrouping                                  GroupingType;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class USceneComponent*                             KillerSpawnPoint;                                         // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USceneComponent*>                     SurvivorSpawnPoints;                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     InteractableElementsSpawnPoints;                          // 0x0048(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     SearchableSpawners;                                       // 0x0058(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     HexSpawners;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     KillerLairSpawners;                                       // 0x0078(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     HatchSpawner;                                             // 0x0088(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	struct FManagedGameplayElementData                 BookshelfManagedGameplayElementData;                      // 0x0098(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FManagedGameplayElementData                 MeatHookManagedGameplayElementData;                       // 0x00E8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FDependency>                         levelDependencies;                                        // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AActor*>                              FixedMapTileIds;                                          // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AActor*>                              FixedMapOrphanSpawners;                                   // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       SpecialEventId;                                           // 0x0168(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0168(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               UseForcedMap;                                             // 0x0174(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               UsePremadeMap;                                            // 0x0175(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0176(0x0002) MISSED OFFSET
	struct FString                                     GenerationLogs;                                           // 0x0178(0x0010) (ZeroConstructor)
	struct FString                                     GenerationErrors;                                         // 0x0188(0x0010) (ZeroConstructor)
	int                                                GenerationPlayerCount;                                    // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	TArray<struct FForceSpawnTileData>                 ForceSpawnTileData;                                       // 0x01A0(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              LevelLightings;                                           // 0x01B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.GenerationParams
// 0x0004
struct FGenerationParams
{
	int                                                Seed;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.Region
// 0x0020
struct FRegion
{
	struct FName                                       Region;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     IP;                                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SimpleCharacterDropdown
// 0x0004
struct FSimpleCharacterDropdown
{
	int                                                characterId;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterCameraTag
// 0x0018
struct FCharacterCameraTag
{
	class ACameraActor*                                Camera;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSimpleCharacterDropdown>            Characters;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ReceiverTerrorRadiusOverride
// 0x0010
struct FReceiverTerrorRadiusOverride
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CombinedSpecialEventData
// 0x0110
struct FCombinedSpecialEventData
{
	unsigned char                                      UnknownData00[0x110];                                     // 0x0000(0x0110) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ArrayOfATile
// 0x0010
struct FArrayOfATile
{
	TArray<class ATile*>                               ArrayOfTiles;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.QuadrantInfo
// 0x0020
struct FQuadrantInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ArrayOfInt32
// 0x0010
struct FArrayOfInt32
{
	TArray<int>                                        value;                                                    // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.ScreenshotViewSetting
// 0x0028
struct FScreenshotViewSetting
{
	float                                              Distance;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LateralOffset;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CharacterYaw;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CharacterRoll;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CharacterPitch;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraPitch;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.RoleItemCategoryDropdown
// 0x0004 (0x000C - 0x0008)
struct FRoleItemCategoryDropdown : public FCharacterDropdown
{
	bool                                               IncludeOutfits;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IncludeNone;                                              // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECustomizationCategory                             Category;                                                 // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GenderViewSetting
// 0x0038
struct FGenderViewSetting
{
	struct FRoleItemCategoryDropdown                   RoleItemCategory;                                         // 0x0000(0x000C) (Edit)
	EGender                                            Gender;                                                   // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0010(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.CharacterItemCategoryViewSetting
// 0x0040
struct FCharacterItemCategoryViewSetting
{
	struct FName                                       Label;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FRoleItemCategoryDropdown                   CharacterDropdown;                                        // 0x000C(0x000C) (Edit)
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0018(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.ItemIdDropdown
// 0x000C
struct FItemIdDropdown
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.ItemViewSetting
// 0x0040
struct FItemViewSetting
{
	struct FName                                       Label;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FItemIdDropdown                             Item;                                                     // 0x000C(0x000C) (Edit)
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0018(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.RoleGenderViewSetting
// 0x0038
struct FRoleGenderViewSetting
{
	struct FName                                       Label;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FRoleDropdown                               RoleDropdown;                                             // 0x000C(0x0002) (Edit)
	EGender                                            Gender;                                                   // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0010(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.CharacterViewSetting
// 0x003C
struct FCharacterViewSetting
{
	struct FName                                       Label;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FCharacterDropdown                          CharacterDropdown;                                        // 0x000C(0x0008) (Edit)
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0014(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.OutfitDropdown
// 0x000C (0x0014 - 0x0008)
struct FOutfitDropdown : public FCharacterDropdown
{
	struct FName                                       OutfitId;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.OutfitViewSetting
// 0x0048
struct FOutfitViewSetting
{
	struct FName                                       Label;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FOutfitDropdown                             OutfitDropdown;                                           // 0x000C(0x0014) (Edit)
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0020(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.CharacterAnimationDropdown
// 0x001C (0x0028 - 0x000C)
struct FCharacterAnimationDropdown : public FRoleItemCategoryDropdown
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAnimationAsset*                             Animation;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     AnimationPath;                                            // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CharacterAnimation
// 0x0038
struct FCharacterAnimation
{
	struct FName                                       Label;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FCharacterAnimationDropdown                 Data;                                                     // 0x0010(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.CharmViewSetting
// 0x0044
struct FCharmViewSetting
{
	struct FName                                       Label;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FCharmDropdown                              CharmId;                                                  // 0x000C(0x0010) (Edit)
	struct FScreenshotViewSetting                      Settings;                                                 // 0x001C(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.WidgetFriendData
// 0x0010
struct FWidgetFriendData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UUMGBaseFriendListElement*                   correspondingWidget;                                      // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AtlantaFriendUIData
// 0x0001
struct FAtlantaFriendUIData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ActionOnFriend
// 0x0002
struct FActionOnFriend
{
	EActionOnFriendType                                ActionToProceed;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FAtlantaFriendUIData                        AtlantaFriendDataToUpdate;                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.PartyMemberUIData
// 0x0030
struct FPartyMemberUIData
{
	bool                                               _isLocalPlayer;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               _isReady;                                                 // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     _mirrorId;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     _playerName;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                _playerId;                                                // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.AtlantaRitualRewardUIData
// 0x0020
struct FAtlantaRitualRewardUIData
{
	EAtlantaRitualRewardUIType                         Type;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Quantity;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     IconFilePath;                                             // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EItemRarity                                        Rarity;                                                   // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.AtlantaSubRitualUIData
// 0x0018
struct FAtlantaSubRitualUIData
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TargetNumber;                                             // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumber;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AtlantaRitualUIData
// 0x0068
struct FAtlantaRitualUIData
{
	int                                                ID;                                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAltantaRitualUIType                               Type;                                                     // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     Title;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     IconFilePath;                                             // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsNew;                                                    // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsClaimed;                                                // 0x0039(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              ProgressPercentage;                                       // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RefreshPrice;                                             // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FAtlantaRitualRewardUIData>          Rewards;                                                  // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FAtlantaSubRitualUIData>             SubRituals;                                               // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerInfoData
// 0x0048
struct FPlayerInfoData
{
	struct FString                                     CharacterName;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     CharacterIconPath;                                        // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     PlayerName;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                PlayerLevel;                                              // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PrestigeLevel;                                            // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PlayerRank;                                               // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ActivePips;                                               // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumPipsToNextRank;                                        // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Ready;                                                    // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSlasher;                                                // 0x0045(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               CanPrestige;                                              // 0x0046(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0047(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TooltipPressedData
// 0x0008
struct FTooltipPressedData
{
	struct FVector2D                                   touchPosition;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.PurchaseCurrencyData
// 0x0018
struct FPurchaseCurrencyData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	ECurrencyType                                      CurrencyType;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Price;                                                    // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DiscountPercentage;                                       // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsAffordable;                                             // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CharacterSlotData
// 0x00F8
struct FCharacterSlotData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       ID;                                                       // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                CharacterIndex;                                           // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     IconFilePath;                                             // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     BackgroundImagePath;                                      // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     DisplayName;                                              // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     Biography;                                                // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     DLCId;                                                    // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     DLCTitle;                                                 // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                Level;                                                    // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Prestige;                                                 // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	ECharacterDifficulty                               Difficulty;                                               // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsUnlocked;                                               // 0x0081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsDLCPurchasable;                                         // 0x0082(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0083(0x0005) MISSED OFFSET
	TArray<struct FPurchaseCurrencyData>               PurchaseDataList;                                         // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                ItemsOwned;                                               // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                TotalItems;                                               // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ShowNew;                                                  // 0x00A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FSpecialEventUIInfo                         EventInfo;                                                // 0x00A8(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient)
};

// ScriptStruct DeadByDaylight.CharacterSlideData
// 0x0070
struct FCharacterSlideData
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     Overview;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     Playstyle;                                                // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	EPlayerRole                                        Role;                                                     // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     ImageFilePath;                                            // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<EPerkCategory>                              SurvivorPerkCategories;                                   // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     KillerPowerIconPath;                                      // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.StatusEffectSlotData
// 0x0048
struct FStatusEffectSlotData
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     IconFilePath;                                             // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     Description;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	EStatusEffectType                                  StatusEffectType;                                         // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                Level;                                                    // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.StoreItemSlotData
// 0x0150
struct FStoreItemSlotData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       ItemId;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ECustomizationCategory                             Category;                                                 // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FName                                       MirrorsId;                                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0015(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData04[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     IconPath;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     DisplayName;                                              // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     DisplayCollectionName;                                    // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     Description;                                              // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     RoleCategoryInfo;                                         // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     RarityPartInfo;                                           // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	EItemRarity                                        Rarity;                                                   // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FSpecialEventUIInfo                         EventInfo;                                                // 0x0090(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FName                                       ParentOutfitId;                                           // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00E0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData07[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FString                                     ParentOutfitName;                                         // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FPurchaseCurrencyData>               PurchaseDataList;                                         // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FName>                               ParentBundleIds;                                          // 0x0110(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FName>                               ChildrenItemIds;                                          // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FCustomTransformation                       CustomTransformation;                                     // 0x0130(0x0014) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               IsOwned;                                                  // 0x0144(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsBuyable;                                                // 0x0145(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsEquipped;                                               // 0x0146(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsNewInStore;                                             // 0x0147(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsLocked;                                                 // 0x0148(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsInStore;                                                // 0x0149(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsNewlyAcquired;                                          // 0x014A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EPlayerRole                                        AssociatedRole;                                           // 0x014B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsUnbreakable;                                            // 0x014C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DownloadProgression
// 0x0028
struct FDownloadProgression
{
	float                                              DownloadSize;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDownloadedSize;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DownloadSpeed;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InstallProgress;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DownloadStatus;                                           // 0x0010(0x0018)
};

// ScriptStruct DeadByDaylight.InboxMessageElapsedTime
// 0x0008
struct FInboxMessageElapsedTime
{
	int                                                ElapsedTime;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EInboxMessageTimeUnit                              TimeUnit;                                                 // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlayerReadyStatusData
// 0x0008
struct FPlayerReadyStatusData
{
	int                                                playerID;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsReady;                                                  // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSlasher;                                                // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsLocalPlayer;                                            // 0x0006(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CurrencyPurchaseData
// 0x0058
struct FCurrencyPurchaseData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     IconPath;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     CurrencyName;                                             // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     CurrencyIcon;                                             // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                CurrencyAmount;                                           // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     DisplayedPrice;                                           // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              BonusPercentage;                                          // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ScoreCategoryUIExtraData
// 0x0028
struct FScoreCategoryUIExtraData
{
	struct FText                                       ScoreCategoryName;                                        // 0x0000(0x0018) (Edit, Transient)
	class UTexture2D*                                  ScoreCategoryAsset;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ScoreValue;                                               // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TallyItemChangedData
// 0x02E8
struct FTallyItemChangedData
{
	struct FInventorySlotData                          Item;                                                     // 0x0000(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FInventorySlotData                          Addon1;                                                   // 0x00F8(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FInventorySlotData                          Addon2;                                                   // 0x01F0(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient)
};

// ScriptStruct DeadByDaylight.EmblemProgressionData
// 0x0018
struct FEmblemProgressionData
{
	struct FString                                     ProgressionText;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              ProgressionPercent;                                       // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EmblemSlotData
// 0x0068
struct FEmblemSlotData
{
	EEmblemQuality                                     Quality;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Title;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     Description;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                Score;                                                    // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FString>                             IconPaths;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<int>                                        ThresholdPoints;                                          // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              CurrentPoints;                                            // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FEmblemProgressionData>              ProgressionData;                                          // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.TallyScorePipsData
// 0x0030
struct FTallyScorePipsData
{
	float                                              Threshold;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      PipThresholds;                                            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FEmblemSlotData>                     Scores;                                                   // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                PipsDelta;                                                // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSlasher;                                                // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TallyPlayerResultData
// 0x0278
struct FTallyPlayerResultData
{
	struct FName                                       CharacterIconPath;                                        // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     playerID;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     PlatformAccountId;                                        // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     MirrorsId;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     PlayerName;                                               // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                PlayerScore;                                              // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PlayerRank;                                               // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EGameState                                         PlayerStatus;                                             // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FInventorySlotData                          OfferingData;                                             // 0x0060(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient)
	TArray<struct FInventorySlotData>                  PerksData;                                                // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FInventorySlotData                          ItemData;                                                 // 0x0168(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient)
	TArray<struct FInventorySlotData>                  AddonsData;                                               // 0x0260(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               IsReported;                                               // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSlasher;                                                // 0x0271(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsMyScore;                                                // 0x0272(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EPlatform                                          platform;                                                 // 0x0273(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.NativeBlockIndicatorData
// 0x0018
struct FNativeBlockIndicatorData
{
	bool                                               IsBlockActive;                                            // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBlockUpdating;                                          // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              CurrentBlockFade;                                         // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FadeCurve;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UActorComponent*                             BlockIndicator;                                           // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.VaultData
// 0x0030
struct FVaultData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.FreeTrialLoginAnalytics
// 0x0000 (0x0058 - 0x0058)
struct FFreeTrialLoginAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MirrorsId;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     ClientId;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     platform;                                                 // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     BackendEnv;                                               // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.AimAssistInfo
// 0x0018
struct FAimAssistInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ArchiveDefinition
// 0x0070 (0x0088 - 0x0018)
struct FArchiveDefinition : public FDBDTableRowBaseWithId
{
	struct FText                                       Title;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FString>                             HiddenImages;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PurchasePassPicturePath;                                  // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PurchaseTierPicturePath;                                  // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StyleFrameLabel;                                          // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.QuestEventDefinition
// 0x0040 (0x0058 - 0x0018)
struct FQuestEventDefinition : public FDBDTableRowBaseWithId
{
	TArray<struct FGameplayTag>                        TrackedGameEvents;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.QuestEventDefinition.QuestEventEvaluator
};

// ScriptStruct DeadByDaylight.ArchiveQuestObjectiveDefinition
// 0x0048 (0x0060 - 0x0018)
struct FArchiveQuestObjectiveDefinition : public FDBDTableRowBaseWithId
{
	struct FText                                       Description;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       RulesDescription;                                         // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FName>                               DescriptionParameters;                                    // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsProgressionPercentage;                                  // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ArchiveNodeDefinition
// 0x0050 (0x0068 - 0x0018)
struct FArchiveNodeDefinition : public FDBDTableRowBaseWithId
{
	struct FText                                       DisplayName;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     IconPath;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EPlayerRole                                        PlayerRole;                                               // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FName                                       CinematicId;                                              // 0x005C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0059(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.AtlantaKillerSoundDistanceData
// 0x0010 (0x0018 - 0x0008)
struct FAtlantaKillerSoundDistanceData : public FDBDTableRowBase
{
	float                                              MinRadiusSoundDistance;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadiusSoundDistance;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRangeSoundHeard;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.AtlantaOnBoardingData
// 0x0040 (0x0048 - 0x0008)
struct FAtlantaOnBoardingData : public FDBDTableRowBase
{
	struct FName                                       onBoardingID;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0018(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0030(0x0018) (Edit)
};

// ScriptStruct DeadByDaylight.AtlantaRitualsUIScreenData
// 0x0030
struct FAtlantaRitualsUIScreenData
{
	struct FDateTime                                   DailyRefreshTime;                                         // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   WeeklyRefreshTime;                                        // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FAtlantaRitualUIData>                DailyRituals;                                             // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FAtlantaRitualUIData>                WeeklyRituals;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BaseItemData
// 0x00C0 (0x00C8 - 0x0008)
struct FBaseItemData : public FDBDTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EInventoryItemType                                 Type;                                                     // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FItemUIData                                 UIData;                                                   // 0x0018(0x0068) (Edit)
	struct FText                                       GenericDisplayName;                                       // 0x0080(0x0018) (Edit)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0098(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.BaseItemData.ItemBlueprint
};

// ScriptStruct DeadByDaylight.BlindPackData
// 0x0000 (0x00C8 - 0x00C8)
struct FBlindPackData : public FBaseItemData
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EInventoryItemType                                 Type;                                                     // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FItemUIData                                 UIData;                                                   // 0x0018(0x0068) (Edit)
	struct FText                                       GenericDisplayName;                                       // 0x0080(0x0018) (Edit)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0098(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.BaseItemData.ItemBlueprint
};

// ScriptStruct DeadByDaylight.BloodstoreRowUnlockThreshold
// 0x0008 (0x0010 - 0x0008)
struct FBloodstoreRowUnlockThreshold : public FDBDTableRowBase
{
	int                                                PreviousRowPurchasedItemsCount;                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.BloodwebContentTypePerRingDistribution
// 0x0058 (0x0060 - 0x0008)
struct FBloodwebContentTypePerRingDistribution : public FDBDTableRowBase
{
	int                                                PerkPerRingMinCount;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerkPerRingMaxCount;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerkPerRingWeight;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OfferingPerRingMinCount;                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OfferingPerRingMaxCount;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OfferingPerRingWeight;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerRingMinCount;                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerRingMaxCount;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerRingWeight;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddOnPerRingMinCount;                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddOnPerRingMaxCount;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddOnPerRingWeight;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChestPerRingMinCount;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChestPerRingMaxCount;                                     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChestPerRingWeight;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerksPackPerRingMinCount;                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerksPackPerRingMaxCount;                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerksPackPerRingWeight;                                   // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IridiscentShardsPackPerRingMinCount;                      // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IridiscentShardsPackPerRingMaxCount;                      // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IridiscentShardsPackPerRingWeight;                        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.BloodwebCostModifier
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebCostModifier : public FDBDTableRowBase
{
	EBloodwebNodeContentType                           Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              CostModifier;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BlockingNode
// 0x0018
struct FBlockingNode
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	int                                                BlockingCount;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.BloodwebMandatoryContentByLevel
// 0x0028 (0x0030 - 0x0008)
struct FBloodwebMandatoryContentByLevel : public FDBDTableRowBase
{
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ForcedItem01;                                             // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       ForcedItem02;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0018(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       ForcedItem03;                                             // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.ContentPerWebDistribution
// 0x000C
struct FContentPerWebDistribution
{
	int                                                Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinCount;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ContentPerRingDistribution
// 0x0030
struct FContentPerRingDistribution
{
	TArray<int>                                        WeightList;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        MinCountList;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        MaxCountList;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.RarityPerWebDistribution
// 0x000C
struct FRarityPerWebDistribution
{
	int                                                Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinCount;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.RarityPerRingDistribution
// 0x0030
struct FRarityPerRingDistribution
{
	TArray<int>                                        WeightList;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        MinCountList;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        MaxCountList;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.AccessNode
// 0x0018
struct FAccessNode
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	int                                                AccessCost;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.BloodwebNodeCost
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebNodeCost : public FDBDTableRowBase
{
	EItemRarity                                        Rarity;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Cost;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BloodwebNodeRarityCost
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebNodeRarityCost : public FDBDTableRowBase
{
	EItemRarity                                        Rarity;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Cost;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BloodwebNodesPerRingDistribution
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebNodesPerRingDistribution : public FDBDTableRowBase
{
	int                                                MinCount;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BloodwebPrestigeModifiers
// 0x0020 (0x0028 - 0x0008)
struct FBloodwebPrestigeModifiers : public FDBDTableRowBase
{
	float                                              CommonItemProbabilityModifier;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UncommonItemProbabilityModifier;                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RareItemProbabilityModifier;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VeryRareItemProbabilityModifier;                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UltraRareItemProbabilityModifier;                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArtifactItemProbabilityModifier;                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpectralItemProbabilityModifier;                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LegendaryItemProbabilityModifier;                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BloodwebProgressionValue
// 0x00C8 (0x00D0 - 0x0008)
struct FBloodwebProgressionValue : public FDBDTableRowBase
{
	int                                                InnerRingNodeCount;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingNodeCount;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingNodeCount;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Common_MinCount;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Common_MaxCount;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Uncommon_MinCount;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Uncommon_MaxCount;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rare_MinCount;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rare_MaxCount;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VeryRare_MinCount;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VeryRare_MaxCount;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UltraRare_MinCount;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UltraRare_MaxCount;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Artifact_MinCount;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Artifact_MaxCount;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Spectral_MinCount;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Spectral_MaxCount;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpecialEvent_MinCount;                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpecialEvent_MaxCount;                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Legendary_MinCount;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Legendary_MaxCount;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingCommonItemProbability;                           // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingCommonItemProbability;                          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingCommonItemProbability;                           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingUncommonItemProbability;                         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingUncommonItemProbability;                        // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingUncommonItemProbability;                         // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingRareItemProbability;                             // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingRareItemProbability;                            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingRareItemProbability;                             // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingVeryRareItemProbability;                         // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingVeryRareItemProbability;                        // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingVeryRareItemProbability;                         // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingUltraRareItemProbability;                        // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingUltraRareItemProbability;                       // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingUltraRareItemProbability;                        // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingArtifactItemProbability;                         // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingArtifactItemProbability;                        // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingArtifactItemProbability;                         // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingSpectralItemProbability;                         // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingSpectralItemProbability;                        // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingSpectralItemProbability;                         // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingSpecialEventItemProbability;                     // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingSpecialEventItemProbability;                    // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingSpecialEventItemProbability;                     // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingLegendaryItemProbability;                        // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingLegendaryItemProbability;                       // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingLegendaryItemProbability;                        // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EntityStartingRound;                                      // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.BloodwebRarityPerRingDistribution
// 0x0070 (0x0078 - 0x0008)
struct FBloodwebRarityPerRingDistribution : public FDBDTableRowBase
{
	int                                                CommonMinCount;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CommonMaxCount;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CommonWeight;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UncommonMinCount;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UncommonMaxCount;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UncommonWeight;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RareMinCount;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RareMaxCount;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RareWeight;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VeryRareMinCount;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VeryRareMaxCount;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VeryRareWeight;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UltraRareMinCount;                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UltraRareMaxCount;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UltraRareWeight;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArtefactMinCount;                                         // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArtefactMaxCount;                                         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArtefactWeight;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpectralMinCount;                                         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpectralMaxCount;                                         // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpectralWeight;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpecialEventMinCount;                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpecialEventMaxCount;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpecialEventWeight;                                       // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LegendaryMinCount;                                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LegendaryMaxCount;                                        // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LegendaryWeight;                                          // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDPerPlatformFloat
// 0x0004
struct FDBDPerPlatformFloat
{
	struct FPerPlatformFloat                           value;                                                    // 0x0000(0x0004) (Edit)
};

// ScriptStruct DeadByDaylight.DBDPerPlatformInt
// 0x0004
struct FDBDPerPlatformInt
{
	struct FPerPlatformInt                             value;                                                    // 0x0000(0x0004) (Edit)
};

// ScriptStruct DeadByDaylight.BundleData
// 0x0078
struct FBundleData
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FItemUIData                                 UIData;                                                   // 0x0010(0x0068) (Edit)
};

// ScriptStruct DeadByDaylight.CharacterCustomizationDataTable
// 0x0038 (0x0040 - 0x0008)
struct FCharacterCustomizationDataTable : public FDBDTableRowBase
{
	int                                                CharacterIndex;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x30];                                      // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.CharacterCustomizationDataTable.CustomizationStoreDB
};

// ScriptStruct DeadByDaylight.DataTableProxy
// 0x0040
struct FDataTableProxy
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.DataTableProxy.AssetPtr
	class UDataTable*                                  _dataTable;                                               // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SlideShowDescription
// 0x0050
struct FSlideShowDescription
{
	struct FText                                       Overview;                                                 // 0x0000(0x0018) (Edit)
	struct FText                                       Playstyle;                                                // 0x0018(0x0018) (Edit)
	struct FString                                     ImageFilePath;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<EPerkCategory>                              PerkCategory;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CharacterDescription
// 0x01C8 (0x01D0 - 0x0008)
struct FCharacterDescription : public FDBDTableRowBase
{
	int                                                CharacterIndex;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlayerRole                                        Role;                                                     // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECharacterDifficulty                               Difficulty;                                               // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       BackStory;                                                // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Biography;                                                // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FName                                       IconFilePath;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0058(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       BackgroundImagePath;                                      // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FCustomizedMeshPart>                 CustomizationDescription;                                 // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FString                                     RequiredDlcIDString;                                      // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       IdName;                                                   // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0090(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               IsInChunk0;                                               // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvailableInNonViolentBuild;                             // 0x009D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvailableInAtlantaBuild;                                // 0x009E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x009F(0x0001) MISSED OFFSET
	uint32_t                                           PlatformExclusiveFlag;                                    // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData06[0x30];                                      // 0x00A4(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.CharacterDescription.GamePawn
	unsigned char                                      UnknownData07[0x30];                                      // 0x00D8(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.CharacterDescription.MenuPawn
	struct FName                                       DefaultItem;                                              // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0108(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EGender                                            Gender;                                                   // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	TArray<EKillerAbilities>                           KillerAbilities;                                          // 0x0118(0x0010) (Edit, ZeroConstructor)
	struct FDataTableProxy                             TunableDB;                                                // 0x0128(0x0040) (Edit, BlueprintVisible)
	EKillerHeight                                      KillerHeight;                                             // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FSlideShowDescription                       SlideShowDescriptions;                                    // 0x0170(0x0050) (Edit, BlueprintVisible)
	TArray<struct FName>                               CustomizationCategories;                                  // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
};

// ScriptStruct DeadByDaylight.TeachableData
// 0x0110
struct FTeachableData
{
	struct FInventorySlotData                          InventorySlotData;                                        // 0x0000(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient)
	ETeachableStatus                                   Status;                                                   // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	int                                                UnlockLevel;                                              // 0x00FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Message;                                                  // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.KillerAttributesData
// 0x000C
struct FKillerAttributesData
{
	float                                              Speed;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TerrorRadius;                                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EKillerHeight                                      Height;                                                   // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CharacterInfoData
// 0x0220
struct FCharacterInfoData
{
	struct FCharacterSlotData                          SlotData;                                                 // 0x0000(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FString                                     Description;                                              // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TArray<struct FTeachableData>                      TeachablePerksData;                                       // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FInventorySlotData                          PowerData;                                                // 0x0118(0x00F8) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FKillerAttributesData                       KillerAttributesData;                                     // 0x0210(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               IsKiller;                                                 // 0x021C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CharacterLevelData
// 0x0020
struct FCharacterLevelData
{
	int                                                Level;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ExperienceToNextLevel;                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsComplete;                                               // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               HasPerksBeenSelected;                                     // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FAssignedPerkProperties>             PerkSelection;                                            // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.ChatAnalytics
// 0x0060 (0x00B8 - 0x0058)
struct FChatAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     SenderMirrorsId;                                          // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     SenderPlayerName;                                         // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     ChatContent;                                              // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     ChatContext;                                              // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     InGameTimestamp;                                          // 0x00A8(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ChatContextChangeEventData
// 0x0010
struct FChatContextChangeEventData
{
	struct FString                                     Context;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ChatMessageEventData
// 0x0030
struct FChatMessageEventData
{
	struct FString                                     SenderMirrorsId;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     SenderPlayerName;                                         // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     ChatContent;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CheckDlcPurchaseTimeEventData
// 0x0058
struct FCheckDlcPurchaseTimeEventData
{
	TMap<struct FString, struct FDateTime>             DlcPurchaseTimes;                                         // 0x0000(0x0050) (ZeroConstructor, Transient)
	struct FDateTime                                   LastSessionTimestamp;                                     // 0x0050(0x0008) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.MaterialMapForClip
// 0x0010 (0x0018 - 0x0008)
struct FMaterialMapForClip : public FDBDTableRowBase
{
	class UMaterialInterface*                          SrcMaterial;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DstMaterial;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ContextEventData
// 0x0058
struct FContextEventData
{
	struct FString                                     ContextGroupName;                                         // 0x0000(0x0010) (ZeroConstructor, Transient)
	uint32_t                                           ContextGroupUid;                                          // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     PreviousContextName;                                      // 0x0018(0x0010) (ZeroConstructor, Transient)
	struct FString                                     CurrentContextName;                                       // 0x0028(0x0010) (ZeroConstructor, Transient)
	uint32_t                                           CurrentContextUid;                                        // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     NextContextName;                                          // 0x0040(0x0010) (ZeroConstructor, Transient)
	struct FDateTime                                   Timestamp;                                                // 0x0050(0x0008) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.CurrencyBalanceAnalyticsController
// 0x0050
struct FCurrencyBalanceAnalyticsController
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CurrencyBalanceAnalytics
// 0x0018 (0x0070 - 0x0058)
struct FCurrencyBalanceAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     CurrencyName;                                             // 0x0058(0x0010) (ZeroConstructor)
	int                                                CurrencyBalance;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CustomerSupportClientLoginAnalytics
// 0x0020 (0x0078 - 0x0058)
struct FCustomerSupportClientLoginAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     PlayerName;                                               // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     Provider;                                                 // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CustomerSupportAnalytics
// 0x0000 (0x0058 - 0x0058)
struct FCustomerSupportAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MirrorsId;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     ClientId;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     platform;                                                 // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     BackendEnv;                                               // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CustomizationAnalytics
// 0x0048 (0x00A0 - 0x0058)
struct FCustomizationAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     CustomizationSlot1;                                       // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     CustomizationSlot2;                                       // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     CustomizationSlot3;                                       // 0x0078(0x0010) (ZeroConstructor)
	EPlayerRole                                        Role;                                                     // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FString                                     MatchID;                                                  // 0x0090(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CustomizationCategoryData
// 0x0040 (0x0048 - 0x0008)
struct FCustomizationCategoryData : public FDBDTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ECustomizationCategory                             Category;                                                 // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     IconPath;                                                 // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FText                                       DisplayName;                                              // 0x0028(0x0018) (Edit)
	EPlayerRole                                        Role;                                                     // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CustomizationLobbyAnalytics
// 0x0048 (0x00A0 - 0x0058)
struct FCustomizationLobbyAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     CustomizationSlot1;                                       // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     CustomizationSlot2;                                       // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     CustomizationSlot3;                                       // 0x0078(0x0010) (ZeroConstructor)
	EPlayerRole                                        Role;                                                     // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FString                                     LobbyId;                                                  // 0x0090(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.DailyRitualAnalytics
// 0x0038 (0x0090 - 0x0058)
struct FDailyRitualAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Status;                                                   // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     ritualId;                                                 // 0x0068(0x0010) (ZeroConstructor)
	float                                              HoursElapsed;                                             // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NbGameElapsed;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Progress;                                                 // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Threshold;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PendingRituals;                                           // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpecificCharacter;                                        // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.Gameplay_KillerAnalyticsController
// 0x01D0
struct FGameplay_KillerAnalyticsController
{
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0000(0x01D0) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PostGame_KillerAnalyticsController
// 0x0068
struct FPostGame_KillerAnalyticsController
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Gameplay_SurvivorAnalyticsController
// 0x01C0
struct FGameplay_SurvivorAnalyticsController
{
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0000(0x01C0) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Gameplay_ChaseAnalyticsController
// 0x0050
struct FGameplay_ChaseAnalyticsController
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ReportAnalyticsController
// 0x00C0
struct FReportAnalyticsController
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ProceduralGenerationAnalyticsController
// 0x0128
struct FProceduralGenerationAnalyticsController
{
	unsigned char                                      UnknownData00[0x128];                                     // 0x0000(0x0128) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MapCoordAnalyticsController
// 0x0078
struct FMapCoordAnalyticsController
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.AnalyticsManager
// 0x1608
struct FAnalyticsManager
{
	unsigned char                                      UnknownData00[0x598];                                     // 0x0000(0x0598) MISSED OFFSET
	struct FGameplay_KillerAnalyticsController         GameplayKillerAnalytics;                                  // 0x0598(0x01D0)
	struct FPostGame_KillerAnalyticsController         PostGameKillerAnalytics;                                  // 0x0768(0x0068)
	struct FGameplay_SurvivorAnalyticsController       GameplaySurvivorAnalytics;                                // 0x07D0(0x01C0)
	struct FGameplay_ChaseAnalyticsController          GameplayChaseAnalytics;                                   // 0x0990(0x0050)
	struct FReportAnalyticsController                  ReportAnalytics;                                          // 0x09E0(0x00C0)
	struct FProceduralGenerationAnalyticsController    ProceduralGenerationAnalytics;                            // 0x0AA0(0x0128)
	struct FMapCoordAnalyticsController                MapCoordAnalytics;                                        // 0x0BC8(0x0078)
	unsigned char                                      UnknownData01[0x9C8];                                     // 0x0C40(0x09C8) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.WebPath
// 0x0028
struct FWebPath
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.WebNode
// 0x0028
struct FWebNode
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DailyRitualPossibleCharacters
// 0x0030
struct FDailyRitualPossibleCharacters
{
	TArray<int>                                        CharacterIDs;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<EPlayerRole>                                Roles;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<EPlayerRole>                                SelectOneCharacterFromRoles;                              // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.DailyRitualLevel
// 0x0010
struct FDailyRitualLevel
{
	float                                              Threshold;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DisplayTotal;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BloodpointsReward;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.DailyRitualDefinition
// 0x00D0 (0x00D8 - 0x0008)
struct FDailyRitualDefinition : public FDBDTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     IconPath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDailyRitualPossibleCharacters              PossibleCharacters;                                       // 0x0048(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<EDBDScoreTypes>                             TrackedEvents;                                            // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameplayTag>                        TrackedGameEvents;                                        // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDailyRitualLevel>                   DifficultyLevels;                                         // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00A8(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.DailyRitualDefinition.Evaluator
};

// ScriptStruct DeadByDaylight.RitualEvent
// 0x0030
struct FRitualEvent
{
	EDBDScoreTypes                                     scoreType;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGameplayTag                                gameEventType;                                            // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	float                                              amount;                                                   // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class ADBDPlayer*                                  Instigator;                                               // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class ADBDPlayerState*                             InstigatorPlayerState;                                    // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AttackTypeDetails
// 0x0020 (0x0028 - 0x0008)
struct FAttackTypeDetails : public FDBDTableRowBase
{
	EAttackType                                        attackType;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBasicAttack;                                            // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                AssociatedCharacter;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.LevelUpDetails
// 0x0050 (0x0058 - 0x0008)
struct FLevelUpDetails : public FDBDTableRowBase
{
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Prestige;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FName                                       ItemId;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0040(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EInventoryItemType                                 ItemType;                                                 // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	int                                                AssociatedCharacter;                                      // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EACClientInfo
// 0x0028
struct FEACClientInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EmblemProgressionDescriptionByQuality
// 0x0020
struct FEmblemProgressionDescriptionByQuality
{
	EEmblemQuality                                     EmblemQuality;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.EmblemProgressionID
// 0x0030
struct FEmblemProgressionID
{
	EEmblemProgressionType                             EmblemProgressionType;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DefaultDescription;                                       // 0x0008(0x0018) (Edit, BlueprintVisible)
	TArray<struct FEmblemProgressionDescriptionByQuality> DescriptionsByQuality;                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.DBDEmblemDefinition
// 0x00A8 (0x00B0 - 0x0008)
struct FDBDEmblemDefinition : public FDBDTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0030(0x0018) (Edit, BlueprintVisible)
	TArray<EPlayerRole>                                Roles;                                                    // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0058(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.DBDEmblemDefinition.CustomEmblem
	TArray<struct FString>                             IconFilePaths;                                            // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EEmblemEvaluation                                  EmblemEvaluation;                                         // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
	TArray<struct FEmblemProgressionID>                EmblemProgressionData;                                    // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SaveDataBase
// 0x0010
struct FSaveDataBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                VersionNumber;                                            // 0x0008(0x0004) (ZeroConstructor, SaveGame, NoClear, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileDataShared
// 0x0040
struct FLegacyPlayerSavedProfileDataShared
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	int                                                SelectedCamperIndex;                                      // 0x0018(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SelectedSlasherIndex;                                     // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FName>                               SelectedCharacterCustomization;                           // 0x0020(0x0010) (ZeroConstructor, SaveGame)
	int                                                SlasherSkulls;                                            // 0x0030(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CamperSkulls;                                             // 0x0034(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CamperStreak;                                             // 0x0038(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNodeProperties
// 0x0018
struct FLegacySavedBloodwebNodeProperties
{
	EBloodwebNodeContentType                           ContentType;                                              // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EItemRarity                                        Rarity;                                                   // 0x0001(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FString>                             Tags;                                                     // 0x0008(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNodeGate
// 0x0020
struct FLegacySavedBloodwebNodeGate
{
	struct FName                                       Description;                                              // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EItemRarity                                        Rarity;                                                   // 0x000C(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EPlayerRole                                        Role;                                                     // 0x000D(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	EBloodwebNodeGateTypes                             GateType;                                                 // 0x000E(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	struct FString                                     Param;                                                    // 0x0010(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebChest
// 0x0030
struct FLegacySavedBloodwebChest
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       EventId;                                                  // 0x000C(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EItemRarity                                        Rarity;                                                   // 0x0018(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<float>                                      GivenItemRarity;                                          // 0x0020(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNode
// 0x0080
struct FLegacySavedBloodwebNode
{
	struct FLegacySavedBloodwebNodeProperties          Properties;                                               // 0x0000(0x0018) (SaveGame)
	TArray<struct FLegacySavedBloodwebNodeGate>        Gates;                                                    // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	EBloodwebNodeState                                 State;                                                    // 0x0028(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     nodeID;                                                   // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       ContentId;                                                // 0x0040(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0040(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FLegacySavedBloodwebChest                   BloodwebChest;                                            // 0x0050(0x0030) (SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodWebRingPersistentData
// 0x0010
struct FLegacySavedBloodWebRingPersistentData
{
	TArray<struct FLegacySavedBloodwebNode>            NodeData;                                                 // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodWebPersistentData
// 0x0040
struct FLegacySavedBloodWebPersistentData
{
	int                                                VersionNumber;                                            // 0x0000(0x0004) (ZeroConstructor, SaveGame, NoClear, IsPlainOldData)
	int                                                Level;                                                    // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FLegacySavedBloodWebRingPersistentData> RingData;                                                 // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               Paths;                                                    // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     EntityCurrentNode;                                        // 0x0028(0x0010) (ZeroConstructor, SaveGame)
	struct FDateTime                                   GenerationDate;                                           // 0x0038(0x0008) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedPlayerLoadoutData
// 0x0098
struct FLegacySavedPlayerLoadoutData
{
	struct FName                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FName>                               ItemAddOns;                                               // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               CamperPerks;                                              // 0x0020(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        CamperPerkLevels;                                         // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       CamperFavor;                                              // 0x0040(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0040(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Power;                                                    // 0x004C(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x004C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FName>                               PowerAddOns;                                              // 0x0058(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               SlasherPerks;                                             // 0x0068(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        SlasherPerkLevels;                                        // 0x0078(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       SlasherFavor;                                             // 0x0088(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData05[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacyCharacterSavedInventoryData
// 0x0018
struct FLegacyCharacterSavedInventoryData
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int64_t                                            TimeObtainedSinceEpoch;                                   // 0x0010(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.LegacyCharacterSavedProfileData
// 0x0130
struct FLegacyCharacterSavedProfileData
{
	int                                                VersionNumber;                                            // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                BloodPoints;                                              // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                BloodWebLevel;                                            // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PrestigeLevel;                                            // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                TimesConfronted;                                          // 0x0010(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FDateTime>                           PrestigeDates;                                            // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	struct FLegacySavedBloodWebPersistentData          BloodWebData;                                             // 0x0028(0x0040) (SaveGame)
	struct FLegacySavedPlayerLoadoutData               CharacterLoadoutData;                                     // 0x0068(0x0098) (SaveGame)
	TArray<struct FName>                               Inventory;                                                // 0x0100(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FLegacyCharacterSavedInventoryData>  InventoryData;                                            // 0x0110(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               CurrentCustomization;                                     // 0x0120(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedDailyRitualInstance
// 0x0078
struct FLegacySavedDailyRitualInstance
{
	struct FName                                       RitualKey;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<EDBDScoreTypes>                             TrackedEvents;                                            // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FGameplayTag>                        TrackedGameEvents;                                        // 0x0020(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        CharacterIDs;                                             // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	TArray<EPlayerRole>                                Roles;                                                    // 0x0040(0x0010) (ZeroConstructor, SaveGame)
	float                                              Progress;                                                 // 0x0050(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Threshold;                                                // 0x0054(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0058(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              DisplayThreshold;                                         // 0x005C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExpReward;                                                // 0x0060(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               Active;                                                   // 0x0064(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               Rewarded;                                                 // 0x0065(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               StateChanged;                                             // 0x0066(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	struct FDateTime                                   DateAssigned;                                             // 0x0068(0x0008) (ZeroConstructor, SaveGame)
	int                                                NbGameElapsed;                                            // 0x0070(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacySavedDailyRitualContainer
// 0x0018
struct FLegacySavedDailyRitualContainer
{
	struct FDateTime                                   LastRitualReceivedDate;                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	TArray<struct FLegacySavedDailyRitualInstance>     Rituals;                                                  // 0x0008(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedFearMarketItemInstance
// 0x0018
struct FLegacySavedFearMarketItemInstance
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Cost;                                                     // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                BloodpointConversion;                                     // 0x0010(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               Purchased;                                                // 0x0014(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacySavedFearMarketOfferingInstance
// 0x0020
struct FLegacySavedFearMarketOfferingInstance
{
	TArray<struct FLegacySavedFearMarketItemInstance>  ObjectsForSale;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FDateTime                                   StartTime;                                                // 0x0010(0x0008) (ZeroConstructor, SaveGame)
	struct FDateTime                                   EndTime;                                                  // 0x0018(0x0008) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileDataLocal
// 0x0180
struct FLegacyPlayerSavedProfileDataLocal
{
	int                                                Tokens;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               offerings;                                                // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	bool                                               FirstTimePlaying;                                         // 0x0018(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HasBeenGivenKillerTutorialEndReward;                      // 0x0019(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HasBeenGivenSurvivorTutorialEndReward;                    // 0x001A(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	int                                                Wins;                                                     // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Losses;                                                   // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TMap<int, struct FLegacyCharacterSavedProfileData> CharacterData;                                            // 0x0028(0x0050) (ZeroConstructor, SaveGame)
	uint64_t                                           CurrentSeasonTicks;                                       // 0x0078(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FLegacySavedDailyRitualContainer            DailyRituals;                                             // 0x0080(0x0018) (SaveGame)
	struct FLegacySavedFearMarketOfferingInstance      FearMarket;                                               // 0x0098(0x0020) (SaveGame)
	struct FLegacySavedPlayerLoadoutData               LastConnectedLoadout;                                     // 0x00B8(0x0098) (SaveGame)
	int                                                LastConnectedCharacterIndex;                              // 0x0150(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FDateTime                                   DisconnectPenaltyTime;                                    // 0x0158(0x0008) (ZeroConstructor, SaveGame)
	int                                                _bloodpoints;                                             // 0x0160(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                _bonusBloodpoints;                                        // 0x0164(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                _unclampedBloodpoints;                                    // 0x0168(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                _fearTokens;                                              // 0x016C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FDateTime                                   _ongoingGameTime;                                         // 0x0170(0x0008) (ZeroConstructor, SaveGame)
	bool                                               _fearTokensMigrated;                                      // 0x0178(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileData
// 0x01D0 (0x01E0 - 0x0010)
struct FLegacyPlayerSavedProfileData : public FSaveDataBase
{
	struct FString                                     PlayerUID;                                                // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	struct FLegacyPlayerSavedProfileDataShared         SharedData;                                               // 0x0020(0x0040) (SaveGame)
	struct FLegacyPlayerSavedProfileDataLocal          LocalData;                                                // 0x0060(0x0180) (SaveGame)
};

// ScriptStruct DeadByDaylight.SessionInfos
// 0x0038
struct FSessionInfos
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlayerHUDInfos
// 0x0058 (0x0060 - 0x0008)
struct FPlayerHUDInfos : public FDBDTableRowBase
{
	EPlayerRole                                        Role;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x30];                                      // 0x0009(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.PlayerHUDInfos.HUDClass
	struct FSoftObjectPath                             TouchInterfaceName;                                       // 0x0040(0x0020) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerDataSync
// 0x0078
struct FPlayerDataSync
{
	struct FPlayerStateData                            PlayerData;                                               // 0x0000(0x0038)
	TArray<struct FName>                               CustomizationMesh;                                        // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FCharmIdSlot>                        customizationCharms;                                      // 0x0048(0x0010) (ZeroConstructor)
	struct FName                                       EquipedItemId;                                            // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FName>                               EquipedItemAddonIds;                                      // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.RankResetStartingPips
// 0x0004
struct FRankResetStartingPips
{
	int                                                NewPipAmount;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.RankGroupDefinition
// 0x0018
struct FRankGroupDefinition
{
	int                                                RankThreshold;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      PipThresholds;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
};

// ScriptStruct DeadByDaylight.RankDefinition
// 0x0004
struct FRankDefinition
{
	int                                                PipsRequired;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.KeyTupleBool
// 0x0010
struct FKeyTupleBool
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               value;                                                    // 0x000C(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CharacterSavedInventoryDataV7
// 0x0020
struct FCharacterSavedInventoryDataV7
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Num;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     I;                                                        // 0x0010(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.AssignedPerkPropertiesV7
// 0x0014
struct FAssignedPerkPropertiesV7
{
	struct FName                                       PerkId;                                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                PerkLevel;                                                // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               IsTeachable;                                              // 0x0010(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SavedCharacterLevelDataV7
// 0x0018
struct FSavedCharacterLevelDataV7
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HasPerksBeenSelected;                                     // 0x0004(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FAssignedPerkPropertiesV7>           PerkSelection;                                            // 0x0008(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.SavedStatsDataV7
// 0x0010
struct FSavedStatsDataV7
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              value;                                                    // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SavedCharmSlotData
// 0x0010
struct FSavedCharmSlotData
{
	int8_t                                             SlotIndex;                                                // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       CharmId;                                                  // 0x0004(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0001(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.CharacterSavedProfileDataV7
// 0x0158
struct FCharacterSavedProfileDataV7
{
	int                                                BloodWebLevel;                                            // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PrestigeLevel;                                            // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CharacterExperience;                                      // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                TimesConfronted;                                          // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FString>                             PrestigeDates;                                            // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	struct FLegacySavedBloodWebPersistentData          BloodWebData;                                             // 0x0020(0x0040) (SaveGame)
	struct FLegacySavedPlayerLoadoutData               CharacterLoadoutData;                                     // 0x0060(0x0098) (SaveGame)
	TArray<struct FCharacterSavedInventoryDataV7>      Inventory;                                                // 0x00F8(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSavedCharacterLevelDataV7>          CharacterProgression;                                     // 0x0108(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSavedStatsDataV7>                   StatProgression;                                          // 0x0118(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               CurrentCustomization;                                     // 0x0128(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSavedCharmSlotData>                 CurrentCharmCustomization;                                // 0x0138(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               UniquePerksAdded;                                         // 0x0148(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.CharacterKeyTuple
// 0x0160
struct FCharacterKeyTuple
{
	int                                                Key;                                                      // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FCharacterSavedProfileDataV7                Data;                                                     // 0x0008(0x0158) (SaveGame)
};

// ScriptStruct DeadByDaylight.SavedDailyRitualContainerV7
// 0x0040
struct FSavedDailyRitualContainerV7
{
	struct FString                                     LastRitualReceivedDate;                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     LastRitualPopupDate;                                      // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     LastRitualDismissedDate;                                  // 0x0020(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FLegacySavedDailyRitualInstance>     Rituals;                                                  // 0x0030(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.SavedFearMarketOfferingInstanceV7
// 0x0030
struct FSavedFearMarketOfferingInstanceV7
{
	TArray<struct FLegacySavedFearMarketItemInstance>  ObjectsForSale;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     StartTime;                                                // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     EndTime;                                                  // 0x0020(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.SavedSpecialEventDataV7
// 0x0020
struct FSavedSpecialEventDataV7
{
	struct FName                                       EventId;                                                  // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<int>                                        SeenCinematics;                                           // 0x0010(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.SaveDataV7
// 0x0340 (0x0350 - 0x0010)
struct FSaveDataV7 : public FSaveDataBase
{
	struct FString                                     PlayerUID;                                                // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	int                                                SelectedCamperIndex;                                      // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SelectedSlasherIndex;                                     // 0x0024(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FName>                               offerings;                                                // 0x0028(0x0010) (ZeroConstructor, SaveGame)
	bool                                               FirstTimePlaying;                                         // 0x0038(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                ConsecutiveMatchStreak;                                   // 0x003C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HasBeenGivenKillerTutorialEndReward;                      // 0x0040(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HasBeenGivenSurvivorTutorialEndReward;                    // 0x0041(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	uint64_t                                           CurrentSeasonTicks;                                       // 0x0048(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                LastConnectedCharacterIndex;                              // 0x0050(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     DisconnectPenaltyTime;                                    // 0x0058(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     LastMatchEndTime;                                         // 0x0068(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     LastMatchStartTime;                                       // 0x0078(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     LastKillerMatchEndTime;                                   // 0x0088(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     LastSurvivorMatchEndTime;                                 // 0x0098(0x0010) (ZeroConstructor, SaveGame)
	int                                                Experience;                                               // 0x00A8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                BonusExperience;                                          // 0x00AC(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                FearTokens;                                               // 0x00B0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               FearTokensMigrated;                                       // 0x00B4(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	struct FString                                     OngoingGameTime;                                          // 0x00B8(0x0010) (ZeroConstructor, SaveGame)
	int                                                CumulativeMatches;                                        // 0x00C8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FKeyTupleBool>                       PageVisited;                                              // 0x00D0(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FKeyTupleBool>                       ChatVisible;                                              // 0x00E0(0x0010) (ZeroConstructor, SaveGame)
	int                                                CumulativeMatchesAsSurvivor;                              // 0x00F0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CumulativeMatchesAsKiller;                                // 0x00F4(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FDateTime                                   LastMatchTimestamp;                                       // 0x00F8(0x0008) (ZeroConstructor, SaveGame)
	struct FDateTime                                   LastSessionTimestamp;                                     // 0x0100(0x0008) (ZeroConstructor, SaveGame)
	int                                                CumulativeSessions;                                       // 0x0108(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FString                                     CumulativePlaytime;                                       // 0x0110(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FCharacterKeyTuple>                  CharacterData;                                            // 0x0120(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               OwnedCharms;                                              // 0x0130(0x0010) (ZeroConstructor, SaveGame)
	struct FSavedDailyRitualContainerV7                DailyRituals;                                             // 0x0140(0x0040) (SaveGame)
	struct FSavedFearMarketOfferingInstanceV7          FearMarket;                                               // 0x0180(0x0030) (SaveGame)
	struct FLegacySavedPlayerLoadoutData               LastLoadout;                                              // 0x01B0(0x0098) (SaveGame)
	struct FConsoleUserSettings                        ConsoleUserSettings;                                      // 0x0248(0x0040) (SaveGame)
	TArray<struct FSavedStatsDataV7>                   PlayerStatProgression;                                    // 0x0288(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FString>                             OwnedContent;                                             // 0x0298(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSavedSpecialEventDataV7>            SpecialEvent;                                             // 0x02A8(0x0010) (ZeroConstructor, SaveGame)
	struct FLegacySavedBloodWebPersistentData          BloodStoreKillers;                                        // 0x02B8(0x0040) (SaveGame)
	struct FLegacySavedBloodWebPersistentData          BloodStoreSurvivors;                                      // 0x02F8(0x0040) (SaveGame)
	TArray<struct FKeyTupleBool>                       OnBoardingCompleted;                                      // 0x0338(0x0010) (ZeroConstructor, SaveGame)
	bool                                               IsCrossplayAllowed;                                       // 0x0348(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CharacterValidationData
// 0x0008
struct FCharacterValidationData
{
	int                                                PrestigeLevel;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloodWebLevel;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SaveValidationData
// 0x0060
struct FSaveValidationData
{
	struct FString                                     PlayerUID;                                                // 0x0000(0x0010) (ZeroConstructor)
	TMap<int, struct FCharacterValidationData>         CharacterData;                                            // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ScoreValue
// 0x0040 (0x0048 - 0x0008)
struct FScoreValue : public FDBDTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EDBDScoreCategory                                  Category;                                                 // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                BloodpointValue;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxBloodpointValue;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BloodpointDepreciationCurve;                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OngoingWaitTime;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0030(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.ScoreCategoryData
// 0x0010 (0x0018 - 0x0008)
struct FScoreCategoryData : public FDBDTableRowBase
{
	EDBDScoreCategory                                  Category;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                ScoreCap;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ProgressionCap;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AchievementCap;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.PlayerstateDataCache
// 0x0058
struct FPlayerstateDataCache
{
	TMap<struct FName, struct FAwardedScores>          awardedScoresByType;                                      // 0x0000(0x0050) (ZeroConstructor)
	float                                              TimeInactive;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsDataCacheValid;                                         // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlayerFloatTuple
// 0x0010
struct FPlayerFloatTuple
{
	class ACharacter*                                  Player;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SurfaceTypeName
// 0x0010 (0x0018 - 0x0008)
struct FSurfaceTypeName : public FDBDTableRowBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Toast
// 0x0078 (0x0080 - 0x0008)
struct FToast : public FDBDTableRowBase
{
	float                                              DisplayDuration;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Lifetime;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       ToastText;                                                // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<EToastInputType, struct FText>                ButtonsText;                                              // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              DelayBeforeInteraction;                                   // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DedicatedServerStatusAnalytics
// 0x00A8 (0x00C0 - 0x0018)
struct FDedicatedServerStatusAnalytics : public FBaseSingleStructIndexAnalytics
{
	struct FString                                     DSSessionProvider;                                        // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     ServerStatus;                                             // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     GameLiftSessionId;                                        // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     SessionEndReason;                                         // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     FleetId;                                                  // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     IpAddress;                                                // 0x0078(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     DnsName;                                                  // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     platform;                                                 // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     BackendEnv;                                               // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.DetailedScoreEventData
// 0x0060
struct FDetailedScoreEventData
{
	struct FString                                     MatchID;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FString                                     ScorerMirrorsId;                                          // 0x0010(0x0010) (ZeroConstructor, Transient)
	struct FString                                     TargetMirrorsId;                                          // 0x0020(0x0010) (ZeroConstructor, Transient)
	struct FName                                       ScoreTypeId;                                              // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0030(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                ScoreExperience;                                          // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedMatchTime;                                         // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     InstigatorLocation;                                       // 0x0044(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     targetLocation;                                           // 0x0050(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DisconnectionDetailsAnalytics
// 0x0048 (0x00A0 - 0x0058)
struct FDisconnectionDetailsAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	int                                                InGameTime;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	EPlayerRole                                        Role;                                                     // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FString                                     Reason;                                                   // 0x0070(0x0010) (ZeroConstructor)
	EHealthStatus                                      Health;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	TArray<ECharacterStatus>                           CharacterStatus;                                          // 0x0088(0x0010) (ZeroConstructor)
	int                                                GeneratorActivated;                                       // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	EHatchStatus                                       HatchStatus;                                              // 0x009C(0x0001) (ZeroConstructor, IsPlainOldData)
	EDoorStatus                                        DoorStatus;                                               // 0x009D(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameState                                         DisconnectionType;                                        // 0x009E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x009F(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EACAnalyticsController
// 0x0001
struct FEACAnalyticsController
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EACAnalytics
// 0x0020 (0x0078 - 0x0058)
struct FEACAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     LogMessage;                                               // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     Version;                                                  // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.EACClientViolationAnalytics
// 0x0010 (0x0088 - 0x0078)
struct FEACClientViolationAnalytics : public FEACAnalytics
{
	struct FString                                     ViolationCase;                                            // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.EACClientInitAnalytics
// 0x0008 (0x0080 - 0x0078)
struct FEACClientInitAnalytics : public FEACAnalytics
{
	unsigned char                                      ValidationErrorType;                                      // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EACServerValidateAnalytics
// 0x0000 (0x0080 - 0x0080)
struct FEACServerValidateAnalytics : public FEACClientInitAnalytics
{
	unsigned char                                      ValidationErrorType;                                      // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EACClientAuthChallengeAnalytics
// 0x0000 (0x0080 - 0x0080)
struct FEACClientAuthChallengeAnalytics : public FEACClientInitAnalytics
{
	unsigned char                                      ValidationErrorType;                                      // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EACClientAuthInitAnalytics
// 0x0000 (0x0080 - 0x0080)
struct FEACClientAuthInitAnalytics : public FEACClientInitAnalytics
{
	unsigned char                                      ValidationErrorType;                                      // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EmblemProgressionDetailsAnalytics
// 0x0018
struct FEmblemProgressionDetailsAnalytics
{
	struct FString                                     ProgressionType;                                          // 0x0000(0x0010) (ZeroConstructor)
	float                                              ProgressionPoint;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EmblemProgressionAnalytics
// 0x0048 (0x00A0 - 0x0058)
struct FEmblemProgressionAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     EmblemId;                                                 // 0x0068(0x0010) (ZeroConstructor)
	float                                              EmblemValue;                                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     EmblemQuality;                                            // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FEmblemProgressionDetailsAnalytics>  ProgressionDetails;                                       // 0x0090(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.EndpointLatencyData
// 0x0018
struct FEndpointLatencyData
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           Latency;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EndpointLatencyAnalytics
// 0x0010 (0x0068 - 0x0058)
struct FEndpointLatencyAnalytics : public FUniquelyIdentifiedAnalytic
{
	TArray<struct FEndpointLatencyData>                Endpoints;                                                // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.EntitlementAnalytics
// 0x00C0 (0x0118 - 0x0058)
struct FEntitlementAnalytics : public FUniquelyIdentifiedAnalytic
{
	bool                                               FirstTimePlaying;                                         // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     Timestamp;                                                // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     SelectedCountry;                                          // 0x0070(0x0010) (ZeroConstructor)
	struct FName                                       DlcInstalled80Suitcase;                                   // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0080(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       DlcInstalledHalloween;                                    // 0x008C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       DlcInstalledBloodstainedSack;                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0098(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       DlcInstalledFleshAndMud;                                  // 0x00A4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       DlcInstalledHeadcase;                                     // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00B0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       DlcInstalledSparkOfMadness;                               // 0x00BC(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00BC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       DlcInstalledCharityCase;                                  // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       DlcInstalledCannibal;                                     // 0x00D4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       DlcInstalledEngland;                                      // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x00E0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       DlcInstalledFinland;                                      // 0x00EC(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x00EC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       DlcInstalledGuam;                                         // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x00F8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData12[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FString                                     NewlyInstalledDlc;                                        // 0x0108(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.EnvironmentAnalytics
// 0x00F8 (0x0150 - 0x0058)
struct FEnvironmentAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Environment;                                              // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     Endpoint;                                                 // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     Language;                                                 // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     SelectedCountry;                                          // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     Timezone;                                                 // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     Version;                                                  // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     DeviceProfile;                                            // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     GpuAdapter;                                               // 0x00C8(0x0010) (ZeroConstructor)
	struct FString                                     GpuDriverVersion;                                         // 0x00D8(0x0010) (ZeroConstructor)
	struct FString                                     Cpu;                                                      // 0x00E8(0x0010) (ZeroConstructor)
	int                                                QualitySetting;                                           // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFullScreen;                                             // 0x00FC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsAutomaticResolution;                                    // 0x00FD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00FE(0x0002) MISSED OFFSET
	int                                                ScreenResolutionSetting;                                  // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EngineResolutionX;                                        // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EngineResolutionY;                                        // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FString                                     Provider;                                                 // 0x0110(0x0010) (ZeroConstructor)
	struct FString                                     Device;                                                   // 0x0120(0x0010) (ZeroConstructor)
	struct FString                                     OperatingSystem;                                          // 0x0130(0x0010) (ZeroConstructor)
	struct FString                                     KrakenVersion;                                            // 0x0140(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ErrorAnalyticsController
// 0x0001
struct FErrorAnalyticsController
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ErrorAnalytics
// 0x0030 (0x0088 - 0x0058)
struct FErrorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     ErrorCategory;                                            // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     LogMessage;                                               // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     Version;                                                  // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PathPosition
// 0x0018
struct FPathPosition
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.FilterLoadoutData
// 0x0070 (0x0078 - 0x0008)
struct FFilterLoadoutData : public FDBDTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x30];                                      // 0x0014(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.FilterLoadoutData.Icon
	struct FText                                       Title;                                                    // 0x0048(0x0018) (Edit)
	TArray<EPlayerRole>                                Role;                                                     // 0x0060(0x0010) (Edit, ZeroConstructor)
	ELoadoutType                                       LoadoutType;                                              // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.FriendData
// 0x0038
struct FFriendData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GameInitAnalytics
// 0x0068 (0x00C0 - 0x0058)
struct FGameInitAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     InitGuid;                                                 // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     ProgressionName;                                          // 0x0068(0x0010) (ZeroConstructor)
	bool                                               success;                                                  // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     LoadCompleteState;                                        // 0x0080(0x0010) (ZeroConstructor)
	float                                              ElapsedTime;                                              // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FString                                     Version;                                                  // 0x0098(0x0010) (ZeroConstructor)
	uint32_t                                           FailureCount;                                             // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FString                                     AdditionalInfo;                                           // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.GameNotificationData
// 0x0020 (0x0028 - 0x0008)
struct FGameNotificationData : public FDBDTableRowBase
{
	EPromptType                                        PromptType;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPromptPriority                                    Priority;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FText                                       Content;                                                  // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.GameOnTournamentParticipationInfoAnalytics
// 0x0020 (0x0078 - 0x0058)
struct FGameOnTournamentParticipationInfoAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     GameOnMatchId;                                            // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     GameOnTournamentId;                                       // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerMatchInformation
// 0x0018
struct FPlayerMatchInformation
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Gameplay_ChaseAnalytics
// 0x0058 (0x00B0 - 0x0058)
struct FGameplay_ChaseAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     MirrorsIdSurvivor;                                        // 0x0068(0x0010) (ZeroConstructor)
	float                                              CoordXStartKiller;                                        // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordYStartKiller;                                        // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordZStartKiller;                                        // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordXEndKiller;                                          // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordYEndKiller;                                          // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordZEndKiller;                                          // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordXStartSurvivor;                                      // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordYStartSurvivor;                                      // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordZStartSurvivor;                                      // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordXEndSurvivor;                                        // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordYEndSurvivor;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoordZEndSurvivor;                                        // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ChaseStartTimeInSecond;                                   // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ChaseEndTimeInSecond;                                     // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.Gameplay_PigKillerAnalytics
// 0x0038 (0x0090 - 0x0058)
struct FGameplay_PigKillerAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	int                                                AmbushHitCount;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RbtKilledCount;                                           // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rbt1GeneratorCount;                                       // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rbt2GeneratorCount;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rbt3GeneratorCount;                                       // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rbt4GeneratorCount;                                       // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rbt5GeneratorCount;                                       // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CrouchDuration;                                           // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RbtExitKill;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RbtHookKill;                                              // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.Gameplay_KillerAnalytics
// 0x00B0 (0x0108 - 0x0058)
struct FGameplay_KillerAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	float                                              Speed;                                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloodlustTier1Count;                                      // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloodlustTier2Count;                                      // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloodlustTier3Count;                                      // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BloodlustTier1Duration;                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BloodlustTier2Duration;                                   // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BloodlustTier3Duration;                                   // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BloodlustSpeed;                                           // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCount;                                               // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountFail;                                           // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountSuccess;                                        // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier1Fail;                                      // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier1Success;                                   // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier2Fail;                                      // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier2Success;                                   // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier3Fail;                                      // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier3Success;                                   // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HookCount;                                                // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MurderCount;                                              // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletSpawned;                                            // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProcedural;                                         // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProceduralSetCount;                                 // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PalletGenerationId;                                       // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletGeneric;                                            // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletDestroyed;                                          // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropCount;                                                // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitCloseCount;                                            // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitCloseCountSuccess;                                     // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitFarCount;                                              // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitFarCountSuccess;                                       // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitSpecialCount;                                          // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitSpecialCountSuccess;                                   // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClosetOpen;                                               // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClosetOpenSuccess;                                        // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EscapeesHatchCount;                                       // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondesAtLeastOneSurvivorHooked;                         // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AmountTilesVisited;                                       // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartX;                                                   // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartY;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartZ;                                                   // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.Gameplay_PigSurvivorAnalytics
// 0x0038 (0x0090 - 0x0058)
struct FGameplay_PigSurvivorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	int                                                RbtAttachedCount;                                         // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ActivatedRbtTimerCount;                                   // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RbtSuccessSearchCount;                                    // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RbtFailedSearchCount;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RbtDisabledPreActivation;                                 // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RbtDisabledPostActivation;                                // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RbtChaseDuration;                                         // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RbtAverageTimeLeftBeforeDisable;                          // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RbtDuration;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Gameplay_SurvivorAnalytics
// 0x0090 (0x00E8 - 0x0058)
struct FGameplay_SurvivorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	float                                              Speed;                                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InjuredSpeed;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InjuredDuration;                                          // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealthyDuration;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KODuration;                                               // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletSpawned;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProcedural;                                         // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProceduralSetCount;                                 // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PalletGenerationId;                                       // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletGeneric;                                            // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletDrop;                                               // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletStun;                                               // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UnhookCount;                                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HealCount;                                                // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HealCountSuccess;                                         // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClosetEnter;                                              // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Hatch;                                                    // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillCheckCount;                                          // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillCheckCountGood;                                      // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillCheckCountGreat;                                     // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ChaseDuration;                                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumChases;                                                // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitBySlasherCount;                                        // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AmountTilesVisited;                                       // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartX;                                                   // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartY;                                                   // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartZ;                                                   // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EmotePoint;                                               // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EmoteCome;                                                // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CrouchingDuration;                                        // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrouchingCount;                                           // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.NotificationHistoryElement
// 0x0018
struct FNotificationHistoryElement
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GarantiedRarityRingDistributionValues
// 0x0070 (0x0078 - 0x0008)
struct FGarantiedRarityRingDistributionValues : public FDBDTableRowBase
{
	int                                                InnerRingCommonItemProbability;                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingCommonItemProbability;                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingCommonItemProbability;                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingUncommonItemProbability;                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingUncommonItemProbability;                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingUncommonItemProbability;                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingRareItemProbability;                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingRareItemProbability;                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingRareItemProbability;                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingVeryRareItemProbability;                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingVeryRareItemProbability;                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingVeryRareItemProbability;                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingUltraRareItemProbability;                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingUltraRareItemProbability;                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingUltraRareItemProbability;                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingArtifactItemProbability;                         // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingArtifactItemProbability;                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingArtifactItemProbability;                         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingSpectralItemProbability;                         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingSpectralItemProbability;                        // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingSpectralItemProbability;                         // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingSpecialEventItemProbability;                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingSpecialEventItemProbability;                    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingSpecialEventItemProbability;                     // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingLegendaryItemProbability;                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingLegendaryItemProbability;                       // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingLegendaryItemProbability;                        // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SpecialEventBaseAnalytics
// 0x0040 (0x0098 - 0x0058)
struct FSpecialEventBaseAnalytics : public FUniquelyIdentifiedAnalytic
{
	EPlayerRole                                        Role;                                                     // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     MatchID;                                                  // 0x0060(0x0010) (ZeroConstructor)
	struct FName                                       EventName;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0070(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Challenge;                                                // 0x007C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              amount;                                                   // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartAmount;                                              // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndAmount;                                                // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.HalloweenSpecialEventAnalytics
// 0x0008 (0x00A0 - 0x0098)
struct FHalloweenSpecialEventAnalytics : public FSpecialEventBaseAnalytics
{
	int                                                VialCount;                                                // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.HeartbeatAnalytics
// 0x0010 (0x0028 - 0x0018)
struct FHeartbeatAnalytics : public FBaseSingleStructIndexAnalytics
{
	struct FString                                     BeatTime;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.HeartbeatPerfAnalytics
// 0x0068 (0x0080 - 0x0018)
struct FHeartbeatPerfAnalytics : public FBaseSingleStructIndexAnalytics
{
	float                                              FrameTimeMS;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RenderThreadTimeMS;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GameThreadTimeMS;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RhiThreadTimeMS;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GpuTimeMS;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DrawCallCount;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TrianglesDrawnCount;                                      // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayTimeSeconds;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MemoryUsedEstimateBytes;                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     DeviceProfileName;                                        // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     BuildConfiguration;                                       // 0x0050(0x0010) (ZeroConstructor)
	int                                                ChangelistNumber;                                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DeviceTemperature;                                        // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LowPowerMode;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BatteryLevel;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.HelpCategoryData
// 0x0048 (0x0050 - 0x0008)
struct FHelpCategoryData : public FDBDTableRowBase
{
	EHelpType                                          Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible)
	TArray<struct FName>                               TopicIds;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.HelpContextMappingData
// 0x0020 (0x0028 - 0x0008)
struct FHelpContextMappingData : public FDBDTableRowBase
{
	struct FString                                     ContextName;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               TopicIds;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.HelpTopicData
// 0x0060 (0x0068 - 0x0008)
struct FHelpTopicData : public FDBDTableRowBase
{
	struct FText                                       Title;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FString                                     ImagePath;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     IconPath;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     VideoID;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.HintData
// 0x0058 (0x0060 - 0x0008)
struct FHintData : public FDBDTableRowBase
{
	EHintCategory                                      Category;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FString                                     IconPath;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                levelMin;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                levelMax;                                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                relevantCharacterID;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.HookAnalytics
// 0x00A8 (0x00C0 - 0x0018)
struct FHookAnalytics : public FBaseSingleStructIndexAnalytics
{
	float                                              HookStartTime;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     MirrorsIdSurvivor;                                        // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     MirrorsIdKiller;                                          // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     MirrorsIdRescuer;                                         // 0x0040(0x0010) (ZeroConstructor)
	int                                                TimesOnHook;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     Outcome;                                                  // 0x0058(0x0010) (ZeroConstructor)
	float                                              HookDuration;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EscapeAttemptStart;                                       // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EscapeAttemptFull;                                        // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SurvivorsRemaining;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumberOfActiveSurvivorsStart;                             // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumberOfActiveSurvivorsEnd;                               // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumberOfActiveSurvivorsTotal;                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DurationCampFace;                                         // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DurationCampHard;                                         // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DurationCampSoft;                                         // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumberOfRescuers;                                         // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeForFirstRescuer;                                      // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchID;                                                  // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     platform;                                                 // 0x00A8(0x0010) (ZeroConstructor)
	bool                                               ReverseBearTrapOn;                                        // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.InteractionProficiencyProperties
// 0x0078 (0x0080 - 0x0008)
struct FInteractionProficiencyProperties : public FDBDTableRowBase
{
	struct FName                                       ProficiencyID;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x30];                                      // 0x0014(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.InteractionProficiencyProperties.ProficiencyBlueprint
	TArray<float>                                      BuffLevelThresholds;                                      // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      DebuffLevelThresholds;                                    // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               HasLevels;                                                // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FString                                     IconFilePath;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.InteractionProficiencyData
// 0x0010
struct FInteractionProficiencyData
{
	bool                                               IsActive;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Level;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EStatusEffectType                                  ProficiencyType;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.InvalidLoadoutAnalytics
// 0x0010 (0x0068 - 0x0058)
struct FInvalidLoadoutAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                SlasherPerkCount;                                         // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PowerAddonCount;                                          // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CamperPerkCount;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemAddonCount;                                           // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ItemData
// 0x0078 (0x0140 - 0x00C8)
struct FItemData : public FBaseItemData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x00C8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.ItemData.ItemMesh
	EItemHandPosition                                  HandPosition;                                             // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlayerRole                                        Role;                                                     // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemRarity                                        Rarity;                                                   // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Inventory;                                                // 0x00FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Chest;                                                    // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EKillerAbilities                                   RequiredKillerAbility;                                    // 0x00FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00FE(0x0002) MISSED OFFSET
	struct FItemAvailability                           Availability;                                             // 0x0100(0x0030) (Edit)
	bool                                               IsInNonViolentBuild;                                      // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvailableInAtlantaBuild;                                // 0x0131(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AntiDLC;                                                  // 0x0132(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Bloodweb;                                                 // 0x0133(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventId;                                                  // 0x0134(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0134(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct DeadByDaylight.ItemAddonProperties
// 0x0050 (0x0190 - 0x0140)
struct FItemAddonProperties : public FItemData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0140(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.ItemAddonProperties.ItemAddonBlueprint
	TArray<struct FName>                               ParentItems;                                              // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               PreLevelGenerationModifierID;                             // 0x0180(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.KillerSoundCueTracker
// 0x001C
struct FKillerSoundCueTracker
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.KillerTutorialAnalytics
// 0x0018 (0x0070 - 0x0058)
struct FKillerTutorialAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                SecondsSpentInTutorial;                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInIntroSection;                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInChaseSection;                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInEscapeSection;                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               WasLungeAttackObjectiveCompleted;                         // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.KrakenRequestAnalyticsController
// 0x0010
struct FKrakenRequestAnalyticsController
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.KrakenRequestAnalytics
// 0x0020 (0x0078 - 0x0058)
struct FKrakenRequestAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     KrakenUrl;                                                // 0x0058(0x0010) (ZeroConstructor)
	int                                                ResponseCode;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RetryCount;                                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               success;                                                  // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegionSurvivorAnalytics
// 0x0020 (0x0078 - 0x0058)
struct FLegionSurvivorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	int                                                DeepWoundCount;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FrenzyEffectivements;                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DeepWoundDying;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               DeepWoundEscape;                                          // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegionKillerAnalytics
// 0x0018 (0x0070 - 0x0058)
struct FLegionKillerAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	int                                                Pallet;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LevelLoadingTimeoutAnalytics
// 0x0008 (0x0060 - 0x0058)
struct FLevelLoadingTimeoutAnalytics : public FUniquelyIdentifiedAnalytic
{
	float                                              TimeElapsed;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LevelLoadingStepAnalytics
// 0x0010 (0x0068 - 0x0058)
struct FLevelLoadingStepAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     LoadingStep;                                              // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.DirectionalHeightFogInterpolationValues
// 0x0050
struct FDirectionalHeightFogInterpolationValues
{
	float                                              FogDensity;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FogInscatteringColor;                                     // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              DirectionalInscatteringExponent;                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DirectionalInscatteringStartDistance;                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DirectionalInscatteringColor;                             // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FogMaxOpacity;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartDistance;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FHeightFogGradientEntry>             FogGradient;                                              // 0x0038(0x0010) (ZeroConstructor)
	float                                              DistanceUntilFlatFog;                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceUntilNoFog;                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.LoadingTimeoutAnalytics
// 0x0058 (0x00B0 - 0x0058)
struct FLoadingTimeoutAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     match_id;                                                 // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     lobby_id;                                                 // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     timeout_timestamp;                                        // 0x0078(0x0010) (ZeroConstructor)
	float                                              total_load_time;                                          // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     current_map_name;                                         // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     transition_id;                                            // 0x00A0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LoadingStepAnalytics
// 0x0068 (0x00C0 - 0x0058)
struct FLoadingStepAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     match_id;                                                 // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     lobby_id;                                                 // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     step_change_timestamp;                                    // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     loading_step;                                             // 0x0088(0x0010) (ZeroConstructor)
	float                                              time_on_prev_step;                                        // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              total_load_time;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     current_map_name;                                         // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     transition_id;                                            // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LoadOutAnalytics
// 0x0098 (0x00F0 - 0x0058)
struct FLoadOutAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     LoadoutItem;                                              // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutItemAddOn1;                                        // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutItemAddOn2;                                        // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutPerk1;                                             // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutPerk2;                                             // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutPerk3;                                             // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutPerk4;                                             // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutOffering;                                          // 0x00C8(0x0010) (ZeroConstructor)
	EPlayerRole                                        Role;                                                     // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	int                                                Rank;                                                     // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchID;                                                  // 0x00E0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LoadOutLobbyAnalytics
// 0x00B0 (0x0108 - 0x0058)
struct FLoadOutLobbyAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     LoadoutItem;                                              // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutItemAddOn1;                                        // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutItemAddOn2;                                        // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutPerk1;                                             // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutPerk2;                                             // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutPerk3;                                             // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutPerk4;                                             // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     LoadoutOffering;                                          // 0x00C8(0x0010) (ZeroConstructor)
	EPlayerRole                                        Role;                                                     // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	int                                                Rank;                                                     // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Prestige;                                                 // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x00E8(0x0010) (ZeroConstructor)
	struct FString                                     LobbyId;                                                  // 0x00F8(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LoadoutSlotUnlockLevelValue
// 0x0008 (0x0010 - 0x0008)
struct FLoadoutSlotUnlockLevelValue : public FDBDTableRowBase
{
	ELoadoutSlot                                       LoadoutSlot;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                BloodWebLevel;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.GameEventLogAnalytics
// 0x0010 (0x0068 - 0x0058)
struct FGameEventLogAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     EventName;                                                // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LogAnalytics
// 0x0010 (0x0068 - 0x0058)
struct FLogAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Message;                                                  // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PluginAnalytics
// 0x0010 (0x0068 - 0x0058)
struct FPluginAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Version;                                                  // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LogMirrorsAnalytics
// 0x0010 (0x0078 - 0x0068)
struct FLogMirrorsAnalytics : public FPluginAnalytics
{
	struct FString                                     LogMirrors;                                               // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LogPresencePluginAnalytics
// 0x0020 (0x0088 - 0x0068)
struct FLogPresencePluginAnalytics : public FPluginAnalytics
{
	struct FString                                     Context;                                                  // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     Message;                                                  // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LunarSpecialEventAnalytics
// 0x0010 (0x00A8 - 0x0098)
struct FLunarSpecialEventAnalytics : public FSpecialEventBaseAnalytics
{
	int                                                SurvivorPickLantern;                                      // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SurvivorEscapeWithLantern;                                // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillerDestroyedLanternOnSurvivor;                         // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillerDestroyLanternInLevel;                              // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.MainMenuButtonData
// 0x0088 (0x0090 - 0x0008)
struct FMainMenuButtonData : public FDBDTableRowBase
{
	EMainMenuButton                                    ButtonType;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Label;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InfoTitle;                                                // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InfoDescription;                                          // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FText                                       LockedInfoTitle;                                          // 0x0058(0x0018) (Edit, BlueprintVisible)
	struct FText                                       LockedInfoDescription;                                    // 0x0070(0x0018) (Edit, BlueprintVisible)
	bool                                               IsDisabled;                                               // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocked;                                                 // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHidden;                                                 // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x008B(0x0005) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MapCoordData
// 0x0030
struct FMapCoordData
{
	struct FString                                     Type;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Actor;                                                    // 0x0010(0x0010) (ZeroConstructor)
	int                                                X;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MapCoordAnalytics
// 0x0020 (0x0078 - 0x0058)
struct FMapCoordAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FMapCoordData>                       MapItem;                                                  // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MatchInfoAnalytics
// 0x0100 (0x0158 - 0x0058)
struct FMatchInfoAnalytics : public FUniquelyIdentifiedAnalytic
{
	EGameType                                          gameMode;                                                 // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	EPlayerRole                                        Role;                                                     // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	int                                                PartySize;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0060(0x0010) (ZeroConstructor)
	int                                                Rank;                                                     // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Prestige;                                                 // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Pips;                                                     // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PipsTotal;                                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MapSeed;                                                  // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     PartyHostMirrorsId;                                       // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     LobbyId;                                                  // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     KrakenMatchId;                                            // 0x00C8(0x0010) (ZeroConstructor)
	struct FString                                     Version;                                                  // 0x00D8(0x0010) (ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x00E8(0x0010) (ZeroConstructor)
	struct FString                                     SelectedCountry;                                          // 0x00F8(0x0010) (ZeroConstructor)
	bool                                               FirstTimePlaying;                                         // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	int                                                CumulativeMatches;                                        // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsSurvivor;                              // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsKiller;                                // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     LastMatchTimestamp;                                       // 0x0118(0x0010) (ZeroConstructor)
	bool                                               IsInGameOnTournament;                                     // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	struct FString                                     GameOnTournamentId;                                       // 0x0130(0x0010) (ZeroConstructor)
	struct FString                                     GameOnMatchId;                                            // 0x0140(0x0010) (ZeroConstructor)
	float                                              ExactPing;                                                // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               hasAnActiveArchiveQuest;                                  // 0x0154(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               archiveQuestCanProgress;                                  // 0x0155(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0156(0x0002) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MatchmakingAnalytics
// 0x0018 (0x0070 - 0x0058)
struct FMatchmakingAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchmakingSessionGuid;                                   // 0x0058(0x0010) (ZeroConstructor)
	EPlayerRole                                        PlayerRole;                                               // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameType                                          GameType;                                                 // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	int                                                PartySize;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.MatchmakingLobbyAnalytics
// 0x0038 (0x00A8 - 0x0070)
struct FMatchmakingLobbyAnalytics : public FMatchmakingAnalytics
{
	struct FString                                     LobbyStartTime;                                           // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     LobbyEndTime;                                             // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     LobbyResult;                                              // 0x0090(0x0010) (ZeroConstructor)
	int                                                Rank;                                                     // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MatchmakingQueueAnalytics
// 0x0038 (0x00A8 - 0x0070)
struct FMatchmakingQueueAnalytics : public FMatchmakingAnalytics
{
	struct FString                                     QueueStartTime;                                           // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     QueueEndTime;                                             // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     QueueResult;                                              // 0x0090(0x0010) (ZeroConstructor)
	int                                                Rank;                                                     // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CrossPlayEnabled;                                         // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MatchmakingSessionSpotReservationAnalytics
// 0x0018 (0x0070 - 0x0058)
struct FMatchmakingSessionSpotReservationAnalytics : public FUniquelyIdentifiedAnalytic
{
	bool                                               ReservationSuccess;                                       // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     Details;                                                  // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MatchmakingSearchCompleteAnalytics
// 0x00E0 (0x0138 - 0x0058)
struct FMatchmakingSearchCompleteAnalytics : public FUniquelyIdentifiedAnalytic
{
	bool                                               success;                                                  // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                NumMatches;                                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               UsedFallback;                                             // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FString                                     ConnectingToUser;                                         // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     SearchParams;                                             // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     SearchResultSettings;                                     // 0x0088(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x0098(0x00A0) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MatchmakingHostCreatedAnalytics
// 0x0070 (0x00C8 - 0x0058)
struct FMatchmakingHostCreatedAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                NumPublicConnections;                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumPrivateConnections;                                    // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAdvertise;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsLANMatch;                                               // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               AllowInvites;                                             // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               UsesPresence;                                             // 0x0063(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               AllowJoinViaPresenceFriendsOnly;                          // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               AllowJoinInProgress;                                      // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               AllowJoinViaPresence;                                     // 0x0066(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               success;                                                  // 0x0067(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FString                                     HostSettings;                                             // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0078(0x0050) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MatchmakingJoinCompleteAnalytics
// 0x0018 (0x0070 - 0x0058)
struct FMatchmakingJoinCompleteAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     SessionName;                                              // 0x0058(0x0010) (ZeroConstructor)
	int                                                Result;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MatchmakingJoinSessionAnalytics
// 0x0010 (0x0068 - 0x0058)
struct FMatchmakingJoinSessionAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Log;                                                      // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MatchmakingApproveLoginAnalytics
// 0x0028 (0x0080 - 0x0058)
struct FMatchmakingApproveLoginAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                CurrentPlayers;                                           // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               success;                                                  // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	struct FString                                     Error;                                                    // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     JoiningUserID;                                            // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.WaitTimeAnalytics
// 0x0090 (0x00E8 - 0x0058)
struct FWaitTimeAnalytics : public FUniquelyIdentifiedAnalytic
{
	float                                              EnterLobbyWaitTime;                                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnterMatchWaitTime;                                       // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchWaitStartUtc;                                        // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     MatchWaitStopUtc;                                         // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     LobbyWaitStartUtc;                                        // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     LobbyWaitStopUtc;                                         // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     LobbyWaitStopReason;                                      // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x00B0(0x0010) (ZeroConstructor)
	struct FString                                     Version;                                                  // 0x00C0(0x0010) (ZeroConstructor)
	EGameType                                          gameMode;                                                 // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	EPlayerRole                                        Role;                                                     // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	int                                                PartySize;                                                // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankDifference;                                           // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DaysSinceReset;                                           // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.QueueAnalytics
// 0x0168 (0x01C0 - 0x0058)
struct FQueueAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                TimesQueuedSurvivor;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimesQueuedKiller;                                        // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MatchesAsSurvivor;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MatchesAsKiller;                                          // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SelectedCountry;                                          // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x0078(0x0010) (ZeroConstructor)
	bool                                               FirstTimePlaying;                                         // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                CumulativeMatches;                                        // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsSurvivor;                              // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsKiller;                                // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     LastMatchTimestamp;                                       // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     SessionStartTimestamp;                                    // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     SessionEndTimestamp;                                      // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     LastSessionTimestamp;                                     // 0x00C8(0x0010) (ZeroConstructor)
	int                                                CumulativeSessions;                                       // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CumulativePlaytime;                                       // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInCharacterMenu;                                      // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInBloodwebMenu;                                       // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInLoadoutMenu;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInCustomizationMenu;                                  // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInFearMarket;                                         // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInTallyScreen;                                        // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInGameMatch;                                          // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInHelpMenu;                                           // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInOfflineLobby;                                       // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInOfflineLobbySurvivorGroup;                          // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInOnlineLobby;                                        // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInOnlineLobbySurvivorGroup;                           // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DlcInstalled80Suitcase;                                   // 0x0110(0x0010) (ZeroConstructor)
	struct FString                                     DlcInstalledHalloween;                                    // 0x0120(0x0010) (ZeroConstructor)
	struct FString                                     DlcInstalledBloodstainedSack;                             // 0x0130(0x0010) (ZeroConstructor)
	struct FString                                     DlcInstalledFleshAndMud;                                  // 0x0140(0x0010) (ZeroConstructor)
	struct FString                                     DlcInstalledHeadcase;                                     // 0x0150(0x0010) (ZeroConstructor)
	struct FString                                     DlcInstalledSparkOfMadness;                               // 0x0160(0x0010) (ZeroConstructor)
	struct FString                                     DlcInstalledCharityCase;                                  // 0x0170(0x0010) (ZeroConstructor)
	struct FString                                     DlcInstalledCannibal;                                     // 0x0180(0x0010) (ZeroConstructor)
	struct FString                                     DlcInstalledEngland;                                      // 0x0190(0x0010) (ZeroConstructor)
	struct FString                                     DlcInstalledFinland;                                      // 0x01A0(0x0010) (ZeroConstructor)
	struct FString                                     DlcInstalledGuam;                                         // 0x01B0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MatchRatingAnalytics
// 0x0018 (0x0070 - 0x0058)
struct FMatchRatingAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                Rating;                                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     MatchID;                                                  // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MenuFlowAnalytics
// 0x0058 (0x00B0 - 0x0058)
struct FMenuFlowAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     CurrentContext;                                           // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     PreviousContext;                                          // 0x0068(0x0010) (ZeroConstructor)
	float                                              TimeOnPreviousContext;                                    // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     ContextChangeTimetamp;                                    // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     LobbyId;                                                  // 0x00A0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.StoreMenuFlowAnalytics
// 0x0040 (0x0058 - 0x0018)
struct FStoreMenuFlowAnalytics : public FBaseSingleStructIndexAnalytics
{
	struct FString                                     MirrorsId;                                                // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     EventTimestamp;                                           // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     EventName;                                                // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     Data;                                                     // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MenuIndexChangeEventData
// 0x0004
struct FMenuIndexChangeEventData
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.MenuRoleChangeEventData
// 0x0001
struct FMenuRoleChangeEventData
{
	EPlayerRole                                        PlayerRole;                                               // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.GameInfoEventData
// 0x0002
struct FGameInfoEventData
{
	EPlayerRole                                        PlayerRole;                                               // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EGameType                                          GameType;                                                 // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AnimationMapping
// 0x0050 (0x0058 - 0x0008)
struct FAnimationMapping : public FDBDTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.AnimationMapping.MontageAsset
	TArray<struct FName>                               Tags;                                                     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                _montage;                                                 // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _loadAttempted;                                           // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.AnimationMappingRow
// 0x0010 (0x0018 - 0x0008)
struct FAnimationMappingRow : public FDBDTableRowBase
{
	TArray<struct FAnimationMapping>                   Mappings;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.NodeContentDistributionValue
// 0x0058 (0x0060 - 0x0008)
struct FNodeContentDistributionValue : public FDBDTableRowBase
{
	int                                                Empty_Weight;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Empty_MinCount;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Empty_MaxCount;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Perks_Weight;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Perks_MinCount;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Perks_MaxCount;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerksPacks_Weight;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerksPacks_MinCount;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerksPacks_MaxCount;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Offerings_Weight;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Offerings_MinCount;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Offerings_MaxCount;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Items_Weight;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Items_MinCount;                                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Items_MaxCount;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddOn_Weight;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddOn_MinCount;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddOn_MaxCount;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Chests_Weight;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Chests_MinCount;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Chests_MaxCount;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.OfferingEffect
// 0x0028
struct FOfferingEffect
{
	EOfferingEffectType                                Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               Tags;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       value;                                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0018(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Modifier;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.OfferingProperties
// 0x0038 (0x0178 - 0x0140)
struct FOfferingProperties : public FItemData
{
	EOfferingType                                      OfferingType;                                             // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanUseAfterEventEnd;                                      // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0142(0x0006) MISSED OFFSET
	TArray<struct FName>                               Tags;                                                     // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FOfferingEffect>                     Effects;                                                  // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BigIconFilePath;                                          // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.OfferingTriggerPositionData
// 0x000C
struct FOfferingTriggerPositionData
{
	int                                                Index;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PosX;                                                     // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PosY;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.DBDQueueTimeInfo
// 0x0018
struct FDBDQueueTimeInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDConnectionStatus
// 0x0010
struct FDBDConnectionStatus
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDSearchParams
// 0x0070
struct FDBDSearchParams
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDJoinParams
// 0x0001
struct FDBDJoinParams
{
	EGameType                                          GameType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.OutfitData
// 0x00F0 (0x00F8 - 0x0008)
struct FOutfitData : public FDBDTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FItemUIData                                 UIData;                                                   // 0x0018(0x0068) (Edit)
	struct FItemAvailability                           Availability;                                             // 0x0080(0x0030) (Edit)
	TArray<struct FName>                               OutfitItems;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor)
	struct FText                                       CollectionName;                                           // 0x00C0(0x0018) (Edit)
	struct FText                                       CollectionDescription;                                    // 0x00D8(0x0018) (Edit)
	bool                                               IsUnbreakable;                                            // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvailableInAtlantaBuild;                                // 0x00F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00F2(0x0006) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SurvivorInfoData
// 0x0038
struct FSurvivorInfoData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PerformanceAnalytics
// 0x00E8 (0x0140 - 0x0058)
struct FPerformanceAnalytics : public FUniquelyIdentifiedAnalytic
{
	float                                              AverageFPS;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinFPS;                                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFPS;                                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AverageFrameTime;                                         // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinFrameTime;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFrameTime;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StandardDeviationFrameTime;                               // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AverageRenderThreadTime;                                  // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinRenderThreadTime;                                      // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxRenderThreadTime;                                      // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StandardDeviationRenderThreadTime;                        // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AverageGameThreadTime;                                    // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinGameThreadTime;                                        // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxGameThreadTime;                                        // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StandardDeviationGameThreadTime;                          // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AverageRhiThreadTime;                                     // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinRhiThreadTime;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxRhiThreadTime;                                         // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StandardDeviationRhiThreadTime;                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AverageGpuTime;                                           // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinGpuTime;                                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxGpuTime;                                               // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StandardDeviationGpuTime;                                 // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FString                                     Version;                                                  // 0x00B8(0x0010) (ZeroConstructor)
	struct FString                                     Scenario;                                                 // 0x00C8(0x0010) (ZeroConstructor)
	struct FString                                     Theme;                                                    // 0x00D8(0x0010) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x00E8(0x0010) (ZeroConstructor)
	int                                                TileListCount;                                            // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0100(0x0010) (ZeroConstructor)
	struct FString                                     Cpu;                                                      // 0x0110(0x0010) (ZeroConstructor)
	struct FString                                     GpuAdapter;                                               // 0x0120(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x0130(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PerformanceChartingAnalytics
// 0x0138 (0x0190 - 0x0058)
struct FPerformanceChartingAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     Version;                                                  // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     Scenario;                                                 // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     Theme;                                                    // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     map_name;                                                 // 0x0088(0x0010) (ZeroConstructor)
	int                                                tile_spawn_count;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     match_id;                                                 // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     character_name;                                           // 0x00B0(0x0010) (ZeroConstructor)
	struct FString                                     cpu_name;                                                 // 0x00C0(0x0010) (ZeroConstructor)
	struct FString                                     gpu_name;                                                 // 0x00D0(0x0010) (ZeroConstructor)
	struct FString                                     resolution;                                               // 0x00E0(0x0010) (ZeroConstructor)
	int                                                graphics_quality_level;                                   // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FString                                     hitch_times;                                              // 0x00F8(0x0010) (ZeroConstructor)
	float                                              target_30_fps;                                            // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              target_60_fps;                                            // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              target_120_fps;                                           // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              measured_perf_time;                                       // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mvp;                                                      // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              avg_fps;                                                  // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              hitches_per_minute;                                       // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              avg_hitch;                                                // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              frame_time_avg;                                           // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              frame_time_max;                                           // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              frame_time_min;                                           // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              game_thread_avg;                                          // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              game_thread_hitches_per_min;                              // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              game_thread_bound_frames;                                 // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              render_thread_avg;                                        // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              render_thread_hitches_per_min;                            // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              render_thread_bound_frames;                               // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rhi_thread_avg;                                           // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rhi_thread_hitches_per_min;                               // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rhi_thread_bound_frames;                                  // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              gpu_avg;                                                  // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              gpu_hitches_per_min;                                      // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              gpu_bound_frames;                                         // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              draw_calls_avg;                                           // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              draw_calls_max;                                           // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              draw_calls_min;                                           // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              drawn_prims_avg;                                          // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              drawn_prims_max;                                          // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              drawn_prims_min;                                          // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              cpu_memory_peak;                                          // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              cpu_memory_used;                                          // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              physical_memory_peak;                                     // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              physical_memory_used;                                     // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PerkLevelText
// 0x0028
struct FPerkLevelText
{
	TArray<struct FString>                             Tunables;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       TextOverride;                                             // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.PerkProperties
// 0x0108 (0x0248 - 0x0140)
struct FPerkProperties : public FItemData
{
	TArray<struct FName>                               Tags;                                                     // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AssociatedPlayerIndex;                                    // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MandatoryOnBloodweblevel;                                 // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeachableOnBloodweblevel;                                 // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AtlantaTeachableLevel;                                    // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<EPerkCategory>                              PerkCategory;                                             // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0170(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.PerkProperties.PerkBlueprint
	TArray<EItemRarity>                                PerkLevelRarity;                                          // 0x01A0(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	struct FText                                       PerkDefaultDescription;                                   // 0x01B0(0x0018) (Edit, EditFixedSize)
	TArray<struct FPerkLevelText>                      PerkLevelTunables;                                        // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       PerkLevel1Description;                                    // 0x01D8(0x0018) (Edit, EditFixedSize)
	struct FText                                       PerkLevel2Description;                                    // 0x01F0(0x0018) (Edit, EditFixedSize)
	struct FText                                       PerkLevel3Description;                                    // 0x0208(0x0018) (Edit, EditFixedSize)
	TArray<struct FString>                             AtlantaActivatableInteractionIDs;                         // 0x0220(0x0010) (Edit, ZeroConstructor)
	struct FText                                       PerkUnlicensedDescriptionOverride;                        // 0x0230(0x0018) (Edit)
};

// ScriptStruct DeadByDaylight.PerkAcquisitionAnalytics
// 0x0048 (0x00A0 - 0x0058)
struct FPerkAcquisitionAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     CharacterName;                                            // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     PerkId;                                                   // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     PerkSource;                                               // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     Duplicate;                                                // 0x0088(0x0010) (ZeroConstructor)
	int                                                PerkLevel;                                                // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlagueSurvivorAnalytics
// 0x0030 (0x0088 - 0x0058)
struct FPlagueSurvivorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	int                                                BecomeInfectCount;                                        // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RegularVomitHits;                                         // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SuperVomitHits;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CleanSicknessCount;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeWithSickness;                                         // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeWithMaximumSickness;                                  // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInSuperMode;                                          // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlatformDlcData
// 0x00A0 (0x00A8 - 0x0008)
struct FPlatformDlcData : public FDBDTableRowBase
{
	struct FString                                     ID;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       UnlockDescription;                                        // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     Description;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                UISortOrder;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     DlcIdSteam;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DlcIdDmm;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DlcIdPS4;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DlcIdXB1;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DlcIdSwitch;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DlcIdGRDK;                                                // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerLevelData
// 0x000C
struct FPlayerLevelData
{
	int                                                LevelValue;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PrestigeValue;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxXp;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.PostGameAnalyticsBase
// 0x0040 (0x0098 - 0x0058)
struct FPostGameAnalyticsBase : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	int                                                BloodwebPoints;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GameDuration;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0070(0x0010) (ZeroConstructor)
	int                                                Rank;                                                     // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PipsGainedOrLost;                                         // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchEndReason;                                           // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PostGame_KillerAnalytics
// 0x0060 (0x00F8 - 0x0098)
struct FPostGame_KillerAnalytics : public FPostGameAnalyticsBase
{
	int                                                Brutality;                                                // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Deviousness;                                              // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Hunter;                                                   // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Sacrifice;                                                // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EscapeesCount;                                            // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SacrificedCount;                                          // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledCount;                                              // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisconnectCount;                                          // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimeOpenGate;                                             // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FString                                     SurvivorSpawningPosition;                                 // 0x00C0(0x0010) (ZeroConstructor)
	int                                                GeneratorsDone;                                           // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FString                                     EGS_starter;                                              // 0x00D8(0x0010) (ZeroConstructor)
	float                                              EGS_time;                                                 // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EGS_duration;                                             // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EGS_sacrifice;                                            // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               EGS_reachEnd;                                             // 0x00F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PostGame_SurvivorAnalyticsController
// 0x0001
struct FPostGame_SurvivorAnalyticsController
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PostGame_SurvivorAnalytics
// 0x0028 (0x00C0 - 0x0098)
struct FPostGame_SurvivorAnalytics : public FPostGameAnalyticsBase
{
	int                                                Objectives;                                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Survival;                                                 // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Altruism;                                                 // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Boldness;                                                 // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Outcome;                                                  // 0x00A8(0x0010) (ZeroConstructor)
	ECamperDamageState                                 damageState;                                              // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	int                                                HookedCount;                                              // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.PreLevelGenerationModifierProperties
// 0x0018 (0x0020 - 0x0008)
struct FPreLevelGenerationModifierProperties : public FDBDTableRowBase
{
	struct FName                                       ModifierID;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EPreLevelGenerationModifierType                    ModifierType;                                             // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EKillerAbilities                                   KillerAbiliy;                                             // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              ModifierValue;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PrestigeIconData
// 0x0038 (0x0040 - 0x0008)
struct FPrestigeIconData : public FDBDTableRowBase
{
	EPlayerRole                                        PlayerRole;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                PrestigeLevel;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.PrestigeIconData.Icon
};

// ScriptStruct DeadByDaylight.ProceduralGenerationAnalytics
// 0x0110 (0x0128 - 0x0018)
struct FProceduralGenerationAnalytics : public FBaseSingleStructIndexAnalytics
{
	int                                                GenerationSeed;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MapSeed;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     Procedural_MeatLocker_Small;                              // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     Procedural_MeatLocker_Big;                                // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     Procedural_Searchable;                                    // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     Procedural_EdgeObjects;                                   // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     Procedural_LivingWorldObjects;                            // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     Procedural_Hatch;                                         // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     Procedural_BookShelves;                                   // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     Procedural_Totems;                                        // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     Procedural_QuadrantSpawn;                                 // 0x00B0(0x0010) (ZeroConstructor)
	int                                                PalletSpawned;                                            // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProceduralMin;                                      // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProceduralMax;                                      // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProcedural;                                         // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProceduralSetCount;                                 // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PalletGenerationId;                                       // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletGeneric;                                            // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FString                                     KillerSpawn;                                              // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     SurvivorSpawn;                                            // 0x00F0(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x0100(0x0010) (ZeroConstructor)
	struct FString                                     platform;                                                 // 0x0110(0x0010) (ZeroConstructor)
	int                                                HookSpawned;                                              // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ProceduralMap
// 0x00B8 (0x00C0 - 0x0008)
struct FProceduralMap : public FDBDTableRowBase
{
	struct FName                                       MapId;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ThemeName;                                                // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0048(0x0018) (Edit, BlueprintVisible)
	float                                              HookMinDistance;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HookMinCount;                                             // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HookMaxCount;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BookShelvesMinDistance;                                   // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BookShelvesMinCount;                                      // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BookShelvesMaxCount;                                      // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LivingWorldObjectsMinCount;                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LivingWorldObjectsMaxCount;                               // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ThumbnailPath;                                            // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SortingIndex;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FString                                     DlcIDString;                                              // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        FixedLayoutSeed;                                          // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsInNonViolentBuild;                                      // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ProfileLoadEventData
// 0x0010
struct FProfileLoadEventData
{
	bool                                               FirstTimePlaying;                                         // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDateTime                                   Timestamp;                                                // 0x0008(0x0008) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.RankUIData
// 0x0060 (0x0068 - 0x0008)
struct FRankUIData : public FDBDTableRowBase
{
	int                                                Rank;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPlayerRole                                        PlayerRole;                                               // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FSlateColor                                 Color;                                                    // 0x0010(0x0028) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.RankUIData.Frame
};

// ScriptStruct DeadByDaylight.RarityDistributionValue
// 0x0010 (0x0018 - 0x0008)
struct FRarityDistributionValue : public FDBDTableRowBase
{
	int                                                InnerRing;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRing;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRing;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ReportAnalytics
// 0x00A8 (0x00C0 - 0x0018)
struct FReportAnalytics : public FBaseSingleStructIndexAnalytics
{
	struct FString                                     ClientIdTransmitter;                                      // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     ClientIdReceiver;                                         // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     MirrorsIdTransmitter;                                     // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     MirrorsIdReceiver;                                        // 0x0048(0x0010) (ZeroConstructor)
	EPlayerRole                                        RoleTransmitter;                                          // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	EPlayerRole                                        RoleReceiver;                                             // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	struct FString                                     MatchID;                                                  // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     gameMode;                                                 // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     ReportType;                                               // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     ReportCategory;                                           // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     Comments;                                                 // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     platform;                                                 // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.RewardItemData
// 0x0038
struct FRewardItemData
{
	struct FString                                     IconPath;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     Title;                                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FString                                     Description;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	EItemRarity                                        Rarity;                                                   // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EInventoryItemType                                 ItemType;                                                 // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsDuplicate;                                              // 0x0032(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	ECurrencyType                                      CurrencyType;                                             // 0x0033(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrencyAmount;                                           // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.RTMAnalytics
// 0x0028 (0x0080 - 0x0058)
struct FRTMAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     RTMType;                                                  // 0x0058(0x0010) (ZeroConstructor)
	uint32_t                                           RTMSize;                                                  // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     CurrentGameFlowStep;                                      // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.S3CommandErrorAnalytics
// 0x0030 (0x0088 - 0x0058)
struct FS3CommandErrorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     URL;                                                      // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     Verb;                                                     // 0x0068(0x0010) (ZeroConstructor)
	int                                                ResponseCode;                                             // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               InvalidRequest;                                           // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               InvalidResponse;                                          // 0x007D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DecryptionFailure;                                        // 0x007E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               BadResponse;                                              // 0x007F(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ContentModifiedError;                                     // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.S3CommandAnalytics
// 0x0060 (0x00B8 - 0x0058)
struct FS3CommandAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                RequestContentLength;                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     ContentType;                                              // 0x0060(0x0010) (ZeroConstructor)
	float                                              ElapsedTime;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     Status;                                                   // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     URL;                                                      // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     Verb;                                                     // 0x0098(0x0010) (ZeroConstructor)
	int                                                ResponseContentLength;                                    // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ResponseCode;                                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               success;                                                  // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SaveGameLoadResultAnalytics
// 0x0018 (0x0070 - 0x0058)
struct FSaveGameLoadResultAnalytics : public FUniquelyIdentifiedAnalytic
{
	bool                                               LoadSuccessful;                                           // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     Message;                                                  // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SaveGameSaveResultAnalytics
// 0x0008 (0x0060 - 0x0058)
struct FSaveGameSaveResultAnalytics : public FUniquelyIdentifiedAnalytic
{
	bool                                               SaveSuccessful;                                           // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                ResponseCode;                                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SaveGameErrorAnalytics
// 0x0030 (0x0088 - 0x0058)
struct FSaveGameErrorAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                ErrorCode;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Category;                                                 // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     ErrorDetails;                                             // 0x0070(0x0010) (ZeroConstructor)
	uint32_t                                           KrakenErrorCode;                                          // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SaveGameSummaryCharacterStatsAnalytics
// 0x0010 (0x0068 - 0x0058)
struct FSaveGameSummaryCharacterStatsAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     SavedCharacterStats;                                      // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CharacterSpecificData
// 0x0014
struct FCharacterSpecificData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Level;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PrestigeLevel;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SerializableSaveGameSummaryCharacterData
// 0x0010
struct FSerializableSaveGameSummaryCharacterData
{
	TArray<struct FCharacterSpecificData>              CharacterStats;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SaveGameSummaryPlayerStatsAnalytics
// 0x0030 (0x0088 - 0x0058)
struct FSaveGameSummaryPlayerStatsAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     OwnedPerks;                                               // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     PlayerStatsProgression;                                   // 0x0068(0x0010) (ZeroConstructor)
	int                                                BloodwebPoints;                                           // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	int64_t                                            CumulativePlaytime;                                       // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.StatsProgressionData
// 0x0010
struct FStatsProgressionData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              value;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SerializablePlayerStatsProgression
// 0x0010
struct FSerializablePlayerStatsProgression
{
	TArray<struct FStatsProgressionData>               StatsProgression;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SerializablePlayerPerks
// 0x0050
struct FSerializablePlayerPerks
{
	TMap<struct FName, int>                            Perks;                                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.DetailedScoreAnalytics
// 0x0060 (0x00B8 - 0x0058)
struct FDetailedScoreAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     ScorerMirrorsId;                                          // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     TargetMirrorsId;                                          // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x0078(0x0010) (ZeroConstructor)
	struct FName                                       ScoreTypeId;                                              // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                ScoreExperience;                                          // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ElapsedMatchTime;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InstigatorCoordinateX;                                    // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InstigatorCoordinateY;                                    // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InstigatorCoordinateZ;                                    // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetCoordinateX;                                        // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetCoordinateY;                                        // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetCoordinateZ;                                        // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ScoreAnalytics
// 0x0028 (0x0080 - 0x0058)
struct FScoreAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	struct FName                                       ScoreTypeId;                                              // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0068(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                ScoreCount;                                               // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ScoreBloodwebPoints;                                      // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ShopAnalyticsController
// 0x0001
struct FShopAnalyticsController
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ShopAnalytics
// 0x0020 (0x0078 - 0x0058)
struct FShopAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     LogMessage;                                               // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     Version;                                                  // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.OutlineRevealDescription
// 0x0058
struct FOutlineRevealDescription
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	TArray<class ADBDPlayer*>                          _affectedCharacters;                                      // 0x0030(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SpawnPopulationHandler
// 0x00C8
struct FSpawnPopulationHandler
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
	TArray<class USceneComponent*>                     _allAvailableSpawners;                                    // 0x00B8(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.SpecialEventAnalyticsController
// 0x0090
struct FSpecialEventAnalyticsController
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SpecialEventAnalytics
// 0x0038 (0x0090 - 0x0058)
struct FSpecialEventAnalytics : public FUniquelyIdentifiedAnalytic
{
	EPlayerRole                                        Role;                                                     // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     MatchID;                                                  // 0x0060(0x0010) (ZeroConstructor)
	struct FName                                       EventName;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0070(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Challenge;                                                // 0x007C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                amount;                                                   // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CummulativeAmount;                                        // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SpecialEventObjectiveData
// 0x00E0
struct FSpecialEventObjectiveData
{
	struct FName                                       ObjectiveId;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit)
	struct FString                                     IconPath;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ObjectiveFrameLabel;                                      // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FText                                       CompletedTitle;                                           // 0x0060(0x0018) (Edit)
	struct FText                                       CompletedDescription;                                     // 0x0078(0x0018) (Edit)
	struct FName                                       RewardId;                                                 // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0090(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     LockedRewardGenericIconPath;                              // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     UnlockedRewardGenericIconPath;                            // 0x00B0(0x0010) (Edit, ZeroConstructor)
	EPlayerRole                                        PlayerRole;                                               // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FString                                     StatName;                                                 // 0x00C8(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           Sections;                                                 // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxValue;                                                 // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SpecialEventCinematicData
// 0x0028
struct FSpecialEventCinematicData
{
	struct FDateTime                                   StartTime;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       VideoThumbnailId;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     VideoIconPath;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SpecialEventData
// 0x00E0 (0x00E8 - 0x0008)
struct FSpecialEventData : public FDBDTableRowBase
{
	struct FName                                       EventId;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ECurrencyType                                      CurrencyType;                                             // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FText                                       EventName;                                                // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     EventBannerLabel;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ObjectiveLinkageId;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsTrackedOnline;                                          // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShowUIWidget;                                             // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	TArray<struct FSpecialEventObjectiveData>          Objectives;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FColor                                      ObjectOutlineColour;                                      // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     LobbyName;                                                // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ShopName;                                                 // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       AudioStateSpecialEvent;                                   // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0090(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData05[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData06[0x30];                                      // 0x009C(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.SpecialEventData.GameplayComponent
	TArray<struct FSpecialEventCinematicData>          Cinematics;                                               // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ESpecialEventGameMode                              gameMode;                                                 // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SpecialEventJournalEntryData
// 0x0050
struct FSpecialEventJournalEntryData
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (Edit)
	struct FText                                       Subtitle;                                                 // 0x0018(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0030(0x0018) (Edit)
	struct FDateTime                                   StartDate;                                                // 0x0048(0x0008) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SpecialEventJournalData
// 0x0020 (0x0028 - 0x0008)
struct FSpecialEventJournalData : public FDBDTableRowBase
{
	struct FName                                       EventId;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               ShowLastEntryByDefault;                                   // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TArray<struct FSpecialEventJournalEntryData>       Entries;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SpecialEventObjectiveUIData
// 0x0188
struct FSpecialEventObjectiveUIData
{
	unsigned char                                      UnknownData00[0x188];                                     // 0x0000(0x0188) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SpecialEventUIData
// 0x0028
struct FSpecialEventUIData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.StatusEffectProperties
// 0x0048 (0x0188 - 0x0140)
struct FStatusEffectProperties : public FItemData
{
	TArray<struct FName>                               Tags;                                                     // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0150(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.StatusEffectProperties.StatusEffectBlueprint
	int                                                LevelToDisplay;                                           // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EStatusEffectType                                  StatusEffectType;                                         // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.StatusViewProperties
// 0x0088 (0x0090 - 0x0008)
struct FStatusViewProperties : public FDBDTableRowBase
{
	struct FName                                       StatusViewID;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0048(0x0030) UNKNOWN PROPERTY: SoftClassProperty DeadByDaylight.StatusViewProperties.StatusViewBlueprint
	EStatusEffectType                                  StatusType;                                               // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     IconFilePath;                                             // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.StoreFeaturedBannerData
// 0x0080
struct FStoreFeaturedBannerData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Subtitle;                                                 // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     ImagePath;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     AssociatedDlcId;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     AssociatedCombinedItemId;                                 // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     AssociatedCombinedOutfitId;                               // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ETextBannerPosition                                TextPosition;                                             // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.StoreBannersData
// 0x0098 (0x00A0 - 0x0008)
struct FStoreBannersData : public FDBDTableRowBase
{
	struct FName                                       BannerId;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FStoreFeaturedBannerData                    BannerData;                                               // 0x0018(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               UseAsDefault;                                             // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EStoreBannerLocation                               DefaultLocation;                                          // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.StoreFeaturedBannerUIData
// 0x0098
struct FStoreFeaturedBannerUIData
{
	struct FName                                       BannerId;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FStoreFeaturedBannerData                    BannerData;                                               // 0x0010(0x0080)
	bool                                               IsNew;                                                    // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SurvivorTutorialAnalytics
// 0x0030 (0x0088 - 0x0058)
struct FSurvivorTutorialAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                SecondsSpentInTutorial;                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInIntroSection;                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInSkillchecksSection;                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInKillerSection;                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInStealthSection;                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInHookSection;                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInHealthSection;                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInRescueSection;                              // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInEscapeSection;                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               WasScratchMarksAndWildlifeEventTriggered;                 // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasRushedActionEventTriggered;                            // 0x007D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasSuccessfulStealthEventTriggered;                       // 0x007E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasStealthObjectiveCompleted;                             // 0x007F(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasHatchEscapeObjectiveCompleted;                         // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SyncLoadAnalytics
// 0x0050 (0x0068 - 0x0018)
struct FSyncLoadAnalytics : public FBaseSingleStructIndexAnalytics
{
	struct FString                                     AssetName;                                                // 0x0018(0x0010) (ZeroConstructor)
	float                                              LoadTimeMilliseconds;                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     DeviceProfileName;                                        // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     BuildConfiguration;                                       // 0x0040(0x0010) (ZeroConstructor)
	int                                                ChangelistNumber;                                         // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     MapName;                                                  // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.TransactionAnalyticsController
// 0x00C0
struct FTransactionAnalyticsController
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TransactionAnalytics
// 0x0068 (0x00C0 - 0x0058)
struct FTransactionAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     TransactionType;                                          // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     TransactionSource;                                        // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     SourceID;                                                 // 0x0078(0x0010) (ZeroConstructor)
	int                                                SourceTier;                                               // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     CurrencyType;                                             // 0x0090(0x0010) (ZeroConstructor)
	int                                                CurrencyAmount;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrencyBalance;                                          // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LevelAchieved;                                            // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Prestige;                                                 // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemIDAcquired;                                           // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PerPlatformTunable
// 0x0018 (0x0020 - 0x0008)
struct FPerPlatformTunable : public FDBDTableRowBase
{
	struct FPerPlatformFloat                           value;                                                    // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Description;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.TunableValue
// 0x0020 (0x0028 - 0x0008)
struct FTunableValue : public FDBDTableRowBase
{
	float                                              value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtlantaOverriddenValue;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               OverriddenInAtlanta;                                      // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TutorialEndReward
// 0x0008 (0x0010 - 0x0008)
struct FTutorialEndReward : public FDBDTableRowBase
{
	int                                                BloodpointReward;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TutorialLevelData
// 0x0068 (0x0070 - 0x0008)
struct FTutorialLevelData : public FDBDTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FString                                     IconPath;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsKillerTutorial;                                         // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TutorialNotificationData
// 0x0048 (0x0050 - 0x0008)
struct FTutorialNotificationData : public FDBDTableRowBase
{
	struct FText                                       Title;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	struct FString                                     IconPath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsShowAnalyticEnabled;                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TutorialObjective
// 0x0020 (0x0028 - 0x0008)
struct FTutorialObjective : public FDBDTableRowBase
{
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	bool                                               IsCompletionAnalyticEnabled;                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TutorialTallyData
// 0x0008
struct FTutorialTallyData
{
	bool                                               IsKiller;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FirstTimeCompleted;                                       // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                BloodpointsScore;                                         // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AtlantaSettingMenuData
// 0x0028 (0x0030 - 0x0008)
struct FAtlantaSettingMenuData : public FDBDTableRowBase
{
	EOverlayTabs                                       OverlayTab;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EOverlayContext                                    OverlayContext;                                           // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit)
	EAtlantaSettingMenuType                            MenuType;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.HtmlTagConvertRow
// 0x0020 (0x0028 - 0x0008)
struct FHtmlTagConvertRow : public FTableRowBase
{
	struct FString                                     HtmlTag;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     RichTextTag;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.InteractButtonInfo
// 0x0050 (0x0058 - 0x0008)
struct FInteractButtonInfo : public FTableRowBase
{
	struct FName                                       InteractButtonID;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       InteractionID;                                            // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EPlayerRole                                        PlayerRole;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInputInteractionType                              interactionInputType;                                     // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData03[0x30];                                      // 0x0022(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.InteractButtonInfo.Icon
};

// ScriptStruct DeadByDaylight.VariationData
// 0x0028 (0x0030 - 0x0008)
struct FVariationData : public FDBDTableRowBase
{
	struct FGameplayTag                                Tag;                                                      // 0x0008(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0018(0x0018) (Edit)
};

// ScriptStruct DeadByDaylight.VideoThumbnailProperties
// 0x0048 (0x0050 - 0x0008)
struct FVideoThumbnailProperties : public FDBDTableRowBase
{
	struct FName                                       _id;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               _hasAudio;                                                // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FVector2D                                   _size;                                                    // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0020(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.VideoThumbnailProperties._source
};

// ScriptStruct DeadByDaylight.ArchivesVignetteEntry
// 0x0038 (0x0040 - 0x0008)
struct FArchivesVignetteEntry : public FDBDTableRowBase
{
	struct FText                                       Title;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Text;                                                     // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               HasAudio;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ArchivesVignettes
// 0x0080 (0x0088 - 0x0008)
struct FArchivesVignettes : public FDBDTableRowBase
{
	struct FString                                     VignetteId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Title;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Subtitle;                                                 // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FArchivesVignetteEntry>              Entries;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DeadByDaylight.ArchivesVignettes.CinematicPath
};

// ScriptStruct DeadByDaylight.ArchivesJournal
// 0x0028 (0x0040 - 0x0018)
struct FArchivesJournal : public FDBDTableRowBaseWithId
{
	struct FText                                       Title;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FArchivesVignettes>                  Vignettes;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.XpBonusData
// 0x0018
struct FXpBonusData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                XpValue;                                                  // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
