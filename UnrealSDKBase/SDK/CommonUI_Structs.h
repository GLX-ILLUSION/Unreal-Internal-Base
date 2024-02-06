#pragma once

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
	 * Enum CommonUI.ECommonNumericType
	 */
	enum class ECommonNumericType : uint8_t
	{
		Number     = 0,
		Percentage = 1,
		Seconds    = 2,
		Distance   = 3,
		MAX        = 4
	};

	/**
	 * Enum CommonUI.ECommonButtonImageOverrideType
	 */
	enum class ECommonButtonImageOverrideType : uint8_t
	{
		None     = 0,
		Normal   = 1,
		Hovered  = 2,
		Pressed  = 3,
		Disabled = 4,
		Max      = 5
	};

	/**
	 * Enum CommonUI.ECommonInputMode
	 */
	enum class ECommonInputMode : uint8_t
	{
		Menu = 0,
		Game = 1,
		All  = 2,
		MAX  = 3
	};

	/**
	 * Enum CommonUI.ERichTextInlineIconDisplayMode
	 */
	enum class ERichTextInlineIconDisplayMode : uint8_t
	{
		IconOnly    = 0,
		TextOnly    = 1,
		IconAndText = 2,
		MAX         = 3
	};

	/**
	 * Enum CommonUI.EInputActionState
	 */
	enum class EInputActionState : uint8_t
	{
		Enabled           = 0,
		Disabled          = 1,
		Hidden            = 2,
		HiddenAndDisabled = 3,
		MAX               = 4
	};

	/**
	 * Enum CommonUI.ETransitionCurve
	 */
	enum class ETransitionCurve : uint8_t
	{
		Linear     = 0,
		QuadIn     = 1,
		QuadOut    = 2,
		QuadInOut  = 3,
		CubicIn    = 4,
		CubicOut   = 5,
		CubicInOut = 6,
		MAX        = 7
	};

	/**
	 * Enum CommonUI.ECommonSwitcherTransition
	 */
	enum class ECommonSwitcherTransition : uint8_t
	{
		FadeOnly   = 0,
		Horizontal = 1,
		Vertical   = 2,
		Zoom       = 3,
		MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CommonUI.CommonButtonStyleOptionalSlateSound
	 * Size -> 0x0020
	 */
	struct FCommonButtonStyleOptionalSlateSound
	{
	public:
		bool                                                       bHasSound;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCYQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateSound                                         Sound;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonUI.CommonNumberFormattingOptions
	 * Size -> 0x0014
	 */
	struct FCommonNumberFormattingOptions
	{
	public:
		ERoundingMode                                              RoundingMode;                                            // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseGrouping;                                             // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EPQT[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinimumIntegralDigits;                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaximumIntegralDigits;                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimumFractionalDigits;                                 // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaximumFractionalDigits;                                 // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonUI.CommonRegisteredTabInfo
	 * Size -> 0x0018
	 */
	struct FCommonRegisteredTabInfo
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4YR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonButtonBase*                                   TabButton;                                               // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             ContentInstance;                                         // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonUI.UITag
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FUITag : public FGameplayTag
	{	};

	/**
	 * ScriptStruct CommonUI.UIActionTag
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FUIActionTag : public FUITag
	{	};

	/**
	 * ScriptStruct CommonUI.UIActionKeyMapping
	 * Size -> 0x0020
	 */
	struct FUIActionKeyMapping
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldTime;                                                // 0x0018(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ODD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommonUI.UIInputAction
	 * Size -> 0x0030
	 */
	struct FUIInputAction
	{
	public:
		struct FUIActionTag                                        ActionTag;                                               // 0x0000(0x0008) Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DefaultDisplayName;                                      // 0x0008(0x0018) Edit, Config, NativeAccessSpecifierPublic
		TArray<struct FUIActionKeyMapping>                         KeyMappings;                                             // 0x0020(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonUI.CommonAnalogCursorSettings
	 * Size -> 0x0024
	 */
	struct FCommonAnalogCursorSettings
	{
	public:
		int32_t                                                    PreprocessorPriority;                                    // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCursorAcceleration;                               // 0x0004(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUBD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CursorAcceleration;                                      // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CursorMaxSpeed;                                          // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CursorDeadZone;                                          // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoverSlowdownFactor;                                     // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScrollDeadZone;                                          // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScrollUpdatePeriod;                                      // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScrollMultiplier;                                        // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonUI.CommonInputActionHandlerData
	 * Size -> 0x0020
	 */
	struct FCommonInputActionHandlerData
	{
	public:
		struct FDataTableRowHandle                                 InputActionRow;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		EInputActionState                                          State;                                                   // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0V4P[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommonUI.CommonUIRedirectKeyData
	 * Size -> 0x0050
	 */
	struct FCommonUIRedirectKeyData
	{
	public:
		TMap<struct FKey, struct FKey>                             OldKeyToNewKey;                                          // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonUI.RichTextIconData
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRichTextIconData : public FTableRowBase
	{
	public:
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              ResourceObject[0x28];                                    // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector2D                                           ImageSize;                                               // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonUI.CommonInputTypeInfo
	 * Size -> 0x00A8
	 */
	struct FCommonInputTypeInfo
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EInputActionState                                          OverrrideState;                                          // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActionRequiresHold;                                     // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YW72[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoldTime;                                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         OverrideBrush;                                           // 0x0020(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CommonUI.CommonInputActionDataBase
	 * Size -> 0x0278 (FullSize[0x0280] - InheritedSize[0x0008])
	 */
	struct FCommonInputActionDataBase : public FTableRowBase
	{
	public:
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                HoldDisplayName;                                         // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FCommonInputTypeInfo                                KeyboardInputTypeInfo;                                   // 0x0038(0x00A8) Edit, Protected, NativeAccessSpecifierProtected
		struct FCommonInputTypeInfo                                DefaultGamepadInputTypeInfo;                             // 0x00E0(0x00A8) Edit, Protected, NativeAccessSpecifierProtected
		TMap<class FName, struct FCommonInputTypeInfo>             GamepadInputOverrides;                                   // 0x0188(0x0050) Edit, Protected, NativeAccessSpecifierProtected
		struct FCommonInputTypeInfo                                TouchInputTypeInfo;                                      // 0x01D8(0x00A8) Edit, Protected, NativeAccessSpecifierProtected
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
