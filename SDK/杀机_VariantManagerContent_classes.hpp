#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_VariantManagerContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VariantManagerContent.LevelVariantSets
// 0x0068 (0x0098 - 0x0030)
class ULevelVariantSets : public UObject
{
public:
	class UBlueprintGeneratedClass*                    DirectorClass;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UVariantSet*>                         VariantSets;                                              // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.LevelVariantSets"));

		return ptr;
	}


	class UVariantSet* GetVariantSetByName(struct FString* VariantSetName);
	class UVariantSet* GetVariantSet(int* VariantSetIndex);
	int GetNumVariantSets();
};


// Class VariantManagerContent.LevelVariantSetsActor
// 0x0020 (0x0360 - 0x0340)
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                             LevelVariantSets;                                         // 0x0340(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.LevelVariantSetsActor"));

		return ptr;
	}


	bool SwitchOnVariantByName(struct FString* VariantSetName, struct FString* VariantName);
	bool SwitchOnVariantByIndex(int* VariantSetIndex, int* VariantIndex);
	void SetLevelVariantSets(class ULevelVariantSets** InVariantSets);
	class ULevelVariantSets* GetLevelVariantSets(bool* bLoad);
};


// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0018 (0x0048 - 0x0030)
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.LevelVariantSetsFunctionDirector"));

		return ptr;
	}

};


// Class VariantManagerContent.PropertyValue
// 0x0188 (0x01B8 - 0x0030)
class UPropertyValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET
	TArray<class UProperty*>                           Properties;                                               // 0x0088(0x0010) (ZeroConstructor, Deprecated)
	TArray<int>                                        PropertyIndices;                                          // 0x0098(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FCapturedPropSegment>                CapturedPropSegments;                                     // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     FullDisplayString;                                        // 0x00B8(0x0010) (ZeroConstructor)
	struct FName                                       PropertySetterName;                                       // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TMap<struct FString, struct FString>               PropertySetterParameterDefaults;                          // 0x00D8(0x0050) (ZeroConstructor)
	bool                                               bHasRecordedData;                                         // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	class UClass*                                      LeafPropertyClass;                                        // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ValueBytes;                                               // 0x0138(0x0010) (ZeroConstructor)
	EPropertyValueCategory                             PropCategory;                                             // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6F];                                      // 0x0149(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.PropertyValue"));

		return ptr;
	}


	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};


// Class VariantManagerContent.PropertyValueTransform
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueTransform : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.PropertyValueTransform"));

		return ptr;
	}


	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};


// Class VariantManagerContent.PropertyValueVisibility
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.PropertyValueVisibility"));

		return ptr;
	}


	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};


// Class VariantManagerContent.PropertyValueColor
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueColor : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.PropertyValueColor"));

		return ptr;
	}


	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};


// Class VariantManagerContent.PropertyValueMaterial
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.PropertyValueMaterial"));

		return ptr;
	}


	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};


// Class VariantManagerContent.Variant
// 0x0040 (0x0070 - 0x0030)
class UVariant : public UObject
{
public:
	struct FText                                       DisplayText;                                              // 0x0030(0x0018) (Deprecated)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                           // 0x0060(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.Variant"));

		return ptr;
	}


	void SwitchOn();
	void SetDisplayText(struct FText* NewDisplayText);
	int GetNumActors();
	struct FText GetDisplayText();
	class AActor* GetActor(int* ActorIndex);
};


// Class VariantManagerContent.VariantObjectBinding
// 0x0060 (0x0090 - 0x0030)
class UVariantObjectBinding : public UObject
{
public:
	struct FSoftObjectPath                             ObjectPtr;                                                // 0x0030(0x0020) (ZeroConstructor)
	TLazyObjectPtr<class UObject>                      LazyObjectPtr;                                            // 0x0050(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UPropertyValue*>                      CapturedProperties;                                       // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FFunctionCaller>                     FunctionCallers;                                          // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.VariantObjectBinding"));

		return ptr;
	}

};


// Class VariantManagerContent.VariantSet
// 0x0048 (0x0078 - 0x0030)
class UVariantSet : public UObject
{
public:
	struct FText                                       DisplayText;                                              // 0x0030(0x0018) (Deprecated)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
	bool                                               bExpanded;                                                // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TArray<class UVariant*>                            Variants;                                                 // 0x0068(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class VariantManagerContent.VariantSet"));

		return ptr;
	}


	void SetDisplayText(struct FText* NewDisplayText);
	class UVariant* GetVariantByName(struct FString* VariantName);
	class UVariant* GetVariant(int* VariantIndex);
	int GetNumVariants();
	struct FText GetDisplayText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
