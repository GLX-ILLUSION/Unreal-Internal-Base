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
	 * BlueprintGeneratedClass GA_KnockedBack.GA_KnockedBack_C
	 * Size -> 0x0008 (FullSize[0x0418] - InheritedSize[0x0410])
	 */
	class UGA_KnockedBack_C : public UGA_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient

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
		void K2_ActivateAbilityFromEvent__Overridden(const struct FGameplayEventData& EventData);
		void ExecuteUbergraph_GA_KnockedBack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
