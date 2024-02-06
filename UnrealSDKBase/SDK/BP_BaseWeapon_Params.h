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
	 * LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.ReceiveBeginPlay
	 */
	struct ABP_BaseWeapon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.ReceiveEndPlay
	 */
	struct ABP_BaseWeapon_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_ExtraWeaponPart
	 */
	struct ABP_BaseWeapon_C_OnRep_ExtraWeaponPart_Params
	{	};

	/**
	 * LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bOnHand
	 */
	struct ABP_BaseWeapon_C_OnRep_bOnHand_Params
	{	};

	/**
	 * LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bDefense
	 */
	struct ABP_BaseWeapon_C_OnRep_bDefense_Params
	{	};

	/**
	 * LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.Mult_SetOnHandAndOnRep
	 */
	struct ABP_BaseWeapon_C_Mult_SetOnHandAndOnRep_Params
	{
	public:
		bool                                                       bOnHand;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_BulletNum
	 */
	struct ABP_BaseWeapon_C_OnRep_BulletNum_Params
	{	};

	/**
	 * Function BP_BaseWeapon.BP_BaseWeapon_C.GetModuleName
	 */
	struct ABP_BaseWeapon_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_ExtraWeaponPart__Overridden
	 */
	struct ABP_BaseWeapon_C_OnRep_ExtraWeaponPart__Overridden_Params
	{	};

	/**
	 * Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bDefense__Overridden
	 */
	struct ABP_BaseWeapon_C_OnRep_bDefense__Overridden_Params
	{	};

	/**
	 * Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_BulletNum__Overridden
	 */
	struct ABP_BaseWeapon_C_OnRep_BulletNum__Overridden_Params
	{	};

	/**
	 * Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bOnHand__Overridden
	 */
	struct ABP_BaseWeapon_C_OnRep_bOnHand__Overridden_Params
	{	};

	/**
	 * Function BP_BaseWeapon.BP_BaseWeapon_C.Mult_SetOnHandAndOnRep__Overridden
	 */
	struct ABP_BaseWeapon_C_Mult_SetOnHandAndOnRep__Overridden_Params
	{
	public:
		bool                                                       bOnHand;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseWeapon.BP_BaseWeapon_C.ExecuteUbergraph_BP_BaseWeapon
	 */
	struct ABP_BaseWeapon_C_ExecuteUbergraph_BP_BaseWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
