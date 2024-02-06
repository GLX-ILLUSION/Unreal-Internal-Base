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
	 * LuaFunction BP_Destructible.BP_Destructible_C.ReceiveBeginPlay
	 */
	struct ABP_Destructible_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_Destructible.BP_Destructible_C.ReceiveTick
	 */
	struct ABP_Destructible_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Destructible.BP_Destructible_C.GetModuleName
	 */
	struct ABP_Destructible_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Destructible.BP_Destructible_C.LuaOnDestroy
	 */
	struct ABP_Destructible_C_LuaOnDestroy_Params
	{	};

	/**
	 * Function BP_Destructible.BP_Destructible_C.GetBreakDirection
	 */
	struct ABP_Destructible_C_GetBreakDirection_Params
	{
	public:
		bool                                                       Isforward;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GVAN[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Destructible.BP_Destructible_C.PlayBreakMontage
	 */
	struct ABP_Destructible_C_PlayBreakMontage_Params
	{	};

	/**
	 * Function BP_Destructible.BP_Destructible_C.OnRep_Hp
	 */
	struct ABP_Destructible_C_OnRep_Hp_Params
	{	};

	/**
	 * Function BP_Destructible.BP_Destructible_C.DestroySelf
	 */
	struct ABP_Destructible_C_DestroySelf_Params
	{	};

	/**
	 * Function BP_Destructible.BP_Destructible_C.ReduceHp
	 */
	struct ABP_Destructible_C_ReduceHp_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Destructible.BP_Destructible_C.SetAttackerPos
	 */
	struct ABP_Destructible_C_SetAttackerPos_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Destructible.BP_Destructible_C.ExecuteUbergraph_BP_Destructible
	 */
	struct ABP_Destructible_C_ExecuteUbergraph_BP_Destructible_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
