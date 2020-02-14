#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_FieldSystemEngine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FieldSystemEngine.FieldSystemActor
// 0x0008 (0x0348 - 0x0340)
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                     // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldSystemActor"));

		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystemComponent
// 0x0010 (0x05B0 - 0x05A0)
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class FieldSystemEngine.FieldSystemComponent"));

		return ptr;
	}


	void ApplyUniformVectorFalloffForce(bool* Enabled, struct FVector* Position, struct FVector* Direction, float* Radius, float* Magnitude);
	void ApplyStayDynamicField(bool* Enabled, struct FVector* Position, float* Radius, int* MaxLevelPerCommand);
	void ApplyRadialVectorFalloffForce(bool* Enabled, struct FVector* Position, float* Radius, float* Magnitude);
	void ApplyRadialForce(bool* Enabled, struct FVector* Position, float* Magnitude);
	void ApplyLinearForce(bool* Enabled, struct FVector* Direction, float* Magnitude);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
