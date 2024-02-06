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
	 * Class Main.AIPawn
	 * Size -> 0x0098 (FullSize[0x0550] - InheritedSize[0x04B8])
	 */
	class AAIPawn : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_L3P7[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_SRAU[0x20];                                  // 0x04C0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomAbilitySystemComponent*                       AbilitySystemComponent;                                  // 0x04E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCombatAttributeSet*                                 CombatAttributeSet;                                      // 0x04E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHealthChange;                                          // 0x04F0(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMaxHealthChange;                                       // 0x0500(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		bool                                                       IsDead;                                                  // 0x0510(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRY9[0x7];                                   // 0x0511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAITask_MoveTo*                                      MoveToTaskPtr;                                           // 0x0518(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAITask_FlyTo*                                       FlyToTaskPtr;                                            // 0x0520(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotateSpeed;                                             // 0x0528(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_54AX[0x24];                                  // 0x052C(0x0024) MISSED OFFSET (PADDING)

	public:
		void UpdateSignificanceSettings(TMap<float, float> SignificanceThresholdsMap);
		void UnlockLookAt();
		void TwoFloatEvent__DelegateSignature(float PrevValue, float AfterValue);
		void StopMovementImmediately(bool bClearDelegate);
		void SetUpProperties();
		void SetSpeed(float Speed);
		void SetRotationFollowVelocity(bool bFollow);
		void RotateToTargetRotation(const struct FRotator& Rotation, float UsedRotateSpeed);
		void OnRep_IsDead();
		class UAITask_MoveTo* MoveToLocation(const struct FVector& Position, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag ProjectGoalOnNavigation);
		class UAITask_MoveTo* MoveToActor(class AActor* ActorPtr, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag ProjectGoalOnNavigation);
		void LockLookAtPos(const struct FVector& TargetLocation, float UsedRotateSpeed);
		void LockLookAtActor(class AActor* Actor, float UsedRotateSpeed);
		struct FGameplayAbilitySpecHandle K2_GiveAbility(class UClass* Ability, int32_t Lv);
		void K2_AddAbilities();
		void InitAttributesFromLua(TMap<class FString, float> InAttributes);
		float GetSpeed();
		class USkeletalMeshComponent* GetRightHandHoldWeaponMesh();
		float GetMaxHealth();
		class USkeletalMeshComponent* GetLeftHandHoldWeaponMesh();
		float GetHealth();
		float GetAttributeValueByName(const class FName& AttributeName);
		void FindRandomLocation(const struct FVector& CenterLocation, struct FVector* ResultLocation, float Range);
		float Die(class AActor* DamageInstigator, class AActor* DamageCauser, const struct FGameplayEffectSpec& DamageEffectSpec, float DamageMagnitude, class AActor* AvatarActor);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.AbilityTask_PlayMontageAndWaitForNotify
	 * Size -> 0x00D8 (FullSize[0x0158] - InheritedSize[0x0080])
	 */
	class UAbilityTask_PlayMontageAndWaitForNotify : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AnimNotifyStateReceived;                                 // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTaskEnd;                                               // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AnimNotifyReceived;                                      // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Rate;                                                    // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                StartSection;                                            // 0x010C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnimRootMotionTranslationScale;                          // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0118(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bNotStopAllMontages;                                     // 0x0119(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G37S[0x3E];                                  // 0x011A(0x003E) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_PlayMontageAndWaitForNotify* PlayMontage(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, bool bNotStopAllMontages);
		void OnAnimNotifyState(class UCustomAnimNotifyState* CustomAnimNotifyState, const class FName& EventName);
		void OnAnimNotify(class UCustomAnimNotify* CustomAnimNotify);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.AbilityTask_ServerWaitForClientTargetData
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UAbilityTask_ServerWaitForClientTargetData : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             ValidData;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HS7A[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_ServerWaitForClientTargetData* ServerWaitForClientTargetData(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, bool TriggerOnce);
		void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.ActorComponent_ClientOnly
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UActorComponent_ClientOnly : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.ActorRandom
	 * Size -> 0x0080 (FullSize[0x02A8] - InheritedSize[0x0228])
	 */
	class AActorRandom : public AActor
	{
	public:
		unsigned char                                              UnknownData_IKZA[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CfgId;                                                   // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0J5L[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      RandomActors;                                            // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BHOV[0x50];                                  // 0x0248(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ConfigPath;                                              // 0x0298(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void Random(bool bFromClick);
		void NotifyDestroyed();
		int32_t GetActorRandomProperty(class AActor* InTargetActor);
		void DestroySelfAndAllChildren();
		void DestroySelf();
		void DestroyChild(class AActor* Child);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.AINavLinkComponent
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UAINavLinkComponent : public UNavLinkCustomComponent
	{
	public:
		void SetNavEnabled(bool bNewEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.AIPawnMovementComponent
	 * Size -> 0x0078 (FullSize[0x01B0] - InheritedSize[0x0138])
	 */
	class UAIPawnMovementComponent : public UPawnMovementComponent
	{
	public:
		class FScriptDelegate                                      OnMovementStatusChange;                                  // 0x0138(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPartialPath;                                       // 0x014C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVYA[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AcceptableRadius;                                        // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowStrafe;                                            // 0x0154(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6Z5[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotateSpeed;                                             // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PrintDebugLog;                                           // 0x015C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5B5[0x53];                                  // 0x015D(0x0053) MISSED OFFSET (PADDING)

	public:
		void StopMoveNow();
		void OnMovementStatusChange__DelegateSignature(int32_t Status);
		void MoveToLocation(const struct FVector& TargetPosition, int32_t Timeout, bool TeleportAfterTimeout);
		void MoveToActor(class AActor* TargetActor, int32_t Timeout, bool TeleportAfterTimeout);
		void LookAt(const struct FVector& TargetPosition);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.AITask_FlyTo
	 * Size -> 0x0028 (FullSize[0x0138] - InheritedSize[0x0110])
	 */
	class UAITask_FlyTo : public UAITask_MoveTo
	{
	public:
		unsigned char                                              UnknownData_2XMI[0x20];                                  // 0x0110(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACPathVolume*                                        Volume;                                                  // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnUpdateActorLocation();
		void OnFindFlyPathSuccess(TArray<struct FCPathNode> Path, ECPathfindingFailReason FailReason);
		void OnFindFlyPathFail(TArray<struct FCPathNode> Path, ECPathfindingFailReason FailReason);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.AlphaTestButton
	 * Size -> 0x0010 (FullSize[0x0448] - InheritedSize[0x0438])
	 */
	class UAlphaTestButton : public UButton
	{
	public:
		class UTexture2D*                                          HitTestTexture;                                          // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TestAlpha;                                               // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LU2H[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.AlphaTestParent
	 * Size -> 0x0040 (FullSize[0x02B0] - InheritedSize[0x0270])
	 */
	class UAlphaTestParent : public UBorder
	{
	public:
		class FScriptDelegate                                      OnMouseMoveEventEx;                                      // 0x0270(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonDownEventEx;                                // 0x0280(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseWheelEvent;                                       // 0x0290(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTI5[0x10];                                  // 0x02A0(0x0010) MISSED OFFSET (PADDING)

	public:
		void ReleasePress();
		struct FEventReply OnMouseEvent__DelegateSignature(const struct FVector2D& screenPos, const struct FVector2D& CursorDelta);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.ARider
	 * Size -> 0x0028 (FullSize[0x04E0] - InheritedSize[0x04B8])
	 */
	class AARider : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_ABXE[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_471Y[0x18];                                  // 0x04C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAITask_MoveTo*                                      MoveToTaskPtr;                                           // 0x04D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateSignificanceSettings(TMap<float, float> SignificanceThresholdsMap);
		class UAITask_MoveTo* MoveToLocation(const struct FVector& Position, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag ProjectGoalOnNavigation);
		class UAITask_MoveTo* MoveToActor(class AActor* ActorPtr, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag ProjectGoalOnNavigation);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomAnimNotifyState
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCustomAnimNotifyState : public UAnimNotifyState
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0030(0x0008) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   CurAnimation;                                            // 0x0038(0x0008) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ProcessEventByName(const class FName& EventName);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.AttackTracer
	 * Size -> 0x0118 (FullSize[0x0158] - InheritedSize[0x0040])
	 */
	class UAttackTracer : public UCustomAnimNotifyState
	{
	public:
		TMap<class FName, struct FVector>                          SocketName2HitBoxMap;                                    // 0x0040(0x0050) Edit, BlueprintReadOnly, NativeAccessSpecifierPrivate
		bool                                                       bRight;                                                  // 0x0090(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLeft;                                                   // 0x0091(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SR1O[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TraceProfileName;                                        // 0x0094(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDrawDebugTrace                                            DrawDebugTrace;                                          // 0x009C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOpenStuck;                                              // 0x009D(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PI84[0x2];                                   // 0x009E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StuckTime;                                               // 0x00A0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StuckPlayRate;                                           // 0x00A4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOpenBound;                                              // 0x00A8(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZFU[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BounceTime;                                              // 0x00AC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BouncePlayRate;                                          // 0x00B0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BounceBlendOutTime;                                      // 0x00B4(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          CurHitResult;                                            // 0x00B8(0x0088) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                CurHitSocketName;                                        // 0x0140(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             TracerHittedEvent;                                       // 0x0148(0x0010) BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnHitted(const struct FHitResult& HitResultArray, const class FName& HitSocketName);
		float GetAttackSpeedRate();
		bool CanStuck(const struct FHitResult& HitResult, class USkeletalMeshComponent* MeshComp);
		bool CanBounce(const struct FHitResult& HitResult, class USkeletalMeshComponent* MeshComp);
		void BeginStuck(class USkeletalMeshComponent* MeshComp);
		void BeginBounce(class USkeletalMeshComponent* MeshComp);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.AttackTracerInfo
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UAttackTracerInfo : public UObject
	{
	public:
		class USkeletalMeshComponent*                              Weapon;                                                  // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6XG[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHitResult>                                  HitResults;                                              // 0x0048(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              HitActors[0x50];                                         // 0x0058(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<struct FVector>                                     LastLocations;                                           // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHSS[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.AttackTracerMgr
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UAttackTracerMgr : public UObject
	{
	public:
		unsigned char                                              InBounce[0x50];                                          // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              InStuck[0x50];                                           // 0x0078(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<class USkeletalMeshComponent*, class UAttackTracerInfo*> AttackTracerInfoMap;                                     // 0x00C8(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void RemoveBlockStuck(class USkeletalMeshComponent* Mesh);
		void BeginStuck(float StuckTime, float StuckPlayRate, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Anim);
		void BeginBounce(float BounceTime, float BouncePlayRate, float BounceBlendOutTime, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Anim);
		void AddBlockStuck(class USkeletalMeshComponent* Mesh);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.BaseCheatChecker
	 * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
	 */
	class UBaseCheatChecker : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_WS9G[0x40];                                  // 0x00B0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSpeed;                                                // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxUpSpeed;                                              // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootHeight;                                              // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnterSwimDepth;                                          // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckSwim;                                              // 0x0104(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ZCT[0x3B];                                  // 0x0105(0x003B) MISSED OFFSET (PADDING)

	public:
		void SetZMoveCurve(class UCurveFloat* Curve);
		void SetYMoveCurve(class UCurveFloat* Curve);
		void SetXMoveCurve(class UCurveFloat* Curve);
		void SetMaxSpeed(float Speed);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.BaseWeapon
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class ABaseWeapon : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.BaseGunWeapon
	 * Size -> 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
	 */
	class ABaseGunWeapon : public ABaseWeapon
	{
	public:
		unsigned char                                              UnknownData_8XXQ[0x4];                                   // 0x0228(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WeaponType;                                              // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisFromCamera;                                           // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHaveScope;                                              // 0x0234(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSDI[0xB];                                   // 0x0235(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            GunFireRecede;                                           // 0x0240(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            GunFireRotator;                                          // 0x0250(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AdsFov;                                                  // 0x025C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CanvasPanelEvent
	 * Size -> 0x0088 (FullSize[0x01B8] - InheritedSize[0x0130])
	 */
	class UCanvasPanelEvent : public UCanvasPanel
	{
	public:
		bool                                                       _bMouseMoveShuoldDown;                                   // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _handleMouseMove;                                        // 0x0131(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _handleMouseButtonUpNotNeedDown;                         // 0x0132(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _handleMouseButtonUp;                                    // 0x0133(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _handleMouseButtonDown;                                  // 0x0134(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _handleMouseRightButtonDown;                             // 0x0135(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESF5[0x2];                                   // 0x0136(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x0138(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseRightButtonDownEvent;                             // 0x0148(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonUpEvent;                                    // 0x0158(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseHover;                                            // 0x0168(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseMoveEvent;                                        // 0x0178(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseLeaveEvent;                                       // 0x0188(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnFocusLost;                                             // 0x0198(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanDrop;                                                // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAR1[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _DropType;                                               // 0x01AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLGC[0x8];                                   // 0x01B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CharacterCheatChecker
	 * Size -> 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
	 */
	class UCharacterCheatChecker : public UBaseCheatChecker
	{
	public:
		unsigned char                                              UnknownData_Z8IV[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SessionMgr
	 * Size -> 0x0558 (FullSize[0x0580] - InheritedSize[0x0028])
	 */
	class USessionMgr : public UObject
	{
	public:
		unsigned char                                              UnknownData_82PC[0x558];                                 // 0x0028(0x0558) MISSED OFFSET (PADDING)

	public:
		void Tick();
		void Stop();
		void Start();
		void RemoveSession(class USession* pSession);
		class UObject* Listen(const class FString& strHost, uint32_t Port, uint32_t nMaxCount, uint32_t connectedAliveTimeout);
		class UObject* CreateSession(const class FString& strHost, uint32_t Port, int32_t connectTimeOut);
		class UObject* CreatePingSession(const class FString& strIp, int32_t Port);
		void AddSession(class USession* pSession);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.ClientOnlineMgr
	 * Size -> 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
	 */
	class UClientOnlineMgr : public USessionMgr
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomAttributeSet
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UCustomAttributeSet : public UAttributeSet
	{
	public:
		unsigned char                                              UnknownData_X1ZY[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (PADDING)

	public:
		struct FGameplayAbilityActorInfo K2_GetActorInfo();
		struct FGameplayAttribute GetPropertyByName(class UClass* AttributeSetClass, const class FName& InName);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CombatAttributeSet
	 * Size -> 0x0548 (FullSize[0x05A0] - InheritedSize[0x0058])
	 */
	class UCombatAttributeSet : public UCustomAttributeSet
	{
	public:
		unsigned char                                              UnknownData_W3LG[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAttributeData                              ExtraProvideShieldPercent;                               // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              AllMagicalResistance;                                    // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              LengthenHealPercent;                                     // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              AllMagicalDamageIncrease;                                // 0x00A8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MaxMagicAdditive;                                        // 0x00B8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MagicGainSpeedAdditive;                                  // 0x00C8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              FinalAttackAddPercent;                                   // 0x00D8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ReloadSpeed;                                             // 0x00E8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MeleeReduce;                                             // 0x00F8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ProjectileReduce;                                        // 0x0108(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              GainEnergySpeed;                                         // 0x0118(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              GainManaSpeed;                                           // 0x0128(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              Energy;                                                  // 0x0138(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MaxEnergy;                                               // 0x0148(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              CoolingReduction;                                        // 0x0158(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              EvilDamageIncrease;                                      // 0x0168(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              GhostDamageIncrease;                                     // 0x0178(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              CreatureDamageIncrease;                                  // 0x0188(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              Heal;                                                    // 0x0198(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              EquipSpeed;                                              // 0x01A8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              InteractionSpeed;                                        // 0x01B8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              BehaviorAudioCoefficient;                                // 0x01C8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              HearRangeCoefficient;                                    // 0x01D8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              SeeRangeCoefficient;                                     // 0x01E8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              Mana;                                                    // 0x01F8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MaxMana;                                                 // 0x0208(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              Anger;                                                   // 0x0218(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MaxAnger;                                                // 0x0228(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              GainAngerSpeed;                                          // 0x0238(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              PhysicalAttack;                                          // 0x0248(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MagicalAttack;                                           // 0x0258(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              Armor;                                                   // 0x0268(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MagicResistance;                                         // 0x0278(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              PhysicalResistance;                                      // 0x0288(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ArcaneResistance;                                        // 0x0298(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              FireResistance;                                          // 0x02A8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              IceResistance;                                           // 0x02B8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              LightningResistance;                                     // 0x02C8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              HolyResistance;                                          // 0x02D8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              PoisonResistance;                                        // 0x02E8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              DarkResistance;                                          // 0x02F8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ArmorPenetration;                                        // 0x0308(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ArmorPenetrationPercent;                                 // 0x0318(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MagicPenetration;                                        // 0x0328(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MagicPenetrationPercent;                                 // 0x0338(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              AttackSpeed;                                             // 0x0348(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              CastSpeed;                                               // 0x0358(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              HeadDamageReducePercent;                                 // 0x0368(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              BodyDamageReducePercent;                                 // 0x0378(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ArmsLegsDamageReducePercent;                             // 0x0388(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ShieldDamageReducePercent;                               // 0x0398(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              HeadDamageIncrease;                                      // 0x03A8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              BodyDamageIncrease;                                      // 0x03B8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ArmsLegsDamageIncrease;                                  // 0x03C8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ShieldDamageIncrease;                                    // 0x03D8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              PhysicalDamageIncrease;                                  // 0x03E8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ArcaneDamageIncrease;                                    // 0x03F8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              FireDamageIncrease;                                      // 0x0408(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              IceDamageIncrease;                                       // 0x0418(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              LightningDamageIncrease;                                 // 0x0428(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              HolyDamageIncrease;                                      // 0x0438(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              PoisonDamageIncrease;                                    // 0x0448(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              DarkDamageIncrease;                                      // 0x0458(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              HealIncreasePercent;                                     // 0x0468(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MoveSpeed;                                               // 0x0478(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              PhysicalBloodsucking;                                    // 0x0488(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MagicalBloodsucking;                                     // 0x0498(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              PhysicalReboundDamage;                                   // 0x04A8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              PhysicalReboundDamagePercent;                            // 0x04B8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MagicalReboundDamage;                                    // 0x04C8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MagicalReboundDamagePercent;                             // 0x04D8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              BuffOvertime;                                            // 0x04E8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              DebuffReduceTime;                                        // 0x04F8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              HealReduceTime;                                          // 0x0508(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              DamageReduce;                                            // 0x0518(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              Shield;                                                  // 0x0528(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              RemainShield;                                            // 0x0538(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              ImpactForce;                                             // 0x0548(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              Damage;                                                  // 0x0558(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              Healing;                                                 // 0x0568(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              Health;                                                  // 0x0578(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayAttributeData                              MaxHealth;                                               // 0x0588(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JBX7[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetTeammateDamageReduction(class AActor* AvatarActor, int32_t GEId, float CurDamage);
		void OnRep_ShieldDamageReducePercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_ShieldDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_Shield(const struct FGameplayAttributeData& OldValue);
		void OnRep_SeeRangeCoefficient(const struct FGameplayAttributeData& OldValue);
		void OnRep_RemainShield(const struct FGameplayAttributeData& OldValue);
		void OnRep_ReloadSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_ProjectileReduce(const struct FGameplayAttributeData& OldValue);
		void OnRep_PoisonResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_PoisonDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalReboundDamagePercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalReboundDamage(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalBloodsucking(const struct FGameplayAttributeData& OldValue);
		void OnRep_PhysicalAttack(const struct FGameplayAttributeData& OldValue);
		void OnRep_MoveSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_MeleeReduce(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxMana(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxMagicAdditive(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxHealth(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxEnergy(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxAnger(const struct FGameplayAttributeData& OldValue);
		void OnRep_Mana(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicPenetrationPercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicPenetration(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicGainSpeedAdditive(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalReboundDamagePercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalReboundDamage(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalBloodsucking(const struct FGameplayAttributeData& OldValue);
		void OnRep_MagicalAttack(const struct FGameplayAttributeData& OldValue);
		void OnRep_LightningResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_LightningDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_LengthenHealPercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_InteractionSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_ImpactForce(const struct FGameplayAttributeData& OldValue);
		void OnRep_IceResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_IceDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_HolyResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_HolyDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_HearRangeCoefficient(const struct FGameplayAttributeData& OldValue);
		void OnRep_Health(const struct FGameplayAttributeData& OldValue);
		void OnRep_HealReduceTime(const struct FGameplayAttributeData& OldValue);
		void OnRep_HealIncreasePercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_Heal(const struct FGameplayAttributeData& OldValue);
		void OnRep_HeadDamageReducePercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_HeadDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_GhostDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_GainManaSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_GainEnergySpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_GainAngerSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_FireResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_FireDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_FinalAttackAddPercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_ExtraProvideShieldPercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_EvilDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_EquipSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_Energy(const struct FGameplayAttributeData& OldValue);
		void OnRep_DebuffReduceTime(const struct FGameplayAttributeData& OldValue);
		void OnRep_DarkResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_DarkDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_DamageReduce(const struct FGameplayAttributeData& OldValue);
		void OnRep_CreatureDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_CoolingReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_CastSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_BuffOvertime(const struct FGameplayAttributeData& OldValue);
		void OnRep_BodyDamageReducePercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_BodyDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_BehaviorAudioCoefficient(const struct FGameplayAttributeData& OldValue);
		void OnRep_AttackSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_ArmsLegsDamageReducePercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_ArmsLegsDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_ArmorPenetrationPercent(const struct FGameplayAttributeData& OldValue);
		void OnRep_ArmorPenetration(const struct FGameplayAttributeData& OldValue);
		void OnRep_Armor(const struct FGameplayAttributeData& OldValue);
		void OnRep_ArcaneResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_ArcaneDamageIncrease(const struct FGameplayAttributeData& OldValue);
		void OnRep_Anger(const struct FGameplayAttributeData& OldValue);
		void OnRep_AllMagicalResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_AllMagicalDamageIncrease(const struct FGameplayAttributeData& OldValue);
		float GetTeammateDamageReduction__Overridden(class AActor* AvatarActor, int32_t GEId, float CurDamage);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.ComboBoxStringEx
	 * Size -> 0x0028 (FullSize[0x1098] - InheritedSize[0x1070])
	 */
	class UComboBoxStringEx : public UComboBoxString
	{
	public:
		ETextJustify                                               Justification;                                           // 0x1070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hideScrollbar;                                           // 0x1071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBRS[0x2];                                   // 0x1072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWidgetTransform                                    DownArrowTransform;                                      // 0x1074(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EMenuPlacement                                             Placement;                                               // 0x1090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5ZK[0x7];                                   // 0x1091(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetPlacement(EMenuPlacement InPlacement);
		void SetDownArrowRenderTransform(const struct FWidgetTransform& InDownArrowTransform);
		void SetDownArrowAngle(float InAngle);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomAbilitySystemBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetGESpecContext(struct FGameplayEffectSpecHandle* SpecHandle, struct FGameplayEffectContextHandle* ContextHandle);
		void RemoveAllActiveGE_ClientCallOnly(class UAbilitySystemComponent* ASC);
		struct FGameplayEffectSpecHandle MakeSpecHandle(int32_t ID, class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
		struct FGameplayAbilityTargetDataHandle MakeGameplayAbilityTargetDataHandleFromSingleHitResult(const struct FHitResult& HitResults);
		struct FGameplayAbilityTargetDataHandle MakeGameplayAbilityTargetDataHandleFromHitResults(TArray<struct FHitResult> HitResults);
		struct FGameplayAbilityTargetDataHandle MakeGameplayAbilityTargetDataHandleFromActor(class AActor* Actor);
		struct FGameplayAbilityTargetDataHandle MakeAbilityTargetDataFromMeleeHitInfo(const struct FHitResult& HitResult, const class FName& SocketName);
		struct FGameplayAbilityTargetDataHandle MakeAbilityTargetDataFromInt(int32_t Data);
		struct FGameplayAbilityTargetDataHandle MakeAbilityTargetDataFromFireProjectileInfo(const struct FHitResult& HitResult, const struct FVector& InStartPos);
		void InitAttribute_ClientCallOnly(class UCombatAttributeSet* InTargetAttributeSet, TMap<class FString, float> InAttributes);
		struct FGameplayAbilityTargetData GetTargetDataFromHandle(struct FGameplayAbilityTargetDataHandle* Handle, int32_t Index);
		float GetSetByCallerMagnitudeFromGESpec(const struct FGameplayEffectSpec& EffectSpec, const struct FGameplayTag& DataTag, float DefaultIfNotFound);
		struct FGameplayEffectSpec GetGESpecFromSpecHandle(struct FGameplayEffectSpecHandle* SpecHandle);
		struct FGameplayEffectContext GetGEContext(struct FGameplayEffectContextHandle* ContextHandle);
		struct FActiveGameplayEffectHandle GetActiveGEHandleFromActiveGE(const struct FActiveGameplayEffect& ActiveGE);
		struct FGameplayAbilityTargetData_MeleeHitInfo ExtractMeleeHitInfoFromAbilityTargetData(const struct FGameplayAbilityTargetDataHandle& Handle, int32_t Index);
		int32_t ExtractIntFromAbilityTargetData(const struct FGameplayAbilityTargetDataHandle& Handle, int32_t Index);
		struct FHitResult ExtractHitResultAbilityTargetData(const struct FGameplayAbilityTargetDataHandle& Handle, int32_t Index);
		struct FGameplayAbilityTargetData_FireProjectileInfo ExtractFireProjectileInfoFromAbilityTargetData(const struct FGameplayAbilityTargetDataHandle& Handle, int32_t Index);
		struct FGameplayAbilityTargetDataHandle EffectContextGetTargetData(const struct FGameplayEffectContextHandle& EffectContext);
		void EffectContextAddTargetData(const struct FGameplayEffectContextHandle& EffectContextHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
		void ClearTargetData(struct FGameplayAbilityTargetDataHandle* TargetData);
		void ClearAllAbilities_ClientCallOnly(class UAbilitySystemComponent* ASC);
		void AddAttributeSet_ClientCallOnly(class UAbilitySystemComponent* ASC, class UAttributeSet* InAttributeSet);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomAbilitySystemComponent
	 * Size -> 0x0178 (FullSize[0x14F0] - InheritedSize[0x1378])
	 */
	class UCustomAbilitySystemComponent : public UAbilitySystemComponent
	{
	public:
		unsigned char                                              UnknownData_2I8Y[0x50];                                  // 0x1378(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAbilityCommit;                                         // 0x13C8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAbilityEnd;                                            // 0x13D8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameplayEffectApplied;                                 // 0x13E8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGEAppliedToTarget;                                     // 0x13F8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActiveGEAddedToSelf;                                   // 0x1408(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPeriodicGEExecuteOnSelf;                               // 0x1418(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPeriodicGEExecuteOnTarget;                             // 0x1428(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnImmunityBlockGE;                                       // 0x1438(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameplayEffectRemoved;                                 // 0x1448(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             PreGEExecuteDelegate;                                    // 0x1458(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             PostGEExecuteEvent;                                      // 0x1468(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShieldChangeEvent;                                     // 0x1478(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAbilityEndedEvent;                                     // 0x1488(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameplayTagChange;                                     // 0x1498(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCustomAbilityFailed;                                   // 0x14A8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameplayEffectApplied_Client;                          // 0x14B8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             PreGameplayEffectApplyToSelfEvent;                       // 0x14C8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             PreGameplayEffectApplyToTargetEvent;                     // 0x14D8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    ReviveOtherCount;                                        // 0x14E8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RX3R[0x4];                                   // 0x14EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void UnRegisterGameplayTagChangeEvent(const struct FGameplayTag& Tag, EGameplayTagEventType EventType);
		void SetMoveSpeedBaseValue(float NewValue);
		void SetAttributeValue(const struct FGameplayAttribute& Attribute, float NewValue);
		void RemoveGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void RemoveAllActiveGE();
		void RegisterGameplayTagChangeEvent(const struct FGameplayTag& Tag, const class FScriptDelegate& Callback, EGameplayTagEventType EventType);
		void RegisterGameplayAttributeValueChangeDelegate(const struct FGameplayAttribute& Attribute, const class FScriptDelegate& Callback);
		void OnGameplayEffectRemovedCallback(const struct FActiveGameplayEffect& AGE);
		void OnApplyGameplayEffectToTargetCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnApplyGameplayEffectCallback_Client(class UAbilitySystemComponent* Source, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Source, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
		void OnAbilityEndedCallback(const struct FAbilityEndedData& AbilityData);
		bool K2_TryActivateAbilityBySpecHandle(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool bAllowRemoteActivation);
		void K2_SetReplicationMode(EGameplayEffectReplicationMode NewReplicationMode);
		void K2_RemoveLooseGameplayTag(const struct FGameplayTag& GameplayTag, int32_t Count);
		void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag, bool isPrediction, int32_t ID);
		void K2_RemoveAbility(const struct FGameplayAbilitySpecHandle& Handle);
		void K2_RemoteEndOrCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, bool bWasCanceled);
		bool K2_IsCurShield(const struct FActiveGameplayEffectHandle& GEHandle);
		struct FGameplayAbilitySpecHandle K2_GiveAbility(class UClass* Ability, int32_t AbilityID, int32_t Lv, int32_t InputID);
		class UGameplayEffect* K2_GetGameplayEffectDefForHandle(const struct FActiveGameplayEffectHandle& Handle);
		struct FGameplayEffectSpec K2_GetActiveGameplayEffectSpec(const struct FActiveGameplayEffectHandle& Handle);
		struct FGameplayAbilitySpec K2_FindAbilitySpecFromHandle(const struct FGameplayAbilitySpecHandle& Handle);
		void K2_ExecuteGameplayCue_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext);
		void K2_CurrentMontageStop(float OverrideBlendOutTime);
		void K2_CancelAllAbilities(class UGameplayAbility* Ignore);
		void K2_AddLooseGameplayTag(const struct FGameplayTag& GameplayTag, int32_t Count);
		void K2_AddGameplayCue_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext);
		void ExecuteGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void CancelAbilityByClass(class UGameplayAbility* Ability);
		void AddGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomAbilitySystemGlobals
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UCustomAbilitySystemGlobals : public UAbilitySystemGlobals
	{
	public:
		struct FGameplayTag                                        ShareCooldownTag;                                        // 0x0260(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UCustomAbilitySystemGlobals* CustomGet();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomAnimNotify
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UCustomAnimNotify : public UAnimNotify
	{
	public:
		class UAnimSequenceBase*                                   CurAnimation;                                            // 0x0038(0x0008) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomBoxCollisionComponent
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class UCustomBoxCollisionComponent : public UBoxComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomCalculation
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UCustomCalculation : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_KX5T[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetTagSetByCaller(const struct FGameplayEffectSpec& Spec, struct FGameplayTag* InTag, float InDefaultValue);
		float GetSetByCaller(const struct FGameplayEffectSpec& Spec, class FName* InName, float InDefaultValue);
		float GetAttributeCaptureSpec(const struct FGameplayEffectSpec& Spec, class UClass* AttributeSetClass, const class FString& InName, EGameplayEffectAttributeCaptureSource InType);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomCapsuleComponent
	 * Size -> 0x0000 (FullSize[0x0470] - InheritedSize[0x0470])
	 */
	class UCustomCapsuleComponent : public UCapsuleComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomCommonButtonBase
	 * Size -> 0x0058 (FullSize[0x0C58] - InheritedSize[0x0C00])
	 */
	class UCustomCommonButtonBase : public UCommonButtonBase
	{
	public:
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0C00(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             HandleDoubleClicked;                                     // 0x0C10(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0C20(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x0C30(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCheckStateChanged;                                     // 0x0C40(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UCommonTextBlock*                                    Custom_Text;                                             // 0x0C50(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetCheckedState(ECheckBoxState InCheckedState, bool bPlaySound);
		bool IsChecked();
		ECheckBoxState GetCheckedState();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomGameplayAbility
	 * Size -> 0x0008 (FullSize[0x03B8] - InheritedSize[0x03B0])
	 */
	class UCustomGameplayAbility : public UGameplayAbility
	{
	public:
		unsigned char                                              UnknownData_2HR4[0x8];                                   // 0x03B0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SendTargetDataToServer(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag, bool bGenerateNewKey);
		void RemoveShareCooldown();
		void OnTaskFinished(class UGameplayTask* GameplayTask);
		void OnFindTaskDelegate(class UGameplayTask* GameplayTask, const class FString& DelegateName);
		void LuaOnGiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpec& Spec);
		struct FGameplayEffectSpecHandle LuaGetCostGameplayEffect();
		struct FGameplayEffectSpecHandle LuaGetCooldownGameplayEffect();
		bool LuaCommitAbility(bool InCreatePredictionWindow);
		struct FGameplayEffectContextHandle K2_MakeEffectContext();
		struct FGameplayAbilitySpecHandle K2_GetCurrentAbilitySpecHandle();
		struct FGameplayAbilitySpec K2_GetCurrentAbilitySpec();
		struct FGameplayAbilityActorInfo K2_GetCurrentAbilityActorInfo();
		struct FGameplayAbilityActivationInfo K2_GetCurrentAbilityActivationInfo();
		bool IsTaskFinished(class UGameplayTask* Task);
		void GetCooldownTime(float* TimeRemaining, float* CooldownDuration);
		struct FGameplayTag GetCooldownTag();
		void AddShareCooldown();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomGameplayCueManager
	 * Size -> 0x0058 (FullSize[0x0368] - InheritedSize[0x0310])
	 */
	class UCustomGameplayCueManager : public UGameplayCueManager
	{
	public:
		unsigned char                                              UnknownData_IYQZ[0x58];                                  // 0x0310(0x0058) MISSED OFFSET (PADDING)

	public:
		TArray<struct FGameplayEffectCue> FetchGameplayCueListOfGEId(int32_t GEId);
		TArray<struct FGameplayEffectCue> FetchGameplayCueListOfGEId__Overridden(int32_t GEId);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomGameplayCueNotify_Actor
	 * Size -> 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
	 */
	class ACustomGameplayCueNotify_Actor : public AGameplayCueNotify_Actor
	{
	public:
		unsigned char                                              UnknownData_2SCA[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomGameplayCueNotify_Static
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UCustomGameplayCueNotify_Static : public UGameplayCueNotify_Static
	{
	public:
		unsigned char                                              UnknownData_G9NR[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.CustomPlayerState
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class ACustomPlayerState : public APlayerState
	{
	public:
		unsigned char                                              UnknownData_DVZZ[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomAbilitySystemComponent*                       AbilitySystemComponent;                                  // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCombatAttributeSet*                                 CombatAttributeSet;                                      // 0x0338(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.DangerTriggerVolume
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class ADangerTriggerVolume : public ATriggerVolume
	{
	public:
		unsigned char                                              UnknownData_KX5P[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MidLevel;                                                // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HighLevel;                                               // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
		void Exit(class AActor* OtherActor);
		void Enter(class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.UIPanel
	 * Size -> 0x0068 (FullSize[0x0388] - InheritedSize[0x0320])
	 */
	class UUIPanel : public UCommonActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_9G1K[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LuaModule;                                               // 0x0328(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9I61[0x50];                                  // 0x0338(0x0050) MISSED OFFSET (PADDING)

	public:
		void ResetZOrderInViewPort(int32_t ZOrder);
		void LuaResetInputActions(class APlayerController* PC);
		void LuaRemoveMappingContext(class APlayerController* PC, class UInputMappingContext* MappingContext);
		void LuaRemoveActionBinding(int32_t InIndex);
		int32_t LuaRegisterUIActionBinding_Internal(const struct FDataTableRowHandle& InHandle, bool bDisplayInActionBar, int32_t InIndex);
		void LuaBindInputAction_Internal(class APlayerController* PC, class UInputAction* Action, ETriggerEvent TriggerEvent, const class FScriptDelegate& Callback);
		void LuaAddMappingContext(class APlayerController* PC, class APawn* Pawn, class UInputMappingContext* MappingContext, int32_t InPriority);
		void LuaAddActionBinding(int32_t InIndex);
		void CallLuaCommonUIFunction(int32_t InIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.DragDropWidget
	 * Size -> 0x00E0 (FullSize[0x0468] - InheritedSize[0x0388])
	 */
	class UDragDropWidget : public UUIPanel
	{
	public:
		bool                                                       bCanDrag;                                                // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanDrop;                                                // 0x0389(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7SZ[0x6];                                   // 0x038A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             _DragObject;                                             // 0x0390(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    _DragType;                                               // 0x0398(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bListEntry;                                              // 0x039C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanTouchMove;                                           // 0x039D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMoveScrollBox;                                          // 0x039E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KG9[0x1];                                   // 0x039F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ToDragTimes;                                             // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SafeZone;                                                // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      angleDrag;                                               // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDragPivot                                                 _DragPivot;                                              // 0x03AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZSJ[0x3];                                   // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnButtonUp;                                              // 0x03B0(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnButtonUpNoHandle;                                      // 0x03C0(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnButtonDown;                                            // 0x03D0(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRightButtonDown;                                       // 0x03E0(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class UUserWidget*                                         _CurCoverWidget;                                         // 0x03F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHandleHover;                                            // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MC5J[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDragDropWidget*                                     _CurDragVisualWidget;                                    // 0x0400(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnHoverChanged;                                          // 0x0408(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ES7J[0x50];                                  // 0x0418(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.EditableTextBoxEx
	 * Size -> 0x0040 (FullSize[0x0A80] - InheritedSize[0x0A40])
	 */
	class UEditableTextBoxEx : public UEditableTextBox
	{
	public:
		TArray<class FString>                                      _hookKeyDownNames;                                       // 0x0A40(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnKeyDown;                                               // 0x0A50(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      _hookKeyUpNames;                                         // 0x0A60(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnKeyUp;                                                 // 0x0A70(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		bool RemoveHookKeyUpName(const class FString& KeyName);
		bool RemoveHookKeyDownName(const class FString& KeyName);
		bool OnKeyUpEvent__DelegateSignature(const class FString& KeyName);
		bool OnKeyDownEvent__DelegateSignature(const class FString& KeyName, bool bShift, bool bCtrl, bool bAlt, bool bWin);
		bool AddHookKeyUpName(const class FString& KeyName);
		bool AddHookKeyDownName(const class FString& KeyName);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.EditableTextEx
	 * Size -> 0x0048 (FullSize[0x04A8] - InheritedSize[0x0460])
	 */
	class UEditableTextEx : public UEditableText
	{
	public:
		EEditInputType                                             _InputType;                                              // 0x0460(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RAB[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      _hookKeyDownNames;                                       // 0x0468(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnKeyDown;                                               // 0x0478(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      _hookKeyUpNames;                                         // 0x0488(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnKeyUp;                                                 // 0x0498(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		bool RemoveHookKeyUpName(const class FString& KeyName);
		bool RemoveHookKeyDownName(const class FString& KeyName);
		bool OnKeyUpEvent__DelegateSignature(const class FString& KeyName);
		bool OnKeyDownEvent__DelegateSignature(const class FString& KeyName, bool bShift, bool bCtrl, bool bAlt, bool bWin);
		bool AddHookKeyUpName(const class FString& KeyName);
		bool AddHookKeyDownName(const class FString& KeyName);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.EmptyObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEmptyObject : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.FloatingPawnMovement_ServerOnly
	 * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
	 */
	class UFloatingPawnMovement_ServerOnly : public UFloatingPawnMovement
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.FlyPathVolume
	 * Size -> 0x0000 (FullSize[0x03E0] - InheritedSize[0x03E0])
	 */
	class AFlyPathVolume : public ACPathVolume
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.FootPrintComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UFootPrintComponent : public UActorComponent
	{
	public:
		float                                                      MaxDeltaTime;                                            // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDeltaSize;                                            // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CheckStatus;                                             // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BB3[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		int32_t Size();
		bool IsInRange(const struct FVector& Location, int32_t Status, float Radius, float Height);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.FPSManager
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UFPSManager : public UObject
	{
	public:
		float                                                      CheckTime;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCI6[0x1C];                                  // 0x002C(0x001C) MISSED OFFSET (PADDING)

	public:
		void SetTargetMaxFps(unsigned char targetFps);
		void SetEnable(bool bEnable);
		void Init(unsigned char optimizeFps);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.FSMState
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UFSMState : public UObject
	{
	public:
		class UFSMSystem*                                          FSM;                                                     // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ActorOwner;                                              // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3STI[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)

	public:
		void BindMontageEndDelegate(bool BlendOut);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.FSMSystem
	 * Size -> 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
	 */
	class UFSMSystem : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1IHW[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EStateType, class UFSMState*>                         StateMap;                                                // 0x00B8(0x0050) NativeAccessSpecifierPublic
		TArray<class UFSMState*>                                   Stack;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UFSMState*                                           CurState;                                                // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimInstance*                                       CurAnimInstance;                                         // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void Start(class UAnimInstance* AnimInstance, EStateType Type);
		void ServerChangeState(EStateType Type, EStateType nextType);
		void MultiCastChangeState(EStateType Type, EStateType nextType);
		void ChangeState(EStateType Type, EStateType nextType);
		void AddState(EStateType Type, class UClass* StateClass);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.GameplayCueNotify_Burst
	 * Size -> 0x0200 (FullSize[0x0248] - InheritedSize[0x0048])
	 */
	class UGameplayCueNotify_Burst : public UCustomGameplayCueNotify_Static
	{
	public:
		struct FGameplayCueNotify_SpawnCondition                   DefaultSpawnCondition;                                   // 0x0048(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayCueNotify_PlacementInfo                    DefaultPlacementInfo;                                    // 0x0080(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGameplayCueNotify_BurstEffects                     BurstEffects;                                            // 0x00A8(0x01A0) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		void OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.GridPanelEx
	 * Size -> 0x0078 (FullSize[0x01C8] - InheritedSize[0x0150])
	 */
	class UGridPanelEx : public UGridPanel
	{
	public:
		struct FVector2D                                           evenRowBegin;                                            // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           oddRowBegin;                                             // 0x0158(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ItemInter;                                               // 0x0160(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemClass;                                               // 0x0168(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ScrollSizeXMax;                                          // 0x0170(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ScrollSizeYMax;                                          // 0x0171(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_450C[0x2];                                   // 0x0172(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           TestNum;                                                 // 0x0174(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       handleMouse;                                             // 0x017C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E569[0x3];                                   // 0x017D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x0180(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonUpEvent;                                    // 0x0190(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseMoveEvent;                                        // 0x01A0(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseLeaveEvent;                                       // 0x01B0(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNBD[0x8];                                   // 0x01C0(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FEventReply OnMouseEvent__DelegateSignature(const struct FVector2D& screenPos, const struct FVector2D& CursorDelta);
		class UWidget* AddItem(int32_t nId, int32_t InRow, int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.HubClientMgr
	 * Size -> 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
	 */
	class UHubClientMgr : public USessionMgr
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.ImageGlobal
	 * Size -> 0x0008 (FullSize[0x0218] - InheritedSize[0x0210])
	 */
	class UImageGlobal : public UImage
	{
	public:
		int32_t                                                    _imageid;                                                // 0x0210(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZYK[0x4];                                   // 0x0214(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.ImageMouseEvent
	 * Size -> 0x0078 (FullSize[0x0288] - InheritedSize[0x0210])
	 */
	class UImageMouseEvent : public UImage
	{
	public:
		bool                                                       _bMouseMoveShuoldDown;                                   // 0x0210(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _handleMouseMove;                                        // 0x0211(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _handleMouseButtonUp;                                    // 0x0212(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _handleMouseButtonUpNotNeedDown;                         // 0x0213(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonUpEvent;                                    // 0x0214(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonDownEventEx;                                // 0x0224(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseWheelEvent;                                       // 0x0234(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseMoveEvent;                                        // 0x0244(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseLeaveEvent;                                       // 0x0254(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseEnterEvent;                                       // 0x0264(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       _SyncInputTouch;                                         // 0x0274(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEB3[0x13];                                  // 0x0275(0x0013) MISSED OFFSET (PADDING)

	public:
		void ReleasePress();
		struct FEventReply OnMouseEvent__DelegateSignature(const struct FVector2D& screenPos, const struct FVector2D& CursorDelta, int32_t buttonIndex);
		void DrawLine(bool bDraw, const struct FVector2D& pos1, const struct FVector2D& pos2, float fInter, float nPerDis, float Thickness, const struct FLinearColor& Color);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.IrregularButton
	 * Size -> 0x0010 (FullSize[0x0448] - InheritedSize[0x0438])
	 */
	class UIrregularButton : public UButton
	{
	public:
		class UTexture2D*                                          AdvancedHitTexture;                                      // 0x0438(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AdvancedHitAlpha;                                        // 0x0440(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S06J[0x4];                                   // 0x0444(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetAdvancedHitTexture(class UTexture2D* InTexture);
		void SetAdvancedHitAlpha(int32_t InAlpha);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.LerpMoveActor
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class ALerpMoveActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_E59S[0x10];                                  // 0x0228(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.LocalizationEditorUtilityActor
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class ALocalizationEditorUtilityActor : public AActor
	{
	public:
		struct FDirectoryPath                                      DirectoryPath;                                           // 0x0228(0x0010) Edit, NativeAccessSpecifierPrivate

	public:
		void SetNoneTranslateChineseToEmpty();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.LuaBTDecorator
	 * Size -> 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
	 */
	class ULuaBTDecorator : public UBTDecorator_BlueprintBase
	{
	public:
		unsigned char                                              UnknownData_1461[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LuaModule;                                               // 0x00A8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.LuaBTService
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class ULuaBTService : public UBTService_BlueprintBase
	{
	public:
		unsigned char                                              UnknownData_527U[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LuaModule;                                               // 0x00A0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.LuaBTTaskNode
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class ULuaBTTaskNode : public UBTTask_BlueprintBase
	{
	public:
		unsigned char                                              UnknownData_QYE4[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LuaModule;                                               // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.LuaManger
	 * Size -> 0x0430 (FullSize[0x0458] - InheritedSize[0x0028])
	 */
	class ULuaManger : public UObject
	{
	public:
		unsigned char                                              UnknownData_XIBM[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              NeedNotifyClasses[0x50];                                 // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty
		class FScriptDelegate                                      OnLoginCallBack;                                         // 0x0090(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnLogOutCallBack;                                        // 0x00A0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDN7[0x50];                                  // 0x00B0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnBatteryChangeState;                                    // 0x0100(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBQ0[0x20];                                  // 0x0110(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnAntiAddictionStateChange;                              // 0x0130(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LO90[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnNetDiagnosisCallback;                                  // 0x0150(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FHY[0x50];                                  // 0x0160(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnWebViewUrlClosed;                                      // 0x01B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnWebViewOpenUrlError;                                   // 0x01C0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFK8[0x80];                                  // 0x01D0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnShowExitGameDialog;                                    // 0x0250(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NJL[0x10];                                  // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGetSdkFriendCallback;                                  // 0x0270(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYEL[0x100];                                 // 0x0280(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, class FScriptDelegate>                 Class2RelevantChangeCallBack;                            // 0x0380(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8V0C[0x30];                                  // 0x03D0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWindowActiveEvent;                                     // 0x0400(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWindowDeactiveEvent;                                   // 0x0410(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		bool                                                       bNeedTranslation;                                        // 0x0420(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9U64[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACPathVolume*>                                FlyPathVolumes;                                          // 0x0428(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68N0[0x20];                                  // 0x0438(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnCancelDragWidget(class UObject* pDragObj, int32_t nDragType, class UUserWidget* pTopParent);
		void SetPlatformInfo(int32_t nPlatformId, const class FString& ProjectID, const class FString& channelId, const class FString& DeviceID);
		void TickInLua(float DeltaSeconds);
		void OnDownloadComplete(const class FString& strUrl, bool bSuccess, const class FString& contentOrsavePath, bool bSaveFile, int32_t errorCode);
		void OnBeginDragWidget(class UObject* pDragObj, int32_t nDragType, class UUserWidget* pTopParent, class UDragDropWidget* _CurDragVisualWidget);
		void OnCoverWidgetChange(class UUserWidget* pTopParent, class UUserWidget* coverPanel, class UDragDropWidget* coverObj, class UDragDropWidget* dragObj, int32_t nDragType, int32_t nDropType);
		void OnLevelUnloadComplete(class UWorld* World, const class FString& worldName, bool bSessionEnded, bool bCleanupResources);
		bool OnWigetMouseLeave(class UWidget* topwidget, class UUserWidget* Widget);
		void OnAxisKey(class UObject* Widget, const class FString& KeyName, float AxisValue, const struct FVector2D& Touch1, const struct FVector2D& Touch2);
		void DragWidget(class UObject* pDragObj, int32_t nDragType, int32_t nDropType, class UWidget* pDrop, class UUserWidget* pTopParent);
		bool OnWigetMouseButtonMove(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos, const struct FVector2D& CursorDelta);
		void Start();
		void OnPressKey(const class FString& KeyName);
		void OnDsNetWorkFailure(class UWorld* World, const class FString& worldName, class UNetDriver* NetDriver, int32_t nailureType, const class FString& ErrorString);
		bool OnWigetMouseButtonDown(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos);
		bool OnWigetRightMouseButtonDown(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos);
		void LuaFree();
		void Shutdown();
		bool OnWigetMouseButtonUp(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos);
		void LuaReportLogToGameServer(const class FString& V);
		void OnLevelLoaded(class UWorld* pWorld, const class FString& LevelName);
		void OnShortcutKey(class UObject* Widget, const class FString& KeyName, bool bShift, bool bAlt, bool bCtrl, bool bCmd, int32_t InputEvent);
		void Init();
		void WriteIniFile(const class FString& strSection, const class FString& Key, const class FString& Value);
		void WaitAndFork();
		void VerifyActivationCode(const class FString& strCode);
		void UploadLog(const class FString& FilePath, uint64_t roleid, const class FString& roleName, const class FScriptDelegate& updateCallback);
		void UploadException(const class FString& Name, const class FString& Reason, const class FString& StackTrace);
		void UpdateToken(const class FString& Token);
		void UpdatePostion(double posX, double posY, double posZ);
		bool UnZip(const class FString& FilePath, const class FString& destDir, bool bSoZip, bool bDeleteFile);
		void UnregisterSettingInputProcess();
		int32_t UnMountSavePaks(bool bAutoDelete);
		void UnLoadWorldStreamLevel(class UObject* worldObject, const class FString& LevelName, bool bShouldBlockOnLoad);
		void UnLoadStreamLevel(const class FString& LevelName, bool bShouldBlockOnLoad);
		void ToGc();
		void TickInLua__Overridden(float DeltaSeconds);
		class FName SwitchWorld(const class FName& ToWorldContextHandle);
		void SwitchLogin(uint64_t userId, const class FScriptDelegate& OnSwitchAccoutBack);
		void StopDownload(const class FString& URL);
		void StartListen(int32_t Port);
		void StartDownloadRange(const class FString& URL, const class FString& savePath, TArray<int32_t> nRanges, int32_t nRetryTimes, const class FString& strMd5, const class FScriptDelegate& Callback);
		void StartDownloadLargeFileRange(const class FString& URL, const class FString& savePath, TArray<class FString> nRanges, int32_t nRetryTimes, const class FString& strMd5, const class FScriptDelegate& Callback);
		void StartDownload(const class FString& URL, const class FString& savePath, int32_t nRetryTimes, int64_t nTotalSize, int32_t nThreadCount, const class FString& strMd5, const class FScriptDelegate& Callback);
		void Start__Overridden();
		void Shutdown__Overridden();
		void ShowRatingUi();
		void ShowRatingCustomUi();
		void ShowLoginPanel();
		void SetWorldTick(class UWorld* World, bool bEnable);
		void SetWorldRoomReceivelRange(int32_t disMin, int32_t disMax);
		void SetUserInfoForSecureService(const class FString& roleid, const class FString& serverid);
		void SetUserHasAgreedProtocolsUpdate();
		void SetUROParam(class USkeletalMeshComponent* Mesh, TArray<float>* thresholds);
		void SetTimer(float DeltaTime);
		void SetTexture2DPixel(class UTexture2D* Texture, int32_t X, int32_t Y, unsigned char Value);
		void SetTextBlock(class UObject* TextObject, const class FString& str);
		void SetSpeakerVolumeChangedCallback(const class FScriptDelegate& Callback);
		void SetShadowQuality(unsigned char quality);
		void SetScalabilityLevel(unsigned char Scalability);
		void SetSandbox(bool bEnable);
		void SetReportLogLevel(bool bReport, unsigned char eLevel);
		void SetRecordingVolume(int32_t Volume);
		void SetPlaybackVolume(int32_t Volume, const class FString& userId);
		void SetPlatformInfo__Overridden(int32_t nPlatformId, const class FString& ProjectID, const class FString& channelId, const class FString& DeviceID);
		void SetMSAA(unsigned char quality);
		void SetMinorLimit(const class FString& country, const class FString& Content, const class FScriptDelegate& OnSetMinorLimitBack);
		void SetMaterialQualityLevel(unsigned char quality);
		void SetLuaSearchPathAndOcPath(TArray<class FString> luaSearchPaths, const class FString& ocPath);
		void SetListAlignment(class UWidget* pWidget, int32_t Alignment);
		void SetInputMode(bool bUiOnly, bool bShowMouse, class UWidget* Widget, bool bLockMouse);
		void SetGetSpeakersCallback(const class FScriptDelegate& Callback);
		void SetEnableMotionData(bool enable);
		void SetDebug(bool bEnable);
		void SetCommandLine(const class FString& Command);
		bool ServerTravel(const class FString& InURL, bool bAbsolute, bool bShouldSkipGameNotify);
		void SendMsgToFriend(const class FString& friendID, const class FString& Msg);
		void SearchTinderActorsAt(const struct FVector& Location, float Distance, TArray<class AActor*>* Actors);
		void SearchPlayersAt(const struct FVector& Location, float Distance, TArray<class AActor*>* Actors);
		void SearchActorsAt(const struct FVector& Location, float Distance, TArray<class AActor*>* Actors, class UClass* Class);
		bool SdkIsInit();
		bool SaveStringToFile(const class FString& strFilePath, const class FString& strContent);
		void RestartApp();
		void ResetBodyInstanceDamping(class USkeletalMeshComponent* TargetMesh);
		bool RequestPermission(const class FString& strPermission, bool bFirstRequest);
		void Report(const class FString& EventName, const class FString& Key, const class FString& Value, const class FString& extraData);
		void RemoveWidgetFromGameViewPort(class UUserWidget* Widget);
		void RemoveUObjectFromRoot(class UObject* pObject);
		void RemoveTinderActor(class AActor* Actor);
		void RemoveShortcutKey(const class FString& KeyName, class UObject* obj, bool bShift, bool bAlt, bool bCtrl, bool bCmd, int32_t InputEvent);
		void RemoveReplicationFromNormalActors(class AActor* Actor);
		void RemoveObjectShortcutKeys(class UObject* obj);
		void RemoveKeyIniFile(const class FString& strSection, const class FString& Key);
		void RemoveFromAlwaysRelevant(class AActor* Actor, class APlayerController* PlayerController);
		void RemoveAxisKey(const class FString& KeyName, class UObject* obj);
		void RegisterSettingInputProcess();
		void RefreshMeshPose(class USkeletalMeshComponent* Mesh);
		void RefreshBindCommonUIKeys(TMap<class FName, struct FCommonUIRedirectKeyData>* RedirectMap);
		void ReDownloadErrorTask();
		void RealNameVerify(const class FString& URL, bool bMustSuccess, const class FScriptDelegate& realNameCallback);
		void QueryProducts(const class FString& productId, const class FScriptDelegate& OnQueryProductInfo);
		void QueryGoods(const class FString& roleid, const class FString& serverid, bool bCurrency, const class FScriptDelegate& OnQueryGoodsBack);
		bool QueryAgeGateStatus();
		class FString ProjectContentDir();
		void Pay(const class FString& productId, int32_t goodType, int32_t Amount, const class FString& Currency, const class FString& roleid, const class FString& roleName, int32_t roleLevel, int32_t roleVipLevel, const class FString& serverid, const class FString& extInfo, const class FScriptDelegate& OnPay);
		void PauseDownload(const class FString& URL);
		void OpenUserCenter();
		void OpenUrlBySdk(const class FString& Title, const class FString& URL, const class FString& extraData);
		void OpenUrl(const class FString& strUrl);
		void OpenLevel(const class FString& LevelName);
		void OpenDisregardForGC();
		void OpenAppSetting();
		bool OnWigetRightMouseButtonDown__Overridden(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos);
		bool OnWigetMouseLeave__Overridden(class UWidget* topwidget, class UUserWidget* Widget);
		bool OnWigetMouseButtonUp__Overridden(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos);
		bool OnWigetMouseButtonMove__Overridden(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos, const struct FVector2D& CursorDelta);
		bool OnWigetMouseButtonDown__Overridden(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos);
		void OnUnLoadStreamLevel(const class FString& worldName, class UWorld* pWorld);
		void OnShortcutKey__Overridden(class UObject* Widget, const class FString& KeyName, bool bShift, bool bAlt, bool bCtrl, bool bCmd, int32_t InputEvent);
		void OnRatingPraiseBtnClick();
		void OnRatingFeedbackBtnClick();
		void OnPressKey__Overridden(const class FString& KeyName);
		void OnPersistantLevelLoaded();
		void OnLoadStreamLevel(const class FString& worldName, class UWorld* pWorld);
		void OnLevelUnloadComplete__Overridden(class UWorld* World, const class FString& worldName, bool bSessionEnded, bool bCleanupResources);
		void OnLevelLoaded__Overridden(class UWorld* pWorld, const class FString& LevelName);
		void OnDsNetWorkFailure__Overridden(class UWorld* World, const class FString& worldName, class UNetDriver* NetDriver, int32_t nailureType, const class FString& ErrorString);
		void OnDownloadComplete__Overridden(const class FString& strUrl, bool bSuccess, const class FString& contentOrsavePath, bool bSaveFile, int32_t errorCode);
		void OnCoverWidgetChange__Overridden(class UUserWidget* pTopParent, class UUserWidget* coverPanel, class UDragDropWidget* coverObj, class UDragDropWidget* dragObj, int32_t nDragType, int32_t nDropType);
		void OnCancelDragWidget__Overridden(class UObject* pDragObj, int32_t nDragType, class UUserWidget* pTopParent);
		void OnBeginDragWidget__Overridden(class UObject* pDragObj, int32_t nDragType, class UUserWidget* pTopParent, class UDragDropWidget* _CurDragVisualWidget);
		void OnAxisKey__Overridden(class UObject* Widget, const class FString& KeyName, float AxisValue, const struct FVector2D& Touch1, const struct FVector2D& Touch2);
		class UObject* NewEmptyUObject(class UObject* Outer);
		void NetMpaStop(const class FString& stopLog);
		void NetMpaStart(const class FString& startLog);
		bool NetMpaAddAddress(const class FString& Host, int32_t Port, const class FString& contextId, bool bChangeHost, class FString* finalUrl, const class FScriptDelegate& Callback);
		void NetDiagnosis(const class FString& Target, int32_t Timeout, const class FScriptDelegate& Callback);
		void MountPaks();
		void ModifyAgeGateStatus(bool bEnable);
		bool MobileIsCharging();
		void MarkObjectToDestory(class UObject* pObject);
		TArray<int32_t> MapSignAlphaTest(class UImage* InMapImage, class UTexture2D* AdvancedHitTexture, unsigned char TestAlpha, TMap<int32_t, struct FVector2D> InPosMap);
		void LuaReportLogToGameServer__Overridden(const class FString& V);
		void LuaFree__Overridden();
		void LogOut();
		void Login(int32_t nLoginType);
		void Log(int32_t nLevel, class FString* strModuleName, class FString* strLogContent);
		void LoadWorldStreamLevel(class UObject* worldObject, const class FString& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad);
		class FName LoadWorld(const class FString& LevelPath);
		void LoadStreamLevel(const class FString& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad);
		void LoadResAsync(const class FString& ResPath, const class FScriptDelegate& Callback, int32_t Priority, bool bCallbackAutoRelease);
		class UObject* LoadRes(const class FString& ResPath);
		void LoadMultiResAsync(TArray<class FString>* ResPathList, const class FScriptDelegate& Callback, int32_t Priority, bool bCallbackAutoRelease);
		bool LoadMap(const class FName& WorldContextHandle, const class FString& mapPath);
		void LeaveRoom(const class FScriptDelegate& Callback);
		void JudgeAgeGate(const class FScriptDelegate& ageCallback);
		void JoinRoom(const class FString& roomId, const class FString& userId, const class FString& Token, int32_t roomType, int32_t getspeakerInterval, bool enableRangeAudio, const class FScriptDelegate& Callback);
		bool IsWorldReady(const class FName& WorldContextHandle);
		bool IsServerWorldReady(class UWorld* World);
		bool IsSandbox();
		bool IsPostionUnderWidget(class UWidget* pWidget, const struct FVector2D& AbsolutePos);
		bool IsPermissionGranted(const class FString& strPermission);
		bool IsNotificationsAllowed(const class FString& strChannelName);
		bool IsLinuxPlatform();
		bool IsGESpecContainsTag(const struct FGameplayEffectSpec& Spec, const class FName& InName);
		bool IsForkedChildProcess();
		bool IsEmulator();
		bool IsBsdkPay();
		bool IsAttributeChangeFromSpec(const struct FGameplayEffectSpec& Spec, const class FName& AttributeName);
		bool IsAllLoadingDone();
		void InviteFriend(const class FString& friendID, const class FString& InviteInfo);
		void Init__Overridden();
		void IncreaseBodyInstanceDamping(class USkeletalMeshComponent* TargetMesh, float MultiFactor, const class FName& InRootBoneName);
		bool HttpIsDownloading(const class FString& URL);
		void HttpDataWriteToDisk();
		void HasOpenFriendChainPermission(int32_t nPlatformId, const class FScriptDelegate& OnCallBack);
		class UWorld* GetWorldByWorldContextHandle(const class FName& WorldContextHandle);
		void GetWidgetTexts(class UWidget* pWidget, TArray<class UWidget*>* allText);
		struct FVector2D GetWidgetSize(class UWidget* pWidget);
		struct FVector2D GetWidgetRelativePos(const struct FVector2D& Pos, class UWidget* selfWidget, class UWidget* parentWidget);
		struct FVector2D GetWidgetAbsolutePostion(class UWidget* pWidget);
		struct FVector2D GetViewportSize();
		void GetUserAgreementUrlAndPrivacyPolicy(class FString* strUserAgreementUrl, class FString* strPrivacyPolicy);
		class UWidget* GetTopWidget(class UWidget* pCtrl);
		int64_t GetTick();
		int64_t GetTaskDownloadedSize(const class FString& strUrl);
		float GetTagSetByCaller(const struct FGameplayEffectSpec& Spec, struct FGameplayTag* InTag, float InDefaultValue);
		class FText GetStringWithTranslation(const class FString& KeyString);
		int32_t GetStringAsciiLen(const class FString& str);
		float GetSetByCaller(const struct FGameplayEffectSpec& Spec, class FName* InName, float InDefaultValue);
		class FString GetSdkOpenId();
		void GetSdkFriends();
		class FString GetRtcToken(const class FString& roomId, const class FString& userId, const class FString& appId, const class FString& appkey, int32_t nExpireTime);
		class UObject* GetResMgr();
		uint32_t GetProcessId();
		void GetPlatformInfo();
		class FString GetPersistentDownloadDir();
		class FString GetPerformanceLevel();
		class FString GetPakSavePath();
		class FString GetOperatingSystemId();
		uint32_t GetObjectUniqueID(class UObject* InActor);
		uint64_t GetMRam();
		float GetModAttributeMagnitudeFromSpec(const struct FGameplayEffectSpec& Spec, const struct FGameplayAttribute& Attribute);
		void GetMinorLimit(const class FString& country, const class FScriptDelegate& OnGetMinorLimitBack);
		class FString GetMaterialPath(class UMaterialInstance* mi);
		class FString GetMapName();
		class FString GetMachineId();
		class FString GetMacAddressString();
		class FString GetLuaSrcPath(class FString* luaScriptName);
		int32_t GetLuaMem();
		class FString GetLoginUserInfo();
		class UObject* GetListViewItemOfEntry(class UListView* ListView, class UUserWidget* entry);
		class UListViewBase* GetListViewFromListEntry(class UUserWidget* listEntry);
		class UUserWidget* GetListViewEntryOfItem(class UListView* ListView, class UObject* item);
		uint32_t GetListenPort();
		class ULevelStreaming* GetLevelByPackageName(class UObject* WorldContextObject, const class FString& InLongPackageName);
		class UInputComponent* GetInputComponent();
		class FString GetIniFile(const class FString& strSection, const class FString& Key, const class FString& Name);
		float GetImpactForceFromASC(class UAbilitySystemComponent* ASC);
		int64_t GetHttpDownloadedLen(class FString* downloadInfo);
		struct FVector GetHitPosFromGESpec(const struct FGameplayEffectSpec& Spec);
		void GetHistoryAccounts(const class FScriptDelegate& OnHistoryAccout);
		uint32_t GetGBRam();
		class UGameUserSettings* GetGameUserSettings();
		struct FGameplayTag GetGameplayTagByString(const class FName& InName);
		class UGameInstance* GetGameInstance();
		void GetFriendChainInfo(int32_t nPlatformId, const class FScriptDelegate& OnCallBack);
		class UFPSManager* GetFPSManager();
		uint16_t GetForkedChildProcessIndex();
		struct FVector GetFlyLocation(const struct FVector& StartPos, const struct FVector& Speed, float FlyTime, float FallTime, float Gravity);
		class ULocalPlayer* GetFirstLocalPlayer();
		void GetFilesFromPath(const class FString& FilePath, const class FString& FileExtension, TArray<class FString>* files);
		class FString GetFileContent(const class FString& strFilePath, bool bProjectFile);
		class FName GetCurrentWorldContextHandle();
		int32_t GetCurrentNetState();
		double GetCppTime();
		void GetCountryCode(const class FScriptDelegate& Callback);
		class FString GetCommandLine();
		class FString GetChannelOp();
		class UObject* GetCDO(class UClass* InClass);
		class AActor* GetCauserFromGESpec(const struct FGameplayEffectSpec& Spec);
		double GetBatteryLevel();
		uint64_t GetAvailableMRam();
		class UAttackTracerMgr* GetAttackTracerManager();
		void GetAntiAddictionState();
		void GetAllUText(class UUserWidget* pWidget, TArray<class UWidget*>* allText);
		void GetAllImageGlobal(class UUserWidget* pWidget, TArray<class UWidget*>* allImage);
		class UBTNode* GetActiveNodeFromBehaviorTree(class UBehaviorTreeComponent* pTree);
		int32_t GetActiveInstanceIdFromBehaviorTree(class UBehaviorTreeComponent* pTree);
		float GetActiveGETimeRemaining(const struct FActiveGameplayEffect& ActiveGameplayEffect);
		struct FActiveGameplayEffectHandle GetActiveGEHandle(const struct FActiveGameplayEffect& ActiveGameplayEffect);
		class FString GetActiveDeviceProfileName();
		bool GESpecGrantedHasTag(const struct FGameplayEffectSpec& GESpec, const class FName& TagName);
		void ForceStopBehaviorTree(class UBehaviorTreeComponent* BehaviorTreeComponent);
		void ForceRebuildKeymaps();
		bool FileIsExist(const class FString& FilePath, bool bProjectRelativeFile);
		void FetchNotice(int32_t nScene, const class FString& savePath, const class FString& strLanguage, const class FString& otherParams, const class FScriptDelegate& Callback);
		bool ExistPendingGame(const class FName& WorldContextHandle);
		void ExecuteCommand(const class FString& Command);
		class FString EncodeUrl(const class FString& URL);
		void EnableSpeakerphone(bool bEnable);
		void EnableMicrophone(bool bEnable);
		void EnableAudioReceive(const class FString& userId, bool bEnable);
		void EmptySectionIniFile(const class FString& strSection, bool bMatchKey);
		void EmptyOverrideMaterials(class UMeshComponent* Mesh);
		void DumpReplication();
		void DragWidget__Overridden(class UObject* pDragObj, int32_t nDragType, int32_t nDropType, class UWidget* pDrop, class UUserWidget* pTopParent);
		void DismissRatingCustomUi();
		bool DirectoryExists(const class FString& dirPath);
		bool DeletePak(const class FString& pakName);
		void DeleteHistoryAccount(uint64_t userId, const class FScriptDelegate& OnDeleteResult);
		void DeleteDir(const class FString& strPath);
		class UUserWidget* CreateUserWidgetFromPath(const class FString& ResPath, bool bAsync, const class FScriptDelegate& Callback, int32_t Priority, bool bCallbackAutoRelease);
		class UUserWidget* CreateUserWidget(class UClass* WidgetType);
		void CreateProc(const class FString& URL, const class FString& Params, bool bLaunchDetached, bool bLaunchHidden, bool bLaunchReallyHidden);
		class UObject* CreateObject(class UClass* Class);
		void CreateDir(const class FString& strPath);
		void CopyStringToClipboard(const class FString& StringToCopy);
		void Copy(class FString* str);
		void ContinueDownload(const class FString& URL);
		void CloseNetConnection(class UNetConnection* Connection);
		void CloseDisregardForGC();
		class FString CheckStringAsciiLen(const class FString& str, int32_t nLen);
		bool CheckProtocolVersion();
		bool CheckLevelStreamingDistanceVisible();
		bool CheckKeyDown(const class FString& KeyName);
		void ChannelGeneralAction(int32_t code);
		bool ChangeShortcutKey(const class FString& fromkeyName, const class FString& tokeyName, class UObject* obj, bool bShift, bool bAlt, bool bCtrl, bool bCmd, int32_t InputEvent);
		bool ChangePrecomputedVisibilityHandler(class UObject* WorldContextObject, const class FString& InLongPackageName);
		void ChangeLanguage(const class FString& langType);
		bool ChangeAxisKey(const class FString& ActionName, const class FString& fromkeyName, const class FString& tokeyName);
		bool ChangeActionKey(const class FString& ActionName, const class FString& fromkeyName, const class FString& tokeyName, bool bShift, bool bAlt, bool bCtrl, bool bCmd);
		void CDKeyExchange(const class FString& cdkey, const class FString& roleid, const class FString& serverid, const class FScriptDelegate& cdkeyCallback);
		bool CanAutoLogin();
		void BindWindowEvent();
		void AutoLogin();
		bool AllSubLevelIsLoaded();
		void AddWidgetToGameViewPort(class UUserWidget* Widget, int32_t nOrder);
		void AddUploadLogfileFullPaths(TArray<class FString> files);
		void AddUploadLogfileDirPath(const class FString& strDir);
		void AddUObjectToRoot(class UObject* pObject);
		void AddToReplicationNormalActors(class AActor* Actor);
		void AddToAlwaysRelevant(class AActor* Actor, class APlayerController* PlayerController);
		void AddTinderActor(class AActor* Actor);
		void AddShortcutKey(const class FString& KeyName, class UObject* obj, bool bShift, bool bAlt, bool bCtrl, bool bCmd, int32_t InputEvent);
		void AddRelevantChangeCallback(class UClass* Class, const class FScriptDelegate& Callback);
		void AddObjectToActorCluster(class UObject* Object, class AActor* Actor);
		void AddLocalNotification(const class FString& Title, const class FString& Content, uint64_t nDelaySeconds);
		void AddLevelNameToGPM(const class FString& strLevelName);
		void AddHitResultToTargetDataMsg(const struct FGameplayAbilityTargetDataHandle& Handle, const struct FHitResult& HitResult, const struct FGameplayEffectContextHandle& Context);
		void AddAxisKey(const class FString& KeyName, class UObject* obj);
		void AddActorToLevelCluster(class AActor* Actor);
		void AccountUnBind(int32_t nLoginType, const class FScriptDelegate& OnUnBindAccoutBack);
		void AccountForceRebend(int32_t nAccountType, int32_t Force, const class FScriptDelegate& OnBindAccoutBack);
		void AccountBind(int32_t nLoginType, const class FScriptDelegate& OnBindAccoutBack);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.MaskSlateWidgetStyle
	 * Size -> 0x0128 (FullSize[0x0158] - InheritedSize[0x0030])
	 */
	class UMaskSlateWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FMaskSlateStyle                                     WidgetStyle;                                             // 0x0030(0x0128) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.MaskWidget
	 * Size -> 0x01E0 (FullSize[0x02E8] - InheritedSize[0x0108])
	 */
	class UMaskWidget : public UWidget
	{
	public:
		struct FMaskSlateStyle                                     WidgetStyle;                                             // 0x0108(0x0128) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        BgColorAndOpacity;                                       // 0x0230(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BgColorAndOpacityDelegate;                               // 0x0240(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Brush;                                                   // 0x0250(0x0088) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZH5[0x10];                                  // 0x02D8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetMaskSizeXY(int32_t ClipIndex, float X, float Y);
		void SetMaskSize(int32_t ClipIndex, const struct FVector2D& Size);
		void SetMaskPosXY(int32_t ClipIndex, float X, float Y);
		void SetMaskPosSizeXYZW(int32_t ClipIndex, float X, float Y, float Z, float W);
		void SetMaskPosSize(int32_t ClipIndex, const struct FVector4& PosSize);
		void SetMaskPos(int32_t ClipIndex, const struct FVector2D& Pos);
		void SetMaskImage(int32_t ClipIndex, class UTexture2D* Tex);
		void SetBrushTintColor(const struct FSlateColor& TintColor);
		void SetBgOpacity(float InOpacity);
		void SetBgImage(class UTexture2D* Tex, bool bMatchSize);
		void SetBgColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		bool RemoveMaskClickClip(int32_t ClipIndex);
		class UMaterialInterface* GetDynamicMaterial();
		void EnableMaskClickClip(int32_t ClipIndex, bool enable);
		int32_t AddMaskClickClip(const struct FVector2D& Position, const struct FVector2D& Size, class UTexture2D* mask);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.MyShootCharacter
	 * Size -> 0x02D8 (FullSize[0x0790] - InheritedSize[0x04B8])
	 */
	class AMyShootCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_6VJ9[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_CVQY[0x28];                                  // 0x04C0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomAbilitySystemComponent*                       AbilitySystemComponent;                                  // 0x04E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCombatAttributeSet*                                 CombatAttributeSet;                                      // 0x04F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      StartupEffects;                                          // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class USpringArmComponent*                                 CameraBoom;                                              // 0x0508(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCameraComponent*                                    FollowCamera;                                            // 0x0510(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFSMSystem*                                          FSM;                                                     // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseTurnRate;                                            // 0x0520(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseLookUpRate;                                          // 0x0524(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MoveAxis;                                                // 0x0528(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAim;                                                    // 0x0530(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAds;                                                    // 0x0531(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUQU[0x2];                                   // 0x0532(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            SmallEyeRotation;                                        // 0x0534(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       EnableMove;                                              // 0x0540(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXJC[0x3];                                   // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MoveState;                                               // 0x0544(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0548(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantChangeWeapon;                                       // 0x054C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2RE[0x3];                                   // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Yaw;                                                     // 0x0550(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0554(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopAngle;                                               // 0x0558(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDownSmallEye;                                           // 0x055C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IWB8[0x3];                                   // 0x055D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InputAxisYaw;                                            // 0x0560(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PlayerControlRotation;                                   // 0x0564(0x000C) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Y5B[0xC];                                   // 0x0570(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InputAxisPitch;                                          // 0x057C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LeftHandTransform;                                       // 0x0580(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          RightHandTransform;                                      // 0x05B0(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          AimRelativeTohand;                                       // 0x05E0(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class ABaseGunWeapon*                                      WeaponLeft;                                              // 0x0610(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseGunWeapon*                                      WeaponRight;                                             // 0x0618(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABaseGunWeapon*                                      WeaponHand;                                              // 0x0620(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshSocket*                                 WeaponPosLeft;                                           // 0x0628(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshSocket*                                 WeaponPosRight;                                          // 0x0630(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshSocket*                                 WeaponPosLeg;                                            // 0x0638(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttacking;                                              // 0x0640(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYHW[0x7];                                   // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              FpsArms;                                                 // 0x0648(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFpsCamera;                                              // 0x0650(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ET5C[0x3];                                   // 0x0651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Acceleration;                                            // 0x0654(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PreviousVelocity;                                        // 0x0660(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasMovementInput;                                        // 0x066C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LINT[0x1B];                                  // 0x066D(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       MainAnimInstance;                                        // 0x0688(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YJP[0xC];                                   // 0x0690(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ControlRotationActorRotationDif;                         // 0x069C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             GunFireRecedeTarget;                                     // 0x06A8(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCJ7[0x4];                                   // 0x06B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EOverlayType                                               OverlayType;                                             // 0x06B8(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PP5O[0x7];                                   // 0x06B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultFov;                                              // 0x06C0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetFov;                                               // 0x06C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNearWeaponHitEvent;                                    // 0x06C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      Min_Moved_Square_Distance;                               // 0x06D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min_Delta_Roll;                                          // 0x06DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min_Delta_Pitch;                                         // 0x06E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min_Delta_Yaw;                                           // 0x06E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHealthChange;                                          // 0x06E8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMaxHealthChange;                                       // 0x06F8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnManaChange;                                            // 0x0708(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMaxManaChange;                                         // 0x0718(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAttributeChange;                                       // 0x0728(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAttributeSetInitFinish;                                // 0x0738(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSXL[0x48];                                  // 0x0748(0x0048) MISSED OFFSET (PADDING)

	public:
		void UpdateSignificanceSettings(TMap<float, float> SignificanceThresholdsMap);
		void UpdatePitchYaw();
		void UpdateDirection();
		void TwoFloatEvent__DelegateSignature(float PrevValue, float AfterValue);
		void SetUROParam(class USkeletalMeshComponent* M);
		void SetOverlayType(EOverlayType Type);
		void SetAllTickIntervals(float interval);
		void ServerSetControlRotation(const struct FRotator& Rotator);
		void ServerMoveAxis(const struct FVector2D& V);
		void ReSetWorldOrginPos();
		int32_t RemovePlayerMappedKey(const class FName& MappingName, bool bForceImmediately);
		void RemoveAllPlayerMappedKeys(bool bForceImmediately);
		void OpenSignificanceSystem();
		void OnReceiveAttributeChange();
		void OnNearWeaponHit__DelegateSignature(const struct FHitResult& HitInfo, const class FName& HitSocketName);
		void OnHandAttack();
		void OnGetHurt(class AActor* FromCharacter, int32_t DamageAttributeType, int32_t FromPlayerOrSystem);
		void OneStringTwoFloatEvent__DelegateSignature(const class FString& AttributeName, float PrevValue, float AfterValue);
		void OnAttributeSetInitFinish__DelegateSignature();
		void OnActorRotationChange(const struct FRotator& Rotator);
		void OnActorLocationChange(const struct FVector& Location);
		void MyAddControllerYawInput(float Val);
		void MyAddControllerPitchInput(float Val);
		void MoveRightCpp(float Value);
		void MoveForwardCpp(float Value);
		void LuaSetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);
		void LuaRemoveMappingContext(class UInputMappingContext* MappingContext);
		void LuaOnDie(class AActor* EffectInstigator, class AActor* EffectCauser, const struct FGameplayEffectSpec& EffectSpec, float EffectMagnitude, class AActor* AvatarActor);
		void LuaAddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority);
		void LocalInputConfirm();
		void LocalInputCancel();
		void K2_OnGetHurt(class AActor* FromCharacter, int32_t DamageAttributeType, int32_t FromPlayerOrSystem);
		struct FGameplayAbilitySpecHandle K2_GiveAbility(class UClass* Ability, int32_t InputID, int32_t Lv);
		void K2_AddAbilities();
		bool IsRightHandAttack();
		void InitCharacter();
		void InitAttributesFromLua(TMap<class FString, float> InAttributes);
		class USkeletalMeshComponent* GetRightHandHoldWeaponMesh();
		struct FKey GetPlayerMappedKey(const class FName& MappingName);
		float GetMaxHealth();
		struct FVector GetLocalVelocity();
		class USkeletalMeshComponent* GetLeftHandHoldWeaponMesh();
		float GetHealth();
		float GetAttributeValueByName(const class FName& AttributeName);
		class UAbilitySystemComponent* GetAbilitySystemComponent();
		void DoBindInputComponent();
		void Cheat_Invincible(bool bOpen);
		void CancelAim();
		void BindLuaFunction(class UInputAction* Action, ETriggerEvent TriggerEvent, const class FScriptDelegate& Callback);
		void AttributeSetInitFinish();
		int32_t AddPlayerMappedKey(const class FName& MappingName, const struct FKey& NewKey, bool bForceImmediately);
		void AddAbilities();
		void AbilityLocalInputReleased(int32_t AbilityEnum);
		void AbilityLocalInputPressed(int32_t AbilityEnum);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.PoolingManager
	 * Size -> 0x00B0 (FullSize[0x02D8] - InheritedSize[0x0228])
	 */
	class APoolingManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_OU4K[0x50];                                  // 0x0228(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, class FScriptDelegate>                 InitFuntionsMap;                                         // 0x0278(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FVector                                             InitPosition;                                            // 0x02C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TDX[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetInitFunction(class UClass* ActorClass, const class FScriptDelegate& Function);
		void RecycleActor(class AActor* Actor, const class FScriptDelegate& RecycleActorFunction);
		class AActor* GetActor(class UClass* ActorClass, const class FScriptDelegate& InitFunction);
		void ClearAll();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.ProgressBarExt
	 * Size -> 0x0208 (FullSize[0x0310] - InheritedSize[0x0108])
	 */
	class UProgressBarExt : public UWidget
	{
	public:
		struct FProgressBarStyle                                   WidgetStyle;                                             // 0x0108(0x01A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Percent;                                                 // 0x02A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFillMode                                                  BarFillType;                                             // 0x02AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDKJ[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartAngle;                                              // 0x02B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMarquee;                                              // 0x02B4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5QE[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BorderPadding;                                           // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FillColorAndOpacity;                                     // 0x02C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      PercentDelegate;                                         // 0x02D0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      StartAngleDelegate;                                      // 0x02E0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      FillColorAndOpacityDelegate;                             // 0x02F0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G9ZZ[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetPercent(float InPercent);
		void SetIsMarquee(bool InbIsMarquee);
		void SetFillColorAndOpacity(const struct FLinearColor& InColor);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.RadialMenu
	 * Size -> 0x0098 (FullSize[0x02F8] - InheritedSize[0x0260])
	 */
	class URadialMenu : public UUserWidget
	{
	public:
		int32_t                                                    CurrentSegmentID;                                        // 0x0260(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      fInterval;                                               // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           btnSize;                                                 // 0x0268(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClickRadiaMin;                                           // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClickRadiaMax;                                           // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, class URadialMenu_Button*>                   Buttons;                                                 // 0x0278(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02C8(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13EA[0x20];                                  // 0x02D8(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetButtonPath(const class FString& Path);
		void SetButtonCount(int32_t nCount);
		void PreselectButtonGamepad(float ThumbValue_X, float ThumbValue_Y);
		void OnHoverOver();
		void HoverOverEvent();
		void DisableButton(int32_t ActivateIndex);
		void Destructor();
		void DeactivateButtons();
		void CreateOneButton(int32_t Index, int32_t nButtonId, const class FString& iconPath, const class FString& tip);
		void CreateButtons(int32_t nCount);
		void ActivateButton(int32_t ActivateIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.RadialMenu_Button
	 * Size -> 0x02E0 (FullSize[0x0540] - InheritedSize[0x0260])
	 */
	class URadialMenu_Button : public UUserWidget
	{
	public:
		struct FSlateBrush                                         Normal;                                                  // 0x0260(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Disabled;                                                // 0x02E8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Active;                                                  // 0x0370(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredNormal;                                           // 0x03F8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredDisabled;                                         // 0x0480(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EButtonState                                               CurrentButtonState;                                      // 0x0508(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNDL[0x7];                                   // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              ButtonLook;                                              // 0x0510(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              ButtonIcon;                                              // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ButtonPosition;                                          // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TFO[0x1C];                                  // 0x0524(0x001C) MISSED OFFSET (PADDING)

	public:
		void SetPercent(float fPercent);
		void OnClicked();
		void ClickEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.RadialMultLevelMenu
	 * Size -> 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
	 */
	class URadialMultLevelMenu : public UUserWidget
	{
	public:
		TArray<struct FMultLevelMenuParam>                         MenuParams;                                              // 0x0260(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0270(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMenuHover;                                             // 0x0280(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMenuLeave;                                             // 0x0290(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8JPV[0x28];                                  // 0x02A0(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetButtonCount(int32_t nMenuLevel, int32_t nCount);
		void OnHoverOver();
		void HoverOverEvent();
		void DisableButton(int32_t menuLevel, int32_t ActivateIndex);
		void Destructor();
		void DeactivateButtons(int32_t menuLevel);
		class UObject* CreateOneButton(int32_t nMenuLevel, int32_t Index, int32_t nButtonId, const class FString& tip);
		void ActivateButton(int32_t menuLevel, int32_t ActivateIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.RecoilGraphLib
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URecoilGraphLib : public UBlueprintFunctionLibrary
	{
	public:
		class UDataTable* RPM_RemoveRow(class UDataTable* DataTable, const class FName& RowName);
		class UDataTable* RPM_AddRow(class UDataTable* DataTable, const class FName& RowName, const struct FRecoilGraph_Struct& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.ResMgr
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UResMgr : public UObject
	{
	public:
		unsigned char                                              UnknownData_EEIE[0xF0];                                  // 0x0028(0x00F0) MISSED OFFSET (PADDING)

	public:
		class UObject* SyncLoadRes(const class FString& ResPath);
		void AsyncLoadRes(const class FString& ResPath, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.RichTextBlockInlineDecorator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URichTextBlockInlineDecorator : public URichTextBlockDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SelfBaseJoyStrick
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class USelfBaseJoyStrick : public UWidget
	{
	public:
		TArray<struct FSelfTouchInputControl>                      Controls;                                                // 0x0108(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ActiveOpacity;                                           // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InactiveOpacity;                                         // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeUntilDeactive;                                       // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeUntilReset;                                          // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActivationDelay;                                         // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventRecenter;                                        // 0x012C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYPT[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartupDelay;                                            // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      inputScale;                                              // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJSA[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetInputScale(float Scale);
		void SetActiveOpacity(float fActiveOpacity);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SelfGameInstance
	 * Size -> 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
	 */
	class USelfGameInstance : public UGameInstance
	{
	public:
		void LoadSubLevels();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SelfGameMode
	 * Size -> 0x0000 (FullSize[0x02C8] - InheritedSize[0x02C8])
	 */
	class ASelfGameMode : public AGameModeBase
	{
	public:
		class FString OnPreLogin(const class FString& Options, const class FString& Address, const struct FUniqueNetIdRepl& UniqueId);
		class FString OnLogin(class APlayerController* PlayerController, const class FString& Options);
		class APlayerController* LuaSpawnPlayerController(ENetRole InRemoteRole, const class FString& Options);
		void LuaPostSeamlessTravel();
		void LuaGetSeamlessTravelActorList(bool bToTransition, TArray<class AActor*>* ActorList);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SelfJoyStrick
	 * Size -> 0x0088 (FullSize[0x01D0] - InheritedSize[0x0148])
	 */
	class USelfJoyStrick : public USelfBaseJoyStrick
	{
	public:
		struct FMargin                                             ShowRunMargin;                                           // 0x0148(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             RunCtrlRect;                                             // 0x0158(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      rushDisASqr;                                             // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnShowRunEvent;                                          // 0x016C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRunMouseUpEvent;                                       // 0x017C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnJoystickStart;                                         // 0x018C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnJoystickEnd;                                           // 0x019C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRush;                                                  // 0x01AC(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EF6[0x14];                                  // 0x01BC(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetThumbBarFix(bool bFix);
		void SetShowAutoRush(bool Brush);
		void ReleaseJoystick();
		void OnShowRun__DelegateSignature(bool ShowRun);
		struct FVector2D GetThumbPos(int32_t ControlIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SelfLocalPlayer
	 * Size -> 0x0050 (FullSize[0x02A8] - InheritedSize[0x0258])
	 */
	class USelfLocalPlayer : public ULocalPlayer
	{
	public:
		unsigned char                                              UnknownData_RQ92[0x50];                                  // 0x0258(0x0050) MISSED OFFSET (PADDING)

	public:
		void RemoveOption(const class FString& Key);
		void ClearAllOptions();
		void AddOption(const class FString& Key, const class FString& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SelfPlayerController
	 * Size -> 0x0020 (FullSize[0x05A8] - InheritedSize[0x0588])
	 */
	class ASelfPlayerController : public APlayerController
	{
	public:
		int64_t                                                    roleid;                                                  // 0x0588(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QKW[0x18];                                  // 0x0590(0x0018) MISSED OFFSET (PADDING)

	public:
		void ShowDamageNumber(float DamageAmount, class AActor* TargetCharacter, const struct FVector& Pos, const struct FGameplayEffectSpec& GESpec);
		void SetSessionMgr(class USessionMgr* pMgr);
		void SendToServer(TArray<unsigned char> Data);
		void SendToClient(TArray<unsigned char> Data);
		void SendToAllClients(TArray<unsigned char> Data);
		void LuaOnNetCleanup();
		void LuaFlushPressedKeys();
		void K2_ShowDamageNumber(float DamageAmount, class AActor* TargetCharacter, const struct FVector& Pos, const struct FGameplayEffectSpec& GESpec);
		class FString GetConnectIp(int32_t* nPort);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.Session
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class USession : public UObject
	{
	public:
		unsigned char                                              UnknownData_JE9A[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void Close();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SessionClient
	 * Size -> 0x00A8 (FullSize[0x00F0] - InheritedSize[0x0048])
	 */
	class USessionClient : public USession
	{
	public:
		class FScriptDelegate                                      OnConnected;                                             // 0x0048(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnConnectFailed;                                         // 0x0058(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnDisConnected;                                          // 0x0068(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OMVK[0x78];                                  // 0x0078(0x0078) MISSED OFFSET (PADDING)

	public:
		void SetSocketBufferSize(int32_t recvSize, int32_t writeSize);
		void SetAliveTimeout(int32_t nTimeout);
		void ResetIpAndConnect(const class FString& strIp, uint32_t nPort, int32_t connectTimeOut);
		bool ReConnect(int32_t connectTimeOut);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SessionPingClient
	 * Size -> 0x0268 (FullSize[0x02B0] - InheritedSize[0x0048])
	 */
	class USessionPingClient : public USession
	{
	public:
		unsigned char                                              UnknownData_URBN[0x268];                                 // 0x0048(0x0268) MISSED OFFSET (PADDING)

	public:
		void Ping(const class FString& strIp, int32_t Port);
		int32_t GetPing(const class FString& strIp);
		void CleanPings();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SessionServer
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class USessionServer : public USession
	{
	public:
		class FScriptDelegate                                      OnRecvConnected;                                         // 0x0048(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6FX[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.ShortcutkeyMgr
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UShortcutkeyMgr : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZQAV[0xA8];                                  // 0x0028(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SimpleReplicationConnectionDriver
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class USimpleReplicationConnectionDriver : public UReplicationConnectionDriver
	{
	public:
		class USimpleReplicationDriver*                            ReplicationDriver;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetConnection*                                      NetConnection;                                           // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PendingReplicateActors[0x50];                            // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SimpleReplicationDriver
	 * Size -> 0x0598 (FullSize[0x05C0] - InheritedSize[0x0028])
	 */
	class USimpleReplicationDriver : public UReplicationDriver
	{
	public:
		unsigned char                                              UnknownData_SQ0O[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNetDriver*                                          NetDriver;                                               // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USimpleReplicationConnectionDriver*>          ConnectionDrives;                                        // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UWorld*                                              World;                                                   // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x0060(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MapSize;                                                 // 0x0064(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RelevantCheckTime;                                       // 0x0068(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NearNetCullDistance;                                     // 0x006C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiddleCullDistance;                                      // 0x0070(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarCullDistance;                                         // 0x0074(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWE2[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DirtyActors[0x50];                                       // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_UX4Q[0xA0];                                  // 0x00D8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<uint16_t>                                           GridDiffs;                                               // 0x0178(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              AlwaysRelevantActors[0x50];                              // 0x0188(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              DirtyAlwaysRelevantActors[0x50];                         // 0x01D8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ActorsWithoutNetConnection[0x50];                        // 0x0228(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              NormalActors[0x50];                                      // 0x0278(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              CanSeeActors[0x50];                                      // 0x02C8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ForceUpdateConnectionDrivers[0x50];                      // 0x0318(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ForceCloseConnectionDrivers[0x50];                       // 0x0368(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              PendingFlushNetConnections[0x50];                        // 0x03B8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_ZGOO[0x118];                                 // 0x0408(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AActor*, int32_t>                               NotifyActor2Number;                                      // 0x0520(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8X8U[0x50];                                  // 0x0570(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SmallEyeJoyStrick
	 * Size -> 0x0038 (FullSize[0x0180] - InheritedSize[0x0148])
	 */
	class USmallEyeJoyStrick : public USelfBaseJoyStrick
	{
	public:
		float                                                      DeadZone;                                                // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnJoystickStart;                                         // 0x014C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnJoystickEnd;                                           // 0x015C(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9ZC[0x14];                                  // 0x016C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetTurnValue(float fInDeadZone, float fInInitValue, float fInPitchInputScale);
		void ReleaseJoystick();
		void OnShowRun__DelegateSignature(bool ShowRun);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SmoothSyncComponent
	 * Size -> 0x00A8 (FullSize[0x0158] - InheritedSize[0x00B0])
	 */
	class USmoothSyncComponent : public UActorComponent
	{
	public:
		float                                                      AllowNetDelay;                                           // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationLerpTime;                                        // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncRotation;                                           // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationFollowVelocity;                                 // 0x00B9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationFollowVelocityIgnoreRoll;                       // 0x00BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationFollowVelocityIgnorePitch;                      // 0x00BB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationFollowVelocityIgnoreYaw;                        // 0x00BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExtrapolation;                                          // 0x00BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6X53[0x2];                                   // 0x00BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExtrapolationTime;                                       // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFixedRotationSpeed;                                  // 0x00C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPLN[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FixedRotationSpeed;                                      // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStickGround;                                            // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBF4[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Height;                                                  // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixSlope;                                               // 0x00D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSweep;                                                  // 0x00D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawServerPath;                                          // 0x00D6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanSetPosImmediately;                                   // 0x00D7(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4N1[0x70];                                  // 0x00D8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ServerFps;                                               // 0x0148(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QO7Q[0xC];                                   // 0x014C(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetLastReceivedPos(const struct FVector& Pos);
		void SetEnable(bool enable);
		void ServerSetRotationFollowVelocity(bool follow);
		void ServerSendRotationToEveryone(uint16_t Roll, uint16_t Pitch, uint16_t Yaw);
		void ServerSendResetPosToEveryone(const struct FVector& Pos, bool bLerp);
		void ServerSendPosToEveryone(const struct FVector& Pos, bool bLerp);
		void OnRep_ServerFps();
		struct FVector GetVelocity();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.SyncMoveComponent
	 * Size -> 0x0198 (FullSize[0x0390] - InheritedSize[0x01F8])
	 */
	class USyncMoveComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_07A6[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		class UClass*                                              CheatCheckerClass;                                       // 0x0200(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExtrapolation;                                          // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZ3E[0x3];                                   // 0x0209(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PosSyncInterval;                                         // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetworkShakeTolerance;                                   // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncRotation;                                           // 0x0214(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39BR[0x3];                                   // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotationSyncInterval;                                    // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationFollowVelocity;                                 // 0x021C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationFollowVelocityIgnoreRoll;                       // 0x021D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationFollowVelocityIgnorePitch;                      // 0x021E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationFollowVelocityIgnoreYaw;                        // 0x021F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PitchLimit;                                              // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RollLimit;                                               // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSync;                                             // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableServerAutoSend;                                   // 0x0231(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableLog;                                              // 0x0232(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJ6J[0x105];                                 // 0x0233(0x0105) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ServerTimestamp;                                         // 0x0338(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   sendPosMsgIndex;                                         // 0x0340(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QJDG[0x44];                                  // 0x0344(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EStateType                                                 CurState;                                                // 0x0388(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4CNJ[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetEnableServerAutoSend(bool enable);
		void SetCurState(EStateType State);
		void ServerSetPos_Multicast(const struct FVector& Pos);
		void ServerSendRotation_Multicast(int16_t Roll, int16_t Pitch, int16_t Yaw);
		void ServerSendPos_Multicast(const struct FVector& Pos);
		void ServerSendMsgIndex_Multicast(uint32_t msgIndex);
		void SendRotation_Server(const struct FRotator& Rotator);
		void SendPosition_Server(const struct FVector_NetQuantize100& Pos, const struct FVector_NetQuantize100& Velocity, double Timestamp, EStateType State, uint32_t sendPosMsgIndex);
		void SendPosition();
		void RefreshSendPosMsgIndex_Multicast();
		void RefreshMsgIndex();
		void OnRep_ServerTimestamp();
		struct FVector GetVelocity();
		EStateType GetCurState();
		float GetClientTimestamp();
		float GetClientPlatformTimestamp();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.TileViewEx
	 * Size -> 0x0000 (FullSize[0x03B8] - InheritedSize[0x03B8])
	 */
	class UTileViewEx : public UTileView
	{
	public:
		void SetListAlignment(EListItemAlignment Alignment);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.TouchTurn
	 * Size -> 0x0050 (FullSize[0x0158] - InheritedSize[0x0108])
	 */
	class UTouchTurn : public UWidget
	{
	public:
		float                                                      YawScale;                                                // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchScale;                                              // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedUpLimitPixel;                                       // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitValue;                                               // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlopeValue;                                              // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InputPitchScale;                                         // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreTextureSize;                                      // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05P3[0x3];                                   // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x0124(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonUpEvent;                                    // 0x0134(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJV6[0x14];                                  // 0x0144(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetTurnValue(float I, float S, float limitPixel);
		void SetScopeValue(float S);
		void SetPitchValue(float pitchvalue);
		void SetInputScale(float fYawscale, float fPitchscale);
		void SetInitValue(float Value);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.TrapActor
	 * Size -> 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
	 */
	class ATrapActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_73LT[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWeaponHitEvent;                                        // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnWeaponHit__DelegateSignature(const struct FHitResult& HitInfo, const class FName& HitSocketName);
		class USkeletalMeshComponent* GetRightHandHoldWeaponMesh();
		class USkeletalMeshComponent* GetLeftHandHoldWeaponMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class Main.RichTextLinkBlockDecorator
	 * Size -> 0x0570 (FullSize[0x0598] - InheritedSize[0x0028])
	 */
	class URichTextLinkBlockDecorator : public URichTextBlockDecorator
	{
	public:
		struct FHyperlinkStyle                                     m_Style;                                                 // 0x0028(0x0500) Edit, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             _bCallBack;                                              // 0x0528(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             _mapCallBack;                                            // 0x0538(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         _mapResutl;                                              // 0x0548(0x0050) NativeAccessSpecifierPublic

	public:
		void ClickFun(TMap<class FString, class FString> MetaData, int32_t nButtonIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Main.USelfEngineSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUSelfEngineSubsystem : public UEngineSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.UserWidgetMouseEvent
	 * Size -> 0x0058 (FullSize[0x03E0] - InheritedSize[0x0388])
	 */
	class UUserWidgetMouseEvent : public UUIPanel
	{
	public:
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x0388(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonUpEvent;                                    // 0x0398(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonMoveEvent;                                  // 0x03A8(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonLeaveEvent;                                 // 0x03B8(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnLostFocusEvent;                                        // 0x03C8(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       _SyncInputTouch;                                         // 0x03D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N63Z[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.VehicleCheatChecker
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UVehicleCheatChecker : public UBaseCheatChecker
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Main.WeaponOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeaponOwnerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
