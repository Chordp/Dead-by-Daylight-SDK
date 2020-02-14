#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_BP_Menu_Slasher18_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_Slasher18.BP_Menu_Slasher18_C
// 0x00C0 (0x0968 - 0x08A8)
class ABP_Menu_Slasher18_C : public ABP_Menu_BaseSlasher_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      rings;                                                    // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDemonModeMenuComponent*                     DemonModeMenu;                                            // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SKWS01_REF;                                               // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                TML_DemonModeCusto_Color_4A028AF64D8C75B37ACB968AFFF999A6;// 0x08C8(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              TML_DemonModeCusto_Demon_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6;// 0x08D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TML_DemonModeCusto_Normal_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6;// 0x08DC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TML_DemonModeCusto__Direction_4A028AF64D8C75B37ACB968AFFF999A6;// 0x08E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08E1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TML_DemonModeCusto;                                       // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TML_KatanaDissolve_Dissolve_E350E1F74AF3386DE5C9E7A92E1CFCA4;// 0x08F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TML_KatanaDissolve__Direction_E350E1F74AF3386DE5C9E7A92E1CFCA4;// 0x08F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TML_KatanaDissolve;                                       // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsKatanaVisible;                                          // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              NormalModeCustoParts;                                     // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            DemonModeVFX;                                             // 0x0918(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              DemonModeCustoParts;                                      // 0x0928(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        SKOniEmissiveDefault;                                     // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsInDemonMode;                                            // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	TArray<struct FLinearColor>                        SM_OniEmissiveDefault;                                    // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxSwordDissolveValue;                                    // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDissolvevalue;                                         // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Menu_Slasher18.BP_Menu_Slasher18_C"));

		return ptr;
	}


	void SM_SetOniEmissiveParameter(struct FLinearColor* Emissive);
	void SK_SetOniEmissiveParameter(struct FLinearColor* Emissive);
	void ShowDemonModeCusto(bool* IsInDemonMode, bool* IsInNormalMode);
	void SaveOniEmissiveParameter();
	void GetDemonModeCusto();
	void TML_KatanaDissolve__FinishedFunc();
	void TML_KatanaDissolve__UpdateFunc();
	void TML_DemonModeCusto__FinishedFunc();
	void TML_DemonModeCusto__UpdateFunc();
	void TML_DemonModeCusto__Switch_Normal__EventFunc();
	void TML_DemonModeCusto__Switch_Demon__EventFunc();
	void ActivateEndGameVignette(bool* IsActive);
	void ActivatePlayerExposedVFX();
	void ActivateLocalPlayerExposedVFX();
	void SetPlayerExposedVFX();
	void SetHighlightedVFX();
	void ActivatePlayerLightningVFX(class UMaterialInstanceDynamic** LightningFX, bool* intense);
	void ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic** GlitchFX, bool* Face);
	void Start_Travelling_PP();
	void Start_Travelling_Dissolve();
	void Stop_Travelling_Dissolve();
	void Start_Pounce_VFX();
	void Stop_Pounce_VFX();
	void Start_Saliva_VFX();
	void Stop_Saliva_VFX();
	void Stop_Travelling_PP();
	void ActivatePounceStateVFX();
	void Destroy_Blood_Orb();
	void Switch_Oni_Weapons_To_Normal();
	void DisableDemonMode();
	void ReturnToDemonMode();
	void Hide_Oni_Katana_TPV();
	void ReceiveBeginPlay();
	void Switch_Kanobo_To_Demon_Mode();
	void Switch_Kanobo_to_Normal_Mode();
	void Show_Oni_Katana();
	void Hide_Oni_Katana();
	void On_Customisation_Updated();
	void ShowDemonCosmetic();
	void HideDemonCosmetic();
	void ExecuteUbergraph_BP_Menu_Slasher18(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
