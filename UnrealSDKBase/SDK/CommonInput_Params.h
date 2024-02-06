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
	 * Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
	 */
	struct UCommonInputBaseControllerData_GetRegisteredGamepads_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonInput.CommonInputSettings.GetRegisteredPlatforms
	 */
	struct UCommonInputSettings_GetRegisteredPlatforms_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
	 */
	struct UCommonInputSubsystem_ShouldShowInputKeys_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonInput.CommonInputSubsystem.SetGamepadInputType
	 */
	struct UCommonInputSubsystem_SetGamepadInputType_Params
	{
	public:
		class FName                                                InGamepadInputType;                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonInput.CommonInputSubsystem.SetCurrentInputType
	 */
	struct UCommonInputSubsystem_SetCurrentInputType_Params
	{
	public:
		ECommonInputType                                           NewInputType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
	 */
	struct UCommonInputSubsystem_IsUsingPointerInput_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonInput.CommonInputSubsystem.IsInputMethodActive
	 */
	struct UCommonInputSubsystem_IsInputMethodActive_Params
	{
	public:
		ECommonInputType                                           InputMethod;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonInput.CommonInputSubsystem.GetDefaultInputType
	 */
	struct UCommonInputSubsystem_GetDefaultInputType_Params
	{
	public:
		ECommonInputType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonInput.CommonInputSubsystem.GetCurrentInputType
	 */
	struct UCommonInputSubsystem_GetCurrentInputType_Params
	{
	public:
		ECommonInputType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName
	 */
	struct UCommonInputSubsystem_GetCurrentGamepadName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
