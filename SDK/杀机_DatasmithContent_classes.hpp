#pragma once

// ÀèÃ÷É±»ú (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "É±»ú_DatasmithContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0008 (0x0038 - 0x0030)
class UDatasmithObjectTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithObjectTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithActorTemplate
// 0x00A0 (0x00D8 - 0x0038)
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithActorTemplate.Layers
	unsigned char                                      UnknownData01[0x50];                                      // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithActorTemplate.Tags

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithActorTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActor
// 0x0058 (0x0398 - 0x0340)
class ADatasmithAreaLightActor : public AActor
{
public:
	EDatasmithAreaLightActorType                       LightType;                                                // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDatasmithAreaLightActorShape                      LightShape;                                               // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0342(0x0002) MISSED OFFSET
	struct FVector2D                                   Dimensions;                                               // 0x0344(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELightUnits                                        IntensityUnits;                                           // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0354(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureLightProfile*                        IESTexture;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIESBrightness;                                        // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              IESBrightnessScale;                                       // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0378(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotlightInnerAngle;                                      // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpotlightOuterAngle;                                      // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithAreaLightActor"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0078 (0x00B0 - 0x0038)
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	EDatasmithAreaLightActorType                       LightType;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	EDatasmithAreaLightActorShape                      LightShape;                                               // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	struct FVector2D                                   Dimensions;                                               // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	ELightUnits                                        IntensityUnits;                                           // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              Temperature;                                              // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0060(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DatasmithContent.DatasmithAreaLightActorTemplate.IESTexture
	bool                                               bUseIESBrightness;                                        // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              IESBrightnessScale;                                       // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithAreaLightActorTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetImportData
// 0x0000 (0x0030 - 0x0030)
class UDatasmithAssetImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithAssetImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000 (0x0030 - 0x0030)
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000 (0x0030 - 0x0030)
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshCADImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneImportData
// 0x0000 (0x0030 - 0x0030)
class UDatasmithSceneImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithSceneImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000 (0x0030 - 0x0030)
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithCADImportSceneData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000 (0x0030 - 0x0030)
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithMDLSceneImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithGLTFSceneImportData
// 0x0048 (0x0078 - 0x0030)
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
	struct FString                                     Generator;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              Version;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     Author;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     License;                                                  // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Source;                                                   // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithGLTFSceneImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// 0x0010 (0x0040 - 0x0030)
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceMeshName;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshGLTFImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000 (0x0030 - 0x0030)
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithDeltaGenAssetImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0x0000 (0x0030 - 0x0030)
class UDatasmithDeltaGenSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithDeltaGenSceneImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0008 (0x0038 - 0x0030)
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithVREDAssetImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x0000 (0x0030 - 0x0030)
class UDatasmithVREDSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithVREDSceneImportData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetUserData
// 0x0050 (0x0080 - 0x0030)
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<struct FName, struct FString>                 MetaData;                                                 // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithAssetUserData"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraActorTemplate
// 0x0038 (0x0070 - 0x0038)
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;                                   // 0x0038(0x0038)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithCineCameraActorTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0068 (0x00A0 - 0x0038)
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraFilmbackSettingsTemplate    FilmbackSettings;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDatasmithCameraLensSettingsTemplate        LensSettings;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDatasmithCameraFocusSettingsTemplate       FocusSettings;                                            // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocalLength;                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FDatasmithPostProcessSettingsTemplate       PostProcessSettings;                                      // 0x0060(0x0040)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithCineCameraComponentTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithContentBlueprintLibrary"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithImportOptions
// 0x0060 (0x0090 - 0x0030)
class UDatasmithImportOptions : public UObject
{
public:
	EDatasmithImportSearchPackagePolicy                SearchPackagePolicy;                                      // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportAssetConflictPolicy                MaterialConflictPolicy;                                   // 0x0031(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportAssetConflictPolicy                TextureConflictPolicy;                                    // 0x0032(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportActorPolicy                        StaticMeshActorImportPolicy;                              // 0x0033(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportActorPolicy                        LightImportPolicy;                                        // 0x0034(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportActorPolicy                        CameraImportPolicy;                                       // 0x0035(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportActorPolicy                        OtherActorImportPolicy;                                   // 0x0036(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EDatasmithImportMaterialQuality                    MaterialQuality;                                          // 0x0037(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
	struct FDatasmithImportBaseOptions                 BaseOptions;                                              // 0x003C(0x0018) (Edit, BlueprintVisible, Config)
	struct FDatasmithTessellationOptions               TessellationOptions;                                      // 0x0054(0x0010) (Edit, BlueprintVisible, Config)
	struct FDatasmithReimportOptions                   ReimportOptions;                                          // 0x0064(0x0002) (Edit, BlueprintVisible, Config)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	struct FString                                     Filename;                                                 // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     FilePath;                                                 // 0x0078(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithImportOptions"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x0010 (0x0048 - 0x0038)
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithLandscapeTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0038 (0x0070 - 0x0038)
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      bVisible : 1;                                             // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	unsigned char                                      CastShadows : 1;                                          // 0x003C(0x0001)
	unsigned char                                      bUseTemperature : 1;                                      // 0x003C(0x0001)
	unsigned char                                      bUseIESBrightness : 1;                                    // 0x003C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              Intensity;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IESBrightnessScale;                                       // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LightFunctionMaterial;                                    // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureLightProfile*                        IESTexture;                                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithLightComponentTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// 0x0140 (0x0178 - 0x0038)
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	TMap<struct FName, float>                          ScalarParameterValues;                                    // 0x0038(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FLinearColor>            VectorParameterValues;                                    // 0x0088(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00D8(0x0050) UNKNOWN PROPERTY: MapProperty DatasmithContent.DatasmithMaterialInstanceTemplate.TextureParameterValues
	struct FDatasmithStaticParameterSetTemplate        StaticParameters;                                         // 0x0128(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithMaterialInstanceTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0010 (0x0048 - 0x0038)
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	ELightUnits                                        IntensityUnits;                                           // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              SourceRadius;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithPointLightComponentTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// 0x0058 (0x0090 - 0x0038)
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FDatasmithPostProcessSettingsTemplate       Settings;                                                 // 0x0040(0x0040)
	unsigned char                                      bEnabled : 1;                                             // 0x0080(0x0001)
	unsigned char                                      bUnbound : 1;                                             // 0x0080(0x0001)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0081(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithPostProcessVolumeTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithScene
// 0x0000 (0x0030 - 0x0030)
class UDatasmithScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithScene"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneActor
// 0x0058 (0x0398 - 0x0340)
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithScene*                             Scene;                                                    // 0x0340(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0348(0x0050) UNKNOWN PROPERTY: MapProperty DatasmithContent.DatasmithSceneActor.RelatedActors

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithSceneActor"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x00C8 (0x0100 - 0x0038)
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x0040(0x0030) (IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x30];                                      // 0x0071(0x0030) UNKNOWN PROPERTY: SoftObjectProperty DatasmithContent.DatasmithSceneComponentTemplate.AttachParent
	unsigned char                                      UnknownData03[0x50];                                      // 0x00A8(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithSceneComponentTemplate.Tags
	unsigned char                                      UnknownData04[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithSceneComponentTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0010 (0x0048 - 0x0038)
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	TEnumAsByte<ESkyLightSourceType>                   SourceType;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                CubemapResolution;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                Cubemap;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithSkyLightComponentTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0008 (0x0040 - 0x0038)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                              InnerConeAngle;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OuterConeAngle;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithSpotLightComponentTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0010 (0x0110 - 0x0100)
class UDatasmithStaticMeshComponentTemplate : public UDatasmithSceneComponentTemplate
{
public:
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0100(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshComponentTemplate"));

		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0078 (0x00B0 - 0x0038)
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithMeshSectionInfoMapTemplate        SectionInfoMap;                                           // 0x0038(0x0050) (Edit, EditConst)
	int                                                LightMapCoordinateIndex;                                  // 0x0088(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                LightMapResolution;                                       // 0x008C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;                                            // 0x0090(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FDatasmithStaticMaterialTemplate>    StaticMaterials;                                          // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class DatasmithContent.DatasmithStaticMeshTemplate"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
