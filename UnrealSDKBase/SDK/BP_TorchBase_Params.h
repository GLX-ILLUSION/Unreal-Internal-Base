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
	 * LuaFunction BP_TorchBase.BP_TorchBase_C.OnRep_bLit
	 */
	struct ABP_TorchBase_C_OnRep_bLit_Params
	{	};

	/**
	 * LuaFunction BP_TorchBase.BP_TorchBase_C.GetMenuName
	 */
	struct ABP_TorchBase_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_TorchBase.BP_TorchBase_C.GetInteractionFunctions
	 */
	struct ABP_TorchBase_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_TorchBase.BP_TorchBase_C.ReceiveBeginPlay
	 */
	struct ABP_TorchBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_TorchBase.BP_TorchBase_C.ReceiveEndPlay
	 */
	struct ABP_TorchBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_TorchBase.BP_TorchBase_C.GetModuleName
	 */
	struct ABP_TorchBase_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TorchBase.BP_TorchBase_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_TorchBase_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_TorchBase.BP_TorchBase_C.GetMenuName__Overridden
	 */
	struct ABP_TorchBase_C_GetMenuName__Overridden_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TorchBase.BP_TorchBase_C.Server Light Torch
	 */
	struct ABP_TorchBase_C_ServerLightTorch_Params
	{
	public:
		bool                                                       bLight;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TorchBase.BP_TorchBase_C.OnRep_bLit__Overridden
	 */
	struct ABP_TorchBase_C_OnRep_bLit__Overridden_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
