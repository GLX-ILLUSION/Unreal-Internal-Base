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
	 * LuaFunction BP_OrganBase.BP_OrganBase_C.ReceiveBeginPlay
	 */
	struct ABP_OrganBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_OrganBase.BP_OrganBase_C.GetInteractionFunctions
	 */
	struct ABP_OrganBase_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_OrganBase.BP_OrganBase_C.Mult_OrganStatusChange
	 */
	struct ABP_OrganBase_C_Mult_OrganStatusChange_Params
	{
	public:
		unsigned char                                              Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_OrganBase.BP_OrganBase_C.OnRep_Status
	 */
	struct ABP_OrganBase_C_OnRep_Status_Params
	{	};

	/**
	 * LuaFunction BP_OrganBase.BP_OrganBase_C.ReceiveEndPlay
	 */
	struct ABP_OrganBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_OrganBase.BP_OrganBase_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_OrganBase_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_OrganBase.BP_OrganBase_C.GetMenuName
	 */
	struct ABP_OrganBase_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrganBase.BP_OrganBase_C.GetModuleName
	 */
	struct ABP_OrganBase_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrganBase.BP_OrganBase_C.OnRep_Status__Overridden
	 */
	struct ABP_OrganBase_C_OnRep_Status__Overridden_Params
	{	};

	/**
	 * Function BP_OrganBase.BP_OrganBase_C.Mult_OrganStatusChange__Overridden
	 */
	struct ABP_OrganBase_C_Mult_OrganStatusChange__Overridden_Params
	{
	public:
		unsigned char                                              Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OrganBase.BP_OrganBase_C.ExecuteUbergraph_BP_OrganBase
	 */
	struct ABP_OrganBase_C_ExecuteUbergraph_BP_OrganBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
