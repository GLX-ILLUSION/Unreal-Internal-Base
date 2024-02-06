#pragma once

/**
 * Name: GreedIsGood
 * Version: playtest
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
	 * LuaFunction GA_KnockedBack.GA_KnockedBack_C.LuaOnGiveAbility
	 */
	struct UGA_KnockedBack_C_LuaOnGiveAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0048)  (ConstParm, Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpec                                Spec;                                                    // 0x0048(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_KnockedBack.GA_KnockedBack_C.OnTaskFinished
	 */
	struct UGA_KnockedBack_C_OnTaskFinished_Params
	{
	public:
		class UGameplayTask*                                       GameplayTask;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_KnockedBack.GA_KnockedBack_C.LuaGetCooldownGameplayEffect
	 */
	struct UGA_KnockedBack_C_LuaGetCooldownGameplayEffect_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_KnockedBack.GA_KnockedBack_C.K2_OnEndAbility
	 */
	struct UGA_KnockedBack_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_KnockedBack.GA_KnockedBack_C.OnFindTaskDelegate
	 */
	struct UGA_KnockedBack_C_OnFindTaskDelegate_Params
	{
	public:
		class UGameplayTask*                                       GameplayTask;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DelegateName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_KnockedBack.GA_KnockedBack_C.K2_ActivateAbility
	 */
	struct UGA_KnockedBack_C_K2_ActivateAbility_Params
	{	};

	/**
	 * LuaFunction GA_KnockedBack.GA_KnockedBack_C.LuaGetCostGameplayEffect
	 */
	struct UGA_KnockedBack_C_LuaGetCostGameplayEffect_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_KnockedBack.GA_KnockedBack_C.K2_ActivateAbilityFromEvent
	 */
	struct UGA_KnockedBack_C_K2_ActivateAbilityFromEvent_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_KnockedBack.GA_KnockedBack_C.GetModuleName
	 */
	struct UGA_KnockedBack_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function GA_KnockedBack.GA_KnockedBack_C.K2_ActivateAbilityFromEvent__Overridden
	 */
	struct UGA_KnockedBack_C_K2_ActivateAbilityFromEvent__Overridden_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_KnockedBack.GA_KnockedBack_C.ExecuteUbergraph_GA_KnockedBack
	 */
	struct UGA_KnockedBack_C_ExecuteUbergraph_GA_KnockedBack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4S2J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
