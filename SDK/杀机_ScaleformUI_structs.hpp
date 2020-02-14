#pragma once

// 黎明杀机 (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "杀机_Basic.hpp"
#include "杀机_CoreUObject_classes.hpp"
#include "杀机_InputCore_classes.hpp"
#include "杀机_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ScaleformUI.GFxHitTestType
enum class EGFxHitTestType : uint8_t
{
	HitTest_Bounds                 = 0,
	HitTest_Shapes                 = 1,
	HitTest_ButtonEvents           = 2,
	HitTest_ShapesNoInvisible      = 3,
	HitTest_MAX                    = 4
};


// Enum ScaleformUI.EGFxTimingMode
enum class EGFxTimingMode : uint8_t
{
	Game                           = 0,
	Real                           = 1,
	EGFxTimingMode_MAX             = 2
};


// Enum ScaleformUI.EGFxRenderTextureMode
enum class EGFxRenderTextureMode : uint8_t
{
	Opaque                         = 0,
	Alpha                          = 1,
	AlphaComposite                 = 2,
	EGFxRenderTextureMode_MAX      = 3
};


// Enum ScaleformUI.EGFxScaleMode
enum class EGFxScaleMode : uint8_t
{
	NoScale                        = 0,
	ShowAll                        = 1,
	ExactFit                       = 2,
	NoBorder                       = 3,
	EGFxScaleMode_MAX              = 4
};


// Enum ScaleformUI.EGFxAlign
enum class EGFxAlign : uint8_t
{
	Center                         = 0,
	TopCenter                      = 1,
	BottomCenter                   = 2,
	CenterLeft                     = 3,
	CenterRight                    = 4,
	TopLeft                        = 5,
	TopRight                       = 6,
	BottomLeft                     = 7,
	BottomRight                    = 8,
	EGFxAlign_MAX                  = 9
};


// Enum ScaleformUI.EASType
enum class EASType : uint8_t
{
	Undefined                      = 0,
	Null                           = 1,
	Boolean                        = 2,
	Int                            = 3,
	Number                         = 4,
	String                         = 5,
	StringW                        = 6,
	Object                         = 7,
	DisplayObject                  = 8,
	EASType_MAX                    = 9
};


// Enum ScaleformUI.FlashTextureRescale
enum class EFlashTextureRescale : uint8_t
{
	FlashTextureScale_High         = 0,
	FlashTextureScale_Low          = 1,
	FlashTextureScale_NextLow      = 2,
	FlashTextureScale_Mult4        = 3,
	FlashTextureScale_None         = 4,
	FlashTextureScale_MAX          = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ScaleformUI.GCReference
// 0x0010
struct FGCReference
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RefCount;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ScaleformUI.ExternalTexture
// 0x0018
struct FExternalTexture
{
	struct FString                                     Resource;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class UTexture*                                    Texture;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ScaleformUI.GFxWidgetBinding
// 0x0018
struct FGFxWidgetBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      WidgetClass;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ScaleformUI.ASValue
// 0x0038
struct FASValue
{
	TEnumAsByte<EASType>                               ASType;                                                   // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ASBoolean;                                                // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                ASInt;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ASNumber;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ASString;                                                 // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
	class UGFxObject*                                  ASObject;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ScaleformUI.ASPerspectiveTransform
// 0x0040
struct FASPerspectiveTransform
{
	struct FVector4                                    Row0;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row1;                                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row2;                                                     // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row3;                                                     // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ScaleformUI.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              XRotation;                                                // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YRotation;                                                // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               visible;                                                  // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct ScaleformUI.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Add;                                                      // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
