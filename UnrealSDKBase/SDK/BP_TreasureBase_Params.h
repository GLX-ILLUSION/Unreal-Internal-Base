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
	 * LuaFunction BP_TreasureBase.BP_TreasureBase_C.PlayBreakMontage
	 */
	struct ABP_TreasureBase_C_PlayBreakMontage_Params
	{	};

	/**
	 * LuaFunction BP_TreasureBase.BP_TreasureBase_C.ReceiveBeginPlay
	 */
	struct ABP_TreasureBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_TreasureBase.BP_TreasureBase_C.GetInteractionFunctions
	 */
	struct ABP_TreasureBase_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_TreasureBase.BP_TreasureBase_C.OnRep_Items
	 */
	struct ABP_TreasureBase_C_OnRep_Items_Params
	{	};

	/**
	 * LuaFunction BP_TreasureBase.BP_TreasureBase_C.LuaOnDestroy
	 */
	struct ABP_TreasureBase_C_LuaOnDestroy_Params
	{	};

	/**
	 * LuaFunction BP_TreasureBase.BP_TreasureBase_C.OnRep_Status
	 */
	struct ABP_TreasureBase_C_OnRep_Status_Params
	{	};

	/**
	 * LuaFunction BP_TreasureBase.BP_TreasureBase_C.ReceiveEndPlay
	 */
	struct ABP_TreasureBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_TreasureBase.BP_TreasureBase_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_TreasureBase_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_TreasureBase.BP_TreasureBase_C.GetMenuName
	 */
	struct ABP_TreasureBase_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBase.BP_TreasureBase_C.GetModuleName
	 */
	struct ABP_TreasureBase_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBase.BP_TreasureBase_C.OnRep_Status__Overridden
	 */
	struct ABP_TreasureBase_C_OnRep_Status__Overridden_Params
	{	};

	/**
	 * Function BP_TreasureBase.BP_TreasureBase_C.GetOpenDirection
	 */
	struct ABP_TreasureBase_C_GetOpenDirection_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Output_Get;                                              // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y1YN[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TreasureBase.BP_TreasureBase_C.ServerOpenTreasureBox
	 */
	struct ABP_TreasureBase_C_ServerOpenTreasureBox_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasureBase.BP_TreasureBase_C.OnRep_Items__Overridden
	 */
	struct ABP_TreasureBase_C_OnRep_Items__Overridden_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
