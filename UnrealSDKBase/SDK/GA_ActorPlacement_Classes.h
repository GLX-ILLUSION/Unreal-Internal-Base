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
	 * BlueprintGeneratedClass GA_ActorPlacement.GA_ActorPlacement_C
	 * Size -> 0x0030 (FullSize[0x0440] - InheritedSize[0x0410])
	 */
	class UGA_ActorPlacement_C : public UGA_Base_C
	{
	public:
		class UClass*                                              GameplayAbilityTargetActor;                              // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Model;                                                   // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_WeaponAnimData                                  AnimData;                                                // 0x0420(0x0020) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LuaOnGiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpec& Spec);
		void OnTaskFinished(class UGameplayTask* GameplayTask);
		struct FGameplayEffectSpecHandle LuaGetCooldownGameplayEffect();
		void K2_OnEndAbility(bool bWasCancelled);
		void OnFindTaskDelegate(class UGameplayTask* GameplayTask, const class FString& DelegateName);
		void K2_ActivateAbility();
		struct FGameplayEffectSpecHandle LuaGetCostGameplayEffect();
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		class FString GetModuleName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
