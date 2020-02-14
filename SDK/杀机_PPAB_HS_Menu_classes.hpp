#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_PPAB_HS_Menu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PPAB_HS_Menu.PPAB_HS_Menu_C
// 0x0518 (0x0788 - 0x0270)
class UPPAB_HS_Menu_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EF3F43FF4589908C703C56B888C11AA5;// 0x0280(0x0330)
	struct FAnimNode_Root                              AnimGraphNode_Root_DE6C1CEA4E15FE30266845A8D9266460;      // 0x05B0(0x0020)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1F06B1994F8A9CD784783B80A39A9540;// 0x05D0(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8C5E2ED644D5E845A4E5F2BA7A9FAE1D;// 0x0700(0x0020)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_8C410F004AB4F3C30B4EAF84BF7576ED;  // 0x0720(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8251991C4AA7471009D6A3BB98FE3601;// 0x0768(0x0020)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass PPAB_HS_Menu.PPAB_HS_Menu_C"));

		return ptr;
	}


	void ExecuteUbergraph_PPAB_HS_Menu(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
