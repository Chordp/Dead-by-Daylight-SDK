#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_ProceduralMeshComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ProceduralMeshComponent.KismetProceduralMeshLibrary"));

		return ptr;
	}

};


// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0060 (0x0650 - 0x05F0)
class UProceduralMeshComponent : public UMeshComponent
{
public:
	bool                                               bUseComplexAsSimpleCollision;                             // 0x05F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAsyncCooking;                                         // 0x05F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x05F2(0x0006) MISSED OFFSET
	class UBodySetup*                                  ProcMeshBodySetup;                                        // 0x05F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FProcMeshSection>                    ProcMeshSections;                                         // 0x0600(0x0010) (ZeroConstructor)
	TArray<struct FKConvexElem>                        CollisionConvexElems;                                     // 0x0610(0x0010) (ZeroConstructor)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0620(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x063C(0x0004) MISSED OFFSET
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                      // 0x0640(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ProceduralMeshComponent.ProceduralMeshComponent"));

		return ptr;
	}


	void UpdateMeshSection_LinearColor(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FVector2D>* UV1, TArray<struct FVector2D>* UV2, TArray<struct FVector2D>* UV3, TArray<struct FLinearColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents);
	void UpdateMeshSection(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents);
	void SetMeshSectionVisible(int* SectionIndex, bool* bNewVisibility);
	bool IsMeshSectionVisible(int* SectionIndex);
	int GetNumSections();
	void CreateMeshSection_LinearColor(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FVector2D>* UV1, TArray<struct FVector2D>* UV2, TArray<struct FVector2D>* UV3, TArray<struct FLinearColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents, bool* bCreateCollision);
	void CreateMeshSection(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents, bool* bCreateCollision);
	void ClearMeshSection(int* SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(TArray<struct FVector>* ConvexVerts);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
