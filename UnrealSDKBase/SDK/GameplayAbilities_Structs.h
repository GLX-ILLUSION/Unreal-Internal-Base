﻿#pragma once

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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
	 */
	enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
	{
		CancelAbilityImmediately = 0,
		RemoveAbilityOnEnd       = 1,
		DoNothing                = 2,
		MAX                      = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
	 */
	enum class EGameplayEffectAttributeCaptureSource : uint8_t
	{
		Source = 0,
		Target = 1,
		MAX    = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityActivationMode
	 */
	enum class EGameplayAbilityActivationMode : uint8_t
	{
		Authority    = 0,
		NonAuthority = 1,
		Predicting   = 2,
		Confirmed    = 3,
		Rejected     = 4,
		MAX          = 5
	};

	/**
	 * Enum GameplayAbilities.EAbilityGenericReplicatedEvent
	 */
	enum class EAbilityGenericReplicatedEvent : uint8_t
	{
		GenericConfirm          = 0,
		GenericCancel           = 1,
		InputPressed            = 2,
		InputReleased           = 3,
		GenericSignalFromClient = 4,
		GenericSignalFromServer = 5,
		GameCustom1             = 6,
		GameCustom2             = 7,
		GameCustom3             = 8,
		GameCustom4             = 9,
		GameCustom5             = 10,
		GameCustom6             = 11,
		MAX                     = 12
	};

	/**
	 * Enum GameplayAbilities.EGameplayCueEvent
	 */
	enum class EGameplayCueEvent : uint8_t
	{
		OnActive    = 0,
		WhileActive = 1,
		Executed    = 2,
		Removed     = 3,
		MAX         = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayModOp
	 */
	enum class EGameplayModOp : uint8_t
	{
		Additive         = 0,
		Multiplicitive   = 1,
		Division         = 2,
		ContinuedProduct = 3,
		ExtraAdditive    = 4,
		Override         = 5,
		Max              = 6
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectReplicationMode
	 */
	enum class EGameplayEffectReplicationMode : uint8_t
	{
		Minimal = 0,
		Mixed   = 1,
		Full    = 2,
		MAX     = 3
	};

	/**
	 * Enum GameplayAbilities.EAbilityTaskWaitState
	 */
	enum class EAbilityTaskWaitState : uint8_t
	{
		WaitingOnGame   = 0,
		WaitingOnUser   = 1,
		WaitingOnAvatar = 2,
		MAX             = 3
	};

	/**
	 * Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
	 */
	enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
	{
		AlignFromTargetToSource = 0,
		AlignToTargetForward    = 1,
		AlignToWorldSpace       = 2,
		MAX                     = 3
	};

	/**
	 * Enum GameplayAbilities.EAbilityTaskNetSyncType
	 */
	enum class EAbilityTaskNetSyncType : uint8_t
	{
		BothWait       = 0,
		OnlyServerWait = 1,
		OnlyClientWait = 2,
		MAX            = 3
	};

	/**
	 * Enum GameplayAbilities.EWaitAttributeChangeComparison
	 */
	enum class EWaitAttributeChangeComparison : uint8_t
	{
		None                 = 0,
		GreaterThan          = 1,
		LessThan             = 2,
		GreaterThanOrEqualTo = 3,
		LessThanOrEqualTo    = 4,
		NotEqualTo           = 5,
		ExactlyEqualTo       = 6,
		MAX                  = 7
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityInputBinds
	 */
	enum class EGameplayAbilityInputBinds : uint8_t
	{
		Ability1 = 0,
		Ability2 = 1,
		Ability3 = 2,
		Ability4 = 3,
		Ability5 = 4,
		Ability6 = 5,
		Ability7 = 6,
		Ability8 = 7,
		Ability9 = 8,
		MAX      = 9
	};

	/**
	 * Enum GameplayAbilities.ETargetDataFilterSelf
	 */
	enum class ETargetDataFilterSelf : uint8_t
	{
		TDFS_Any      = 0,
		TDFS_NoSelf   = 1,
		TDFS_NoOthers = 2,
		TDFS_MAX      = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
	 */
	enum class EGameplayAbilityTargetingLocationType : uint8_t
	{
		LiteralTransform = 0,
		ActorTransform   = 1,
		SocketTransform  = 2,
		MAX              = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayTargetingConfirmation
	 */
	enum class EGameplayTargetingConfirmation : uint8_t
	{
		Instant       = 0,
		UserConfirmed = 1,
		Custom        = 2,
		CustomMulti   = 3,
		MAX           = 4
	};

	/**
	 * Enum GameplayAbilities.ERepAnimPositionMethod
	 */
	enum class ERepAnimPositionMethod : uint8_t
	{
		Position         = 0,
		CurrentSectionId = 1,
		MAX              = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityTriggerSource
	 */
	enum class EGameplayAbilityTriggerSource : uint8_t
	{
		GameplayEvent   = 0,
		OwnedTagAdded   = 1,
		OwnedTagPresent = 2,
		MAX             = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
	 */
	enum class EGameplayAbilityReplicationPolicy : uint8_t
	{
		ReplicateNo  = 0,
		ReplicateYes = 1,
		MAX          = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
	 */
	enum class EGameplayAbilityNetSecurityPolicy : uint8_t
	{
		ClientOrServer        = 0,
		ServerOnlyExecution   = 1,
		ServerOnlyTermination = 2,
		ServerOnly            = 3,
		MAX                   = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
	 */
	enum class EGameplayAbilityNetExecutionPolicy : uint8_t
	{
		LocalPredicted  = 0,
		LocalOnly       = 1,
		ServerInitiated = 2,
		ServerOnly      = 3,
		MAX             = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
	 */
	enum class EGameplayAbilityInstancingPolicy : uint8_t
	{
		NonInstanced          = 0,
		InstancedPerActor     = 1,
		InstancedPerExecution = 2,
		MAX                   = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayCuePayloadType
	 */
	enum class EGameplayCuePayloadType : uint8_t
	{
		CueParameters = 0,
		FromSpec      = 1,
		MAX           = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
	 */
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
	{
		NeverReset            = 0,
		ResetPeriod           = 1,
		ExecuteAndResetPeriod = 2,
		MAX                   = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
	 */
	enum class EGameplayEffectStackingExpirationPolicy : uint8_t
	{
		ClearEntireStack                    = 0,
		RemoveSingleStackAndRefreshDuration = 1,
		RefreshDuration                     = 2,
		MAX                                 = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
	 */
	enum class EGameplayEffectStackingPeriodPolicy : uint8_t
	{
		ResetOnSuccessfulApplication = 0,
		NeverReset                   = 1,
		MAX                          = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
	 */
	enum class EGameplayEffectStackingDurationPolicy : uint8_t
	{
		RefreshOnSuccessfulApplication = 0,
		NeverRefresh                   = 1,
		MAX                            = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectDurationType
	 */
	enum class EGameplayEffectDurationType : uint8_t
	{
		Instant     = 0,
		Infinite    = 1,
		HasDuration = 2,
		MAX         = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
	 */
	enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
	{
		CapturedAttributeBacked = 0,
		Transient               = 1,
		MAX                     = 2
	};

	/**
	 * Enum GameplayAbilities.EAttributeBasedFloatCalculationType
	 */
	enum class EAttributeBasedFloatCalculationType : uint8_t
	{
		AttributeMagnitude                     = 0,
		AttributeBaseValue                     = 1,
		AttributeBonusMagnitude                = 2,
		AttributeMagnitudeEvaluatedUpToChannel = 3,
		MAX                                    = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
	 */
	enum class EGameplayEffectMagnitudeCalculation : uint8_t
	{
		ScalableFloat          = 0,
		AttributeBased         = 1,
		CustomCalculationClass = 2,
		SetByCaller            = 3,
		MAX                    = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayTagEventType
	 */
	enum class EGameplayTagEventType : uint8_t
	{
		NewOrRemoved   = 0,
		AnyCountChange = 1,
		MAX            = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingType
	 */
	enum class EGameplayEffectStackingType : uint8_t
	{
		None              = 0,
		AggregateBySource = 1,
		AggregateByTarget = 2,
		MAX               = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayModEvaluationChannel
	 */
	enum class EGameplayModEvaluationChannel : uint8_t
	{
		Channel0    = 0,
		Channel1    = 1,
		Channel2    = 2,
		Channel3    = 3,
		Channel4    = 4,
		Channel5    = 5,
		Channel6    = 6,
		Channel7    = 7,
		Channel8    = 8,
		Channel9    = 9,
		Channel_MAX = 10,
		MAX         = 11
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayAbilities.AttributeDefaults
	 * Size -> 0x0010
	 */
	struct FAttributeDefaults
	{
	public:
		class UClass*                                              Attributes;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          DefaultStartingTable;                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
	 * Size -> 0x0004
	 */
	struct FGameplayAbilitySpecHandle
	{
	public:
		int32_t                                                    Handle;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayAbilities.PredictionKey
	 * Size -> 0x0010
	 */
	struct FPredictionKey
	{
	public:
		class UPackageMap*                                         PredictiveConnection;                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Current;                                                 // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Base;                                                    // 0x000A(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStale;                                                // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsServerInitiated;                                      // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSWF[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
	 * Size -> 0x0018
	 */
	struct FGameplayAbilityActivationInfo
	{
	public:
		EGameplayAbilityActivationMode                             ActivationMode;                                          // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeEndedByOtherInstance : 1;                          // 0x0001(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GJR[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKeyWhenActivated;                              // 0x0008(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
	 * Size -> 0x0008
	 */
	struct FActiveGameplayEffectHandle
	{
	public:
		int32_t                                                    Handle;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPassedFiltersAndWasExecuted;                            // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NXKU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpec
	 * Size -> 0x00DC (FullSize[0x00E8] - InheritedSize[0x000C])
	 */
	struct FGameplayAbilitySpec : public FFastArraySerializerItem
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x000C(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameplayAbility*                                    Ability;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InputID;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AbilityID;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9AA5[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             SourceObject;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ActiveCount;                                             // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InputPressed : 1;                                        // 0x0031(0x0001) BIT_FIELD RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveAfterActivation : 1;                               // 0x0031(0x0001) BIT_FIELD RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PendingRemove : 1;                                       // 0x0031(0x0001) BIT_FIELD RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivateOnce : 1;                                       // 0x0031(0x0001) BIT_FIELD RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZLSV[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0038(0x0018) RepSkip, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DynamicAbilityTags;                                      // 0x0050(0x0020) NativeAccessSpecifierPublic
		TArray<class UGameplayAbility*>                            NonReplicatedInstances;                                  // 0x0070(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		TArray<class UGameplayAbility*>                            ReplicatedInstances;                                     // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FActiveGameplayEffectHandle                         GameplayEffectHandle;                                    // 0x0090(0x0008) RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5K4H[0x50];                                  // 0x0098(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FGameplayAbilitySpecContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FGameplayAbilitySpec>                        Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UAbilitySystemComponent*                             Owner;                                                   // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
	 * Size -> 0x0030
	 */
	struct FGameplayAbilityRepAnimMontage
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Position;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NextSectionID;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRepPosition : 1;                                        // 0x0015(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsStopped : 1;                                           // 0x0015(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForcePlayBit : 1;                                        // 0x0015(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SkipPositionCorrection : 1;                              // 0x0015(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipPlayRate : 1;                                       // 0x0015(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQ8L[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0018(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SectionIdToPlay;                                         // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O2QN[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
	 * Size -> 0x0028
	 */
	struct FGameplayAbilityLocalAnimMontage
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayBit;                                                 // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MCZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0010(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameplayAbility*                                    AnimatingAbility;                                        // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAttribute
	 * Size -> 0x0038
	 */
	struct FGameplayAttribute
	{
	public:
		class FString                                              AttributeName;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Attribute[0x20];                                         // 0x0010(0x0020) UNKNOWN PROPERTY: FieldPathProperty
		class UStruct*                                             AttributeOwner;                                          // 0x0030(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
	 * Size -> 0x0040
	 */
	struct FGameplayEffectModifiedAttribute
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0038) HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalMagnitude;                                          // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FF6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
	 * Size -> 0x0040
	 */
	struct FGameplayEffectAttributeCaptureDefinition
	{
	public:
		struct FGameplayAttribute                                  AttributeToCapture;                                      // 0x0000(0x0038) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectAttributeCaptureSource                      AttributeSource;                                         // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapshot;                                               // 0x0039(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XCA[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
	 * Size -> 0x0050
	 */
	struct FGameplayEffectAttributeCaptureSpec
	{
	public:
		struct FGameplayEffectAttributeCaptureDefinition           BackingDefinition;                                       // 0x0000(0x0040) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_23S5[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
	 * Size -> 0x0028
	 */
	struct FGameplayEffectAttributeCaptureSpecContainer
	{
	public:
		TArray<struct FGameplayEffectAttributeCaptureSpec>         SourceAttributes;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGameplayEffectAttributeCaptureSpec>         TargetAttributes;                                        // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bHasNonSnapshottedAttributes;                            // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GC81[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.TagContainerAggregator
	 * Size -> 0x0088
	 */
	struct FTagContainerAggregator
	{
	public:
		struct FGameplayTagContainer                               CapturedActorTags;                                       // 0x0000(0x0020) NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               CapturedSpecTags;                                        // 0x0020(0x0020) NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               ScopedTags;                                              // 0x0040(0x0020) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LFZ1[0x28];                                  // 0x0060(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ModifierSpec
	 * Size -> 0x0004
	 */
	struct FModifierSpec
	{
	public:
		float                                                      EvaluatedMagnitude;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayAbilities.ScalableFloat
	 * Size -> 0x0028
	 */
	struct FScalableFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWA0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurveTableRowHandle                                Curve;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataRegistryType                                   RegistryType;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIPE[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
	 * Size -> 0x0098
	 */
	struct FGameplayAbilitySpecDef
	{
	public:
		class UClass*                                              Ability;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScalableFloat                                      LevelScalableFloat;                                      // 0x0008(0x0028) Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic
		int32_t                                                    InputID;                                                 // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectGrantedAbilityRemovePolicy                  RemovalPolicy;                                           // 0x0034(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NM89[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             SourceObject;                                            // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7B9S[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilitySpecHandle                          AssignedHandle;                                          // 0x0090(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMFR[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectContextHandle
	 * Size -> 0x0018
	 */
	struct FGameplayEffectContextHandle
	{
	public:
		unsigned char                                              UnknownData_7KHU[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectSpec
	 * Size -> 0x02A0
	 */
	struct FGameplayEffectSpec
	{
	public:
		class UGameplayEffect*                                     Def;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JPNF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayEffectModifiedAttribute>            ModifiedAttributes;                                      // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayEffectAttributeCaptureSpecContainer        CapturedRelevantAttributes;                              // 0x0020(0x0028) RepSkip, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70ZM[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToApplyToTarget;                                   // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQ0D[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagContainerAggregator                             CapturedSourceTags;                                      // 0x0068(0x0088) RepSkip, NativeAccessSpecifierPublic
		struct FTagContainerAggregator                             CapturedTargetTags;                                      // 0x00F0(0x0088) RepSkip, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DynamicGrantedTags;                                      // 0x0178(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DynamicAssetTags;                                        // 0x0198(0x0020) NativeAccessSpecifierPublic
		TArray<struct FModifierSpec>                               Modifiers;                                               // 0x01B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x01C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompletedSourceAttributeCapture : 1;                    // 0x01CC(0x0001) BIT_FIELD RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompletedTargetAttributeCapture : 1;                    // 0x01CC(0x0001) BIT_FIELD RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDurationLocked : 1;                                     // 0x01CC(0x0001) BIT_FIELD RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QKF[0x3];                                   // 0x01CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayAbilitySpecDef>                     GrantedAbilitySpecs;                                     // 0x01D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LI9[0xA0];                                  // 0x01E0(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0280(0x0018) NativeAccessSpecifierPrivate
		float                                                      Level;                                                   // 0x0298(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0RW8[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffect
	 * Size -> 0x0364 (FullSize[0x0370] - InheritedSize[0x000C])
	 */
	struct FActiveGameplayEffect : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_OKBI[0xC];                                   // 0x000C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0018(0x02A0) NativeAccessSpecifierPublic
		struct FPredictionKey                                      PredictionKey;                                           // 0x02B8(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartServerWorldTime;                                    // 0x02C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedStartServerWorldTime;                              // 0x02CC(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartWorldTime;                                          // 0x02D0(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInhibited;                                            // 0x02D4(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4WH[0x9B];                                  // 0x02D5(0x009B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
	 * Size -> 0x0370 (FullSize[0x0478] - InheritedSize[0x0108])
	 */
	struct FActiveGameplayEffectsContainer : public FFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_KAIB[0x28];                                  // 0x0108(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveGameplayEffect>                       GameplayEffects_Internal;                                // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GQ01[0x310];                                 // 0x0140(0x0310) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameplayEffect*>                             ApplicationImmunityQueryEffects;                         // 0x0450(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OOFY[0x18];                                  // 0x0460(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueParameters
	 * Size -> 0x00C8
	 */
	struct FGameplayCueParameters
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalizedMagnitude;                                     // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RawMagnitude;                                            // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQ2P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0010(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTag                                        MatchedTagName;                                          // 0x0028(0x0008) BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        OriginalTag;                                             // 0x0030(0x0008) BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               AggregatedSourceTags;                                    // 0x0038(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               AggregatedTargetTags;                                    // 0x0058(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               Location;                                                // 0x0078(0x000C) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           Normal;                                                  // 0x0084(0x000C) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Instigator;                                              // 0x0090(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               EffectCauser;                                            // 0x0098(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              SourceObject;                                            // 0x00A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPhysicalMaterial>                    PhysicalMaterial;                                        // 0x00A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameplayEffectLevel;                                     // 0x00B0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AbilityLevel;                                            // 0x00B4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      TargetAttachComponent;                                   // 0x00B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateLocationWhenUsingMinimalRepProxy;              // 0x00C0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPVD[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayCue
	 * Size -> 0x00EC (FullSize[0x00F8] - InheritedSize[0x000C])
	 */
	struct FActiveGameplayCue : public FFastArraySerializerItem
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x000C(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWVJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0018(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayCueParameters                              Parameters;                                              // 0x0028(0x00C8) ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bPredictivelyRemoved;                                    // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3MQZ[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
	 * Size -> 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
	 */
	struct FActiveGameplayCueContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FActiveGameplayCue>                          GameplayCues;                                            // 0x0108(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTPN[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             Owner;                                                   // 0x0120(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
	 * Size -> 0x0060
	 */
	struct FMinimalReplicationTagCountMap
	{
	public:
		unsigned char                                              UnknownData_PPXZ[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             Owner;                                                   // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4B3[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
	 * Size -> 0x0014 (FullSize[0x0020] - InheritedSize[0x000C])
	 */
	struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_GN9B[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0010(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	struct FReplicatedPredictionKeyMap : public FFastArraySerializer
	{
	public:
		TArray<struct FReplicatedPredictionKeyItem>                PredictionKeys;                                          // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
	 * Size -> 0x0010
	 */
	struct FNetSerializeScriptStructCache
	{
	public:
		TArray<class UScriptStruct*>                               ScriptStructs;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
	 * Size -> 0x0028
	 */
	struct FGameplayAbilityTargetDataHandle
	{
	public:
		unsigned char                                              UnknownData_PJZY[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEventData
	 * Size -> 0x00B0
	 */
	struct FGameplayEventData
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Target;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             OptionalObject;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             OptionalObject2;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayEffectContextHandle                        ContextHandle;                                           // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               InstigatorTags;                                          // 0x0040(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TargetTags;                                              // 0x0060(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      EventMagnitude;                                          // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9B0[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0088(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.AbilityTriggerData
	 * Size -> 0x000C
	 */
	struct FAbilityTriggerData
	{
	public:
		struct FGameplayTag                                        TriggerTag;                                              // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayAbilityTriggerSource                              TriggerSource;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CYZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
	 * Size -> 0x0050
	 */
	struct FGameplayCueObjectLibrary
	{
	public:
		TArray<class FString>                                      Paths;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHQA[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObjectLibrary*                                      ActorObjectLibrary;                                      // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObjectLibrary*                                      StaticObjectLibrary;                                     // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameplayCueSet*                                     CueSet;                                                  // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0H1S[0x4];                                   // 0x0048(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShouldSyncScan;                                         // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldAsyncLoad;                                        // 0x004D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldSyncLoad;                                         // 0x004E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBeenInitialized;                                     // 0x004F(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
	 * Size -> 0x0080
	 */
	struct FGameplayEffectSpecForRPC
	{
	public:
		class UGameplayEffect*                                     Def;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4U7I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayEffectModifiedAttribute>            ModifiedAttributes;                                      // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0020(0x0018) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               AggregatedSourceTags;                                    // 0x0038(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               AggregatedTargetTags;                                    // 0x0058(0x0020) NativeAccessSpecifierPublic
		float                                                      Level;                                                   // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbilityLevel;                                            // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCuePendingExecute
	 * Size -> 0x0180
	 */
	struct FGameplayCuePendingExecute
	{
	public:
		unsigned char                                              UnknownData_T8YX[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0018(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayCuePayloadType                                    PayloadType;                                             // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7OA[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             OwningComponent;                                         // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayEffectSpecForRPC                           FromSpec;                                                // 0x0038(0x0080) NativeAccessSpecifierPublic
		struct FGameplayCueParameters                              CueParameters;                                           // 0x00B8(0x00C8) ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.PreallocationInfo
	 * Size -> 0x0068
	 */
	struct FPreallocationInfo
	{
	public:
		unsigned char                                              UnknownData_CTSJ[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ClassesNeedingPreallocation;                             // 0x0050(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XNY[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
	 * Size -> 0x0010
	 */
	struct FGameplayAbilityBindInfo
	{
	public:
		EGameplayAbilityInputBinds                                 Command;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INE4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GameplayAbilityClass;                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
	 * Size -> 0x0070
	 */
	struct FGameplayAbilityTargetingLocationInfo
	{
	public:
		unsigned char                                              UnknownData_KFDM[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameplayAbilityTargetingLocationType                      LocationType;                                            // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1HT[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LiteralTransform;                                        // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		class AActor*                                              SourceActor;                                             // 0x0050(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshComponent*                                      SourceComponent;                                         // 0x0058(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameplayAbility*                                    SourceAbility;                                           // 0x0060(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceSocketName;                                        // 0x0068(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.WorldReticleParameters
	 * Size -> 0x000C
	 */
	struct FWorldReticleParameters
	{
	public:
		struct FVector                                             AOEScale;                                                // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
	 * Size -> 0x0010
	 */
	struct FGameplayTargetDataFilterHandle
	{
	public:
		unsigned char                                              UnknownData_X3BB[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueNotifyData
	 * Size -> 0x0030
	 */
	struct FGameplayCueNotifyData
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GameplayCueNotifyObj;                                    // 0x0008(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LoadedGameplayCueClass;                                  // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5C48[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.AttributeBasedFloat
	 * Size -> 0x0110
	 */
	struct FAttributeBasedFloat
	{
	public:
		struct FScalableFloat                                      Coefficient;                                             // 0x0000(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      PreMultiplyAdditiveValue;                                // 0x0028(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      PostMultiplyAdditiveValue;                               // 0x0050(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayEffectAttributeCaptureDefinition           BackingAttribute;                                        // 0x0078(0x0040) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCurveTableRowHandle                                AttributeCurve;                                          // 0x00B8(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttributeBasedFloatCalculationType                        AttributeCalculationType;                                // 0x00C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayModEvaluationChannel                              FinalChannel;                                            // 0x00C9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QK0[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               SourceTagFilter;                                         // 0x00D0(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TargetTagFilter;                                         // 0x00F0(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
	 * Size -> 0x0090
	 */
	struct FCustomCalculationBasedFloat
	{
	public:
		class UClass*                                              CalculationClassMagnitude;                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScalableFloat                                      Coefficient;                                             // 0x0008(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      PreMultiplyAdditiveValue;                                // 0x0030(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      PostMultiplyAdditiveValue;                               // 0x0058(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCurveTableRowHandle                                FinalLookupCurve;                                        // 0x0080(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.SetByCallerFloat
	 * Size -> 0x0010
	 */
	struct FSetByCallerFloat
	{
	public:
		class FName                                                DataName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        DataTag;                                                 // 0x0008(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
	 * Size -> 0x01E0
	 */
	struct FGameplayEffectModifierMagnitude
	{
	public:
		EGameplayEffectMagnitudeCalculation                        MagnitudeCalculationType;                                // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6HKR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      ScalableFloatMagnitude;                                  // 0x0008(0x0028) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FAttributeBasedFloat                                AttributeBasedMagnitude;                                 // 0x0030(0x0110) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FCustomCalculationBasedFloat                        CustomMagnitude;                                         // 0x0140(0x0090) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FSetByCallerFloat                                   SetByCallerMagnitude;                                    // 0x01D0(0x0010) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
	 * Size -> 0x0001
	 */
	struct FGameplayModEvaluationChannelSettings
	{
	public:
		EGameplayModEvaluationChannel                              Channel;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagRequirements
	 * Size -> 0x0040
	 */
	struct FGameplayTagRequirements
	{
	public:
		struct FGameplayTagContainer                               RequireTags;                                             // 0x0000(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               IgnoreTags;                                              // 0x0020(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayModifierInfo
	 * Size -> 0x02D0
	 */
	struct FGameplayModifierInfo
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0038) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayModOp                                             ModifierOp;                                              // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXQO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      Magnitude;                                               // 0x0040(0x0028) NativeAccessSpecifierPublic
		struct FGameplayEffectModifierMagnitude                    ModifierMagnitude;                                       // 0x0068(0x01E0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayModEvaluationChannelSettings               EvaluationChannelSettings;                               // 0x0248(0x0001) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ULG[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagRequirements                            SourceTags;                                              // 0x0250(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            TargetTags;                                              // 0x0290(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
	 * Size -> 0x02B8
	 */
	struct FGameplayEffectExecutionScopedModifierInfo
	{
	public:
		struct FGameplayEffectAttributeCaptureDefinition           CapturedAttribute;                                       // 0x0000(0x0040) Edit, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TransientAggregatorIdentifier;                           // 0x0040(0x0008) Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectScopedModifierAggregatorType                AggregatorType;                                          // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayModOp                                             ModifierOp;                                              // 0x0049(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HL9Q[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectModifierMagnitude                    ModifierMagnitude;                                       // 0x0050(0x01E0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayModEvaluationChannelSettings               EvaluationChannelSettings;                               // 0x0230(0x0001) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YC08[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagRequirements                            SourceTags;                                              // 0x0238(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            TargetTags;                                              // 0x0278(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.ConditionalGameplayEffect
	 * Size -> 0x0028
	 */
	struct FConditionalGameplayEffect
	{
	public:
		class UClass*                                              EffectClass;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               RequiredSourceTags;                                      // 0x0008(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
	 * Size -> 0x0058
	 */
	struct FGameplayEffectExecutionDefinition
	{
	public:
		class UClass*                                              CalculationClass;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               PassedInTags;                                            // 0x0008(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayEffectExecutionScopedModifierInfo>  CalculationModifiers;                                    // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ConditionalGameplayEffectClasses;                        // 0x0038(0x0010) ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FConditionalGameplayEffect>                  ConditionalGameplayEffects;                              // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectCue
	 * Size -> 0x0068
	 */
	struct FGameplayEffectCue
	{
	public:
		struct FGameplayAttribute                                  MagnitudeAttribute;                                      // 0x0000(0x0038) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinLevel;                                                // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLevel;                                                // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PLZ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayCueTags;                                         // 0x0048(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.InheritedTagContainer
	 * Size -> 0x0060
	 */
	struct FInheritedTagContainer
	{
	public:
		struct FGameplayTagContainer                               CombinedTags;                                            // 0x0000(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               Added;                                                   // 0x0020(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               Removed;                                                 // 0x0040(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectQuery
	 * Size -> 0x0150
	 */
	struct FGameplayEffectQuery
	{
	public:
		unsigned char                                              UnknownData_2AMZ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CustomMatchDelegate_BP;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   OwningTagQuery;                                          // 0x0020(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   EffectTagQuery;                                          // 0x0068(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   SourceTagQuery;                                          // 0x00B0(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayAttribute                                  ModifyingAttribute;                                      // 0x00F8(0x0038) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             EffectSource;                                            // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EffectDefinition;                                        // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W3QQ[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagReponsePair
	 * Size -> 0x0028
	 */
	struct FGameplayTagReponsePair
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ResponseGameplayEffect;                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ResponseGameplayEffects;                                 // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                    SoftCountCap;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1P2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
	 * Size -> 0x0050
	 */
	struct FGameplayTagResponseTableEntry
	{
	public:
		struct FGameplayTagReponsePair                             Positive;                                                // 0x0000(0x0028) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagReponsePair                             Negative;                                                // 0x0028(0x0028) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueTag
	 * Size -> 0x0008
	 */
	struct FGameplayCueTag
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.MovieSceneGameplayCueKey
	 * Size -> 0x0078
	 */
	struct FMovieSceneGameplayCueKey
	{
	public:
		struct FGameplayCueTag                                     Cue;                                                     // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachSocketName;                                        // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalizedMagnitude;                                     // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneObjectBindingID                          Instigator;                                              // 0x002C(0x0018) Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneObjectBindingID                          EffectCauser;                                            // 0x0044(0x0018) Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8RA[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameplayEffectLevel;                                     // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AbilityLevel;                                            // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToBinding;                                        // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZGE[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.MovieSceneGameplayCueChannel
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FMovieSceneGameplayCueChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                KeyTimes;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneGameplayCueKey>                   KeyValues;                                               // 0x0018(0x0010) ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M6ED[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
	 * Size -> 0x0010
	 */
	struct FGameplayEffectSpecHandle
	{
	public:
		unsigned char                                              UnknownData_PH51[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
	 * Size -> 0x0020
	 */
	struct FGameplayEffectRemovalInfo
	{
	public:
		bool                                                       bPrematureRemoval;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S55K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackCount;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
	 * Size -> 0x0048
	 */
	struct FGameplayAbilities_FServerAbilityRPCBatch
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilitySpecHandle;                                       // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQTA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0018(0x0028) NativeAccessSpecifierPublic
		bool                                                       InputPressed;                                            // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Ended;                                                   // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Started;                                                 // 0x0042(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1STO[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
	 * Size -> 0x0050
	 */
	struct FGameplayModifierEvaluatedData
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0038) HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayModOp                                             ModifierOp;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3J6E[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Magnitude;                                               // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0040(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValid;                                                 // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXB8[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.AbilityEndedData
	 * Size -> 0x0010
	 */
	struct FAbilityEndedData
	{
	public:
		class UGameplayAbility*                                    AbilityThatEnded;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAbilitySpecHandle                          AbilitySpecHandle;                                       // 0x0008(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateEndAbility;                                    // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasCancelled;                                           // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWT7[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectContext
	 * Size -> 0x0070
	 */
	struct FGameplayEffectContext
	{
	public:
		unsigned char                                              UnknownData_FY1S[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               Instigator;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AActor>                               EffectCauser;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UGameplayAbility>                     AbilityCDO;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UGameplayAbility>                     AbilityInstanceNotReplicated;                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    AbilityLevel;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UObject>                              SourceObject;                                            // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UAbilitySystemComponent>              InstigatorAbilitySystemComponent;                        // 0x0034(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G20A[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class AActor>>                       Actors;                                                  // 0x0040(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TOWL[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WorldOrigin;                                             // 0x0060(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasWorldOrigin : 1;                                     // 0x006C(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReplicateSourceObject : 1;                              // 0x006C(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_99RF[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData
	 * Size -> 0x0008
	 */
	struct FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_VNEW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.AttributeMetaData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAttributeMetaData : public FTableRowBase
	{
	public:
		float                                                      BaseValue;                                               // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXVA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DerivedAttributeInfo;                                    // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanStack;                                               // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VPS[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAttributeData
	 * Size -> 0x0010
	 */
	struct FGameplayAttributeData
	{
	public:
		unsigned char                                              UnknownData_R3X4[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseValue;                                               // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurrentValue;                                            // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTargetDataFilter
	 * Size -> 0x0020
	 */
	struct FGameplayTargetDataFilter
	{
	public:
		unsigned char                                              UnknownData_SK4G[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SelfActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RequiredActorClass;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETargetDataFilterSelf                                      SelfFilter;                                              // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverseFilter;                                          // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q441[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bHitReplaced;                                            // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WWO[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_IRBZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityTargetingLocationInfo               SourceLocation;                                          // 0x0010(0x0070) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class AActor>>                       TargetActorArray;                                        // 0x0080(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_RHGR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityTargetingLocationInfo               SourceLocation;                                          // 0x0010(0x0070) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGameplayAbilityTargetingLocationInfo               TargetLocation;                                          // 0x0080(0x0070) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
	 * Size -> 0x0008
	 */
	struct FGameplayAbilitySpecHandleAndPredictionKey
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PredictionKeyAtCreation;                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
	 * Size -> 0x0018
	 */
	struct FAbilityTaskDebugMessage
	{
	public:
		class UGameplayTask*                                       FromTask;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
	 * Size -> 0x0048
	 */
	struct FGameplayAbilityActorInfo
	{
	public:
		unsigned char                                              UnknownData_WNYL[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               OwnerActor;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               AvatarActor;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APlayerController>                    PlayerController;                                        // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UAbilitySystemComponent>              AbilitySystemComponent;                                  // 0x0020(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USkeletalMeshComponent>               SkeletalMeshComponent;                                   // 0x0028(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UAnimInstance>                        AnimInstance;                                            // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UMovementComponent>                   MovementComponent;                                       // 0x0038(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AffectedAnimInstanceTag;                                 // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
	 * Size -> 0x0290
	 */
	struct FMinimalGameplayCueReplicationProxy
	{
	public:
		unsigned char                                              UnknownData_G1LA[0x280];                                 // 0x0000(0x0280) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             Owner;                                                   // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S5LW[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueTranslationLink
	 * Size -> 0x0018
	 */
	struct FGameplayCueTranslationLink
	{
	public:
		class UGameplayCueTranslator*                              RulesCDO;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDZX[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
	 * Size -> 0x0004
	 */
	struct FGameplayCueTranslatorNodeIndex
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
	 * Size -> 0x0078
	 */
	struct FGameplayCueTranslatorNode
	{
	public:
		TArray<struct FGameplayCueTranslationLink>                 Links;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayCueTranslatorNodeIndex                     CachedIndex;                                             // 0x0010(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CachedGameplayTag;                                       // 0x0014(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CachedGameplayTagName;                                   // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33GT[0x54];                                  // 0x0024(0x0054) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueTranslationManager
	 * Size -> 0x0080
	 */
	struct FGameplayCueTranslationManager
	{
	public:
		TArray<struct FGameplayCueTranslatorNode>                  TranslationLUT;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, struct FGameplayCueTranslatorNodeIndex>  TranslationNameToIndexMap;                               // 0x0010(0x0050) NativeAccessSpecifierPrivate
		class UGameplayTagsManager*                                TagManager;                                              // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XCVJ[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
	 * Size -> 0x0088
	 */
	struct FActiveGameplayEffectQuery
	{
	public:
		unsigned char                                              UnknownData_KMBP[0x88];                                  // 0x0000(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
	 * Size -> 0x0018
	 */
	struct FGameplayEffectCustomExecutionOutput
	{
	public:
		TArray<struct FGameplayModifierEvaluatedData>              OutputModifiers;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bTriggerConditionalGameplayEffects : 1;                  // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHandledStackCountManually : 1;                          // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHandledGameplayCuesManually : 1;                        // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HXYJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
	 * Size -> 0x00F0
	 */
	struct FGameplayEffectCustomExecutionParameters
	{
	public:
		unsigned char                                              UnknownData_AH5C[0xF0];                                  // 0x0000(0x00F0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
	 * Size -> 0x0048
	 */
	struct FGameplayTagBlueprintPropertyMapping
	{
	public:
		struct FGameplayTag                                        TagToMap;                                                // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PropertyToEdit[0x20];                                    // 0x0008(0x0020) UNKNOWN PROPERTY: FieldPathProperty
		class FName                                                PropertyName;                                            // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PropertyGuid;                                            // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XEJZ[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
	 * Size -> 0x0020
	 */
	struct FGameplayTagBlueprintPropertyMap
	{
	public:
		unsigned char                                              UnknownData_1JMG[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTagBlueprintPropertyMapping>        PropertyMappings;                                        // 0x0010(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
