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
	 * LuaFunction BP_OliveTrap.BP_OliveTrap_C.ReceiveActorBeginOverlap
	 */
	struct ABP_OliveTrap_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_OliveTrap.BP_OliveTrap_C.GetInteractionFunctions
	 */
	struct ABP_OliveTrap_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_OliveTrap.BP_OliveTrap_C.ReceiveBeginPlay
	 */
	struct ABP_OliveTrap_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_OliveTrap.BP_OliveTrap_C.OnRep_bClose
	 */
	struct ABP_OliveTrap_C_OnRep_bClose_Params
	{	};

	/**
	 * LuaFunction BP_OliveTrap.BP_OliveTrap_C.ReceiveEndPlay
	 */
	struct ABP_OliveTrap_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_OliveTrap.BP_OliveTrap_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_OliveTrap_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_OliveTrap.BP_OliveTrap_C.GetMenuName
	 */
	struct ABP_OliveTrap_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OliveTrap.BP_OliveTrap_C.GetModuleName
	 */
	struct ABP_OliveTrap_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OliveTrap.BP_OliveTrap_C.OnRep_InteractiveActor
	 */
	struct ABP_OliveTrap_C_OnRep_InteractiveActor_Params
	{	};

	/**
	 * Function BP_OliveTrap.BP_OliveTrap_C.OnRep_bClose__Overridden
	 */
	struct ABP_OliveTrap_C_OnRep_bClose__Overridden_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
