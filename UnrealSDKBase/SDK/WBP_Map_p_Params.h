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
	 * LuaFunction WBP_Map_p.WBP_Map_p_C.CallLuaCommonUIFunction
	 */
	struct UWBP_Map_p_C_CallLuaCommonUIFunction_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction WBP_Map_p.WBP_Map_p_C.BP_OnHandleBackAction
	 */
	struct UWBP_Map_p_C_BP_OnHandleBackAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction WBP_Map_p.WBP_Map_p_C.BP_GetDesiredFocusTarget
	 */
	struct UWBP_Map_p_C_BP_GetDesiredFocusTarget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WBP_Map_p.WBP_Map_p_C.Construct
	 */
	struct UWBP_Map_p_C_Construct_Params
	{	};

	/**
	 * Function WBP_Map_p.WBP_Map_p_C.VisibilityChange
	 */
	struct UWBP_Map_p_C_VisibilityChange_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Map_p.WBP_Map_p_C.ExecuteUbergraph_WBP_Map_p
	 */
	struct UWBP_Map_p_C_ExecuteUbergraph_WBP_Map_p_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TK4U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
