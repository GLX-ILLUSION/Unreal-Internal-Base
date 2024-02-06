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
	 * Function UnLua.LuaDelegateHandler.Dummy
	 */
	struct ULuaDelegateHandler_Dummy_Params
	{	};

	/**
	 * Function UnLua.UnLuaFunctionLibrary.HotReload
	 */
	struct UUnLuaFunctionLibrary_HotReload_Params
	{	};

	/**
	 * Function UnLua.UnLuaFunctionLibrary.GetScriptRootPath
	 */
	struct UUnLuaFunctionLibrary_GetScriptRootPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaFunctionLibrary.GetFileLastModifiedTimestamp
	 */
	struct UUnLuaFunctionLibrary_GetFileLastModifiedTimestamp_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaInterface.GetModuleName
	 */
	struct UUnLuaInterface_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaLatentAction.SetTickableWhenPaused
	 */
	struct UUnLuaLatentAction_SetTickableWhenPaused_Params
	{
	public:
		bool                                                       bTickableWhenPaused;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaLatentAction.OnLegacyCallback
	 */
	struct UUnLuaLatentAction_OnLegacyCallback_Params
	{
	public:
		int32_t                                                    InLinkage;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaLatentAction.OnCompleted
	 */
	struct UUnLuaLatentAction_OnCompleted_Params
	{
	public:
		int32_t                                                    InLinkage;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaLatentAction.GetTickableWhenPaused
	 */
	struct UUnLuaLatentAction_GetTickableWhenPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.TriggerAnimNotify
	 */
	struct UUnLuaManager_TriggerAnimNotify_Params
	{	};

	/**
	 * Function UnLua.UnLuaManager.Override
	 */
	struct UUnLuaManager_Override_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                LuaFunctionName;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.OnLatentActionCompleted
	 */
	struct UUnLuaManager_OnLatentActionCompleted_Params
	{
	public:
		int32_t                                                    LinkID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.InputVectorAxis
	 */
	struct UUnLuaManager_InputVectorAxis_Params
	{
	public:
		struct FVector                                             AxisValue;                                               // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.InputTouch
	 */
	struct UUnLuaManager_InputTouch_Params
	{
	public:
		ETouchIndex                                                FingerIndex;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JUGP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.InputGesture
	 */
	struct UUnLuaManager_InputGesture_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.InputAxis
	 */
	struct UUnLuaManager_InputAxis_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.InputAction
	 */
	struct UUnLuaManager_InputAction_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UnLua.UnLuaManager.GetOrAddBindingObject
	 */
	struct UUnLuaManager_GetOrAddBindingObject_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              BindingClass;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDynamicBlueprintBinding*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
