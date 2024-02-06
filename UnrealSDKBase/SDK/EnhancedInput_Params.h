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
	 * Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
	 */
	struct UEnhancedInputComponent_GetBoundActionValue_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
	 */
	struct UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params
	{
	public:
		class UInputMappingContext*                                Context;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceImmediately;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
	 */
	struct UEnhancedInputLibrary_MakeInputActionValue_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   MatchValueType;                                          // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ReturnValue;                                             // 0x001C(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
	 */
	struct UEnhancedInputLibrary_GetBoundActionValue_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
	 */
	struct UEnhancedInputLibrary_Conv_InputActionValueToBool_Params
	{
	public:
		struct FInputActionValue                                   InValue;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
	 */
	struct UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
	 */
	struct UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params
	{
	public:
		struct FInputActionValue                                   InValue;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
	 */
	struct UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params
	{
	public:
		struct FInputActionValue                                   InValue;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
	 */
	struct UEnhancedInputLibrary_BreakInputActionValue_Params
	{
	public:
		struct FInputActionValue                                   InActionValue;                                           // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
	 */
	struct UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params
	{
	public:
		bool                                                       bForceImmediately;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappedKey
	 */
	struct UEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceImmediately;                                       // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GL68[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
	 */
	struct UEnhancedInputSubsystemInterface_RemoveMappingContext_Params
	{
	public:
		class UInputMappingContext*                                MappingContext;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
	 */
	struct UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params
	{
	public:
		bool                                                       bForceImmediately;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
	 */
	struct UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params
	{
	public:
		TArray<class UInputMappingContext*>                        PrioritizedActiveContexts;                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UInputMappingContext*                                InputContext;                                            // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key;                                                     // 0x0020(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMappingQueryIssue>                          OutIssues;                                               // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EMappingQueryIssue                                         BlockingIssues;                                          // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMappingQueryResult                                        ReturnValue;                                             // 0x0049(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
	 */
	struct UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params
	{
	public:
		class UInputMappingContext*                                InputContext;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key;                                                     // 0x0010(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMappingQueryIssue>                          OutIssues;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EMappingQueryIssue                                         BlockingIssues;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMappingQueryResult                                        ReturnValue;                                             // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
	 */
	struct UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FKey>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
	 */
	struct UEnhancedInputSubsystemInterface_HasMappingContext_Params
	{
	public:
		class UInputMappingContext*                                MappingContext;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.GetPlayerMappedKey
	 */
	struct UEnhancedInputSubsystemInterface_GetPlayerMappedKey_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
	 */
	struct UEnhancedInputSubsystemInterface_ClearAllMappings_Params
	{	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappedKey
	 */
	struct UEnhancedInputSubsystemInterface_AddPlayerMappedKey_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                NewKey;                                                  // 0x0008(0x0018)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceImmediately;                                       // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WIR6[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
	 */
	struct UEnhancedInputSubsystemInterface_AddMappingContext_Params
	{
	public:
		class UInputMappingContext*                                MappingContext;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputMappingContext.UnmapKey
	 */
	struct UInputMappingContext_UnmapKey_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key;                                                     // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputMappingContext.UnmapAll
	 */
	struct UInputMappingContext_UnmapAll_Params
	{	};

	/**
	 * Function EnhancedInput.InputMappingContext.UnmapAction
	 */
	struct UInputMappingContext_UnmapAction_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputMappingContext.MapKey
	 */
	struct UInputMappingContext_MapKey_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                ToKey;                                                   // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEnhancedActionKeyMapping                           ReturnValue;                                             // 0x0020(0x0080)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputModifier.ModifyRaw
	 */
	struct UInputModifier_ModifyRaw_Params
	{
	public:
		class UEnhancedPlayerInput*                                PlayerInput;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   CurrentValue;                                            // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ReturnValue;                                             // 0x001C(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputModifier.GetVisualizationColor
	 */
	struct UInputModifier_GetVisualizationColor_Params
	{
	public:
		struct FInputActionValue                                   SampleValue;                                             // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   FinalValue;                                              // 0x0010(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputModifier.GetExecutionPhase
	 */
	struct UInputModifier_GetExecutionPhase_Params
	{
	public:
		EModifierExecutionPhase                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputTrigger.UpdateState
	 */
	struct UInputTrigger_UpdateState_Params
	{
	public:
		class UEnhancedPlayerInput*                                PlayerInput;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ModifiedValue;                                           // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETriggerState                                              ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputTrigger.IsActuated
	 */
	struct UInputTrigger_IsActuated_Params
	{
	public:
		struct FInputActionValue                                   ForValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputTrigger.GetTriggerType
	 */
	struct UInputTrigger_GetTriggerType_Params
	{
	public:
		ETriggerType                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
