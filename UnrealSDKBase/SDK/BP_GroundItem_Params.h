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
	 * LuaFunction BP_GroundItem.BP_GroundItem_C.Mult_Drop
	 */
	struct ABP_GroundItem_C_Mult_Drop_Params
	{	};

	/**
	 * LuaFunction BP_GroundItem.BP_GroundItem_C.ReceiveBeginPlay
	 */
	struct ABP_GroundItem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_GroundItem.BP_GroundItem_C.OnRep_bDrop
	 */
	struct ABP_GroundItem_C_OnRep_bDrop_Params
	{	};

	/**
	 * LuaFunction BP_GroundItem.BP_GroundItem_C.GetInteractionFunctions
	 */
	struct ABP_GroundItem_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_GroundItem.BP_GroundItem_C.ReceiveEndPlay
	 */
	struct ABP_GroundItem_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_GroundItem.BP_GroundItem_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_GroundItem_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_GroundItem.BP_GroundItem_C.GetMenuName
	 */
	struct ABP_GroundItem_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GroundItem.BP_GroundItem_C.GetModuleName
	 */
	struct ABP_GroundItem_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GroundItem.BP_GroundItem_C.OnRep_bDrop__Overridden
	 */
	struct ABP_GroundItem_C_OnRep_bDrop__Overridden_Params
	{	};

	/**
	 * Function BP_GroundItem.BP_GroundItem_C.OnRep_ItemData
	 */
	struct ABP_GroundItem_C_OnRep_ItemData_Params
	{	};

	/**
	 * Function BP_GroundItem.BP_GroundItem_C.OnRep_InstanceId
	 */
	struct ABP_GroundItem_C_OnRep_InstanceId_Params
	{	};

	/**
	 * Function BP_GroundItem.BP_GroundItem_C.Mult_Drop__Overridden
	 */
	struct ABP_GroundItem_C_Mult_Drop__Overridden_Params
	{	};

	/**
	 * Function BP_GroundItem.BP_GroundItem_C.ExecuteUbergraph_BP_GroundItem
	 */
	struct ABP_GroundItem_C_ExecuteUbergraph_BP_GroundItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
