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
	 * LuaFunction BP_altarBase.BP_altarBase_C.Mult_BuffDisappear
	 */
	struct ABP_altarBase_C_Mult_BuffDisappear_Params
	{	};

	/**
	 * LuaFunction BP_altarBase.BP_altarBase_C.OnRep_bCanGetBuff
	 */
	struct ABP_altarBase_C_OnRep_bCanGetBuff_Params
	{	};

	/**
	 * LuaFunction BP_altarBase.BP_altarBase_C.GetInteractionFunctions
	 */
	struct ABP_altarBase_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_altarBase.BP_altarBase_C.Mult_BuffAppear
	 */
	struct ABP_altarBase_C_Mult_BuffAppear_Params
	{	};

	/**
	 * LuaFunction BP_altarBase.BP_altarBase_C.ReceiveBeginPlay
	 */
	struct ABP_altarBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_altarBase.BP_altarBase_C.ReceiveEndPlay
	 */
	struct ABP_altarBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_altarBase.BP_altarBase_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_altarBase_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_altarBase.BP_altarBase_C.GetMenuName
	 */
	struct ABP_altarBase_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_altarBase.BP_altarBase_C.GetModuleName
	 */
	struct ABP_altarBase_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_altarBase.BP_altarBase_C.OnRep_bCanGetBuff__Overridden
	 */
	struct ABP_altarBase_C_OnRep_bCanGetBuff__Overridden_Params
	{	};

	/**
	 * Function BP_altarBase.BP_altarBase_C.Mult_BuffDisappear__Overridden
	 */
	struct ABP_altarBase_C_Mult_BuffDisappear__Overridden_Params
	{	};

	/**
	 * Function BP_altarBase.BP_altarBase_C.Mult_BuffAppear__Overridden
	 */
	struct ABP_altarBase_C_Mult_BuffAppear__Overridden_Params
	{	};

	/**
	 * Function BP_altarBase.BP_altarBase_C.ExecuteUbergraph_BP_altarBase
	 */
	struct ABP_altarBase_C_ExecuteUbergraph_BP_altarBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
