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
	 * LuaFunction WBP_Loading_p.WBP_Loading_p_C.CallLuaCommonUIFunction
	 */
	struct UWBP_Loading_p_C_CallLuaCommonUIFunction_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction WBP_Loading_p.WBP_Loading_p_C.BP_OnHandleBackAction
	 */
	struct UWBP_Loading_p_C_BP_OnHandleBackAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction WBP_Loading_p.WBP_Loading_p_C.Tick
	 */
	struct UWBP_Loading_p_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WBP_Loading_p.WBP_Loading_p_C.Construct
	 */
	struct UWBP_Loading_p_C_Construct_Params
	{	};

	/**
	 * Function WBP_Loading_p.WBP_Loading_p_C.VisibilityChange
	 */
	struct UWBP_Loading_p_C_VisibilityChange_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Loading_p.WBP_Loading_p_C.ExecuteUbergraph_WBP_Loading_p
	 */
	struct UWBP_Loading_p_C_ExecuteUbergraph_WBP_Loading_p_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2NLZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
