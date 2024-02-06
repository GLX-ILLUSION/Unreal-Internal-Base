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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GA_Base.GA_Base_C
	 * Size -> 0x0058 (FullSize[0x0410] - InheritedSize[0x03B8])
	 */
	class UGA_Base_C : public UCustomGameplayAbility
	{
	public:
		int32_t                                                    CfgId;                                                   // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QP12[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<E_WeaponSubType, struct FST_SkillMontageInfo>         WeaponType2AnimInfo;                                     // 0x03C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FGameplayEffectSpecHandle LuaGetCooldownGameplayEffect();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void OnFindTaskDelegate(class UGameplayTask* GameplayTask, const class FString& DelegateName);
		struct FGameplayEffectSpecHandle LuaGetCostGameplayEffect();
		void OnTaskFinished(class UGameplayTask* GameplayTask);
		void LuaOnGiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpec& Spec);
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		class FString GetModuleName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
