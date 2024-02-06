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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CommonUI.CommonUserWidget.SetConsumePointerInput
	 */
	struct UCommonUserWidget_SetConsumePointerInput_Params
	{
	public:
		bool                                                       bInConsumePointerInput;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.StopDoubleClickPropagation
	 */
	struct UCommonButtonBase_StopDoubleClickPropagation_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.SetTriggeringInputAction
	 */
	struct UCommonButtonBase_SetTriggeringInputAction_Params
	{
	public:
		struct FDataTableRowHandle                                 InputActionRow;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetTriggeredInputAction
	 */
	struct UCommonButtonBase_SetTriggeredInputAction_Params
	{
	public:
		struct FDataTableRowHandle                                 InputActionRow;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetTouchMethod
	 */
	struct UCommonButtonBase_SetTouchMethod_Params
	{
	public:
		EButtonTouchMethod                                         InTouchMethod;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetStyle
	 */
	struct UCommonButtonBase_SetStyle_Params
	{
	public:
		class UClass*                                              InStyle;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	 */
	struct UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Params
	{
	public:
		bool                                                       bInShouldUseFallbackDefaultInputAction;                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	 */
	struct UCommonButtonBase_SetShouldSelectUponReceivingFocus_Params
	{
	public:
		bool                                                       bInShouldSelectUponReceivingFocus;                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetSelectedInternal
	 */
	struct UCommonButtonBase_SetSelectedInternal_Params
	{
	public:
		bool                                                       bInSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowSound;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBroadcast;                                              // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetPressMethod
	 */
	struct UCommonButtonBase_SetPressMethod_Params
	{
	public:
		EButtonPressMethod                                         InPressMethod;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetPressedSoundOverride
	 */
	struct UCommonButtonBase_SetPressedSoundOverride_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetMinDimensions
	 */
	struct UCommonButtonBase_SetMinDimensions_Params
	{
	public:
		int32_t                                                    InMinWidth;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InMinHeight;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetIsToggleable
	 */
	struct UCommonButtonBase_SetIsToggleable_Params
	{
	public:
		bool                                                       bInIsToggleable;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetIsSelected
	 */
	struct UCommonButtonBase_SetIsSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGiveClickFeedback;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetIsSelectable
	 */
	struct UCommonButtonBase_SetIsSelectable_Params
	{
	public:
		bool                                                       bInIsSelectable;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
	 */
	struct UCommonButtonBase_SetIsInteractionEnabled_Params
	{
	public:
		bool                                                       bInIsInteractionEnabled;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	 */
	struct UCommonButtonBase_SetIsInteractableWhenSelected_Params
	{
	public:
		bool                                                       bInInteractableWhenSelected;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetIsFocusable
	 */
	struct UCommonButtonBase_SetIsFocusable_Params
	{
	public:
		bool                                                       bInIsFocusable;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	 */
	struct UCommonButtonBase_SetInputActionProgressMaterial_Params
	{
	public:
		struct FSlateBrush                                         InProgressMaterialBrush;                                 // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                InProgressMaterialParam;                                 // 0x0088(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
	 */
	struct UCommonButtonBase_SetHoveredSoundOverride_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.SetClickMethod
	 */
	struct UCommonButtonBase_SetClickMethod_Params
	{
	public:
		EButtonClickMethod                                         InClickMethod;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.ResetSelectedBrushImageToDefault
	 */
	struct UCommonButtonBase_ResetSelectedBrushImageToDefault_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.ResetNormalBrushImageToDefault
	 */
	struct UCommonButtonBase_ResetNormalBrushImageToDefault_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.OverrideSelectedBrushImage
	 */
	struct UCommonButtonBase_OverrideSelectedBrushImage_Params
	{
	public:
		class UObject*                                             InImage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECommonButtonImageOverrideType                             InType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.OverrideNormalBrushImage
	 */
	struct UCommonButtonBase_OverrideNormalBrushImage_Params
	{
	public:
		class UObject*                                             InImage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECommonButtonImageOverrideType                             InType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	 */
	struct UCommonButtonBase_OnTriggeredInputActionChanged_Params
	{
	public:
		struct FDataTableRowHandle                                 NewTriggeredAction;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.OnInputMethodChanged
	 */
	struct UCommonButtonBase_OnInputMethodChanged_Params
	{
	public:
		ECommonInputType                                           CurrentInputType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	 */
	struct UCommonButtonBase_OnCurrentTextStyleChanged_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.OnActionProgress
	 */
	struct UCommonButtonBase_OnActionProgress_Params
	{
	public:
		float                                                      HeldPercent;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.OnActionComplete
	 */
	struct UCommonButtonBase_OnActionComplete_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.NativeOnActionProgress
	 */
	struct UCommonButtonBase_NativeOnActionProgress_Params
	{
	public:
		float                                                      HeldPercent;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.NativeOnActionComplete
	 */
	struct UCommonButtonBase_NativeOnActionComplete_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.IsPressed
	 */
	struct UCommonButtonBase_IsPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.IsInteractionEnabled
	 */
	struct UCommonButtonBase_IsInteractionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	 */
	struct UCommonButtonBase_HandleTriggeringActionCommited_Params
	{
	public:
		bool                                                       bPassThrough;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.HandleFocusReceived
	 */
	struct UCommonButtonBase_HandleFocusReceived_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.HandleButtonRightClicked
	 */
	struct UCommonButtonBase_HandleButtonRightClicked_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.HandleButtonReleased
	 */
	struct UCommonButtonBase_HandleButtonReleased_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.HandleButtonPressed
	 */
	struct UCommonButtonBase_HandleButtonPressed_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.HandleButtonClicked
	 */
	struct UCommonButtonBase_HandleButtonClicked_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.GetStyle
	 */
	struct UCommonButtonBase_GetStyle_Params
	{
	public:
		class UCommonButtonStyle*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	 */
	struct UCommonButtonBase_GetSingleMaterialStyleMID_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	 */
	struct UCommonButtonBase_GetShouldSelectUponReceivingFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.GetSelected
	 */
	struct UCommonButtonBase_GetSelected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.GetIsFocusable
	 */
	struct UCommonButtonBase_GetIsFocusable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.GetInputAction
	 */
	struct UCommonButtonBase_GetInputAction_Params
	{
	public:
		struct FDataTableRowHandle                                 InputActionRow;                                          // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	 */
	struct UCommonButtonBase_GetCurrentTextStyleClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.GetCurrentTextStyle
	 */
	struct UCommonButtonBase_GetCurrentTextStyle_Params
	{
	public:
		class UCommonTextStyle*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
	 */
	struct UCommonButtonBase_GetCurrentCustomPadding_Params
	{
	public:
		struct FMargin                                             OutCustomPadding;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
	 */
	struct UCommonButtonBase_GetCurrentButtonPadding_Params
	{
	public:
		struct FMargin                                             OutButtonPadding;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.DisableButtonWithReason
	 */
	struct UCommonButtonBase_DisableButtonWithReason_Params
	{
	public:
		class FText                                                DisabledReason;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonBase.ClearSelection
	 */
	struct UCommonButtonBase_ClearSelection_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.BP_OnUnhovered
	 */
	struct UCommonButtonBase_BP_OnUnhovered_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.BP_OnSelected
	 */
	struct UCommonButtonBase_BP_OnSelected_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.BP_OnHovered
	 */
	struct UCommonButtonBase_BP_OnHovered_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.BP_OnEnabled
	 */
	struct UCommonButtonBase_BP_OnEnabled_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.BP_OnDoubleClicked
	 */
	struct UCommonButtonBase_BP_OnDoubleClicked_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.BP_OnDisabled
	 */
	struct UCommonButtonBase_BP_OnDisabled_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.BP_OnDeselected
	 */
	struct UCommonButtonBase_BP_OnDeselected_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonBase.BP_OnClicked
	 */
	struct UCommonButtonBase_BP_OnClicked_Params
	{	};

	/**
	 * Function CommonUI.CommonActivatableWidget.IsActivated
	 */
	struct UCommonActivatableWidget_IsActivated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActivatableWidget.DeactivateWidget
	 */
	struct UCommonActivatableWidget_DeactivateWidget_Params
	{	};

	/**
	 * Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	 */
	struct UCommonActivatableWidget_BP_OnHandleBackAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActivatableWidget.BP_OnDeactivated
	 */
	struct UCommonActivatableWidget_BP_OnDeactivated_Params
	{	};

	/**
	 * Function CommonUI.CommonActivatableWidget.BP_OnActivated
	 */
	struct UCommonActivatableWidget_BP_OnActivated_Params
	{	};

	/**
	 * Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	 */
	struct UCommonActivatableWidget_BP_GetDesiredFocusTarget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActivatableWidget.ActivateWidget
	 */
	struct UCommonActivatableWidget_ActivateWidget_Params
	{	};

	/**
	 * Function CommonUI.CommonActionWidget.SetInputActions
	 */
	struct UCommonActionWidget_SetInputActions_Params
	{
	public:
		TArray<struct FDataTableRowHandle>                         NewInputActions;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActionWidget.SetInputAction
	 */
	struct UCommonActionWidget_SetInputAction_Params
	{
	public:
		struct FDataTableRowHandle                                 InputActionRow;                                          // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActionWidget.SetIconRimBrush
	 */
	struct UCommonActionWidget_SetIconRimBrush_Params
	{
	public:
		struct FSlateBrush                                         InIconRimBrush;                                          // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	 */
	struct UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bUsingGamepad;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActionWidget.IsHeldAction
	 */
	struct UCommonActionWidget_IsHeldAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActionWidget.GetIcon
	 */
	struct UCommonActionWidget_GetIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActionWidget.GetDisplayText
	 */
	struct UCommonActionWidget_GetDisplayText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	 */
	struct UCommonActivatableWidgetContainerBase_RemoveWidget_Params
	{
	public:
		class UCommonActivatableWidget*                            WidgetToRemove;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	 */
	struct UCommonActivatableWidgetContainerBase_GetActiveWidget_Params
	{
	public:
		class UCommonActivatableWidget*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	 */
	struct UCommonActivatableWidgetContainerBase_ClearWidgets_Params
	{	};

	/**
	 * Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	 */
	struct UCommonActivatableWidgetContainerBase_BP_AddWidget_Params
	{
	public:
		class UClass*                                              ActivatableWidgetClass;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCommonActivatableWidget*                            ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	 */
	struct UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Params
	{
	public:
		bool                                                       bDisableAnimation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonAnimatedSwitcher.HasWidgets
	 */
	struct UCommonAnimatedSwitcher_HasWidgets_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	 */
	struct UCommonAnimatedSwitcher_ActivatePreviousWidget_Params
	{
	public:
		bool                                                       bCanWrap;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	 */
	struct UCommonAnimatedSwitcher_ActivateNextWidget_Params
	{
	public:
		bool                                                       bCanWrap;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonBorderStyle.GetBackgroundBrush
	 */
	struct UCommonBorderStyle_GetBackgroundBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonBorder.SetStyle
	 */
	struct UCommonBorder_SetStyle_Params
	{
	public:
		class UClass*                                              InStyle;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	 */
	struct UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Params
	{
	public:
		bool                                                       bShouldOnlyDisplayOwningPlayerActions;                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonBoundActionButton.OnUpdateInputAction
	 */
	struct UCommonBoundActionButton_OnUpdateInputAction_Params
	{	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
	 */
	struct UCommonButtonStyle_GetSelectedTextStyle_Params
	{
	public:
		class UCommonTextStyle*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	 */
	struct UCommonButtonStyle_GetSelectedPressedBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	 */
	struct UCommonButtonStyle_GetSelectedHoveredTextStyle_Params
	{
	public:
		class UCommonTextStyle*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	 */
	struct UCommonButtonStyle_GetSelectedHoveredBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	 */
	struct UCommonButtonStyle_GetSelectedBaseBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetNormalTextStyle
	 */
	struct UCommonButtonStyle_GetNormalTextStyle_Params
	{
	public:
		class UCommonTextStyle*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
	 */
	struct UCommonButtonStyle_GetNormalPressedBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	 */
	struct UCommonButtonStyle_GetNormalHoveredTextStyle_Params
	{
	public:
		class UCommonTextStyle*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	 */
	struct UCommonButtonStyle_GetNormalHoveredBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
	 */
	struct UCommonButtonStyle_GetNormalBaseBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetMaterialBrush
	 */
	struct UCommonButtonStyle_GetMaterialBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
	 */
	struct UCommonButtonStyle_GetDisabledTextStyle_Params
	{
	public:
		class UCommonTextStyle*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetDisabledBrush
	 */
	struct UCommonButtonStyle_GetDisabledBrush_Params
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetCustomPadding
	 */
	struct UCommonButtonStyle_GetCustomPadding_Params
	{
	public:
		struct FMargin                                             OutCustomPadding;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonStyle.GetButtonPadding
	 */
	struct UCommonButtonStyle_GetButtonPadding_Params
	{
	public:
		struct FMargin                                             OutButtonPadding;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonWidgetGroupBase.RemoveWidget
	 */
	struct UCommonWidgetGroupBase_RemoveWidget_Params
	{
	public:
		class UWidget*                                             InWidget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonWidgetGroupBase.RemoveAll
	 */
	struct UCommonWidgetGroupBase_RemoveAll_Params
	{	};

	/**
	 * Function CommonUI.CommonWidgetGroupBase.AddWidget
	 */
	struct UCommonWidgetGroupBase_AddWidget_Params
	{
	public:
		class UWidget*                                             InWidget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
	 */
	struct UCommonButtonGroupBase_SetSelectionRequired_Params
	{
	public:
		bool                                                       bRequireSelection;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
	 */
	struct UCommonButtonGroupBase_SelectPreviousButton_Params
	{
	public:
		bool                                                       bAllowWrap;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.SelectNextButton
	 */
	struct UCommonButtonGroupBase_SelectNextButton_Params
	{
	public:
		bool                                                       bAllowWrap;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	 */
	struct UCommonButtonGroupBase_SelectButtonAtIndex_Params
	{
	public:
		int32_t                                                    buttonIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	 */
	struct UCommonButtonGroupBase_OnSelectionStateChangedBase_Params
	{
	public:
		class UCommonButtonBase*                                   BaseButton;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	 */
	struct UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Params
	{
	public:
		class UCommonButtonBase*                                   BaseButton;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	 */
	struct UCommonButtonGroupBase_OnHandleButtonBaseClicked_Params
	{
	public:
		class UCommonButtonBase*                                   BaseButton;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	 */
	struct UCommonButtonGroupBase_OnButtonBaseUnhovered_Params
	{
	public:
		class UCommonButtonBase*                                   BaseButton;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	 */
	struct UCommonButtonGroupBase_OnButtonBaseHovered_Params
	{
	public:
		class UCommonButtonBase*                                   BaseButton;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.HasAnyButtons
	 */
	struct UCommonButtonGroupBase_HasAnyButtons_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	 */
	struct UCommonButtonGroupBase_GetSelectedButtonIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	 */
	struct UCommonButtonGroupBase_GetSelectedButtonBase_Params
	{
	public:
		class UCommonButtonBase*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	 */
	struct UCommonButtonGroupBase_GetHoveredButtonIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.GetButtonCount
	 */
	struct UCommonButtonGroupBase_GetButtonCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	 */
	struct UCommonButtonGroupBase_GetButtonBaseAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IRCI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCommonButtonBase*                                   ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.FindButtonIndex
	 */
	struct UCommonButtonGroupBase_FindButtonIndex_Params
	{
	public:
		class UCommonButtonBase*                                   ButtonToFind;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonButtonGroupBase.DeselectAll
	 */
	struct UCommonButtonGroupBase_DeselectAll_Params
	{	};

	/**
	 * Function CommonUI.CommonTextBlock.SetWrapTextWidth
	 */
	struct UCommonTextBlock_SetWrapTextWidth_Params
	{
	public:
		int32_t                                                    InWrapTextAt;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTextBlock.SetTextCase
	 */
	struct UCommonTextBlock_SetTextCase_Params
	{
	public:
		bool                                                       bUseAllCaps;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTextBlock.SetStyle
	 */
	struct UCommonTextBlock_SetStyle_Params
	{
	public:
		class UClass*                                              InStyle;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTextBlock.ResetScrollState
	 */
	struct UCommonTextBlock_ResetScrollState_Params
	{	};

	/**
	 * Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	 */
	struct UCommonDateTimeTextBlock_SetTimespanValue_Params
	{
	public:
		struct FTimespan                                           InTimespan;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	 */
	struct UCommonDateTimeTextBlock_SetDateTimeValue_Params
	{
	public:
		struct FDateTime                                           InDateTime;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowAsCountdown;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WVWB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InRefreshDelay;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	 */
	struct UCommonDateTimeTextBlock_SetCountDownCompletionText_Params
	{
	public:
		class FText                                                InCompletionText;                                        // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonDateTimeTextBlock.GetDateTime
	 */
	struct UCommonDateTimeTextBlock_GetDateTime_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
	 */
	struct UCommonLazyImage_SetMaterialTextureParamName_Params
	{
	public:
		class FName                                                TextureParamName;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	 */
	struct UCommonLazyImage_SetBrushFromLazyTexture_Params
	{
	public:
		unsigned char                                              UnknownData_KQ9G[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       bMatchSize;                                              // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	 */
	struct UCommonLazyImage_SetBrushFromLazyMaterial_Params
	{	};

	/**
	 * Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	 */
	struct UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params
	{
	public:
		unsigned char                                              UnknownData_VRI4[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       bMatchTextureSize;                                       // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonLazyImage.IsLoading
	 */
	struct UCommonLazyImage_IsLoading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonLazyWidget.SetLazyContent
	 */
	struct UCommonLazyWidget_SetLazyContent_Params
	{	};

	/**
	 * Function CommonUI.CommonLazyWidget.IsLoading
	 */
	struct UCommonLazyWidget_IsLoading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonLazyWidget.GetContent
	 */
	struct UCommonLazyWidget_GetContent_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonListView.SetEntrySpacing
	 */
	struct UCommonListView_SetEntrySpacing_Params
	{
	public:
		float                                                      InEntrySpacing;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.LoadGuardSlot.SetVerticalAlignment
	 */
	struct ULoadGuardSlot_SetVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         InVerticalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.LoadGuardSlot.SetPadding
	 */
	struct ULoadGuardSlot_SetPadding_Params
	{
	public:
		struct FMargin                                             InPadding;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
	 */
	struct ULoadGuardSlot_SetHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       InHorizontalAlignment;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonLoadGuard.SetLoadingText
	 */
	struct UCommonLoadGuard_SetLoadingText_Params
	{
	public:
		class FText                                                InLoadingText;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonLoadGuard.SetIsLoading
	 */
	struct UCommonLoadGuard_SetIsLoading_Params
	{
	public:
		bool                                                       bInIsLoading;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	 */
	struct UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonLoadGuard.IsLoading
	 */
	struct UCommonLoadGuard_IsLoading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	 */
	struct UCommonLoadGuard_BP_GuardAndLoadAsset_Params
	{
	public:
		unsigned char                                              UnknownData_3NDV[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnAssetLoaded;                                           // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonNumericTextBlock.SetNumericType
	 */
	struct UCommonNumericTextBlock_SetNumericType_Params
	{
	public:
		ECommonNumericType                                         InNumericType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonNumericTextBlock.SetCurrentValue
	 */
	struct UCommonNumericTextBlock_SetCurrentValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	 */
	struct UCommonNumericTextBlock_OnOutro__DelegateSignature_Params
	{
	public:
		class UCommonNumericTextBlock*                             NumericTextBlock;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	 */
	struct UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Params
	{
	public:
		class UCommonNumericTextBlock*                             NumericTextBlock;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LastValue;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	 */
	struct UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Params
	{
	public:
		class UCommonNumericTextBlock*                             NumericTextBlock;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	 */
	struct UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params
	{
	public:
		class UCommonNumericTextBlock*                             NumericTextBlock;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HadCompleted;                                            // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	 */
	struct UCommonNumericTextBlock_IsInterpolatingNumericValue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonNumericTextBlock.InterpolateToValue
	 */
	struct UCommonNumericTextBlock_InterpolateToValue_Params
	{
	public:
		float                                                      TargetValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaximumInterpolationDuration;                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinimumChangeRate;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutroOffset;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonNumericTextBlock.GetTargetValue
	 */
	struct UCommonNumericTextBlock_GetTargetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
	 */
	struct UCommonPoolableWidgetInterface_OnReleaseToPool_Params
	{	};

	/**
	 * Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
	 */
	struct UCommonPoolableWidgetInterface_OnAcquireFromPool_Params
	{	};

	/**
	 * Function CommonUI.CommonRotator.ShiftTextRight
	 */
	struct UCommonRotator_ShiftTextRight_Params
	{	};

	/**
	 * Function CommonUI.CommonRotator.ShiftTextLeft
	 */
	struct UCommonRotator_ShiftTextLeft_Params
	{	};

	/**
	 * Function CommonUI.CommonRotator.SetSelectedItem
	 */
	struct UCommonRotator_SetSelectedItem_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonRotator.PopulateTextLabels
	 */
	struct UCommonRotator_PopulateTextLabels_Params
	{
	public:
		TArray<class FText>                                        Labels;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonRotator.GetSelectedText
	 */
	struct UCommonRotator_GetSelectedText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonRotator.GetSelectedIndex
	 */
	struct UCommonRotator_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonRotator.BP_OnOptionsPopulated
	 */
	struct UCommonRotator_BP_OnOptionsPopulated_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonRotator.BP_OnOptionSelected
	 */
	struct UCommonRotator_BP_OnOptionSelected_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
	 */
	struct UCommonTabListWidgetBase_SetTabVisibility_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlateVisibility                                           NewVisibility;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	 */
	struct UCommonTabListWidgetBase_SetTabInteractionEnabled_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
	 */
	struct UCommonTabListWidgetBase_SetTabEnabled_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
	 */
	struct UCommonTabListWidgetBase_SetListeningForInput_Params
	{
	public:
		bool                                                       bShouldListen;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	 */
	struct UCommonTabListWidgetBase_SetLinkedSwitcher_Params
	{
	public:
		class UCommonAnimatedSwitcher*                             CommonSwitcher;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.SelectTabByID
	 */
	struct UCommonTabListWidgetBase_SelectTabByID_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuppressClickFeedback;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.RemoveTab
	 */
	struct UCommonTabListWidgetBase_RemoveTab_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	 */
	struct UCommonTabListWidgetBase_RemoveAllTabs_Params
	{	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.RegisterTab
	 */
	struct UCommonTabListWidgetBase_RegisterTab_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ButtonWidgetType;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             ContentWidget;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	 */
	struct UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	 */
	struct UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCommonButtonBase*                                   TabButton;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	 */
	struct UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCommonButtonBase*                                   TabButton;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	 */
	struct UCommonTabListWidgetBase_HandleTabRemoval_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCommonButtonBase*                                   TabButton;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
	 */
	struct UCommonTabListWidgetBase_HandleTabCreation_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCommonButtonBase*                                   TabButton;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	 */
	struct UCommonTabListWidgetBase_HandleTabButtonSelected_Params
	{
	public:
		class UCommonButtonBase*                                   SelectedTabButton;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    buttonIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	 */
	struct UCommonTabListWidgetBase_HandlePreviousTabInputAction_Params
	{
	public:
		bool                                                       bPassThrough;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	 */
	struct UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Params
	{	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	 */
	struct UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Params
	{	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	 */
	struct UCommonTabListWidgetBase_HandleNextTabInputAction_Params
	{
	public:
		bool                                                       bPassThrough;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	 */
	struct UCommonTabListWidgetBase_GetTabIdAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.GetTabCount
	 */
	struct UCommonTabListWidgetBase_GetTabCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	 */
	struct UCommonTabListWidgetBase_GetTabButtonBaseByID_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCommonButtonBase*                                   ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	 */
	struct UCommonTabListWidgetBase_GetSelectedTabId_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	 */
	struct UCommonTabListWidgetBase_GetLinkedSwitcher_Params
	{
	public:
		class UCommonAnimatedSwitcher*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.GetActiveTab
	 */
	struct UCommonTabListWidgetBase_GetActiveTab_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	 */
	struct UCommonTabListWidgetBase_DisableTabWithReason_Params
	{
	public:
		class FName                                                TabNameID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Reason;                                                  // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTextStyle.GetStrikeBrush
	 */
	struct UCommonTextStyle_GetStrikeBrush_Params
	{
	public:
		struct FSlateBrush                                         OutStrikeBrush;                                          // 0x0000(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTextStyle.GetShadowOffset
	 */
	struct UCommonTextStyle_GetShadowOffset_Params
	{
	public:
		struct FVector2D                                           OutShadowOffset;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTextStyle.GetShadowColor
	 */
	struct UCommonTextStyle_GetShadowColor_Params
	{
	public:
		struct FLinearColor                                        OutColor;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTextStyle.GetMargin
	 */
	struct UCommonTextStyle_GetMargin_Params
	{
	public:
		struct FMargin                                             OutMargin;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTextStyle.GetLineHeightPercentage
	 */
	struct UCommonTextStyle_GetLineHeightPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTextStyle.GetFont
	 */
	struct UCommonTextStyle_GetFont_Params
	{
	public:
		struct FSlateFontInfo                                      OutFont;                                                 // 0x0000(0x0058)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonTextStyle.GetColor
	 */
	struct UCommonTextStyle_GetColor_Params
	{
	public:
		struct FLinearColor                                        OutColor;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonUILibrary.FindParentWidgetOfType
	 */
	struct UCommonUILibrary_FindParentWidgetOfType_Params
	{
	public:
		class UWidget*                                             StartingWidget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Type;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
	 */
	struct UCommonUISubsystemBase_GetInputActionButtonIcon_Params
	{
	public:
		struct FDataTableRowHandle                                 InputActionRowHandle;                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ECommonInputType                                           InputType;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U2DD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                GamepadName;                                             // 0x0014(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YXVI[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         ReturnValue;                                             // 0x0020(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	 */
	struct UCommonVisibilitySwitcher_SetActiveWidgetIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	 */
	struct UCommonVisibilitySwitcher_SetActiveWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	 */
	struct UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Params
	{
	public:
		bool                                                       bAllowWrapping;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	 */
	struct UCommonVisibilitySwitcher_GetActiveWidgetIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	 */
	struct UCommonVisibilitySwitcher_GetActiveWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	 */
	struct UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Params
	{
	public:
		bool                                                       bAllowWrapping;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	 */
	struct UCommonVisibilitySwitcher_DeactivateVisibleSlot_Params
	{	};

	/**
	 * Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	 */
	struct UCommonVisibilitySwitcher_ActivateVisibleSlot_Params
	{	};

	/**
	 * Function CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms
	 */
	struct UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	 */
	struct UCommonWidgetCarousel_SetActiveWidgetIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonWidgetCarousel.SetActiveWidget
	 */
	struct UCommonWidgetCarousel_SetActiveWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonWidgetCarousel.PreviousPage
	 */
	struct UCommonWidgetCarousel_PreviousPage_Params
	{	};

	/**
	 * Function CommonUI.CommonWidgetCarousel.NextPage
	 */
	struct UCommonWidgetCarousel_NextPage_Params
	{	};

	/**
	 * Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	 */
	struct UCommonWidgetCarousel_GetWidgetAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9KLO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	 */
	struct UCommonWidgetCarousel_GetActiveWidgetIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
	 */
	struct UCommonWidgetCarousel_EndAutoScrolling_Params
	{	};

	/**
	 * Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	 */
	struct UCommonWidgetCarousel_BeginAutoScrolling_Params
	{
	public:
		float                                                      ScrollInterval;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	 */
	struct UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params
	{
	public:
		class UCommonWidgetCarousel*                               CommonCarousel;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	 */
	struct UCommonWidgetCarouselNavBar_HandlePageChanged_Params
	{
	public:
		class UCommonWidgetCarousel*                               CommonCarousel;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PageIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	 */
	struct UCommonWidgetCarouselNavBar_HandleButtonClicked_Params
	{
	public:
		class UCommonButtonBase*                                   AssociatedButton;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    buttonIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
