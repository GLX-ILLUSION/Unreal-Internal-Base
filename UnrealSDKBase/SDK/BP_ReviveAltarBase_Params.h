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
	 * LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_CanUse
	 */
	struct ABP_ReviveAltarBase_C_OnRep_CanUse_Params
	{	};

	/**
	 * LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetInteractionFunctions
	 */
	struct ABP_ReviveAltarBase_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.SetHeartInsId
	 */
	struct ABP_ReviveAltarBase_C_SetHeartInsId_Params
	{
	public:
		int32_t                                                    InstanceId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.ReceiveBeginPlay
	 */
	struct ABP_ReviveAltarBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_Using
	 */
	struct ABP_ReviveAltarBase_C_OnRep_Using_Params
	{	};

	/**
	 * LuaFunction BP_ReviveAltarBase.BP_ReviveAltarBase_C.ReceiveEndPlay
	 */
	struct ABP_ReviveAltarBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_ReviveAltarBase_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetMenuName
	 */
	struct ABP_ReviveAltarBase_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.GetModuleName
	 */
	struct ABP_ReviveAltarBase_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_Using__Overridden
	 */
	struct ABP_ReviveAltarBase_C_OnRep_Using__Overridden_Params
	{	};

	/**
	 * Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.SetHeartInsId__Overridden
	 */
	struct ABP_ReviveAltarBase_C_SetHeartInsId__Overridden_Params
	{
	public:
		int32_t                                                    InstanceId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveAltarBase.BP_ReviveAltarBase_C.OnRep_CanUse__Overridden
	 */
	struct ABP_ReviveAltarBase_C_OnRep_CanUse__Overridden_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
