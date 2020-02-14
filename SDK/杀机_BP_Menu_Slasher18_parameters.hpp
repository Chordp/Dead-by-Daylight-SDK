#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Menu_Slasher18_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SM_SetOniEmissiveParameter
struct ABP_Menu_Slasher18_C_SM_SetOniEmissiveParameter_Params
{
	struct FLinearColor*                               Emissive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SK_SetOniEmissiveParameter
struct ABP_Menu_Slasher18_C_SK_SetOniEmissiveParameter_Params
{
	struct FLinearColor*                               Emissive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonModeCusto
struct ABP_Menu_Slasher18_C_ShowDemonModeCusto_Params
{
	bool*                                              IsInDemonMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsInNormalMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SaveOniEmissiveParameter
struct ABP_Menu_Slasher18_C_SaveOniEmissiveParameter_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.GetDemonModeCusto
struct ABP_Menu_Slasher18_C_GetDemonModeCusto_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__FinishedFunc
struct ABP_Menu_Slasher18_C_TML_KatanaDissolve__FinishedFunc_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__UpdateFunc
struct ABP_Menu_Slasher18_C_TML_KatanaDissolve__UpdateFunc_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__FinishedFunc
struct ABP_Menu_Slasher18_C_TML_DemonModeCusto__FinishedFunc_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__UpdateFunc
struct ABP_Menu_Slasher18_C_TML_DemonModeCusto__UpdateFunc_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Normal__EventFunc
struct ABP_Menu_Slasher18_C_TML_DemonModeCusto__Switch_Normal__EventFunc_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Demon__EventFunc
struct ABP_Menu_Slasher18_C_TML_DemonModeCusto__Switch_Demon__EventFunc_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateEndGameVignette
struct ABP_Menu_Slasher18_C_ActivateEndGameVignette_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerExposedVFX
struct ABP_Menu_Slasher18_C_ActivatePlayerExposedVFX_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateLocalPlayerExposedVFX
struct ABP_Menu_Slasher18_C_ActivateLocalPlayerExposedVFX_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetPlayerExposedVFX
struct ABP_Menu_Slasher18_C_SetPlayerExposedVFX_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetHighlightedVFX
struct ABP_Menu_Slasher18_C_SetHighlightedVFX_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerLightningVFX
struct ABP_Menu_Slasher18_C_ActivatePlayerLightningVFX_Params
{
	class UMaterialInstanceDynamic**                   LightningFX;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              intense;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerGlitchVFX
struct ABP_Menu_Slasher18_C_ActivatePlayerGlitchVFX_Params
{
	class UMaterialInstanceDynamic**                   GlitchFX;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              Face;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling PP
struct ABP_Menu_Slasher18_C_Start_Travelling_PP_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling Dissolve
struct ABP_Menu_Slasher18_C_Start_Travelling_Dissolve_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling Dissolve
struct ABP_Menu_Slasher18_C_Stop_Travelling_Dissolve_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Pounce VFX
struct ABP_Menu_Slasher18_C_Start_Pounce_VFX_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Pounce VFX
struct ABP_Menu_Slasher18_C_Stop_Pounce_VFX_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Saliva VFX
struct ABP_Menu_Slasher18_C_Start_Saliva_VFX_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Saliva VFX
struct ABP_Menu_Slasher18_C_Stop_Saliva_VFX_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling PP
struct ABP_Menu_Slasher18_C_Stop_Travelling_PP_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePounceStateVFX
struct ABP_Menu_Slasher18_C_ActivatePounceStateVFX_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Destroy Blood Orb
struct ABP_Menu_Slasher18_C_Destroy_Blood_Orb_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Oni Weapons To Normal
struct ABP_Menu_Slasher18_C_Switch_Oni_Weapons_To_Normal_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.DisableDemonMode
struct ABP_Menu_Slasher18_C_DisableDemonMode_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnToDemonMode
struct ABP_Menu_Slasher18_C_ReturnToDemonMode_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana_TPV
struct ABP_Menu_Slasher18_C_Hide_Oni_Katana_TPV_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReceiveBeginPlay
struct ABP_Menu_Slasher18_C_ReceiveBeginPlay_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo To Demon Mode
struct ABP_Menu_Slasher18_C_Switch_Kanobo_To_Demon_Mode_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo to Normal Mode
struct ABP_Menu_Slasher18_C_Switch_Kanobo_to_Normal_Mode_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Show Oni Katana
struct ABP_Menu_Slasher18_C_Show_Oni_Katana_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana
struct ABP_Menu_Slasher18_C_Hide_Oni_Katana_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Customisation Updated
struct ABP_Menu_Slasher18_C_On_Customisation_Updated_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonCosmetic
struct ABP_Menu_Slasher18_C_ShowDemonCosmetic_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideDemonCosmetic
struct ABP_Menu_Slasher18_C_HideDemonCosmetic_Params
{
};

// Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ExecuteUbergraph_BP_Menu_Slasher18
struct ABP_Menu_Slasher18_C_ExecuteUbergraph_BP_Menu_Slasher18_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
