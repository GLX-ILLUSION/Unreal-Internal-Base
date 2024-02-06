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
	 * LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.Mult_BeginPlay
	 */
	struct ABP_WarpGateBase_C_Mult_BeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.Mult_OpenWarpGate
	 */
	struct ABP_WarpGateBase_C_Mult_OpenWarpGate_Params
	{	};

	/**
	 * LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.OnOverlapWith
	 */
	struct ABP_WarpGateBase_C_OnOverlapWith_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.GetInteractionFunctions
	 */
	struct ABP_WarpGateBase_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.ReceiveBeginPlay
	 */
	struct ABP_WarpGateBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.Mult_Escape
	 */
	struct ABP_WarpGateBase_C_Mult_Escape_Params
	{	};

	/**
	 * LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.OnRep_IsOpen
	 */
	struct ABP_WarpGateBase_C_OnRep_IsOpen_Params
	{	};

	/**
	 * LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.ReceiveEndPlay
	 */
	struct ABP_WarpGateBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_WarpGateBase_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.GetMenuName
	 */
	struct ABP_WarpGateBase_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.GetModuleName
	 */
	struct ABP_WarpGateBase_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.OnOverlapWith__Overridden
	 */
	struct ABP_WarpGateBase_C_OnOverlapWith__Overridden_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.OnRep_IsOpen__Overridden
	 */
	struct ABP_WarpGateBase_C_OnRep_IsOpen__Overridden_Params
	{	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.BndEvt__BP_WarpGateBase_CheckBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_WarpGateBase_C_BndEvt__BP_WarpGateBase_CheckBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WP2E[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.Server_OpenWarpGate
	 */
	struct ABP_WarpGateBase_C_Server_OpenWarpGate_Params
	{	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.Mult_OpenWarpGate__Overridden
	 */
	struct ABP_WarpGateBase_C_Mult_OpenWarpGate__Overridden_Params
	{	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.Mult_Escape__Overridden
	 */
	struct ABP_WarpGateBase_C_Mult_Escape__Overridden_Params
	{	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.Mult_BeginPlay__Overridden
	 */
	struct ABP_WarpGateBase_C_Mult_BeginPlay__Overridden_Params
	{	};

	/**
	 * Function BP_WarpGateBase.BP_WarpGateBase_C.ExecuteUbergraph_BP_WarpGateBase
	 */
	struct ABP_WarpGateBase_C_ExecuteUbergraph_BP_WarpGateBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P24O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
