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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CommonUI.CommonUserWidget
	 * Size -> 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
	 */
	class UCommonUserWidget : public UUserWidget
	{
	public:
		bool                                                       bConsumePointerInput;                                    // 0x0260(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N5ZP[0x27];                                  // 0x0261(0x0027) MISSED OFFSET (PADDING)

	public:
		void SetConsumePointerInput(bool bInConsumePointerInput);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonButtonBase
	 * Size -> 0x0978 (FullSize[0x0C00] - InheritedSize[0x0288])
	 */
	class UCommonButtonBase : public UCommonUserWidget
	{
	public:
		int32_t                                                    MinWidth;                                                // 0x0288(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinHeight;                                               // 0x028C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              Style;                                                   // 0x0290(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHideInputAction;                                        // 0x0298(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GNMB[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateSound                                         PressedSlateSoundOverride;                               // 0x02A0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FSlateSound                                         HoveredSlateSoundOverride;                               // 0x02B8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bApplyAlphaOnDisable : 1;                                // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSelectable : 1;                                         // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldSelectUponReceivingFocus : 1;                     // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInteractableWhenSelected : 1;                           // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bToggleable : 1;                                         // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisplayInputActionWhenNotInteractable : 1;              // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHideInputActionWithKeyboard : 1;                        // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldUseFallbackDefaultInputAction : 1;                // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VJ55[0x1];                                   // 0x02D1(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EButtonClickMethod                                         ClickMethod;                                             // 0x02D2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonTouchMethod                                         TouchMethod;                                             // 0x02D3(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonPressMethod                                         PressMethod;                                             // 0x02D4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7N2[0x3];                                   // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputPriority;                                           // 0x02D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5KC[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 TriggeringInputAction;                                   // 0x02E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUIJ[0x10];                                  // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectedChangedBase;                                   // 0x0300(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnButtonBaseClicked;                                     // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnButtonBaseRightClicked;                                // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnButtonBaseDoubleClicked;                               // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnButtonBaseHovered;                                     // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnButtonBaseUnhovered;                                   // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N13W[0x4];                                   // 0x0360(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsPersistentBinding;                                    // 0x0364(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECommonInputMode                                           InputModeOverride;                                       // 0x0365(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KD25[0x32];                                  // 0x0366(0x0032) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            SingleMaterialStyleMID;                                  // 0x0398(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FButtonStyle                                        NormalStyle;                                             // 0x03A0(0x0278) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_49LX[0x28];                                  // 0x0618(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        SelectedStyle;                                           // 0x0640(0x0278) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KXCU[0x28];                                  // 0x08B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        DisabledStyle;                                           // 0x08E0(0x0278) NativeAccessSpecifierPrivate
		bool                                                       bStopDoubleClickPropagation : 1;                         // 0x0B58(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KUNL[0x9F];                                  // 0x0B59(0x009F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonActionWidget*                                 InputActionWidget;                                       // 0x0BF8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void StopDoubleClickPropagation();
		void SetTriggeringInputAction(const struct FDataTableRowHandle& InputActionRow);
		void SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow);
		void SetTouchMethod(EButtonTouchMethod InTouchMethod);
		void SetStyle(class UClass* InStyle);
		void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
		void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
		void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
		void SetPressMethod(EButtonPressMethod InPressMethod);
		void SetPressedSoundOverride(class USoundBase* Sound);
		void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);
		void SetIsToggleable(bool bInIsToggleable);
		void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
		void SetIsSelectable(bool bInIsSelectable);
		void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
		void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
		void SetIsFocusable(bool bInIsFocusable);
		void SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const class FName& InProgressMaterialParam);
		void SetHoveredSoundOverride(class USoundBase* Sound);
		void SetClickMethod(EButtonClickMethod InClickMethod);
		void ResetSelectedBrushImageToDefault();
		void ResetNormalBrushImageToDefault();
		void OverrideSelectedBrushImage(class UObject* InImage, ECommonButtonImageOverrideType InType);
		void OverrideNormalBrushImage(class UObject* InImage, ECommonButtonImageOverrideType InType);
		void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
		void OnInputMethodChanged(ECommonInputType CurrentInputType);
		void OnCurrentTextStyleChanged();
		void OnActionProgress(float HeldPercent);
		void OnActionComplete();
		void NativeOnActionProgress(float HeldPercent);
		void NativeOnActionComplete();
		bool IsPressed();
		bool IsInteractionEnabled();
		void HandleTriggeringActionCommited(bool* bPassThrough);
		void HandleFocusReceived();
		void HandleButtonRightClicked();
		void HandleButtonReleased();
		void HandleButtonPressed();
		void HandleButtonClicked();
		class UCommonButtonStyle* GetStyle();
		class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
		bool GetShouldSelectUponReceivingFocus();
		bool GetSelected();
		bool GetIsFocusable();
		bool GetInputAction(struct FDataTableRowHandle* InputActionRow);
		class UClass* GetCurrentTextStyleClass();
		class UCommonTextStyle* GetCurrentTextStyle();
		void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);
		void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);
		void DisableButtonWithReason(const class FText& DisabledReason);
		void ClearSelection();
		void BP_OnUnhovered();
		void BP_OnSelected();
		void BP_OnHovered();
		void BP_OnEnabled();
		void BP_OnDoubleClicked();
		void BP_OnDisabled();
		void BP_OnDeselected();
		void BP_OnClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActivatableWidget
	 * Size -> 0x0098 (FullSize[0x0320] - InheritedSize[0x0288])
	 */
	class UCommonActivatableWidget : public UCommonUserWidget
	{
	public:
		bool                                                       bAutoActivate;                                           // 0x0288(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsBackHandler;                                          // 0x0289(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportsActivationFocus;                                // 0x028A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsModal;                                                // 0x028B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoRestoreFocus;                                       // 0x028C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSetVisibilityOnActivated;                               // 0x028D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESlateVisibility                                           ActivatedVisibility;                                     // 0x028E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSetVisibilityOnDeactivated;                             // 0x028F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESlateVisibility                                           DeactivatedVisibility;                                   // 0x0290(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5LO8[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnWidgetActivated;                                    // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnWidgetDeactivated;                                  // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		bool                                                       bIsActive;                                               // 0x02B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LF4W[0x67];                                  // 0x02B9(0x0067) MISSED OFFSET (PADDING)

	public:
		bool IsActivated();
		void DeactivateWidget();
		bool BP_OnHandleBackAction();
		void BP_OnDeactivated();
		void BP_OnActivated();
		class UWidget* BP_GetDesiredFocusTarget();
		void ActivateWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.AnalogSlider
	 * Size -> 0x0020 (FullSize[0x0518] - InheritedSize[0x04F8])
	 */
	class UAnalogSlider : public USlider
	{
	public:
		class FScriptMulticastDelegate                             OnAnalogCapture;                                         // 0x04F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5XF[0x10];                                  // 0x0508(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActionHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonActionHandlerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActionWidget
	 * Size -> 0x0218 (FullSize[0x0320] - InheritedSize[0x0108])
	 */
	class UCommonActionWidget : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnInputMethodChanged;                                    // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ProgressMaterialBrush;                                   // 0x0118(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                ProgressMaterialParam;                                   // 0x01A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         IconRimBrush;                                            // 0x01A8(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         InputActions;                                            // 0x0230(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C6CQ[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            ProgressDynamicMaterial;                                 // 0x0248(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MU5Y[0xD0];                                  // 0x0250(0x00D0) MISSED OFFSET (PADDING)

	public:
		void SetInputActions(TArray<struct FDataTableRowHandle> NewInputActions);
		void SetInputAction(const struct FDataTableRowHandle& InputActionRow);
		void SetIconRimBrush(const struct FSlateBrush& InIconRimBrush);
		void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
		bool IsHeldAction();
		struct FSlateBrush GetIcon();
		class FText GetDisplayText();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActivatableWidgetContainerBase
	 * Size -> 0x0100 (FullSize[0x0208] - InheritedSize[0x0108])
	 */
	class UCommonActivatableWidgetContainerBase : public UWidget
	{
	public:
		ECommonSwitcherTransition                                  TransitionType;                                          // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETransitionCurve                                           TransitionCurveType;                                     // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MD38[0x2];                                   // 0x010A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TransitionDuration;                                      // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCommonActivatableWidget*>                    WidgetList;                                              // 0x0110(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UCommonActivatableWidget*                            DisplayedWidget;                                         // 0x0120(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FUserWidgetPool                                     GeneratedWidgetsPool;                                    // 0x0128(0x0080) Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R40M[0x60];                                  // 0x01A8(0x0060) MISSED OFFSET (PADDING)

	public:
		void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);
		class UCommonActivatableWidget* GetActiveWidget();
		void ClearWidgets();
		class UCommonActivatableWidget* BP_AddWidget(class UClass* ActivatableWidgetClass);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActivatableWidgetStack
	 * Size -> 0x0010 (FullSize[0x0218] - InheritedSize[0x0208])
	 */
	class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
	{
	public:
		class UClass*                                              RootContentWidgetClass;                                  // 0x0208(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCommonActivatableWidget*                            RootContentWidget;                                       // 0x0210(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActivatableWidgetQueue
	 * Size -> 0x0000 (FullSize[0x0208] - InheritedSize[0x0208])
	 */
	class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonAnimatedSwitcher
	 * Size -> 0x0058 (FullSize[0x0190] - InheritedSize[0x0138])
	 */
	class UCommonAnimatedSwitcher : public UWidgetSwitcher
	{
	public:
		unsigned char                                              UnknownData_GPF2[0x18];                                  // 0x0138(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECommonSwitcherTransition                                  TransitionType;                                          // 0x0150(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETransitionCurve                                           TransitionCurveType;                                     // 0x0151(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RNB6[0x2];                                   // 0x0152(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TransitionDuration;                                      // 0x0154(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8OIT[0x38];                                  // 0x0158(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetDisableTransitionAnimation(bool bDisableAnimation);
		bool HasWidgets();
		void ActivatePreviousWidget(bool bCanWrap);
		void ActivateNextWidget(bool bCanWrap);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonActivatableWidgetSwitcher
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonBorderStyle
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UCommonBorderStyle : public UObject
	{
	public:
		struct FSlateBrush                                         Background;                                              // 0x0028(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		void GetBackgroundBrush(struct FSlateBrush* Brush);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonBorder
	 * Size -> 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
	 */
	class UCommonBorder : public UBorder
	{
	public:
		class UClass*                                              Style;                                                   // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReducePaddingBySafezone;                                // 0x0278(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYQZ[0x3];                                   // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             MinimumPadding;                                          // 0x027C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UAY[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetStyle(class UClass* InStyle);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonBoundActionBar
	 * Size -> 0x0010 (FullSize[0x01E8] - InheritedSize[0x01D8])
	 */
	class UCommonBoundActionBar : public UDynamicEntryBoxBase
	{
	public:
		class UClass*                                              ActionButtonClass;                                       // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDisplayOwningPlayerActionsOnly;                         // 0x01E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JFLD[0x7];                                   // 0x01E1(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonBoundActionButton
	 * Size -> 0x0010 (FullSize[0x0C10] - InheritedSize[0x0C00])
	 */
	class UCommonBoundActionButton : public UCommonButtonBase
	{
	public:
		class UCommonTextBlock*                                    Text_ActionName;                                         // 0x0C00(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y0SM[0x8];                                   // 0x0C08(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnUpdateInputAction();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonButtonStyle
	 * Size -> 0x0548 (FullSize[0x0570] - InheritedSize[0x0028])
	 */
	class UCommonButtonStyle : public UObject
	{
	public:
		bool                                                       bSingleMaterial;                                         // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VQ9[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         SingleMaterialBrush;                                     // 0x0030(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalBase;                                              // 0x00B8(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalHovered;                                           // 0x0140(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalPressed;                                           // 0x01C8(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SelectedBase;                                            // 0x0250(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SelectedHovered;                                         // 0x02D8(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SelectedPressed;                                         // 0x0360(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Disabled;                                                // 0x03E8(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FMargin                                             ButtonPadding;                                           // 0x0470(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             CustomPadding;                                           // 0x0480(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MinWidth;                                                // 0x0490(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinHeight;                                               // 0x0494(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NormalTextStyle;                                         // 0x0498(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NormalHoveredTextStyle;                                  // 0x04A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SelectedTextStyle;                                       // 0x04A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SelectedHoveredTextStyle;                                // 0x04B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DisabledTextStyle;                                       // 0x04B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateSound                                         PressedSlateSound;                                       // 0x04C0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCommonButtonStyleOptionalSlateSound                SelectedPressedSlateSound;                               // 0x04D8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCommonButtonStyleOptionalSlateSound                DisabledPressedSlateSound;                               // 0x04F8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x0518(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCommonButtonStyleOptionalSlateSound                SelectedHoveredSlateSound;                               // 0x0530(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCommonButtonStyleOptionalSlateSound                DisabledHoveredSlateSound;                               // 0x0550(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		class UCommonTextStyle* GetSelectedTextStyle();
		void GetSelectedPressedBrush(struct FSlateBrush* Brush);
		class UCommonTextStyle* GetSelectedHoveredTextStyle();
		void GetSelectedHoveredBrush(struct FSlateBrush* Brush);
		void GetSelectedBaseBrush(struct FSlateBrush* Brush);
		class UCommonTextStyle* GetNormalTextStyle();
		void GetNormalPressedBrush(struct FSlateBrush* Brush);
		class UCommonTextStyle* GetNormalHoveredTextStyle();
		void GetNormalHoveredBrush(struct FSlateBrush* Brush);
		void GetNormalBaseBrush(struct FSlateBrush* Brush);
		void GetMaterialBrush(struct FSlateBrush* Brush);
		class UCommonTextStyle* GetDisabledTextStyle();
		void GetDisabledBrush(struct FSlateBrush* Brush);
		void GetCustomPadding(struct FMargin* OutCustomPadding);
		void GetButtonPadding(struct FMargin* OutButtonPadding);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonButtonInternalBase
	 * Size -> 0x0060 (FullSize[0x0498] - InheritedSize[0x0438])
	 */
	class UCommonButtonInternalBase : public UButton
	{
	public:
		unsigned char                                              UnknownData_WPBF[0x10];                                  // 0x0438(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDoubleClicked;                                         // 0x0448(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWJN[0x10];                                  // 0x0458(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinWidth;                                                // 0x0468(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinHeight;                                               // 0x046C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bButtonEnabled;                                          // 0x0470(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInteractionEnabled;                                     // 0x0471(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JM6R[0x26];                                  // 0x0472(0x0026) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonWidgetGroupBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonWidgetGroupBase : public UObject
	{
	public:
		void RemoveWidget(class UWidget* InWidget);
		void RemoveAll();
		void AddWidget(class UWidget* InWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonButtonGroupBase
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UCommonButtonGroupBase : public UCommonWidgetGroupBase
	{
	public:
		class FScriptMulticastDelegate                             OnSelectedButtonBaseChanged;                             // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GR0B[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHoveredButtonBaseChanged;                              // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWCE[0x18];                                  // 0x0060(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnButtonBaseClicked;                                     // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZZT[0x18];                                  // 0x0088(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnButtonBaseDoubleClicked;                               // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2SN[0x18];                                  // 0x00B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionCleared;                                      // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LST2[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSelectionRequired;                                      // 0x00F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E3YN[0x1F];                                  // 0x00F1(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetSelectionRequired(bool bRequireSelection);
		void SelectPreviousButton(bool bAllowWrap);
		void SelectNextButton(bool bAllowWrap);
		void SelectButtonAtIndex(int32_t buttonIndex);
		void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);
		void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);
		void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);
		void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);
		void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);
		bool HasAnyButtons();
		int32_t GetSelectedButtonIndex();
		class UCommonButtonBase* GetSelectedButtonBase();
		int32_t GetHoveredButtonIndex();
		int32_t GetButtonCount();
		class UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);
		int32_t FindButtonIndex(class UCommonButtonBase* ButtonToFind);
		void DeselectAll();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonCustomNavigation
	 * Size -> 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
	 */
	class UCommonCustomNavigation : public UBorder
	{
	public:
		class FScriptDelegate                                      OnNavigationEvent;                                       // 0x0270(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTextBlock
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UCommonTextBlock : public UTextBlock
	{
	public:
		class UClass*                                              Style;                                                   // 0x02A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ScrollStyle;                                             // 0x02B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDisplayAllCaps;                                         // 0x02B8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoCollapseWithEmptyText;                              // 0x02B9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F6I9[0x2];                                   // 0x02BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MobileFontSizeMultiplier;                                // 0x02BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E45C[0x10];                                  // 0x02C0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetWrapTextWidth(int32_t InWrapTextAt);
		void SetTextCase(bool bUseAllCaps);
		void SetStyle(class UClass* InStyle);
		void ResetScrollState();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonDateTimeTextBlock
	 * Size -> 0x0040 (FullSize[0x0310] - InheritedSize[0x02D0])
	 */
	class UCommonDateTimeTextBlock : public UCommonTextBlock
	{
	public:
		unsigned char                                              UnknownData_NATJ[0x40];                                  // 0x02D0(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetTimespanValue(const struct FTimespan& InTimespan);
		void SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay);
		void SetCountDownCompletionText(const class FText& InCompletionText);
		struct FDateTime GetDateTime();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonGameViewportClient
	 * Size -> 0x0040 (FullSize[0x03A0] - InheritedSize[0x0360])
	 */
	class UCommonGameViewportClient : public UGameViewportClient
	{
	public:
		unsigned char                                              UnknownData_7XEW[0x40];                                  // 0x0360(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonHierarchicalScrollBox
	 * Size -> 0x0000 (FullSize[0x0888] - InheritedSize[0x0888])
	 */
	class UCommonHierarchicalScrollBox : public UScrollBox
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonLazyImage
	 * Size -> 0x00C8 (FullSize[0x02D8] - InheritedSize[0x0210])
	 */
	class UCommonLazyImage : public UImage
	{
	public:
		struct FSlateBrush                                         LoadingBackgroundBrush;                                  // 0x0210(0x0088) Edit, NativeAccessSpecifierPrivate
		class FName                                                MaterialTextureParamName;                                // 0x0298(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnLoadingStateChanged;                                // 0x02A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P0UT[0x28];                                  // 0x02B0(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetMaterialTextureParamName(const class FName& TextureParamName);
		void SetBrushFromLazyTexture(bool bMatchSize);
		void SetBrushFromLazyMaterial();
		void SetBrushFromLazyDisplayAsset(bool bMatchTextureSize);
		bool IsLoading();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonLazyWidget
	 * Size -> 0x0108 (FullSize[0x0210] - InheritedSize[0x0108])
	 */
	class UCommonLazyWidget : public UWidget
	{
	public:
		struct FSlateBrush                                         LoadingBackgroundBrush;                                  // 0x0108(0x0088) Edit, NativeAccessSpecifierPrivate
		class UUserWidget*                                         Content;                                                 // 0x0190(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X86U[0x28];                                  // 0x0198(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnLoadingStateChanged;                                // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EN1F[0x40];                                  // 0x01D0(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetLazyContent();
		bool IsLoading();
		class UUserWidget* GetContent();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonListView
	 * Size -> 0x0000 (FullSize[0x0398] - InheritedSize[0x0398])
	 */
	class UCommonListView : public UListView
	{
	public:
		void SetEntrySpacing(float InEntrySpacing);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.LoadGuardSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class ULoadGuardSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             Padding;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6QKM[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonLoadGuard
	 * Size -> 0x0110 (FullSize[0x0230] - InheritedSize[0x0120])
	 */
	class UCommonLoadGuard : public UContentWidget
	{
	public:
		struct FSlateBrush                                         LoadingBackgroundBrush;                                  // 0x0120(0x0088) Edit, NativeAccessSpecifierPrivate
		EHorizontalAlignment                                       ThrobberAlignment;                                       // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TY6P[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             ThrobberPadding;                                         // 0x01AC(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UJ3D[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LoadingText;                                             // 0x01C0(0x0018) Edit, NativeAccessSpecifierPrivate
		class UClass*                                              TextStyle;                                               // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnLoadingStateChanged;                                // 0x01E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     SpinnerMaterialPath;                                     // 0x01F0(0x0018) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LTHA[0x28];                                  // 0x0208(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetLoadingText(const class FText& InLoadingText);
		void SetIsLoading(bool bInIsLoading);
		void OnAssetLoaded__DelegateSignature(class UObject* Object);
		bool IsLoading();
		void BP_GuardAndLoadAsset(const class FScriptDelegate& OnAssetLoaded);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonNumericTextBlock
	 * Size -> 0x00A0 (FullSize[0x0370] - InheritedSize[0x02D0])
	 */
	class UCommonNumericTextBlock : public UCommonTextBlock
	{
	public:
		class FScriptMulticastDelegate                             OnInterpolationStartedEvent;                             // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterpolationUpdatedEvent;                             // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOutroEvent;                                            // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterpolationEndedEvent;                               // 0x0300(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      CurrentNumericValue;                                     // 0x0310(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECommonNumericType                                         NumericType;                                             // 0x0314(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHH3[0x3];                                   // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCommonNumberFormattingOptions                      FormattingSpecification;                                 // 0x0318(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      EaseOutInterpolationExponent;                            // 0x032C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationUpdateInterval;                             // 0x0330(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostInterpolationShrinkDuration;                         // 0x0334(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PerformSizeInterpolation;                                // 0x0338(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPercentage;                                            // 0x0339(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D048[0x36];                                  // 0x033A(0x0036) MISSED OFFSET (PADDING)

	public:
		void SetNumericType(ECommonNumericType InNumericType);
		void SetCurrentValue(float NewValue);
		void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
		void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
		void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
		void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
		bool IsInterpolatingNumericValue();
		void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
		float GetTargetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonPoolableWidgetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonPoolableWidgetInterface : public UInterface
	{
	public:
		void OnReleaseToPool();
		void OnAcquireFromPool();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonRichTextBlock
	 * Size -> 0x0038 (FullSize[0x06B0] - InheritedSize[0x0678])
	 */
	class UCommonRichTextBlock : public URichTextBlock
	{
	public:
		ERichTextInlineIconDisplayMode                             InlineIconDisplayMode;                                   // 0x0678(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTintInlineIcon;                                         // 0x0679(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3WBA[0x6];                                   // 0x067A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DefaultTextStyleOverrideClass;                           // 0x0680(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MobileTextBlockScale;                                    // 0x0688(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O908[0x4];                                   // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ScrollStyle;                                             // 0x0690(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDisplayAllCaps;                                         // 0x0698(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A4CR[0x17];                                  // 0x0699(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonRotator
	 * Size -> 0x0058 (FullSize[0x0C58] - InheritedSize[0x0C00])
	 */
	class UCommonRotator : public UCommonButtonBase
	{
	public:
		unsigned char                                              UnknownData_BUYW[0x10];                                  // 0x0C00(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRotated;                                               // 0x0C10(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7UAR[0x18];                                  // 0x0C20(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonTextBlock*                                    MyText;                                                  // 0x0C38(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YVQ4[0x18];                                  // 0x0C40(0x0018) MISSED OFFSET (PADDING)

	public:
		void ShiftTextRight();
		void ShiftTextLeft();
		void SetSelectedItem(int32_t InValue);
		void PopulateTextLabels(TArray<class FText> Labels);
		class FText GetSelectedText();
		int32_t GetSelectedIndex();
		void BP_OnOptionsPopulated(int32_t Count);
		void BP_OnOptionSelected(int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTabListWidgetBase
	 * Size -> 0x00D0 (FullSize[0x0358] - InheritedSize[0x0288])
	 */
	class UCommonTabListWidgetBase : public UCommonUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnTabSelected;                                           // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTabButtonCreation;                                     // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTabButtonRemoval;                                      // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 NextTabInputActionData;                                  // 0x02B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDataTableRowHandle                                 PreviousTabInputActionData;                              // 0x02C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bAutoListenForInput;                                     // 0x02D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A0LC[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UCommonAnimatedSwitcher>              LinkedSwitcher;                                          // 0x02DC(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X7YI[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonButtonGroupBase*                              TabButtonGroup;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FB5F[0x8];                                   // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FCommonRegisteredTabInfo>         RegisteredTabsByID;                                      // 0x02F8(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NDYA[0x10];                                  // 0x0348(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTabVisibility(const class FName& TabNameID, ESlateVisibility NewVisibility);
		void SetTabInteractionEnabled(const class FName& TabNameID, bool bEnable);
		void SetTabEnabled(const class FName& TabNameID, bool bEnable);
		void SetListeningForInput(bool bShouldListen);
		void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);
		bool SelectTabByID(const class FName& TabNameID, bool bSuppressClickFeedback);
		bool RemoveTab(const class FName& TabNameID);
		void RemoveAllTabs();
		bool RegisterTab(const class FName& TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget);
		void OnTabSelected__DelegateSignature(const class FName& TabId);
		void OnTabButtonRemoval__DelegateSignature(const class FName& TabId, class UCommonButtonBase* TabButton);
		void OnTabButtonCreation__DelegateSignature(const class FName& TabId, class UCommonButtonBase* TabButton);
		void HandleTabRemoval(const class FName& TabNameID, class UCommonButtonBase* TabButton);
		void HandleTabCreation(const class FName& TabNameID, class UCommonButtonBase* TabButton);
		void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32_t buttonIndex);
		void HandlePreviousTabInputAction(bool* bPassThrough);
		void HandlePreLinkedSwitcherChanged_BP();
		void HandlePostLinkedSwitcherChanged_BP();
		void HandleNextTabInputAction(bool* bPassThrough);
		class FName GetTabIdAtIndex(int32_t Index);
		int32_t GetTabCount();
		class UCommonButtonBase* GetTabButtonBaseByID(const class FName& TabNameID);
		class FName GetSelectedTabId();
		class UCommonAnimatedSwitcher* GetLinkedSwitcher();
		class FName GetActiveTab();
		void DisableTabWithReason(const class FName& TabNameID, const class FText& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTextStyle
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UCommonTextStyle : public UObject
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0028(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesDropShadow;                                         // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEC0[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ShadowOffset;                                            // 0x0094(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColor;                                             // 0x009C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x00AC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SMF[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         StrikeBrush;                                             // 0x00C0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      LineHeightPercentage;                                    // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3R0[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)

	public:
		void GetStrikeBrush(struct FSlateBrush* OutStrikeBrush);
		void GetShadowOffset(struct FVector2D* OutShadowOffset);
		void GetShadowColor(struct FLinearColor* OutColor);
		void GetMargin(struct FMargin* OutMargin);
		float GetLineHeightPercentage();
		void GetFont(struct FSlateFontInfo* OutFont);
		void GetColor(struct FLinearColor* OutColor);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTextScrollStyle
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UCommonTextScrollStyle : public UObject
	{
	public:
		float                                                      Speed;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDelay;                                              // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndDelay;                                                // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInDelay;                                             // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutDelay;                                            // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQQD[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTileView
	 * Size -> 0x0000 (FullSize[0x03B8] - InheritedSize[0x03B8])
	 */
	class UCommonTileView : public UTileView
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonTreeView
	 * Size -> 0x0000 (FullSize[0x03F0] - InheritedSize[0x03F0])
	 */
	class UCommonTreeView : public UTreeView
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUIActionRouterBase
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
	{
	public:
		unsigned char                                              UnknownData_HRT0[0xD0];                                  // 0x0030(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUIEditorSettings
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UCommonUIEditorSettings : public UObject
	{
	public:
		unsigned char                                              TemplateTextStyle[0x28];                                 // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              TemplateButtonStyle[0x28];                               // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              TemplateBorderStyle[0x28];                               // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              UnknownData_0R06[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUIInputSettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UCommonUIInputSettings : public UObject
	{
	public:
		bool                                                       bLinkCursorToGamepadFocus;                               // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1GWZ[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UIActionProcessingPriority;                              // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FUIInputAction>                              InputActions;                                            // 0x0030(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<struct FUIInputAction>                              ActionOverrides;                                         // 0x0040(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		struct FCommonAnalogCursorSettings                         AnalogCursorSettings;                                    // 0x0050(0x0024) Edit, Config, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0I37[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUILibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonUILibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUIRichTextData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCommonUIRichTextData : public UObject
	{
	public:
		class UDataTable*                                          InlineIconSet;                                           // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUISettings
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UCommonUISettings : public UObject
	{
	public:
		bool                                                       bAutoLoadData;                                           // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0RIJ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultImageResourceObject[0x28];                        // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DefaultThrobberMaterial[0x28];                           // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DefaultRichTextDataClass[0x28];                          // 0x0080(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              UnknownData_6LNR[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             DefaultImageResourceObjectInstance;                      // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  DefaultThrobberMaterialInstance;                         // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSlateBrush                                         DefaultThrobberBrush;                                    // 0x00C0(0x0088) Transient, NativeAccessSpecifierPrivate
		class UCommonUIRichTextData*                               RichTextDataInstance;                                    // 0x0148(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonUISubsystemBase
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCommonUISubsystemBase : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_JH1W[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		struct FSlateBrush GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const class FName& GamepadName);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonVideoPlayer
	 * Size -> 0x0110 (FullSize[0x0218] - InheritedSize[0x0108])
	 */
	class UCommonVideoPlayer : public UWidget
	{
	public:
		class UMediaSource*                                        Video;                                                   // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMediaTexture*                                       MediaTexture;                                            // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterial*                                           VideoMaterial;                                           // 0x0120(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMediaSoundComponent*                                SoundComponent;                                          // 0x0128(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSlateBrush                                         VideoBrush;                                              // 0x0130(0x0088) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_00DL[0x60];                                  // 0x01B8(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonVisibilitySwitcher
	 * Size -> 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
	 */
	class UCommonVisibilitySwitcher : public UOverlay
	{
	public:
		ESlateVisibility                                           ShownVisibility;                                         // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AM5C[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ActiveWidgetIndex;                                       // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoActivateSlot;                                       // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bActivateFirstSlotOnAdding;                              // 0x0139(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IUPO[0x1E];                                  // 0x013A(0x001E) MISSED OFFSET (PADDING)

	public:
		void SetActiveWidgetIndex(int32_t Index);
		void SetActiveWidget(class UWidget* Widget);
		void IncrementActiveWidgetIndex(bool bAllowWrapping);
		int32_t GetActiveWidgetIndex();
		class UWidget* GetActiveWidget();
		void DecrementActiveWidgetIndex(bool bAllowWrapping);
		void DeactivateVisibleSlot();
		void ActivateVisibleSlot();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonVisibilitySwitcherSlot
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UCommonVisibilitySwitcherSlot : public UOverlaySlot
	{
	public:
		unsigned char                                              UnknownData_E566[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonVisibilityWidgetBase
	 * Size -> 0x0058 (FullSize[0x02E8] - InheritedSize[0x0290])
	 */
	class UCommonVisibilityWidgetBase : public UCommonBorder
	{
	public:
		TMap<class FName, bool>                                    VisibilityControls;                                      // 0x0290(0x0050) Edit, EditFixedSize, NativeAccessSpecifierPublic
		bool                                                       bShowForGamepad;                                         // 0x02E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowForMouseAndKeyboard;                                // 0x02E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowForTouch;                                           // 0x02E2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           VisibleType;                                             // 0x02E3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           HiddenType;                                              // 0x02E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O938[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (PADDING)

	public:
		TArray<class FName> GetRegisteredPlatforms();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonVisualAttachment
	 * Size -> 0x0018 (FullSize[0x0170] - InheritedSize[0x0158])
	 */
	class UCommonVisualAttachment : public USizeBox
	{
	public:
		struct FVector2D                                           ContentAnchor;                                           // 0x0158(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NA8M[0x10];                                  // 0x0160(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonWidgetCarousel
	 * Size -> 0x0040 (FullSize[0x0160] - InheritedSize[0x0120])
	 */
	class UCommonWidgetCarousel : public UPanelWidget
	{
	public:
		int32_t                                                    ActiveWidgetIndex;                                       // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKQ9[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCurrentPageIndexChanged;                               // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTG8[0x28];                                  // 0x0138(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetActiveWidgetIndex(int32_t Index);
		void SetActiveWidget(class UWidget* Widget);
		void PreviousPage();
		void NextPage();
		class UWidget* GetWidgetAtIndex(int32_t Index);
		int32_t GetActiveWidgetIndex();
		void EndAutoScrolling();
		void BeginAutoScrolling(float ScrollInterval);
		static UClass* StaticClass();
	};

	/**
	 * Class CommonUI.CommonWidgetCarouselNavBar
	 * Size -> 0x0048 (FullSize[0x0150] - InheritedSize[0x0108])
	 */
	class UCommonWidgetCarouselNavBar : public UWidget
	{
	public:
		class UClass*                                              ButtonWidgetType;                                        // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ButtonPadding;                                           // 0x0110(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXIS[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonWidgetCarousel*                               LinkedCarousel;                                          // 0x0130(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCommonButtonGroupBase*                              ButtonGroup;                                             // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCommonButtonBase*>                           Buttons;                                                 // 0x0140(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
		void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);
		void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32_t buttonIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
