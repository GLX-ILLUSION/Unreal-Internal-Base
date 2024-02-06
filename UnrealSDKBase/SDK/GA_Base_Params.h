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
	 * LuaFunction GA_Base.GA_Base_C.LuaGetCooldownGameplayEffect
	 */
	struct UGA_Base_C_LuaGetCooldownGameplayEffect_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_Base.GA_Base_C.K2_ActivateAbility
	 */
	struct UGA_Base_C_K2_ActivateAbility_Params
	{	};

	/**
	 * LuaFunction GA_Base.GA_Base_C.K2_OnEndAbility
	 */
	struct UGA_Base_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_Base.GA_Base_C.OnFindTaskDelegate
	 */
	struct UGA_Base_C_OnFindTaskDelegate_Params
	{
	public:
		class UGameplayTask*                                       GameplayTask;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DelegateName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_Base.GA_Base_C.LuaGetCostGameplayEffect
	 */
	struct UGA_Base_C_LuaGetCostGameplayEffect_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_Base.GA_Base_C.OnTaskFinished
	 */
	struct UGA_Base_C_OnTaskFinished_Params
	{
	public:
		class UGameplayTask*                                       GameplayTask;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_Base.GA_Base_C.LuaOnGiveAbility
	 */
	struct UGA_Base_C_LuaOnGiveAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0048)  (ConstParm, Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpec                                Spec;                                                    // 0x0048(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction GA_Base.GA_Base_C.K2_ActivateAbilityFromEvent
	 */
	struct UGA_Base_C_K2_ActivateAbilityFromEvent_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GA_Base.GA_Base_C.GetModuleName
	 */
	struct UGA_Base_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
