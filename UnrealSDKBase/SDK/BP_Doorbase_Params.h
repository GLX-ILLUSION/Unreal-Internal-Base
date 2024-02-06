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
	 * LuaFunction BP_Doorbase.BP_DoorBase_C.ReceiveTick
	 */
	struct ABP_DoorBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Doorbase.BP_DoorBase_C.DestroySelf
	 */
	struct ABP_DoorBase_C_DestroySelf_Params
	{	};

	/**
	 * LuaFunction BP_Doorbase.BP_DoorBase_C.ReceiveEndPlay
	 */
	struct ABP_DoorBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_Doorbase.BP_DoorBase_C.PlayBreakMontage
	 */
	struct ABP_DoorBase_C_PlayBreakMontage_Params
	{	};

	/**
	 * LuaFunction BP_Doorbase.BP_DoorBase_C.ReceiveBeginPlay
	 */
	struct ABP_DoorBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_Doorbase.BP_DoorBase_C.GetInteractionFunctions
	 */
	struct ABP_DoorBase_C_GetInteractionFunctions_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * LuaFunction BP_Doorbase.BP_DoorBase_C.Mult_OpenDoor
	 */
	struct ABP_DoorBase_C_Mult_OpenDoor_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * LuaFunction BP_Doorbase.BP_DoorBase_C.OnRep_Status
	 */
	struct ABP_DoorBase_C_OnRep_Status_Params
	{	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.GetInteractionFunctions__Overridden
	 */
	struct ABP_DoorBase_C_GetInteractionFunctions__Overridden_Params
	{
	public:
		TMap<int32_t, class FString>                               IdToFunc;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.GetMenuName
	 */
	struct ABP_DoorBase_C_GetMenuName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.GetMeshBreakDirection
	 */
	struct ABP_DoorBase_C_GetMeshBreakDirection_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Output_Get;                                              // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FD46[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.GetModuleName
	 */
	struct ABP_DoorBase_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.OnRep_Status__Overridden
	 */
	struct ABP_DoorBase_C_OnRep_Status__Overridden_Params
	{	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.OnRep_bOpen
	 */
	struct ABP_DoorBase_C_OnRep_bOpen_Params
	{	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.GetOpenDirection
	 */
	struct ABP_DoorBase_C_GetOpenDirection_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Output_Get;                                              // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_839L[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.ReceiveBeginPlay__Overridden
	 */
	struct ABP_DoorBase_C_ReceiveBeginPlay__Overridden_Params
	{	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.ReceiveTick__Overridden
	 */
	struct ABP_DoorBase_C_ReceiveTick__Overridden_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.Server_OpenDoor
	 */
	struct ABP_DoorBase_C_Server_OpenDoor_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.Mult_OpenDoor__Overridden
	 */
	struct ABP_DoorBase_C_Mult_OpenDoor__Overridden_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.Mult_PlayBreakMontage
	 */
	struct ABP_DoorBase_C_Mult_PlayBreakMontage_Params
	{
	public:
		bool                                                       isIn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Doorbase.BP_DoorBase_C.ExecuteUbergraph_BP_DoorBase
	 */
	struct ABP_DoorBase_C_ExecuteUbergraph_BP_DoorBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
