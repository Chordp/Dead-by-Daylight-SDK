#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_CustomMeshComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomMeshComponent.CustomMeshComponent
// 0x0010 (0x0600 - 0x05F0)
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomMeshComponent.CustomMeshComponent"));

		return ptr;
	}


	void SetVectorParameterValueOnMaterials(struct FName* ParameterName, struct FVector* ParameterValue);
	void SetScalarParameterValueOnMaterials(struct FName* ParameterName, float* ParameterValue);
	bool SaveMaterials();
	bool RestoreMaterials();
	void PrestreamTextures(float* Seconds, bool* bPrioritizeCharacterTextures, int* CinematicTextureGroups);
	bool IsMaterialSlotNameValid(struct FName* MaterialSlotName);
	TArray<struct FName> GetMaterialSlotNames();
	TArray<class UMaterialInterface*> GetMaterials();
	int GetMaterialIndex(struct FName* MaterialSlotName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
