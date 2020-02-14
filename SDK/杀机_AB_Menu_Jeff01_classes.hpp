#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_AB_Menu_Jeff01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Jeff01.AB_Menu_Jeff01_C
// 0x0000 (0x173C - 0x173C)
class UAB_Menu_Jeff01_C : public UAB_Menu_Camper_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Jeff01.AB_Menu_Jeff01_C"));

		return ptr;
	}


	void GetRandomMenuIdleOverride(int* Return);
	void HasMenuIdleOverrides(bool* Has_Overrides);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_2C83DBE640DBC980B0BA558E2D0836E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_C524B5794BA138DEF5B9088AE8B497C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_5EB4AD52451079E09BBD61A047B60255();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_612DCE9C44EB7890D120098F6019F197();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_C4545BC049DFD562DBE9C0BEDFB2FA1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_SelectNewIdle();
	void ExecuteUbergraph_AB_Menu_Camper(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
