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
	 * BlueprintGeneratedClass GA_EquipWeapon.GA_EquipWeapon_C
	 * Size -> 0x0000 (FullSize[0x0410] - InheritedSize[0x0410])
	 */
	class UGA_EquipWeapon_C : public UGA_Base_C
	{
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
