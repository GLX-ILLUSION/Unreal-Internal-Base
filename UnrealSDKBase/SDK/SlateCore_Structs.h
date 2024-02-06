﻿#pragma once

/**
 * Name: GreedIsGood
 * Version: fodase
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SlateCore.EUINavigation
	 */
	enum class EUINavigation : uint8_t
	{
		Left     = 0,
		Right    = 1,
		Up       = 2,
		Down     = 3,
		Next     = 4,
		Previous = 5,
		Num      = 6,
		Invalid  = 7,
		MAX      = 8
	};

	/**
	 * Enum SlateCore.ECheckBoxState
	 */
	enum class ECheckBoxState : uint8_t
	{
		Unchecked    = 0,
		Checked      = 1,
		Undetermined = 2,
		MAX          = 3
	};

	/**
	 * Enum SlateCore.EWidgetClipping
	 */
	enum class EWidgetClipping : uint8_t
	{
		Inherit                         = 0,
		ClipToBounds                    = 1,
		ClipToBoundsWithoutIntersecting = 2,
		ClipToBoundsAlways              = 3,
		OnDemand                        = 4,
		MAX                             = 5
	};

	/**
	 * Enum SlateCore.ESlateBrushImageType
	 */
	enum class ESlateBrushImageType : uint8_t
	{
		NoImage   = 0,
		FullColor = 1,
		Linear    = 2,
		MAX       = 3
	};

	/**
	 * Enum SlateCore.ESlateBrushMirrorType
	 */
	enum class ESlateBrushMirrorType : uint8_t
	{
		NoMirror   = 0,
		Horizontal = 1,
		Vertical   = 2,
		Both       = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushTileType
	 */
	enum class ESlateBrushTileType : uint8_t
	{
		NoTile     = 0,
		Horizontal = 1,
		Vertical   = 2,
		Both       = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushDrawType
	 */
	enum class ESlateBrushDrawType : uint8_t
	{
		NoDrawType = 0,
		Box        = 1,
		Border     = 2,
		Image      = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ESlateColorStylingMode
	 */
	enum class ESlateColorStylingMode : uint8_t
	{
		UseColor_Specified          = 0,
		UseColor_Specified_Link     = 1,
		UseColor_Foreground         = 2,
		UseColor_Foreground_Subdued = 3,
		UseColor_MAX                = 4
	};

	/**
	 * Enum SlateCore.EUINavigationRule
	 */
	enum class EUINavigationRule : uint8_t
	{
		Escape         = 0,
		Explicit       = 1,
		Wrap           = 2,
		Stop           = 3,
		Custom         = 4,
		CustomBoundary = 5,
		Invalid        = 6,
		MAX            = 7
	};

	/**
	 * Enum SlateCore.EFlowDirectionPreference
	 */
	enum class EFlowDirectionPreference : uint8_t
	{
		Inherit     = 0,
		Culture     = 1,
		LeftToRight = 2,
		RightToLeft = 3,
		MAX         = 4
	};

	/**
	 * Enum SlateCore.EColorVisionDeficiency
	 */
	enum class EColorVisionDeficiency : uint8_t
	{
		NormalVision = 0,
		Deuteranope  = 1,
		Protanope    = 2,
		Tritanope    = 3,
		MAX          = 4
	};

	/**
	 * Enum SlateCore.ESelectInfo
	 */
	enum class ESelectInfo : uint8_t
	{
		OnKeyPress   = 0,
		OnNavigation = 1,
		OnMouseClick = 2,
		Direct       = 3,
		MAX          = 4
	};

	/**
	 * Enum SlateCore.ETextCommit
	 */
	enum class ETextCommit : uint8_t
	{
		Default          = 0,
		OnEnter          = 1,
		OnUserMovedFocus = 2,
		OnCleared        = 3,
		MAX              = 4
	};

	/**
	 * Enum SlateCore.ETextShapingMethod
	 */
	enum class ETextShapingMethod : uint8_t
	{
		Auto        = 0,
		KerningOnly = 1,
		FullShaping = 2,
		MAX         = 3
	};

	/**
	 * Enum SlateCore.EMenuPlacement
	 */
	enum class EMenuPlacement : uint8_t
	{
		MenuPlacement_BelowAnchor         = 0,
		MenuPlacement_CenteredBelowAnchor = 1,
		MenuPlacement_BelowRightAnchor    = 2,
		MenuPlacement_ComboBox            = 3,
		MenuPlacement_ComboBoxRight       = 4,
		MenuPlacement_MenuRight           = 5,
		MenuPlacement_AboveAnchor         = 6,
		MenuPlacement_CenteredAboveAnchor = 7,
		MenuPlacement_AboveRightAnchor    = 8,
		MenuPlacement_MenuLeft            = 9,
		MenuPlacement_Center              = 10,
		MenuPlacement_RightLeftCenter     = 11,
		MenuPlacement_MatchBottomLeft     = 12,
		MenuPlacement_MAX                 = 13
	};

	/**
	 * Enum SlateCore.EHorizontalAlignment
	 */
	enum class EHorizontalAlignment : uint8_t
	{
		HAlign_Fill   = 0,
		HAlign_Left   = 1,
		HAlign_Center = 2,
		HAlign_Right  = 3,
		HAlign_MAX    = 4
	};

	/**
	 * Enum SlateCore.EVerticalAlignment
	 */
	enum class EVerticalAlignment : uint8_t
	{
		VAlign_Fill   = 0,
		VAlign_Top    = 1,
		VAlign_Center = 2,
		VAlign_Bottom = 3,
		VAlign_MAX    = 4
	};

	/**
	 * Enum SlateCore.EFontLayoutMethod
	 */
	enum class EFontLayoutMethod : uint8_t
	{
		Metrics     = 0,
		BoundingBox = 1,
		MAX         = 2
	};

	/**
	 * Enum SlateCore.EFontLoadingPolicy
	 */
	enum class EFontLoadingPolicy : uint8_t
	{
		LazyLoad = 0,
		Stream   = 1,
		Inline   = 2,
		MAX      = 3
	};

	/**
	 * Enum SlateCore.EFontHinting
	 */
	enum class EFontHinting : uint8_t
	{
		Default    = 0,
		Auto       = 1,
		AutoLight  = 2,
		Monochrome = 3,
		None       = 4,
		MAX        = 5
	};

	/**
	 * Enum SlateCore.EFocusCause
	 */
	enum class EFocusCause : uint8_t
	{
		Mouse                = 0,
		Navigation           = 1,
		SetDirectly          = 2,
		Cleared              = 3,
		OtherWidgetLostFocus = 4,
		WindowActivate       = 5,
		MAX                  = 6
	};

	/**
	 * Enum SlateCore.ESlateDebuggingFocusEvent
	 */
	enum class ESlateDebuggingFocusEvent : uint8_t
	{
		FocusChanging = 0,
		FocusLost     = 1,
		FocusReceived = 2,
		MAX           = 3
	};

	/**
	 * Enum SlateCore.ESlateDebuggingNavigationMethod
	 */
	enum class ESlateDebuggingNavigationMethod : uint8_t
	{
		Unknown               = 0,
		Explicit              = 1,
		CustomDelegateBound   = 2,
		CustomDelegateUnbound = 3,
		NextOrPrevious        = 4,
		HitTestGrid           = 5,
		MAX                   = 6
	};

	/**
	 * Enum SlateCore.ESlateDebuggingStateChangeEvent
	 */
	enum class ESlateDebuggingStateChangeEvent : uint8_t
	{
		MouseCaptureGained = 0,
		MouseCaptureLost   = 1,
		MAX                = 2
	};

	/**
	 * Enum SlateCore.ESlateDebuggingInputEvent
	 */
	enum class ESlateDebuggingInputEvent : uint8_t
	{
		MouseMove              = 0,
		MouseEnter             = 1,
		MouseLeave             = 2,
		PreviewMouseButtonDown = 3,
		MouseButtonDown        = 4,
		MouseButtonUp          = 5,
		MouseButtonDoubleClick = 6,
		MouseWheel             = 7,
		TouchStart             = 8,
		TouchEnd               = 9,
		TouchForceChanged      = 10,
		TouchFirstMove         = 11,
		TouchMoved             = 12,
		DragDetected           = 13,
		DragEnter              = 14,
		DragLeave              = 15,
		DragOver               = 16,
		DragDrop               = 17,
		DropMessage            = 18,
		PreviewKeyDown         = 19,
		KeyDown                = 20,
		KeyUp                  = 21,
		KeyChar                = 22,
		AnalogInput            = 23,
		TouchGesture           = 24,
		MotionDetected         = 25,
		MAX                    = 26
	};

	/**
	 * Enum SlateCore.EScrollDirection
	 */
	enum class EScrollDirection : uint8_t
	{
		Scroll_Down = 0,
		Scroll_Up   = 1,
		Scroll_MAX  = 2
	};

	/**
	 * Enum SlateCore.EOrientation
	 */
	enum class EOrientation : uint8_t
	{
		Orient_Horizontal = 0,
		Orient_Vertical   = 1,
		Orient_MAX        = 2
	};

	/**
	 * Enum SlateCore.ENavigationGenesis
	 */
	enum class ENavigationGenesis : uint8_t
	{
		Keyboard   = 0,
		Controller = 1,
		User       = 2,
		MAX        = 3
	};

	/**
	 * Enum SlateCore.ENavigationSource
	 */
	enum class ENavigationSource : uint8_t
	{
		FocusedWidget     = 0,
		WidgetUnderCursor = 1,
		MAX               = 2
	};

	/**
	 * Enum SlateCore.EUINavigationAction
	 */
	enum class EUINavigationAction : uint8_t
	{
		Accept  = 0,
		Back    = 1,
		Num     = 2,
		Invalid = 3,
		MAX     = 4
	};

	/**
	 * Enum SlateCore.EButtonPressMethod
	 */
	enum class EButtonPressMethod : uint8_t
	{
		DownAndUp     = 0,
		ButtonPress   = 1,
		ButtonRelease = 2,
		MAX           = 3
	};

	/**
	 * Enum SlateCore.EButtonTouchMethod
	 */
	enum class EButtonTouchMethod : uint8_t
	{
		DownAndUp  = 0,
		Down       = 1,
		PreciseTap = 2,
		MAX        = 3
	};

	/**
	 * Enum SlateCore.EButtonClickMethod
	 */
	enum class EButtonClickMethod : uint8_t
	{
		DownAndUp    = 0,
		MouseDown    = 1,
		MouseUp      = 2,
		PreciseClick = 3,
		MAX          = 4
	};

	/**
	 * Enum SlateCore.ESlateCheckBoxType
	 */
	enum class ESlateCheckBoxType : uint8_t
	{
		CheckBox     = 0,
		ToggleButton = 1,
		MAX          = 2
	};

	/**
	 * Enum SlateCore.ESlateParentWindowSearchMethod
	 */
	enum class ESlateParentWindowSearchMethod : uint8_t
	{
		ActiveWindow = 0,
		MainWindow   = 1,
		MAX          = 2
	};

	/**
	 * Enum SlateCore.EConsumeMouseWheel
	 */
	enum class EConsumeMouseWheel : uint8_t
	{
		WhenScrollingPossible = 0,
		Always                = 1,
		Never                 = 2,
		MAX                   = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SlateCore.Geometry
	 * Size -> 0x0038
	 */
	struct FGeometry
	{
	public:
		unsigned char                                              UnknownData_5QR8[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.Margin
	 * Size -> 0x0010
	 */
	struct FMargin
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Right;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SlateColor
	 * Size -> 0x0028
	 */
	struct FSlateColor
	{
	public:
		struct FLinearColor                                        SpecifiedColor;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlateColorStylingMode                                     ColorUseRule;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W4G5[0x17];                                  // 0x0011(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateBrush
	 * Size -> 0x0088
	 */
	struct FSlateBrush
	{
	public:
		unsigned char                                              UnknownData_RLDD[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ImageSize;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateColor                                         TintColor;                                               // 0x0020(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UObject*                                             ResourceObject;                                          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                ResourceName;                                            // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBox2D                                              UVRegion;                                                // 0x0058(0x0014) ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected
		ESlateBrushDrawType                                        DrawAs;                                                  // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushTileType                                        Tiling;                                                  // 0x006D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushMirrorType                                      Mirroring;                                               // 0x006E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushImageType                                       ImageType;                                               // 0x006F(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUGC[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsDynamicallyLoaded : 1;                                // 0x0080(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasUObject : 1;                                         // 0x0080(0x0001) BIT_FIELD Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_638N[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.InputEvent
	 * Size -> 0x0018
	 */
	struct FInputEvent
	{
	public:
		unsigned char                                              UnknownData_URKG[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.PointerEvent
	 * Size -> 0x0058 (FullSize[0x0070] - InheritedSize[0x0018])
	 */
	struct FPointerEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_3NPW[0x58];                                  // 0x0018(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CharacterEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FCharacterEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_T4IB[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.KeyEvent
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FKeyEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_CLS6[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.NavigationEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FNavigationEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_JM5H[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.AnalogInputEvent
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAnalogInputEvent : public FKeyEvent
	{
	public:
		unsigned char                                              UnknownData_QN3V[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.FontOutlineSettings
	 * Size -> 0x0020
	 */
	struct FFontOutlineSettings
	{
	public:
		int32_t                                                    OutlineSize;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSeparateFillAlpha;                                      // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyOutlineToDropShadows;                              // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7X1[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             OutlineMaterial;                                         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OutlineColor;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SlateFontInfo
	 * Size -> 0x0058
	 */
	struct FSlateFontInfo
	{
	public:
		class UObject*                                             FontObject;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             FontMaterial;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFontOutlineSettings                                OutlineSettings;                                         // 0x0010(0x0020) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTIM[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TypefaceFontName;                                        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Size;                                                    // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LetterSpacing;                                           // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCY1[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateWidgetStyle
	 * Size -> 0x0008
	 */
	struct FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_UG4M[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.TableRowStyle
	 * Size -> 0x07C0 (FullSize[0x07C8] - InheritedSize[0x0008])
	 */
	struct FTableRowStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         SelectorFocusedBrush;                                    // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveHoveredBrush;                                      // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveBrush;                                             // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveHoveredBrush;                                    // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveBrush;                                           // 0x0228(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         EvenRowBackgroundHoveredBrush;                           // 0x02B0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         EvenRowBackgroundBrush;                                  // 0x0338(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         OddRowBackgroundHoveredBrush;                            // 0x03C0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         OddRowBackgroundBrush;                                   // 0x0448(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         TextColor;                                               // 0x04D0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SelectedTextColor;                                       // 0x04F8(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DropIndicator_Above;                                     // 0x0520(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DropIndicator_Onto;                                      // 0x05A8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DropIndicator_Below;                                     // 0x0630(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveHighlightedBrush;                                  // 0x06B8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveHighlightedBrush;                                // 0x0740(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.TextBlockStyle
	 * Size -> 0x0268 (FullSize[0x0270] - InheritedSize[0x0008])
	 */
	struct FTextBlockStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0060(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         SelectedBackgroundColor;                                 // 0x00A0(0x0028) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        HighlightColor;                                          // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HighlightShape;                                          // 0x00D8(0x0088) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateBrush                                         StrikeBrush;                                             // 0x0160(0x0088) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UnderlineBrush;                                          // 0x01E8(0x0088) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SlateSound
	 * Size -> 0x0018
	 */
	struct FSlateSound
	{
	public:
		class UObject*                                             ResourceObject;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5K46[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ButtonStyle
	 * Size -> 0x0270 (FullSize[0x0278] - InheritedSize[0x0008])
	 */
	struct FButtonStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         Normal;                                                  // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Hovered;                                                 // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Pressed;                                                 // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Disabled;                                                // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             NormalPadding;                                           // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             PressedPadding;                                          // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         PressedSlateSound;                                       // 0x0248(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x0260(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ComboButtonStyle
	 * Size -> 0x03B0 (FullSize[0x03B8] - InheritedSize[0x0008])
	 */
	struct FComboButtonStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0008(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DownArrowImage;                                          // 0x0280(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuBorderBrush;                                         // 0x0320(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             MenuBorderPadding;                                       // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ComboBoxStyle
	 * Size -> 0x03E8 (FullSize[0x03F0] - InheritedSize[0x0008])
	 */
	struct FComboBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FComboButtonStyle                                   ComboButtonStyle;                                        // 0x0008(0x03B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateSound                                         PressedSlateSound;                                       // 0x03C0(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         SelectionChangeSlateSound;                               // 0x03D8(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.EditableTextStyle
	 * Size -> 0x0218 (FullSize[0x0220] - InheritedSize[0x0008])
	 */
	struct FEditableTextStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0060(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageSelected;                                 // 0x0088(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageComposing;                                // 0x0110(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CaretImage;                                              // 0x0198(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ScrollBarStyle
	 * Size -> 0x04D0 (FullSize[0x04D8] - InheritedSize[0x0008])
	 */
	struct FScrollBarStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HorizontalBackgroundImage;                               // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VerticalBackgroundImage;                                 // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VerticalTopSlotImage;                                    // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HorizontalTopSlotImage;                                  // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VerticalBottomSlotImage;                                 // 0x0228(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HorizontalBottomSlotImage;                               // 0x02B0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x0338(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredThumbImage;                                       // 0x03C0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DraggedThumbImage;                                       // 0x0448(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x04D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLeftUp : 1;                                             // 0x04D4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SV4[0x3];                                   // 0x04D5(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.EditableTextBoxStyle
	 * Size -> 0x07F8 (FullSize[0x0800] - InheritedSize[0x0008])
	 */
	struct FEditableTextBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundImageNormal;                                   // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageHovered;                                  // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageFocused;                                  // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageReadOnly;                                 // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0238(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0290(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BackgroundColor;                                         // 0x02B8(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         ReadOnlyForegroundColor;                                 // 0x02E0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             HScrollBarPadding;                                       // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             VScrollBarPadding;                                       // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0328(0x04D8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SpinBoxStyle
	 * Size -> 0x02E0 (FullSize[0x02E8] - InheritedSize[0x0008])
	 */
	struct FSpinBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBackgroundBrush;                                  // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveFillBrush;                                         // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveFillBrush;                                       // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ArrowsImage;                                             // 0x0228(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x02B0(0x0028) NativeAccessSpecifierPublic
		struct FMargin                                             TextPadding;                                             // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.FocusEvent
	 * Size -> 0x0008
	 */
	struct FFocusEvent
	{
	public:
		unsigned char                                              UnknownData_NBAX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.MotionEvent
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FMotionEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_RJO4[0x30];                                  // 0x0018(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.FontData
	 * Size -> 0x0020
	 */
	struct FFontData
	{
	public:
		class FString                                              FontFilename;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EFontHinting                                               Hinting;                                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EFontLoadingPolicy                                         LoadingPolicy;                                           // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D2QU[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubFaceIndex;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             FontFaceAsset;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SlateCore.TypefaceEntry
	 * Size -> 0x0028
	 */
	struct FTypefaceEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFontData                                           Font;                                                    // 0x0008(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.Typeface
	 * Size -> 0x0010
	 */
	struct FTypeface
	{
	public:
		TArray<struct FTypefaceEntry>                              Fonts;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.CompositeFallbackFont
	 * Size -> 0x0018
	 */
	struct FCompositeFallbackFont
	{
	public:
		struct FTypeface                                           Typeface;                                                // 0x0000(0x0010) NativeAccessSpecifierPublic
		float                                                      ScalingFactor;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYU8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CompositeSubFont
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FCompositeSubFont : public FCompositeFallbackFont
	{
	public:
		TArray<struct FInt32Range>                                 CharacterRanges;                                         // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Cultures;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.CompositeFont
	 * Size -> 0x0038
	 */
	struct FCompositeFont
	{
	public:
		struct FTypeface                                           DefaultTypeface;                                         // 0x0000(0x0010) NativeAccessSpecifierPublic
		struct FCompositeFallbackFont                              FallbackTypeface;                                        // 0x0010(0x0018) NativeAccessSpecifierPublic
		TArray<struct FCompositeSubFont>                           SubTypefaces;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.CaptureLostEvent
	 * Size -> 0x0008
	 */
	struct FCaptureLostEvent
	{
	public:
		unsigned char                                              UnknownData_VCVP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.WindowStyle
	 * Size -> 0x1058 (FullSize[0x1060] - InheritedSize[0x0008])
	 */
	struct FWindowStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        MinimizeButtonStyle;                                     // 0x0008(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        MaximizeButtonStyle;                                     // 0x0280(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        RestoreButtonStyle;                                      // 0x04F8(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        CloseButtonStyle;                                        // 0x0770(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TitleTextStyle;                                          // 0x09E8(0x0270) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveTitleBrush;                                        // 0x0C58(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveTitleBrush;                                      // 0x0CE0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         FlashTitleBrush;                                         // 0x0D68(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BackgroundColor;                                         // 0x0DF0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         OutlineBrush;                                            // 0x0E18(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         OutlineColor;                                            // 0x0EA0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BorderBrush;                                             // 0x0EC8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0F50(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ChildBackgroundBrush;                                    // 0x0FD8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ScrollBorderStyle
	 * Size -> 0x0110 (FullSize[0x0118] - InheritedSize[0x0008])
	 */
	struct FScrollBorderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         TopShadowBrush;                                          // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BottomShadowBrush;                                       // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ScrollBoxStyle
	 * Size -> 0x0220 (FullSize[0x0228] - InheritedSize[0x0008])
	 */
	struct FScrollBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         TopShadowBrush;                                          // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BottomShadowBrush;                                       // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LeftShadowBrush;                                         // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         RightShadowBrush;                                        // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.DockTabStyle
	 * Size -> 0x06F8 (FullSize[0x0700] - InheritedSize[0x0008])
	 */
	struct FDockTabStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        CloseButtonStyle;                                        // 0x0008(0x0278) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalBrush;                                             // 0x0280(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveBrush;                                             // 0x0308(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ColorOverlayTabBrush;                                    // 0x0390(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ColorOverlayIconBrush;                                   // 0x0418(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ForegroundBrush;                                         // 0x04A0(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBrush;                                            // 0x0528(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ContentAreaBrush;                                        // 0x05B0(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         TabWellBrush;                                            // 0x0638(0x0088) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             TabPadding;                                              // 0x06C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      OverlapWidth;                                            // 0x06D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9H03[0x4];                                   // 0x06D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         FlashColor;                                              // 0x06D8(0x0028) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.TableColumnHeaderStyle
	 * Size -> 0x04C8 (FullSize[0x04D0] - InheritedSize[0x0008])
	 */
	struct FTableColumnHeaderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         SortPrimaryAscendingImage;                               // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SortPrimaryDescendingImage;                              // 0x0090(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SortSecondaryAscendingImage;                             // 0x0118(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SortSecondaryDescendingImage;                            // 0x01A0(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalBrush;                                             // 0x0228(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBrush;                                            // 0x02B0(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuDropdownImage;                                       // 0x0338(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuDropdownNormalBorderBrush;                           // 0x03C0(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuDropdownHoveredBorderBrush;                          // 0x0448(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SplitterStyle
	 * Size -> 0x0110 (FullSize[0x0118] - InheritedSize[0x0008])
	 */
	struct FSplitterStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HandleNormalBrush;                                       // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HandleHighlightBrush;                                    // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.HeaderRowStyle
	 * Size -> 0x0B68 (FullSize[0x0B70] - InheritedSize[0x0008])
	 */
	struct FHeaderRowStyle : public FSlateWidgetStyle
	{
	public:
		struct FTableColumnHeaderStyle                             ColumnStyle;                                             // 0x0008(0x04D0) Edit, NativeAccessSpecifierPublic
		struct FTableColumnHeaderStyle                             LastColumnStyle;                                         // 0x04D8(0x04D0) Edit, NativeAccessSpecifierPublic
		struct FSplitterStyle                                      ColumnSplitterStyle;                                     // 0x09A8(0x0118) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0AC0(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0B48(0x0028) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.InlineTextImageStyle
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FInlineTextImageStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         Image;                                                   // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		int16_t                                                    Baseline;                                                // 0x0090(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUKY[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SliderStyle
	 * Size -> 0x0338 (FullSize[0x0340] - InheritedSize[0x0008])
	 */
	struct FSliderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         NormalBarImage;                                          // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBarImage;                                         // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DisabledBarImage;                                        // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredThumbImage;                                       // 0x0228(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DisabledThumbImage;                                      // 0x02B0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      BarThickness;                                            // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EUD[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.VolumeControlStyle
	 * Size -> 0x05E8 (FullSize[0x05F0] - InheritedSize[0x0008])
	 */
	struct FVolumeControlStyle : public FSlateWidgetStyle
	{
	public:
		struct FSliderStyle                                        SliderStyle;                                             // 0x0008(0x0340) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HighVolumeImage;                                         // 0x0348(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MidVolumeImage;                                          // 0x03D0(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LowVolumeImage;                                          // 0x0458(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NoVolumeImage;                                           // 0x04E0(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MutedImage;                                              // 0x0568(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SearchBoxStyle
	 * Size -> 0x0A90 (FullSize[0x0A98] - InheritedSize[0x0008])
	 */
	struct FSearchBoxStyle : public FSlateWidgetStyle
	{
	public:
		struct FEditableTextBoxStyle                               TextBoxStyle;                                            // 0x0008(0x0800) Edit, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      ActiveFontInfo;                                          // 0x0808(0x0058) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UpArrowImage;                                            // 0x0860(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DownArrowImage;                                          // 0x08E8(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         GlassImage;                                              // 0x0970(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ClearImage;                                              // 0x09F8(0x0088) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ImagePadding;                                            // 0x0A80(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLeftAlignButtons;                                       // 0x0A90(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UB4L[0x7];                                   // 0x0A91(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ExpandableAreaStyle
	 * Size -> 0x0118 (FullSize[0x0120] - InheritedSize[0x0008])
	 */
	struct FExpandableAreaStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         CollapsedImage;                                          // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ExpandedImage;                                           // 0x0090(0x0088) Edit, NativeAccessSpecifierPublic
		float                                                      RolloutAnimationSeconds;                                 // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOCH[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ProgressBarStyle
	 * Size -> 0x0198 (FullSize[0x01A0] - InheritedSize[0x0008])
	 */
	struct FProgressBarStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundImage;                                         // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         FillImage;                                               // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MarqueeImage;                                            // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.InlineEditableTextBlockStyle
	 * Size -> 0x0A70 (FullSize[0x0A78] - InheritedSize[0x0008])
	 */
	struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
	{
	public:
		struct FEditableTextBoxStyle                               EditableTextBoxStyle;                                    // 0x0008(0x0800) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0808(0x0270) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.HyperlinkStyle
	 * Size -> 0x04F8 (FullSize[0x0500] - InheritedSize[0x0008])
	 */
	struct FHyperlinkStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        UnderlineStyle;                                          // 0x0008(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0280(0x0270) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.CheckBoxStyle
	 * Size -> 0x0578 (FullSize[0x0580] - InheritedSize[0x0008])
	 */
	struct FCheckBoxStyle : public FSlateWidgetStyle
	{
	public:
		ESlateCheckBoxType                                         CheckBoxType;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJ8E[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         UncheckedImage;                                          // 0x0010(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UncheckedHoveredImage;                                   // 0x0098(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UncheckedPressedImage;                                   // 0x0120(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckedImage;                                            // 0x01A8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckedHoveredImage;                                     // 0x0230(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckedPressedImage;                                     // 0x02B8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UndeterminedImage;                                       // 0x0340(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UndeterminedHoveredImage;                                // 0x03C8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UndeterminedPressedImage;                                // 0x0450(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x04E8(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BorderBackgroundColor;                                   // 0x0510(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateSound                                         CheckedSlateSound;                                       // 0x0538(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         UncheckedSlateSound;                                     // 0x0550(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x0568(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
