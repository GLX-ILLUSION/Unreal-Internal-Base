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
	 * LuaFunction BP_TreasurepileBase.BP_TreasurepileBase_C.GetInteractionFunctions
	 */
	struct ABP_TreasurepileBase_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_TreasurepileBase.BP_TreasurepileBase_C.ReceiveBeginPlay
	 */
	struct ABP_TreasurepileBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_TreasurepileBase.BP_TreasurepileBase_C.OnRep_CanInteractiveNum
	 */
	struct ABP_TreasurepileBase_C_OnRep_CanInteractiveNum_Params
	{	};

	/**
	 * LuaFunction BP_TreasurepileBase.BP_TreasurepileBase_C.ReceiveEndPlay
	 */
	struct ABP_TreasurepileBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_TreasurepileBase.BP_TreasurepileBase_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_TreasurepileBase_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_TreasurepileBase.BP_TreasurepileBase_C.GetMenuName
	 */
	struct ABP_TreasurepileBase_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasurepileBase.BP_TreasurepileBase_C.GetModuleName
	 */
	struct ABP_TreasurepileBase_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TreasurepileBase.BP_TreasurepileBase_C.OnRep_CanInteractiveNum__Overridden
	 */
	struct ABP_TreasurepileBase_C_OnRep_CanInteractiveNum__Overridden_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
