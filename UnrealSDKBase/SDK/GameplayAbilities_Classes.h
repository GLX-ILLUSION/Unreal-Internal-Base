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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GameplayAbilities.AbilityTask
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UAbilityTask : public UGameplayTask
	{
	public:
		class UGameplayAbility*                                    Ability;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0070(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RD6[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AttributeSet
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAttributeSet : public UObject
	{
	public:
		unsigned char                                              UnknownData_YIUU[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemComponent
	 * Size -> 0x1258 (FullSize[0x1378] - InheritedSize[0x0120])
	 */
	class UAbilitySystemComponent : public UGameplayTasksComponent
	{
	public:
		unsigned char                                              UnknownData_LY20[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAttributeDefaults>                          DefaultStartingData;                                     // 0x0130(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UAttributeSet*>                               SpawnedAttributes;                                       // 0x0140(0x0010) ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                AffectedAnimInstanceTag;                                 // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESTG[0x198];                                 // 0x0158(0x0198) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutgoingDuration;                                        // 0x02F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IncomingDuration;                                        // 0x02F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UX3A[0x20];                                  // 0x02F8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ClientDebugStrings;                                      // 0x0318(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic
		TArray<class FString>                                      ServerDebugStrings;                                      // 0x0328(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSW9[0x58];                                  // 0x0338(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       UserAbilityActivationInhibited;                          // 0x0390(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReplicationProxyEnabled;                                 // 0x0391(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuppressGrantAbility;                                   // 0x0392(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuppressGameplayCues;                                   // 0x0393(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0JX[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGameplayAbilityTargetActor*>                 SpawnedTargetActors;                                     // 0x0398(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GZH[0x28];                                  // 0x03A8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OwnerActor;                                              // 0x03D0(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              AvatarActor;                                             // 0x03D8(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCQF[0x10];                                  // 0x03E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilitySpecContainer                       ActivatableAbilities;                                    // 0x03F0(0x0120) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EIDK[0x30];                                  // 0x0510(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameplayAbility*>                            AllReplicatedInstancedAbilities;                         // 0x0540(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3QCH[0x210];                                 // 0x0550(0x0210) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityRepAnimMontage                      RepAnimMontageInfo;                                      // 0x0760(0x0030) Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bCachedIsNetSimulated;                                   // 0x0790(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingMontageRep;                                      // 0x0791(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8NCZ[0x6];                                   // 0x0792(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityLocalAnimMontage                    LocalAnimMontageInfo;                                    // 0x0798(0x0028) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DRYG[0xA0];                                  // 0x07C0(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActiveGameplayEffectsContainer                     ActiveGameplayEffects;                                   // 0x0860(0x0478) Net, Protected, NativeAccessSpecifierProtected
		struct FActiveGameplayCueContainer                         ActiveGameplayCues;                                      // 0x0CD8(0x0128) Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FActiveGameplayCueContainer                         MinimalReplicationGameplayCues;                          // 0x0E00(0x0128) Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LXPG[0x128];                                 // 0x0F28(0x0128) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      BlockedAbilityBindings;                                  // 0x1050(0x0010) Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6XR9[0x128];                                 // 0x1060(0x0128) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinimalReplicationTagCountMap                      MinimalReplicationTags;                                  // 0x1188(0x0060) Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EGC2[0x10];                                  // 0x11E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinimalReplicationTagCountMap                      ReplicatedLooseTags;                                     // 0x11F8(0x0060) Net, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4ODF[0x8];                                   // 0x1258(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReplicatedPredictionKeyMap                         ReplicatedPredictionKeyMap;                              // 0x1260(0x0118) Net, NativeAccessSpecifierPublic

	public:
		bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
		bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
		void TargetConfirm();
		void TargetCancel();
		void SetUserAbilityActivationInhibited(bool NewInhibit);
		void SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int32_t NewLevel);
		void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int32_t NewLevel);
		void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
		void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
		void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
		void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
		void ServerSetReplicatedEventWithPayload(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);
		void ServerSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
		void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
		void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
		void ServerPrintDebug_RequestWithStrings(TArray<class FString> Strings);
		void ServerPrintDebug_Request();
		void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
		void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
		void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const class FName& SectionName, const class FName& NextSectionName);
		void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const class FName& SectionName);
		void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
		void ServerAbilityRPCBatch(const struct FGameplayAbilities_FServerAbilityRPCBatch& BatchInfo);
		void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove);
		bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int32_t StacksToRemove);
		int32_t RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
		int32_t RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);
		int32_t RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);
		int32_t RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);
		void OnRep_ServerDebugString();
		void OnRep_ReplicatedAnimMontage();
		void OnRep_OwningActor();
		void OnRep_ClientDebugString();
		void OnRep_ActivateAbilities();
		void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
		void NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
		void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
		void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
		void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
		void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
		void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
		void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
		void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters);
		void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
		struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
		struct FGameplayEffectContextHandle MakeEffectContext();
		void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
		bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
		bool GetUserAbilityActivationInhibited();
		float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
		int32_t GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
		TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(const struct FGameplayTagContainer& Tags);
		TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(const struct FGameplayEffectQuery& Query);
		void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
		void ClientSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
		void ClientPrintDebug_Response(TArray<class FString> Strings, int32_t GameFlags);
		void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
		void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
		void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
		void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
		void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(const struct FGameplayEffectSpecHandle& SpecHandle);
		void AbilityConfirmOrCancel__DelegateSignature();
		void AbilityAbilityKey__DelegateSignature(int32_t InputID);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemGlobals
	 * Size -> 0x0238 (FullSize[0x0260] - InheritedSize[0x0028])
	 */
	class UAbilitySystemGlobals : public UObject
	{
	public:
		struct FSoftClassPath                                      AbilitySystemGlobalsClassName;                           // 0x0028(0x0018) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OI18[0x28];                                  // 0x0040(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ActivateFailIsDeadTag;                                   // 0x0068(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActivateFailIsDeadName;                                  // 0x0070(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActivateFailCooldownTag;                                 // 0x0078(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActivateFailCooldownName;                                // 0x0080(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActivateFailCostTag;                                     // 0x0088(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActivateFailCostName;                                    // 0x0090(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActivateFailTagsBlockedTag;                              // 0x0098(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActivateFailTagsBlockedName;                             // 0x00A0(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActivateFailTagsMissingTag;                              // 0x00A8(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActivateFailTagsMissingName;                             // 0x00B0(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActivateFailNetworkingTag;                               // 0x00B8(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActivateFailNetworkingName;                              // 0x00C0(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimalReplicationTagCountBits;                          // 0x00C8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQQ0[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNetSerializeScriptStructCache                      TargetDataStructCache;                                   // 0x00D0(0x0010) NativeAccessSpecifierPublic
		bool                                                       bAllowGameplayModEvaluationChannels;                     // 0x00E0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGameplayModEvaluationChannel                              DefaultGameplayModEvaluationChannel;                     // 0x00E1(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MY93[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GameplayModEvaluationChannelAliases[0xA];                // 0x00E4(0x0050) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YSJX[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     GlobalCurveTableName;                                    // 0x0138(0x0018) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveTable*                                         GlobalCurveTable;                                        // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     GlobalAttributeMetaDataTableName;                        // 0x0158(0x0018) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDataTable*                                          GlobalAttributeMetaDataTable;                            // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     GlobalAttributeSetDefaultsTableName;                     // 0x0178(0x0018) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FSoftObjectPath>                             GlobalAttributeSetDefaultsTableNames;                    // 0x0190(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<class UCurveTable*>                                 GlobalAttributeDefaultsTables;                           // 0x01A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     GlobalGameplayCueManagerClass;                           // 0x01B0(0x0018) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     GlobalGameplayCueManagerName;                            // 0x01C8(0x0018) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FString>                                      GameplayCueNotifyPaths;                                  // 0x01E0(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		struct FSoftObjectPath                                     GameplayTagResponseTableName;                            // 0x01F0(0x0018) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayTagReponseTable*                            GameplayTagResponseTable;                                // 0x0208(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       PredictTargetGameplayEffects;                            // 0x0210(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9YPQ[0x7];                                   // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayCueManager*                                 GlobalGameplayCueManager;                                // 0x0218(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M15I[0x40];                                  // 0x0220(0x0040) MISSED OFFSET (PADDING)

	public:
		void ToggleIgnoreAbilitySystemCosts();
		void ToggleIgnoreAbilitySystemCooldowns();
		void ServerEndPlayerAbility(const class FString& AbilityNameMatch);
		void ServerCancelPlayerAbility(const class FString& AbilityNameMatch);
		void ServerActivatePlayerAbility(const class FString& AbilityNameMatch);
		void ListPlayerAbilities();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectCalculation
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGameplayEffectCalculation : public UObject
	{
	public:
		TArray<struct FGameplayEffectAttributeCaptureDefinition>   RelevantAttributesToCapture;                             // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayModMagnitudeCalculation
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
	{
	public:
		bool                                                       bAllowNonNetAuthorityDependencyRegistration;             // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_98O4[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbility
	 * Size -> 0x0388 (FullSize[0x03B0] - InheritedSize[0x0028])
	 */
	class UGameplayAbility : public UObject
	{
	public:
		unsigned char                                              UnknownData_3FFA[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               AbilityTags;                                             // 0x00A8(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bReplicateInputDirectly;                                 // 0x00C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoteInstanceEnded;                                     // 0x00C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZL5[0x4];                                   // 0x00CA(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameplayAbilityReplicationPolicy                          ReplicationPolicy;                                       // 0x00CE(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGameplayAbilityInstancingPolicy                           InstancingPolicy;                                        // 0x00CF(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bServerRespectsRemoteAbilityCancellation;                // 0x00D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRetriggerInstancedAbility;                              // 0x00D1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DZUC[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityActivationInfo                      CurrentActivationInfo;                                   // 0x00D8(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGameplayEventData                                  CurrentEventData;                                        // 0x00F0(0x00B0) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		EGameplayAbilityNetExecutionPolicy                         NetExecutionPolicy;                                      // 0x01A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGameplayAbilityNetSecurityPolicy                          NetSecurityPolicy;                                       // 0x01A1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TD8A[0x6];                                   // 0x01A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CostGameplayEffectClass;                                 // 0x01A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAbilityTriggerData>                         AbilityTriggers;                                         // 0x01B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UClass*                                              CooldownGameplayEffectClass;                             // 0x01C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               CancelAbilitiesWithTag;                                  // 0x01C8(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               BlockAbilitiesWithTag;                                   // 0x01E8(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               ActivationOwnedTags;                                     // 0x0208(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               ActivationRequiredTags;                                  // 0x0228(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               ActivationBlockedTags;                                   // 0x0248(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               SourceRequiredTags;                                      // 0x0268(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               SourceBlockedTags;                                       // 0x0288(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               TargetRequiredTags;                                      // 0x02A8(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               TargetBlockedTags;                                       // 0x02C8(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MCC0[0x20];                                  // 0x02E8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameplayTask*>                               ActiveTasks;                                             // 0x0308(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IION[0x10];                                  // 0x0318(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CurrentMontage;                                          // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9JMN[0x60];                                  // 0x0330(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsActive;                                               // 0x0390(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAbilityEnding;                                        // 0x0391(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsCancelable;                                           // 0x0392(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsBlockingOtherAbilities;                               // 0x0393(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I7SW[0x14];                                  // 0x0394(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bMarkPendingKillOnAbilityEnd;                            // 0x03A8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TOV1[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
		void SetCanBeCanceled(bool bCanBeCanceled);
		void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
		void RemoveGrantedByEffect();
		void MontageStop(float OverrideBlendOutTime);
		void MontageSetNextSectionName(const class FName& FromSectionName, const class FName& ToSectionName);
		void MontageJumpToSection(const class FName& SectionName);
		struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const class FName& SocketName);
		struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
		struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
		bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
		void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag, int32_t ID);
		void K2_OnEndAbility(bool bWasCancelled);
		bool K2_HasAuthority();
		void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
		void K2_EndAbility();
		void K2_CommitExecute();
		bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
		bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
		bool K2_CommitAbility();
		bool K2_CheckAbilityCost();
		bool K2_CheckAbilityCooldown();
		bool K2_CanClientEndAbility();
		void K2_CancelAbility();
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);
		TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
		struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
		void K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
		void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void K2_ActivateAbility();
		bool IsLocallyControlled();
		void InvalidateClientPredictionKey();
		class UObject* GetSourceObject_BP(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo);
		class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
		class AActor* GetOwningActorFromActorInfo();
		struct FGameplayEffectContextHandle GetGrantedByEffectContext();
		class UObject* GetCurrentSourceObject();
		class UAnimMontage* GetCurrentMontage();
		float GetCooldownTimeRemaining();
		struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
		class AActor* GetAvatarActorFromActorInfo();
		struct FGameplayAbilityActorInfo GetActorInfo();
		class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();
		int32_t GetAbilityLevel_BP(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo);
		int32_t GetAbilityLevel();
		void EndTaskByInstanceName(const class FName& InstanceName);
		void EndAbilityState(const class FName& OptionalStateNameToEnd);
		void ConfirmTaskByInstanceName(const class FName& InstanceName, bool bEndTask);
		void CancelTaskByInstanceName(const class FName& InstanceName);
		void BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int32_t StacksToRemove);
		void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int32_t StacksToRemove);
		void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int32_t StacksToRemove);
		TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueManager
	 * Size -> 0x02E0 (FullSize[0x0310] - InheritedSize[0x0030])
	 */
	class UGameplayCueManager : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_WDHY[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayCueObjectLibrary                           RuntimeGameplayCueObjectLibrary;                         // 0x0048(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		struct FGameplayCueObjectLibrary                           EditorGameplayCueObjectLibrary;                          // 0x0098(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R1Y0[0x1C8];                                 // 0x00E8(0x01C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      LoadedGameplayCueNotifyClasses;                          // 0x02B0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      GameplayCueClassesForPreallocation;                      // 0x02C0(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<struct FGameplayCuePendingExecute>                  PendingExecuteCues;                                      // 0x02D0(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		int32_t                                                    GameplayCueSendContextCount;                             // 0x02E0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N8IZ[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPreallocationInfo>                          PreallocationInfoList_Internal;                          // 0x02E8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X4FG[0x18];                                  // 0x02F8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueNotify_Actor
	 * Size -> 0x0060 (FullSize[0x0288] - InheritedSize[0x0228])
	 */
	class AGameplayCueNotify_Actor : public AActor
	{
	public:
		bool                                                       bAutoDestroyOnRemove;                                    // 0x0228(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYB9[0x3];                                   // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoDestroyDelay;                                        // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WarnIfTimelineIsStillRunning;                            // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WarnIfLatentActionIsStillRunning;                        // 0x0231(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPKO[0x2];                                   // 0x0232(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0234(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GameplayCueName;                                         // 0x023C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAttachToOwner;                                      // 0x0244(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOverride;                                              // 0x0245(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUniqueInstancePerInstigator;                            // 0x0246(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUniqueInstancePerSourceObject;                          // 0x0247(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMultipleOnActiveEvents;                            // 0x0248(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMultipleWhileActiveEvents;                         // 0x0249(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8K28[0x2];                                   // 0x024A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumPreallocatedInstances;                                // 0x024C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BXB[0x38];                                  // 0x0250(0x0038) MISSED OFFSET (PADDING)

	public:
		bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		void OnOwnerDestroyed(class AActor* DestroyedActor);
		bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void K2_EndGameplayCue();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueNotify_Static
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGameplayCueNotify_Static : public UObject
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0028(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GameplayCueName;                                         // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOverride;                                              // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWXZ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityAsync
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAbilityAsync : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_2Z5X[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		void EndAction();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
	 * Size -> 0x00C0 (FullSize[0x00F8] - InheritedSize[0x0038])
	 */
	class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
	{
	public:
		class FScriptMulticastDelegate                             OnApplied;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6566[0xB0];                                  // 0x0048(0x00B0) MISSED OFFSET (PADDING)

	public:
		class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor* TargetActor, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect);
		void OnAppliedDelegate__DelegateSignature(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
	{
	public:
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEDT[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, const struct FGameplayTag& EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);
		void EventReceivedDelegate__DelegateSignature(const struct FGameplayEventData& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityAsync_WaitGameplayTag
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
	{
	public:
		unsigned char                                              UnknownData_MKXP[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
	{
	public:
		class FScriptMulticastDelegate                             Added;                                                   // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
	{
	public:
		class FScriptMulticastDelegate                             Removed;                                                 // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		bool TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);
		bool TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		bool TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		struct FGameplayEffectSpecHandle SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
		struct FGameplayEffectSpecHandle SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int32_t StackCount);
		struct FGameplayEffectSpecHandle SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
		void SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
		bool NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
		struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
		struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayTag& MatchedTagName, const struct FGameplayTag& OriginalTag, const struct FGameplayTagContainer& AggregatedSourceTags, const struct FGameplayTagContainer& AggregatedTargetTags, const struct FVector& Location, const struct FVector& Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy);
		struct FGameplayTargetDataFilterHandle MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
		bool IsValid(const struct FGameplayAttribute& Attribute);
		bool IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
		bool IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
		bool HasHitResult(const struct FGameplayCueParameters& Parameters);
		struct FTransform GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		struct FTransform GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		struct FVector GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		struct FVector GetOrigin(const struct FGameplayCueParameters& Parameters);
		float GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);
		struct FTransform GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
		class AActor* GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
		struct FHitResult GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);
		struct FHitResult GetHitResult(const struct FGameplayCueParameters& Parameters);
		bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
		bool GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
		float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
		float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
		float GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
		float GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
		struct FGameplayEffectContextHandle GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
		int32_t GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
		TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle);
		TArray<class AActor*> GetAllActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
		TArray<class AActor*> GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		int32_t GetActorCount(const struct FGameplayCueParameters& Parameters);
		class AActor* GetActorByIndex(const struct FGameplayCueParameters& Parameters, int32_t Index);
		float GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle);
		float GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
		int32_t GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
		int32_t GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
		float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle);
		float GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
		class FString GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
		class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
		void ForwardGameplayCueToTarget(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		struct FGameplayAbilityTargetDataHandle FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
		float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess);
		float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess);
		bool EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
		void EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);
		bool EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);
		bool EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
		bool EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
		class UObject* EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
		class AActor* EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
		struct FVector EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
		class AActor* EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
		struct FHitResult EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
		class AActor* EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
		void EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);
		bool DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, class AActor* Actor);
		bool DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, const struct FGameplayTagRequirements& SourceTagReqs, const struct FGameplayTagRequirements& TargetTagReqs);
		struct FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone);
		void BreakGameplayCueParameters(const struct FGameplayCueParameters& Parameters, float* NormalizedMagnitude, float* RawMagnitude, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTag* MatchedTagName, struct FGameplayTag* OriginalTag, struct FGameplayTagContainer* AggregatedSourceTags, struct FGameplayTagContainer* AggregatedTargetTags, struct FVector* Location, struct FVector* Normal, class AActor** Instigator, class AActor** EffectCauser, class UObject** SourceObject, class UPhysicalMaterial** PhysicalMaterial, int32_t* GameplayEffectLevel, int32_t* AbilityLevel, class USceneComponent** TargetAttachComponent, bool* bReplicateLocationWhenUsingMinimalRepProxy);
		struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude);
		struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const class FName& DataName, float Magnitude);
		struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);
		struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
		struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, class UClass* LinkedGameplayEffect);
		struct FGameplayEffectSpecHandle AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
		struct FGameplayEffectSpecHandle AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
		struct FGameplayEffectSpecHandle AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
		struct FGameplayEffectSpecHandle AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
		struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
		struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
		struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
		struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemDebugHUD
	 * Size -> 0x0000 (FullSize[0x0318] - InheritedSize[0x0318])
	 */
	class AAbilitySystemDebugHUD : public AHUD
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAbilitySystemInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemReplicationProxyInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAbilitySystemReplicationProxyInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemTestAttributeSet
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UAbilitySystemTestAttributeSet : public UAttributeSet
	{
	public:
		float                                                      MaxHealth;                                               // 0x0030(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0034(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mana;                                                    // 0x0038(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMana;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpellDamage;                                             // 0x0044(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicalDamage;                                          // 0x0048(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CritChance;                                              // 0x004C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CritMultiplier;                                          // 0x0050(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmorDamageReduction;                                    // 0x0054(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DodgeChance;                                             // 0x0058(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeSteal;                                               // 0x005C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StackingAttribute1;                                      // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StackingAttribute2;                                      // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoStackAttribute;                                        // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemTestPawn
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class AAbilitySystemTestPawn : public ADefaultPawn
	{
	public:
		unsigned char                                              UnknownData_OC4R[0x18];                                  // 0x02B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x02C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
	{
	public:
		class FName                                                ForceName;                                               // 0x0080(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ERootMotionFinishVelocityMode                              FinishVelocityMode;                                      // 0x0088(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2UJG[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FinishSetVelocity;                                       // 0x008C(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FinishClampVelocity;                                     // 0x0098(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2MFQ[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         MovementComponent;                                       // 0x00A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WXH1[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVector                                             WorldDirection;                                          // 0x00C8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Strength;                                                // 0x00D4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x00D8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAdditive;                                             // 0x00DC(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PCUR[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         StrengthOverTime;                                        // 0x00E0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableGravity;                                          // 0x00E8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DYW6[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLanded;                                                // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x00D8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      Distance;                                                // 0x00E4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Height;                                                  // 0x00E8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x00EC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinimumLandedTriggerTime;                                // 0x00F0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFinishOnLanded;                                         // 0x00F4(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4K05[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00F8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x0100(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YBYP[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnLandedCallback(const struct FHitResult& Hit);
		void Finish();
		class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
	 * Size -> 0x0078 (FullSize[0x0130] - InheritedSize[0x00B8])
	 */
	class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
	{
	public:
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PW2M[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartLocation;                                           // 0x00D0(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             TargetLocation;                                          // 0x00DC(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              TargetActor;                                             // 0x00E8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             TargetLocationOffset;                                    // 0x00F0(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ERootMotionMoveToActorTargetOffsetType                     OffsetAlignment;                                         // 0x00FC(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A8KW[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0100(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisableDestinationReachedInterrupt;                     // 0x0104(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSetNewMovementMode;                                     // 0x0105(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMovementMode                                              NewMovementMode;                                         // 0x0106(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictSpeedToExpected;                                // 0x0107(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x0108(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x0110(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TargetLerpSpeedHorizontalCurve;                          // 0x0118(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TargetLerpSpeedVerticalCurve;                            // 0x0120(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IGIZ[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
		void OnRep_TargetLocation();
		class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
		class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
	{
	public:
		class FScriptMulticastDelegate                             OnTimedOut;                                              // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimedOutAndDestinationReached;                         // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVector                                             StartLocation;                                           // 0x00D8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             TargetLocation;                                          // 0x00E4(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x00F0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSetNewMovementMode;                                     // 0x00F4(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMovementMode                                              NewMovementMode;                                         // 0x00F5(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictSpeedToExpected;                                // 0x00F6(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZBYL[0x1];                                   // 0x00F7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00F8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0V5D[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x00C8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IHNS[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LocationActor;                                           // 0x00D8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Strength;                                                // 0x00E0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x00E4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Radius;                                                  // 0x00E8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsPush;                                                 // 0x00EC(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAdditive;                                             // 0x00ED(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNoZForce;                                               // 0x00EE(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PU27[0x1];                                   // 0x00EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         StrengthDistanceFalloff;                                 // 0x00F0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         StrengthOverTime;                                        // 0x00F8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseFixedWorldDirection;                                 // 0x0100(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9LQ1[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            FixedWorldDirection;                                     // 0x0104(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_MoveToLocation
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_MoveToLocation : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnTargetLocationReached;                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5TFA[0x4];                                   // 0x0090(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartLocation;                                           // 0x0094(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             TargetLocation;                                          // 0x00A0(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DurationOfMovement;                                      // 0x00AC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L7SF[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         LerpCurve;                                               // 0x00B8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveVector*                                        LerpCurveVector;                                         // 0x00C0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_NetworkSyncPoint
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UAbilityTask_NetworkSyncPoint : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnSync;                                                  // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFOA[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);
		void OnSignalCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_PlayMontageAndWait
	 * Size -> 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
	 */
	class UAbilityTask_PlayMontageAndWait : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04A3[0x28];                                  // 0x00C0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Rate;                                                    // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                StartSection;                                            // 0x00F4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnimRootMotionTranslationScale;                          // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartTimeSeconds;                                        // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0104(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XVTK[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (PADDING)

	public:
		void OnMontageInterrupted();
		void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
		class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_Repeat
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_Repeat : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnPerformAction;                                         // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0E1E[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_SpawnActor
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_SpawnActor : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             Success;                                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DidNotSpawn;                                             // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72FH[0x28];                                  // 0x00A0(0x0028) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);
		void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
		bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_StartAbilityState
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_StartAbilityState : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnStateEnded;                                            // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStateInterrupted;                                      // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HABD[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, const class FName& StateName, bool bEndCurrentState);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_VisualizeTargeting
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_VisualizeTargeting : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             TimeElapsed;                                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Z1N[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, const class FName& TaskInstanceName, float Duration);
		class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, const class FName& TaskInstanceName, float Duration);
		void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
		bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitAbilityActivate
	 * Size -> 0x00B8 (FullSize[0x0138] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitAbilityActivate : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnActivate;                                              // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EIPA[0xA8];                                  // 0x0090(0x00A8) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
		class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
		class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
		void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitAbilityCommit
	 * Size -> 0x0078 (FullSize[0x00F8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitAbilityCommit : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCommit;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDZ8[0x68];                                  // 0x0090(0x0068) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce);
		class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
		void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitAttributeChange
	 * Size -> 0x0078 (FullSize[0x00F8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitAttributeChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M80E[0x60];                                  // 0x0090(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             ExternalOwner;                                           // 0x00F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner);
		class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
	 * Size -> 0x00C0 (FullSize[0x0140] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AY6N[0xA8];                                  // 0x0090(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             ExternalOwner;                                           // 0x0138(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
	 * Size -> 0x0070 (FullSize[0x00F0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCSE[0x58];                                  // 0x0090(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             ExternalOwner;                                           // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitCancel
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitCancel : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TPAW[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);
		void OnLocalCancelCallback();
		void OnCancelCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitConfirm
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitConfirm : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnConfirm;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBWS[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);
		void OnConfirmCallback(class UGameplayAbility* InAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitConfirmCancel
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitConfirmCancel : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnConfirm;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GPY[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);
		void OnLocalConfirmCallback();
		void OnLocalCancelCallback();
		void OnConfirmCallback();
		void OnCancelCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitDelay
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitDelay : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KY1[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
	 * Size -> 0x0138 (FullSize[0x01B8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_78OM[0x128];                                 // 0x0080(0x0128) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             ExternalOwner;                                           // 0x01A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O3TD[0x8];                                   // 0x01B0(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
	 * Size -> 0x0020 (FullSize[0x01D8] - InheritedSize[0x01B8])
	 */
	class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
	{
	public:
		class FScriptMulticastDelegate                             OnApplied;                                               // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6B0[0x10];                                  // 0x01C8(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
		class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
	 * Size -> 0x0020 (FullSize[0x01D8] - InheritedSize[0x01B8])
	 */
	class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
	{
	public:
		class FScriptMulticastDelegate                             OnApplied;                                               // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IREB[0x10];                                  // 0x01C8(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
		class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
	 * Size -> 0x00A8 (FullSize[0x0128] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             bLocked;                                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCNC[0x88];                                  // 0x0090(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             ExternalOwner;                                           // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HSMR[0x8];                                   // 0x0120(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnRemoved;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             InvalidHandle;                                           // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RO6Q[0x20];                                  // 0x00A0(0x0020) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
		void OnGameplayEffectRemoved(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             InvalidHandle;                                           // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FN03[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
		void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int32_t NewCount, int32_t OldCount);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEvent
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayEvent : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JN24[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             OptionalExternalTarget;                                  // 0x0098(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXY6[0x10];                                  // 0x00A0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayTag
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayTag : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_E9FQ[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             OptionalExternalTarget;                                  // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_94AE[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (PADDING)

	public:
		void GameplayTagCallback(const struct FGameplayTag& Tag, int32_t NewCount);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
	{
	public:
		class FScriptMulticastDelegate                             Added;                                                   // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
	{
	public:
		class FScriptMulticastDelegate                             Removed;                                                 // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitInputPress
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitInputPress : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnPress;                                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V57K[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
		void OnPressCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitInputRelease
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitInputRelease : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnRelease;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTV8[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
		void OnReleaseCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitMovementModeChange
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitMovementModeChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPN1[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnMovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, EMovementMode NewMode);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitOverlap
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitOverlap : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnOverlap;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
		void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitTargetData
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitTargetData : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             ValidData;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Cancelled;                                               // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              TargetClass;                                             // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BIIN[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
		class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class UClass* Class);
		void OnTargetDataReplicatedCancelledCallback();
		void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
		void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
		void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
		void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
		bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitVelocityChange
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitVelocityChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnVelocityChage;                                         // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UMovementComponent*                                  CachedMovementComponent;                                 // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PKFH[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbility_CharacterJump
	 * Size -> 0x0000 (FullSize[0x03B0] - InheritedSize[0x03B0])
	 */
	class UGameplayAbility_CharacterJump : public UGameplayAbility
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbility_Montage
	 * Size -> 0x0038 (FullSize[0x03E8] - InheritedSize[0x03B0])
	 */
	class UGameplayAbility_Montage : public UGameplayAbility
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x03B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x03B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SectionName;                                             // 0x03BC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01MT[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      GameplayEffectClassesWhileAnimating;                     // 0x03C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UGameplayEffect*>                             GameplayEffectsWhileAnimating;                           // 0x03D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityBlueprint
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UGameplayAbilityBlueprint : public UBlueprint
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilitySet
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGameplayAbilitySet : public UDataAsset
	{
	public:
		TArray<struct FGameplayAbilityBindInfo>                    Abilities;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor
	 * Size -> 0x0114 (FullSize[0x033C] - InheritedSize[0x0228])
	 */
	class AGameplayAbilityTargetActor : public AActor
	{
	public:
		bool                                                       ShouldProduceTargetDataOnServer;                         // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K8GY[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityTargetingLocationInfo               StartLocation;                                           // 0x0230(0x0070) BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6O1X[0x30];                                  // 0x02A0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   MasterPC;                                                // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameplayAbility*                                    OwningAbility;                                           // 0x02D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDestroyOnConfirmation;                                  // 0x02E0(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9W3[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SourceActor;                                             // 0x02E8(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWorldReticleParameters                             ReticleParams;                                           // 0x02F0(0x000C) BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEJG[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ReticleClass;                                            // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTargetDataFilterHandle                     Filter;                                                  // 0x0308(0x0010) BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bDebug;                                                  // 0x0318(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7M1[0x17];                                  // 0x0319(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             GenericDelegateBoundASC;                                 // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIC2[0x4];                                   // 0x0338(0x0004) Fix size for supers

	public:
		void ConfirmTargeting();
		void CancelTargeting();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor_Trace
	 * Size -> 0x0014 (FullSize[0x0350] - InheritedSize[0x033C])
	 */
	class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
	{
	public:
		struct FCollisionProfileName                               TraceProfile;                                            // 0x033C(0x0008) Edit, BlueprintVisible, Config, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bTraceAffectsAimPitch;                                   // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZC7[0xB];                                   // 0x0345(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
	 * Size -> 0x0020 (FullSize[0x0370] - InheritedSize[0x0350])
	 */
	class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
	{
	public:
		float                                                      CollisionRadius;                                         // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionHeight;                                         // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_89Z2[0x18];                                  // 0x0358(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
	 * Size -> 0x0020 (FullSize[0x0390] - InheritedSize[0x0370])
	 */
	class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
	{
	public:
		class UClass*                                              PlacedActorClass;                                        // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  PlacedActorMaterial;                                     // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TJS[0x10];                                  // 0x0380(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor_Radius
	 * Size -> 0x0004 (FullSize[0x0340] - InheritedSize[0x033C])
	 */
	class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
	{
	public:
		unsigned char                                              UnknownData_YZW3[0x4];                                   // 0x033C(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityWorldReticle
	 * Size -> 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
	 */
	class AGameplayAbilityWorldReticle : public AActor
	{
	public:
		struct FWorldReticleParameters                             Parameters;                                              // 0x0228(0x000C) Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bFaceOwnerFlat;                                          // 0x0234(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToTargetedActor;                                    // 0x0235(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTargetValid;                                          // 0x0236(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsTargetAnActor;                                        // 0x0237(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class APlayerController*                                   MasterPC;                                                // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              TargetingActor;                                          // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetReticleMaterialParamVector(const class FName& ParamName, const struct FVector& Value);
		void SetReticleMaterialParamFloat(const class FName& ParamName, float Value);
		void OnValidTargetChanged(bool bNewValue);
		void OnTargetingAnActor(bool bNewValue);
		void OnParametersInitialized();
		void FaceTowardSource(bool bFaceIn2D);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
	 * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
	 */
	class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
	{
	public:
		class UCapsuleComponent*                                   CollisionComponent;                                      // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UActorComponent*>                             VisualizationComponents;                                 // 0x0250(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayCueInterface : public UInterface
	{
	public:
		void ForwardGameplayCueToParent();
		void BlueprintCustomHandler(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueNotify_HitImpact
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueSet
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UGameplayCueSet : public UDataAsset
	{
	public:
		TArray<struct FGameplayCueNotifyData>                      GameplayCueData;                                         // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DB9S[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueTranslator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayCueTranslator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueTranslator_Test
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayCueTranslator_Test : public UGameplayCueTranslator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffect
	 * Size -> 0x07D8 (FullSize[0x0800] - InheritedSize[0x0028])
	 */
	class UGameplayEffect : public UObject
	{
	public:
		unsigned char                                              UnknownData_CHNB[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameplayEffectDurationType                                DurationPolicy;                                          // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WR6T[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectModifierMagnitude                    DurationMagnitude;                                       // 0x0038(0x01E0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      Period;                                                  // 0x0218(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bExecutePeriodicEffectOnApplication;                     // 0x0240(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectPeriodInhibitionRemovedPolicy               PeriodicInhibitionPolicy;                                // 0x0241(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7FE[0x6];                                   // 0x0242(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayModifierInfo>                       Modifiers;                                               // 0x0248(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayEffectExecutionDefinition>          Executions;                                              // 0x0258(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      ChanceToApplyToTarget;                                   // 0x0268(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ApplicationRequirements;                                 // 0x0290(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      TargetEffectClasses;                                     // 0x02A0(0x0010) ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FConditionalGameplayEffect>                  ConditionalGameplayEffects;                              // 0x02B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      OverflowEffects;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bDenyOverflowApplication;                                // 0x02D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearStackOnOverflow;                                   // 0x02D1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3R3[0x6];                                   // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      PrematureExpirationEffectClasses;                        // 0x02D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      RoutineExpirationEffectClasses;                          // 0x02E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bRequireModifierSuccessToTriggerCues;                    // 0x02F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuppressStackingCues;                                   // 0x02F9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8G5[0x6];                                   // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayEffectCue>                          GameplayCues;                                            // 0x0300(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UGameplayEffectUIData*                               UIData;                                                  // 0x0310(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInheritedTagContainer                              InheritableGameplayEffectTags;                           // 0x0318(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FInheritedTagContainer                              InheritableOwnedTagsContainer;                           // 0x0378(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            OngoingTagRequirements;                                  // 0x03D8(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            ApplicationTagRequirements;                              // 0x0418(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            RemovalTagRequirements;                                  // 0x0458(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FInheritedTagContainer                              RemoveGameplayEffectsWithTags;                           // 0x0498(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            GrantedApplicationImmunityTags;                          // 0x04F8(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayEffectQuery                                GrantedApplicationImmunityQuery;                         // 0x0538(0x0150) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X12O[0x8];                                   // 0x0688(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectQuery                                RemoveGameplayEffectQuery;                               // 0x0690(0x0150) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_91WD[0x1];                                   // 0x07E0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameplayEffectStackingType                                StackingType;                                            // 0x07E1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A905[0x2];                                   // 0x07E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackLimitCount;                                         // 0x07E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectStackingDurationPolicy                      StackDurationRefreshPolicy;                              // 0x07E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectStackingPeriodPolicy                        StackPeriodResetPolicy;                                  // 0x07E9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectStackingExpirationPolicy                    StackExpirationPolicy;                                   // 0x07EA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Z2D[0x5];                                   // 0x07EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayAbilitySpecDef>                     GrantedAbilities;                                        // 0x07F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayEffectCustomApplicationRequirement : public UObject
	{
	public:
		bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectExecutionCalculation
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
	{
	public:
		bool                                                       bRequiresPassedInTags;                                   // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3BFE[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectUIData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayEffectUIData : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectUIData_TextOnly
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
	{
	public:
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayTagReponseTable
	 * Size -> 0x01B8 (FullSize[0x01E8] - InheritedSize[0x0030])
	 */
	class UGameplayTagReponseTable : public UDataAsset
	{
	public:
		TArray<struct FGameplayTagResponseTableEntry>              Entries;                                                 // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SR2[0x1A8];                                 // 0x0040(0x01A8) MISSED OFFSET (PADDING)

	public:
		void TagResponseEvent(const struct FGameplayTag& Tag, int32_t NewCount, class UAbilitySystemComponent* ASC, int32_t idx);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
	 * Size -> 0x0088 (FullSize[0x0188] - InheritedSize[0x0100])
	 */
	class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
	{
	public:
		struct FMovieSceneGameplayCueChannel                       Channel;                                                 // 0x0100(0x0088) AssetRegistrySearchable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.MovieSceneGameplayCueSection
	 * Size -> 0x0078 (FullSize[0x0178] - InheritedSize[0x0100])
	 */
	class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
	{
	public:
		struct FMovieSceneGameplayCueKey                           Cue;                                                     // 0x0100(0x0078) Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.MovieSceneGameplayCueTrack
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0090(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetSequencerTrackHandler(const class FScriptDelegate& InGameplayCueTrackHandler);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.TickableAttributeSetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTickableAttributeSetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
