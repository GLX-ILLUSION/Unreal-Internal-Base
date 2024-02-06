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
	 * Function Main.AIPawn.UpdateSignificanceSettings
	 */
	struct AAIPawn_UpdateSignificanceSettings_Params
	{
	public:
		TMap<float, float>                                         SignificanceThresholdsMap;                               // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.UnlockLookAt
	 */
	struct AAIPawn_UnlockLookAt_Params
	{	};

	/**
	 * DelegateFunction Main.AIPawn.TwoFloatEvent__DelegateSignature
	 */
	struct AAIPawn_TwoFloatEvent__DelegateSignature_Params
	{
	public:
		float                                                      PrevValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AfterValue;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.StopMovementImmediately
	 */
	struct AAIPawn_StopMovementImmediately_Params
	{
	public:
		bool                                                       bClearDelegate;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.SetUpProperties
	 */
	struct AAIPawn_SetUpProperties_Params
	{	};

	/**
	 * Function Main.AIPawn.SetSpeed
	 */
	struct AAIPawn_SetSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.SetRotationFollowVelocity
	 */
	struct AAIPawn_SetRotationFollowVelocity_Params
	{
	public:
		bool                                                       bFollow;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.RotateToTargetRotation
	 */
	struct AAIPawn_RotateToTargetRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      UsedRotateSpeed;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.OnRep_IsDead
	 */
	struct AAIPawn_OnRep_IsDead_Params
	{	};

	/**
	 * Function Main.AIPawn.MoveToLocation
	 */
	struct AAIPawn_MoveToLocation_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AcceptanceRadius;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              StopOnOverlap;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              AcceptPartialPath;                                       // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePathfinding;                                         // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAILogic;                                            // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseContinuosGoalTracking;                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              ProjectGoalOnNavigation;                                 // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2PG1[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAITask_MoveTo*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.MoveToActor
	 */
	struct AAIPawn_MoveToActor_Params
	{
	public:
		class AActor*                                              ActorPtr;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AcceptanceRadius;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              StopOnOverlap;                                           // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              AcceptPartialPath;                                       // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePathfinding;                                         // 0x000E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAILogic;                                            // 0x000F(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseContinuosGoalTracking;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              ProjectGoalOnNavigation;                                 // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1ULF[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAITask_MoveTo*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.LockLookAtPos
	 */
	struct AAIPawn_LockLookAtPos_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      UsedRotateSpeed;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.LockLookAtActor
	 */
	struct AAIPawn_LockLookAtActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      UsedRotateSpeed;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.K2_GiveAbility
	 */
	struct AAIPawn_K2_GiveAbility_Params
	{
	public:
		class UClass*                                              Ability;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Lv;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpecHandle                          ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.K2_AddAbilities
	 */
	struct AAIPawn_K2_AddAbilities_Params
	{	};

	/**
	 * Function Main.AIPawn.InitAttributesFromLua
	 */
	struct AAIPawn_InitAttributesFromLua_Params
	{
	public:
		TMap<class FString, float>                                 InAttributes;                                            // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.GetSpeed
	 */
	struct AAIPawn_GetSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.GetRightHandHoldWeaponMesh
	 */
	struct AAIPawn_GetRightHandHoldWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.GetMaxHealth
	 */
	struct AAIPawn_GetMaxHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.GetLeftHandHoldWeaponMesh
	 */
	struct AAIPawn_GetLeftHandHoldWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.GetHealth
	 */
	struct AAIPawn_GetHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.GetAttributeValueByName
	 */
	struct AAIPawn_GetAttributeValueByName_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.FindRandomLocation
	 */
	struct AAIPawn_FindRandomLocation_Params
	{
	public:
		struct FVector                                             CenterLocation;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ResultLocation;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Range;                                                   // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawn.Die
	 */
	struct AAIPawn_Die_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 DamageEffectSpec;                                        // 0x0010(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      DamageMagnitude;                                         // 0x02B0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LWF8[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              AvatarActor;                                             // 0x02B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x02C0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AbilityTask_PlayMontageAndWaitForNotify.PlayMontage
	 */
	struct UAbilityTask_PlayMontageAndWaitForNotify_PlayMontage_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSection;                                            // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RYTG[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AnimRootMotionTranslationScale;                          // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNotStopAllMontages;                                     // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N87J[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_PlayMontageAndWaitForNotify*            ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AbilityTask_PlayMontageAndWaitForNotify.OnAnimNotifyState
	 */
	struct UAbilityTask_PlayMontageAndWaitForNotify_OnAnimNotifyState_Params
	{
	public:
		class UCustomAnimNotifyState*                              CustomAnimNotifyState;                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EventName;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AbilityTask_PlayMontageAndWaitForNotify.OnAnimNotify
	 */
	struct UAbilityTask_PlayMontageAndWaitForNotify_OnAnimNotify_Params
	{
	public:
		class UCustomAnimNotify*                                   CustomAnimNotify;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AbilityTask_ServerWaitForClientTargetData.ServerWaitForClientTargetData
	 */
	struct UAbilityTask_ServerWaitForClientTargetData_ServerWaitForClientTargetData_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MO2R[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_ServerWaitForClientTargetData*          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AbilityTask_ServerWaitForClientTargetData.OnTargetDataReplicatedCallback
	 */
	struct UAbilityTask_ServerWaitForClientTargetData_OnTargetDataReplicatedCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActivationTag;                                           // 0x0028(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ActorRandom.Random
	 */
	struct AActorRandom_Random_Params
	{
	public:
		bool                                                       bFromClick;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ActorRandom.NotifyDestroyed
	 */
	struct AActorRandom_NotifyDestroyed_Params
	{	};

	/**
	 * Function Main.ActorRandom.GetActorRandomProperty
	 */
	struct AActorRandom_GetActorRandomProperty_Params
	{
	public:
		class AActor*                                              InTargetActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ActorRandom.DestroySelfAndAllChildren
	 */
	struct AActorRandom_DestroySelfAndAllChildren_Params
	{	};

	/**
	 * Function Main.ActorRandom.DestroySelf
	 */
	struct AActorRandom_DestroySelf_Params
	{	};

	/**
	 * Function Main.ActorRandom.DestroyChild
	 */
	struct AActorRandom_DestroyChild_Params
	{
	public:
		class AActor*                                              Child;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AINavLinkComponent.SetNavEnabled
	 */
	struct UAINavLinkComponent_SetNavEnabled_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawnMovementComponent.StopMoveNow
	 */
	struct UAIPawnMovementComponent_StopMoveNow_Params
	{	};

	/**
	 * DelegateFunction Main.AIPawnMovementComponent.OnMovementStatusChange__DelegateSignature
	 */
	struct UAIPawnMovementComponent_OnMovementStatusChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    Status;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawnMovementComponent.MoveToLocation
	 */
	struct UAIPawnMovementComponent_MoveToLocation_Params
	{
	public:
		struct FVector                                             TargetPosition;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Timeout;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TeleportAfterTimeout;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawnMovementComponent.MoveToActor
	 */
	struct UAIPawnMovementComponent_MoveToActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Timeout;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TeleportAfterTimeout;                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AIPawnMovementComponent.LookAt
	 */
	struct UAIPawnMovementComponent_LookAt_Params
	{
	public:
		struct FVector                                             TargetPosition;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AITask_FlyTo.OnUpdateActorLocation
	 */
	struct UAITask_FlyTo_OnUpdateActorLocation_Params
	{	};

	/**
	 * Function Main.AITask_FlyTo.OnFindFlyPathSuccess
	 */
	struct UAITask_FlyTo_OnFindFlyPathSuccess_Params
	{
	public:
		TArray<struct FCPathNode>                                  Path;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		ECPathfindingFailReason                                    FailReason;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AITask_FlyTo.OnFindFlyPathFail
	 */
	struct UAITask_FlyTo_OnFindFlyPathFail_Params
	{
	public:
		TArray<struct FCPathNode>                                  Path;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		ECPathfindingFailReason                                    FailReason;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AlphaTestParent.ReleasePress
	 */
	struct UAlphaTestParent_ReleasePress_Params
	{	};

	/**
	 * DelegateFunction Main.AlphaTestParent.OnMouseEvent__DelegateSignature
	 */
	struct UAlphaTestParent_OnMouseEvent__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           screenPos;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           CursorDelta;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0010(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ARider.UpdateSignificanceSettings
	 */
	struct AARider_UpdateSignificanceSettings_Params
	{
	public:
		TMap<float, float>                                         SignificanceThresholdsMap;                               // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ARider.MoveToLocation
	 */
	struct AARider_MoveToLocation_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AcceptanceRadius;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              StopOnOverlap;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              AcceptPartialPath;                                       // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePathfinding;                                         // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAILogic;                                            // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseContinuosGoalTracking;                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              ProjectGoalOnNavigation;                                 // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V8WB[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAITask_MoveTo*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ARider.MoveToActor
	 */
	struct AARider_MoveToActor_Params
	{
	public:
		class AActor*                                              ActorPtr;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AcceptanceRadius;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              StopOnOverlap;                                           // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              AcceptPartialPath;                                       // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePathfinding;                                         // 0x000E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockAILogic;                                            // 0x000F(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseContinuosGoalTracking;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAIOptionFlag                                              ProjectGoalOnNavigation;                                 // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V8X2[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAITask_MoveTo*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAnimNotifyState.ProcessEventByName
	 */
	struct UCustomAnimNotifyState_ProcessEventByName_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AttackTracer.OnHitted
	 */
	struct UAttackTracer_OnHitted_Params
	{
	public:
		struct FHitResult                                          HitResultArray;                                          // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FName                                                HitSocketName;                                           // 0x0088(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AttackTracer.GetAttackSpeedRate
	 */
	struct UAttackTracer_GetAttackSpeedRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AttackTracer.CanStuck
	 */
	struct UAttackTracer_CanStuck_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0088(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AttackTracer.CanBounce
	 */
	struct UAttackTracer_CanBounce_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0088(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AttackTracer.BeginStuck
	 */
	struct UAttackTracer_BeginStuck_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AttackTracer.BeginBounce
	 */
	struct UAttackTracer_BeginBounce_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AttackTracerMgr.RemoveBlockStuck
	 */
	struct UAttackTracerMgr_RemoveBlockStuck_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AttackTracerMgr.BeginStuck
	 */
	struct UAttackTracerMgr_BeginStuck_Params
	{
	public:
		float                                                      StuckTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StuckPlayRate;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequenceBase*                                   Anim;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AttackTracerMgr.BeginBounce
	 */
	struct UAttackTracerMgr_BeginBounce_Params
	{
	public:
		float                                                      BounceTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BouncePlayRate;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BounceBlendOutTime;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QUNZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequenceBase*                                   Anim;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.AttackTracerMgr.AddBlockStuck
	 */
	struct UAttackTracerMgr_AddBlockStuck_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.BaseCheatChecker.SetZMoveCurve
	 */
	struct UBaseCheatChecker_SetZMoveCurve_Params
	{
	public:
		class UCurveFloat*                                         Curve;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.BaseCheatChecker.SetYMoveCurve
	 */
	struct UBaseCheatChecker_SetYMoveCurve_Params
	{
	public:
		class UCurveFloat*                                         Curve;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.BaseCheatChecker.SetXMoveCurve
	 */
	struct UBaseCheatChecker_SetXMoveCurve_Params
	{
	public:
		class UCurveFloat*                                         Curve;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.BaseCheatChecker.SetMaxSpeed
	 */
	struct UBaseCheatChecker_SetMaxSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionMgr.Tick
	 */
	struct USessionMgr_Tick_Params
	{	};

	/**
	 * Function Main.SessionMgr.Stop
	 */
	struct USessionMgr_Stop_Params
	{	};

	/**
	 * Function Main.SessionMgr.Start
	 */
	struct USessionMgr_Start_Params
	{	};

	/**
	 * Function Main.SessionMgr.RemoveSession
	 */
	struct USessionMgr_RemoveSession_Params
	{
	public:
		class USession*                                            pSession;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionMgr.Listen
	 */
	struct USessionMgr_Listen_Params
	{
	public:
		class FString                                              strHost;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   Port;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   nMaxCount;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   connectedAliveTimeout;                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_69LI[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionMgr.CreateSession
	 */
	struct USessionMgr_CreateSession_Params
	{
	public:
		class FString                                              strHost;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   Port;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    connectTimeOut;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionMgr.CreatePingSession
	 */
	struct USessionMgr_CreatePingSession_Params
	{
	public:
		class FString                                              strIp;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O55Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionMgr.AddSession
	 */
	struct USessionMgr_AddSession_Params
	{
	public:
		class USession*                                            pSession;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAttributeSet.K2_GetActorInfo
	 */
	struct UCustomAttributeSet_K2_GetActorInfo_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAttributeSet.GetPropertyByName
	 */
	struct UCustomAttributeSet_GetPropertyByName_Params
	{
	public:
		class UClass*                                              AttributeSetClass;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InName;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.CombatAttributeSet.GetTeammateDamageReduction
	 */
	struct UCombatAttributeSet_GetTeammateDamageReduction_Params
	{
	public:
		class AActor*                                              AvatarActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GEId;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurDamage;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ShieldDamageReducePercent
	 */
	struct UCombatAttributeSet_OnRep_ShieldDamageReducePercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ShieldDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_ShieldDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_Shield
	 */
	struct UCombatAttributeSet_OnRep_Shield_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_SeeRangeCoefficient
	 */
	struct UCombatAttributeSet_OnRep_SeeRangeCoefficient_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_RemainShield
	 */
	struct UCombatAttributeSet_OnRep_RemainShield_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ReloadSpeed
	 */
	struct UCombatAttributeSet_OnRep_ReloadSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ProjectileReduce
	 */
	struct UCombatAttributeSet_OnRep_ProjectileReduce_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_PoisonResistance
	 */
	struct UCombatAttributeSet_OnRep_PoisonResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_PoisonDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_PoisonDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_PhysicalResistance
	 */
	struct UCombatAttributeSet_OnRep_PhysicalResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_PhysicalReboundDamagePercent
	 */
	struct UCombatAttributeSet_OnRep_PhysicalReboundDamagePercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_PhysicalReboundDamage
	 */
	struct UCombatAttributeSet_OnRep_PhysicalReboundDamage_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_PhysicalDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_PhysicalDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_PhysicalBloodsucking
	 */
	struct UCombatAttributeSet_OnRep_PhysicalBloodsucking_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_PhysicalAttack
	 */
	struct UCombatAttributeSet_OnRep_PhysicalAttack_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MoveSpeed
	 */
	struct UCombatAttributeSet_OnRep_MoveSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MeleeReduce
	 */
	struct UCombatAttributeSet_OnRep_MeleeReduce_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MaxMana
	 */
	struct UCombatAttributeSet_OnRep_MaxMana_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MaxMagicAdditive
	 */
	struct UCombatAttributeSet_OnRep_MaxMagicAdditive_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MaxHealth
	 */
	struct UCombatAttributeSet_OnRep_MaxHealth_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MaxEnergy
	 */
	struct UCombatAttributeSet_OnRep_MaxEnergy_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MaxAnger
	 */
	struct UCombatAttributeSet_OnRep_MaxAnger_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_Mana
	 */
	struct UCombatAttributeSet_OnRep_Mana_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MagicResistance
	 */
	struct UCombatAttributeSet_OnRep_MagicResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MagicPenetrationPercent
	 */
	struct UCombatAttributeSet_OnRep_MagicPenetrationPercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MagicPenetration
	 */
	struct UCombatAttributeSet_OnRep_MagicPenetration_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MagicGainSpeedAdditive
	 */
	struct UCombatAttributeSet_OnRep_MagicGainSpeedAdditive_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MagicalReboundDamagePercent
	 */
	struct UCombatAttributeSet_OnRep_MagicalReboundDamagePercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MagicalReboundDamage
	 */
	struct UCombatAttributeSet_OnRep_MagicalReboundDamage_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MagicalBloodsucking
	 */
	struct UCombatAttributeSet_OnRep_MagicalBloodsucking_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_MagicalAttack
	 */
	struct UCombatAttributeSet_OnRep_MagicalAttack_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_LightningResistance
	 */
	struct UCombatAttributeSet_OnRep_LightningResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_LightningDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_LightningDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_LengthenHealPercent
	 */
	struct UCombatAttributeSet_OnRep_LengthenHealPercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_InteractionSpeed
	 */
	struct UCombatAttributeSet_OnRep_InteractionSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ImpactForce
	 */
	struct UCombatAttributeSet_OnRep_ImpactForce_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_IceResistance
	 */
	struct UCombatAttributeSet_OnRep_IceResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_IceDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_IceDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_HolyResistance
	 */
	struct UCombatAttributeSet_OnRep_HolyResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_HolyDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_HolyDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_HearRangeCoefficient
	 */
	struct UCombatAttributeSet_OnRep_HearRangeCoefficient_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_Health
	 */
	struct UCombatAttributeSet_OnRep_Health_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_HealReduceTime
	 */
	struct UCombatAttributeSet_OnRep_HealReduceTime_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_HealIncreasePercent
	 */
	struct UCombatAttributeSet_OnRep_HealIncreasePercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_Heal
	 */
	struct UCombatAttributeSet_OnRep_Heal_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_HeadDamageReducePercent
	 */
	struct UCombatAttributeSet_OnRep_HeadDamageReducePercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_HeadDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_HeadDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_GhostDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_GhostDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_GainManaSpeed
	 */
	struct UCombatAttributeSet_OnRep_GainManaSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_GainEnergySpeed
	 */
	struct UCombatAttributeSet_OnRep_GainEnergySpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_GainAngerSpeed
	 */
	struct UCombatAttributeSet_OnRep_GainAngerSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_FireResistance
	 */
	struct UCombatAttributeSet_OnRep_FireResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_FireDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_FireDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_FinalAttackAddPercent
	 */
	struct UCombatAttributeSet_OnRep_FinalAttackAddPercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ExtraProvideShieldPercent
	 */
	struct UCombatAttributeSet_OnRep_ExtraProvideShieldPercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_EvilDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_EvilDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_EquipSpeed
	 */
	struct UCombatAttributeSet_OnRep_EquipSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_Energy
	 */
	struct UCombatAttributeSet_OnRep_Energy_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_DebuffReduceTime
	 */
	struct UCombatAttributeSet_OnRep_DebuffReduceTime_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_DarkResistance
	 */
	struct UCombatAttributeSet_OnRep_DarkResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_DarkDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_DarkDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_DamageReduce
	 */
	struct UCombatAttributeSet_OnRep_DamageReduce_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_CreatureDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_CreatureDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_CoolingReduction
	 */
	struct UCombatAttributeSet_OnRep_CoolingReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_CastSpeed
	 */
	struct UCombatAttributeSet_OnRep_CastSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_BuffOvertime
	 */
	struct UCombatAttributeSet_OnRep_BuffOvertime_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_BodyDamageReducePercent
	 */
	struct UCombatAttributeSet_OnRep_BodyDamageReducePercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_BodyDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_BodyDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_BehaviorAudioCoefficient
	 */
	struct UCombatAttributeSet_OnRep_BehaviorAudioCoefficient_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_AttackSpeed
	 */
	struct UCombatAttributeSet_OnRep_AttackSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ArmsLegsDamageReducePercent
	 */
	struct UCombatAttributeSet_OnRep_ArmsLegsDamageReducePercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ArmsLegsDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_ArmsLegsDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ArmorPenetrationPercent
	 */
	struct UCombatAttributeSet_OnRep_ArmorPenetrationPercent_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ArmorPenetration
	 */
	struct UCombatAttributeSet_OnRep_ArmorPenetration_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_Armor
	 */
	struct UCombatAttributeSet_OnRep_Armor_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ArcaneResistance
	 */
	struct UCombatAttributeSet_OnRep_ArcaneResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_ArcaneDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_ArcaneDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_Anger
	 */
	struct UCombatAttributeSet_OnRep_Anger_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_AllMagicalResistance
	 */
	struct UCombatAttributeSet_OnRep_AllMagicalResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.OnRep_AllMagicalDamageIncrease
	 */
	struct UCombatAttributeSet_OnRep_AllMagicalDamageIncrease_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CombatAttributeSet.GetTeammateDamageReduction__Overridden
	 */
	struct UCombatAttributeSet_GetTeammateDamageReduction__Overridden_Params
	{
	public:
		class AActor*                                              AvatarActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GEId;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurDamage;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ComboBoxStringEx.SetPlacement
	 */
	struct UComboBoxStringEx_SetPlacement_Params
	{
	public:
		EMenuPlacement                                             InPlacement;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ComboBoxStringEx.SetDownArrowRenderTransform
	 */
	struct UComboBoxStringEx_SetDownArrowRenderTransform_Params
	{
	public:
		struct FWidgetTransform                                    InDownArrowTransform;                                    // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ComboBoxStringEx.SetDownArrowAngle
	 */
	struct UComboBoxStringEx_SetDownArrowAngle_Params
	{
	public:
		float                                                      InAngle;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.SetGESpecContext
	 */
	struct UCustomAbilitySystemBlueprintLibrary_SetGESpecContext_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        ContextHandle;                                           // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.RemoveAllActiveGE_ClientCallOnly
	 */
	struct UCustomAbilitySystemBlueprintLibrary_RemoveAllActiveGE_ClientCallOnly_Params
	{
	public:
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.MakeSpecHandle
	 */
	struct UCustomAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SC6W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGameplayEffect*                                     InGameplayEffect;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InInstigator;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InEffectCauser;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InLevel;                                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9WAG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.MakeGameplayAbilityTargetDataHandleFromSingleHitResult
	 */
	struct UCustomAbilitySystemBlueprintLibrary_MakeGameplayAbilityTargetDataHandleFromSingleHitResult_Params
	{
	public:
		struct FHitResult                                          HitResults;                                              // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0088(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.MakeGameplayAbilityTargetDataHandleFromHitResults
	 */
	struct UCustomAbilitySystemBlueprintLibrary_MakeGameplayAbilityTargetDataHandleFromHitResults_Params
	{
	public:
		TArray<struct FHitResult>                                  HitResults;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.MakeGameplayAbilityTargetDataHandleFromActor
	 */
	struct UCustomAbilitySystemBlueprintLibrary_MakeGameplayAbilityTargetDataHandleFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.MakeAbilityTargetDataFromMeleeHitInfo
	 */
	struct UCustomAbilitySystemBlueprintLibrary_MakeAbilityTargetDataFromMeleeHitInfo_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0090(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.MakeAbilityTargetDataFromInt
	 */
	struct UCustomAbilitySystemBlueprintLibrary_MakeAbilityTargetDataFromInt_Params
	{
	public:
		int32_t                                                    Data;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WH61[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.MakeAbilityTargetDataFromFireProjectileInfo
	 */
	struct UCustomAbilitySystemBlueprintLibrary_MakeAbilityTargetDataFromFireProjectileInfo_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             InStartPos;                                              // 0x0088(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_75F1[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0098(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.InitAttribute_ClientCallOnly
	 */
	struct UCustomAbilitySystemBlueprintLibrary_InitAttribute_ClientCallOnly_Params
	{
	public:
		class UCombatAttributeSet*                                 InTargetAttributeSet;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, float>                                 InAttributes;                                            // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.GetTargetDataFromHandle
	 */
	struct UCustomAbilitySystemBlueprintLibrary_GetTargetDataFromHandle_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Handle;                                                  // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JMR7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityTargetData                          ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.GetSetByCallerMagnitudeFromGESpec
	 */
	struct UCustomAbilitySystemBlueprintLibrary_GetSetByCallerMagnitudeFromGESpec_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x02A0)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        DataTag;                                                 // 0x02A0(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DefaultIfNotFound;                                       // 0x02A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x02AC(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.GetGESpecFromSpecHandle
	 */
	struct UCustomAbilitySystemBlueprintLibrary_GetGESpecFromSpecHandle_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 ReturnValue;                                             // 0x0010(0x02A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.GetGEContext
	 */
	struct UCustomAbilitySystemBlueprintLibrary_GetGEContext_Params
	{
	public:
		struct FGameplayEffectContextHandle                        ContextHandle;                                           // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContext                              ReturnValue;                                             // 0x0018(0x0070)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.GetActiveGEHandleFromActiveGE
	 */
	struct UCustomAbilitySystemBlueprintLibrary_GetActiveGEHandleFromActiveGE_Params
	{
	public:
		struct FActiveGameplayEffect                               ActiveGE;                                                // 0x0000(0x0370)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0370(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.ExtractMeleeHitInfoFromAbilityTargetData
	 */
	struct UCustomAbilitySystemBlueprintLibrary_ExtractMeleeHitInfoFromAbilityTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Handle;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TW6P[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityTargetData_MeleeHitInfo             ReturnValue;                                             // 0x0030(0x0098)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.ExtractIntFromAbilityTargetData
	 */
	struct UCustomAbilitySystemBlueprintLibrary_ExtractIntFromAbilityTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Handle;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.ExtractHitResultAbilityTargetData
	 */
	struct UCustomAbilitySystemBlueprintLibrary_ExtractHitResultAbilityTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Handle;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          ReturnValue;                                             // 0x002C(0x0088)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.ExtractFireProjectileInfoFromAbilityTargetData
	 */
	struct UCustomAbilitySystemBlueprintLibrary_ExtractFireProjectileInfoFromAbilityTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Handle;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GDBZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityTargetData_FireProjectileInfo       ReturnValue;                                             // 0x0030(0x00A0)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.EffectContextGetTargetData
	 */
	struct UCustomAbilitySystemBlueprintLibrary_EffectContextGetTargetData_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0018(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.EffectContextAddTargetData
	 */
	struct UCustomAbilitySystemBlueprintLibrary_EffectContextAddTargetData_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContextHandle;                                     // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0018(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.ClearTargetData
	 */
	struct UCustomAbilitySystemBlueprintLibrary_ClearTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.ClearAllAbilities_ClientCallOnly
	 */
	struct UCustomAbilitySystemBlueprintLibrary_ClearAllAbilities_ClientCallOnly_Params
	{
	public:
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemBlueprintLibrary.AddAttributeSet_ClientCallOnly
	 */
	struct UCustomAbilitySystemBlueprintLibrary_AddAttributeSet_ClientCallOnly_Params
	{
	public:
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAttributeSet*                                       InAttributeSet;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.CustomAbilitySystemComponent.ReceiveBeginPlay
	 */
	struct UCustomAbilitySystemComponent_ReceiveBeginPlay_Params
	{	};

	/**
	 * LuaFunction Main.CustomAbilitySystemComponent.ReceiveEndPlay
	 */
	struct UCustomAbilitySystemComponent_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.UnRegisterGameplayTagChangeEvent
	 */
	struct UCustomAbilitySystemComponent_UnRegisterGameplayTagChangeEvent_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayTagEventType                                      EventType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.SetMoveSpeedBaseValue
	 */
	struct UCustomAbilitySystemComponent_SetMoveSpeedBaseValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.SetAttributeValue
	 */
	struct UCustomAbilitySystemComponent_SetAttributeValue_Params
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.RemoveGameplayCueLocal
	 */
	struct UCustomAbilitySystemComponent_RemoveGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.RemoveAllActiveGE
	 */
	struct UCustomAbilitySystemComponent_RemoveAllActiveGE_Params
	{	};

	/**
	 * Function Main.CustomAbilitySystemComponent.RegisterGameplayTagChangeEvent
	 */
	struct UCustomAbilitySystemComponent_RegisterGameplayTagChangeEvent_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EGameplayTagEventType                                      EventType;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.RegisterGameplayAttributeValueChangeDelegate
	 */
	struct UCustomAbilitySystemComponent_RegisterGameplayAttributeValueChangeDelegate_Params
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.OnGameplayEffectRemovedCallback
	 */
	struct UCustomAbilitySystemComponent_OnGameplayEffectRemovedCallback_Params
	{
	public:
		struct FActiveGameplayEffect                               AGE;                                                     // 0x0000(0x0370)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.OnApplyGameplayEffectToTargetCallback
	 */
	struct UCustomAbilitySystemComponent_OnApplyGameplayEffectToTargetCallback_Params
	{
	public:
		class UAbilitySystemComponent*                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 SpecApplied;                                             // 0x0008(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x02A8(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.OnApplyGameplayEffectCallback_Client
	 */
	struct UCustomAbilitySystemComponent_OnApplyGameplayEffectCallback_Client_Params
	{
	public:
		class UAbilitySystemComponent*                             Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 SpecApplied;                                             // 0x0008(0x02A0)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x02A8(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.OnApplyGameplayEffectCallback
	 */
	struct UCustomAbilitySystemComponent_OnApplyGameplayEffectCallback_Params
	{
	public:
		class UAbilitySystemComponent*                             Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 SpecApplied;                                             // 0x0008(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x02A8(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.OnAbilityEndedCallback
	 */
	struct UCustomAbilitySystemComponent_OnAbilityEndedCallback_Params
	{
	public:
		struct FAbilityEndedData                                   AbilityData;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_TryActivateAbilityBySpecHandle
	 */
	struct UCustomAbilitySystemComponent_K2_TryActivateAbilityBySpecHandle_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowRemoteActivation;                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_SetReplicationMode
	 */
	struct UCustomAbilitySystemComponent_K2_SetReplicationMode_Params
	{
	public:
		EGameplayEffectReplicationMode                             NewReplicationMode;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_RemoveLooseGameplayTag
	 */
	struct UCustomAbilitySystemComponent_K2_RemoveLooseGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_RemoveGameplayCue
	 */
	struct UCustomAbilitySystemComponent_K2_RemoveGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isPrediction;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3B5U[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_RemoveAbility
	 */
	struct UCustomAbilitySystemComponent_K2_RemoveAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_RemoteEndOrCancelAbility
	 */
	struct UCustomAbilitySystemComponent_K2_RemoteEndOrCancelAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToEnd;                                            // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5LGR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWasCanceled;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_IsCurShield
	 */
	struct UCustomAbilitySystemComponent_K2_IsCurShield_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         GEHandle;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_GiveAbility
	 */
	struct UCustomAbilitySystemComponent_K2_GiveAbility_Params
	{
	public:
		class UClass*                                              Ability;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AbilityID;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Lv;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InputID;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpecHandle                          ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_GetGameplayEffectDefForHandle
	 */
	struct UCustomAbilitySystemComponent_K2_GetGameplayEffectDefForHandle_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayEffect*                                     ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_GetActiveGameplayEffectSpec
	 */
	struct UCustomAbilitySystemComponent_K2_GetActiveGameplayEffectSpec_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 ReturnValue;                                             // 0x0008(0x02A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_FindAbilitySpecFromHandle
	 */
	struct UCustomAbilitySystemComponent_K2_FindAbilitySpecFromHandle_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WOVE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilitySpec                                ReturnValue;                                             // 0x0008(0x00E8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_ExecuteGameplayCue_WithParams
	 */
	struct UCustomAbilitySystemComponent_K2_ExecuteGameplayCue_WithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_ExecuteGameplayCue
	 */
	struct UCustomAbilitySystemComponent_K2_ExecuteGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_CurrentMontageStop
	 */
	struct UCustomAbilitySystemComponent_K2_CurrentMontageStop_Params
	{
	public:
		float                                                      OverrideBlendOutTime;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_CancelAllAbilities
	 */
	struct UCustomAbilitySystemComponent_K2_CancelAllAbilities_Params
	{
	public:
		class UGameplayAbility*                                    Ignore;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_AddLooseGameplayTag
	 */
	struct UCustomAbilitySystemComponent_K2_AddLooseGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_AddGameplayCue_WithParams
	 */
	struct UCustomAbilitySystemComponent_K2_AddGameplayCue_WithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.K2_AddGameplayCue
	 */
	struct UCustomAbilitySystemComponent_K2_AddGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.ExecuteGameplayCueLocal
	 */
	struct UCustomAbilitySystemComponent_ExecuteGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.CancelAbilityByClass
	 */
	struct UCustomAbilitySystemComponent_CancelAbilityByClass_Params
	{
	public:
		class UGameplayAbility*                                    Ability;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemComponent.AddGameplayCueLocal
	 */
	struct UCustomAbilitySystemComponent_AddGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomAbilitySystemGlobals.CustomGet
	 */
	struct UCustomAbilitySystemGlobals_CustomGet_Params
	{
	public:
		class UCustomAbilitySystemGlobals*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomCalculation.GetTagSetByCaller
	 */
	struct UCustomCalculation_GetTagSetByCaller_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InTag;                                                   // 0x02A0(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InDefaultValue;                                          // 0x02A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x02AC(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomCalculation.GetSetByCaller
	 */
	struct UCustomCalculation_GetSetByCaller_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                InName;                                                  // 0x02A0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InDefaultValue;                                          // 0x02A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x02AC(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomCalculation.GetAttributeCaptureSpec
	 */
	struct UCustomCalculation_GetAttributeCaptureSpec_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              AttributeSetClass;                                       // 0x02A0(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InName;                                                  // 0x02A8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayEffectAttributeCaptureSource                      InType;                                                  // 0x02B8(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QAFO[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x02BC(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomCommonButtonBase.SetCheckedState
	 */
	struct UCustomCommonButtonBase_SetCheckedState_Params
	{
	public:
		ECheckBoxState                                             InCheckedState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlaySound;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomCommonButtonBase.IsChecked
	 */
	struct UCustomCommonButtonBase_IsChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomCommonButtonBase.GetCheckedState
	 */
	struct UCustomCommonButtonBase_GetCheckedState_Params
	{
	public:
		ECheckBoxState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.SendTargetDataToServer
	 */
	struct UCustomGameplayAbility_SendTargetDataToServer_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ApplicationTag;                                          // 0x0028(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGenerateNewKey;                                         // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.RemoveShareCooldown
	 */
	struct UCustomGameplayAbility_RemoveShareCooldown_Params
	{	};

	/**
	 * Function Main.CustomGameplayAbility.OnTaskFinished
	 */
	struct UCustomGameplayAbility_OnTaskFinished_Params
	{
	public:
		class UGameplayTask*                                       GameplayTask;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.OnFindTaskDelegate
	 */
	struct UCustomGameplayAbility_OnFindTaskDelegate_Params
	{
	public:
		class UGameplayTask*                                       GameplayTask;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DelegateName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.LuaOnGiveAbility
	 */
	struct UCustomGameplayAbility_LuaOnGiveAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0048)  (ConstParm, Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpec                                Spec;                                                    // 0x0048(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.LuaGetCostGameplayEffect
	 */
	struct UCustomGameplayAbility_LuaGetCostGameplayEffect_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.LuaGetCooldownGameplayEffect
	 */
	struct UCustomGameplayAbility_LuaGetCooldownGameplayEffect_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.LuaCommitAbility
	 */
	struct UCustomGameplayAbility_LuaCommitAbility_Params
	{
	public:
		bool                                                       InCreatePredictionWindow;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.K2_MakeEffectContext
	 */
	struct UCustomGameplayAbility_K2_MakeEffectContext_Params
	{
	public:
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.K2_GetCurrentAbilitySpecHandle
	 */
	struct UCustomGameplayAbility_K2_GetCurrentAbilitySpecHandle_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.K2_GetCurrentAbilitySpec
	 */
	struct UCustomGameplayAbility_K2_GetCurrentAbilitySpec_Params
	{
	public:
		struct FGameplayAbilitySpec                                ReturnValue;                                             // 0x0000(0x00E8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.K2_GetCurrentAbilityActorInfo
	 */
	struct UCustomGameplayAbility_K2_GetCurrentAbilityActorInfo_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.K2_GetCurrentAbilityActivationInfo
	 */
	struct UCustomGameplayAbility_K2_GetCurrentAbilityActivationInfo_Params
	{
	public:
		struct FGameplayAbilityActivationInfo                      ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.IsTaskFinished
	 */
	struct UCustomGameplayAbility_IsTaskFinished_Params
	{
	public:
		class UGameplayTask*                                       Task;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.GetCooldownTime
	 */
	struct UCustomGameplayAbility_GetCooldownTime_Params
	{
	public:
		float                                                      TimeRemaining;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CooldownDuration;                                        // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.GetCooldownTag
	 */
	struct UCustomGameplayAbility_GetCooldownTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayAbility.AddShareCooldown
	 */
	struct UCustomGameplayAbility_AddShareCooldown_Params
	{	};

	/**
	 * LuaFunction Main.CustomGameplayCueManager.FetchGameplayCueListOfGEId
	 */
	struct UCustomGameplayCueManager_FetchGameplayCueListOfGEId_Params
	{
	public:
		int32_t                                                    GEId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UY2R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGameplayEffectCue>                          ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.CustomGameplayCueManager.FetchGameplayCueListOfGEId__Overridden
	 */
	struct UCustomGameplayCueManager_FetchGameplayCueListOfGEId__Overridden_Params
	{
	public:
		int32_t                                                    GEId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XBLC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGameplayEffectCue>                          ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.DangerTriggerVolume.OnOverlapEnd
	 */
	struct ADangerTriggerVolume_OnOverlapEnd_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.DangerTriggerVolume.OnOverlapBegin
	 */
	struct ADangerTriggerVolume_OnOverlapBegin_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.DangerTriggerVolume.Exit
	 */
	struct ADangerTriggerVolume_Exit_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.DangerTriggerVolume.Enter
	 */
	struct ADangerTriggerVolume_Enter_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.UIPanel.ResetZOrderInViewPort
	 */
	struct UUIPanel_ResetZOrderInViewPort_Params
	{
	public:
		int32_t                                                    ZOrder;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.UIPanel.LuaResetInputActions
	 */
	struct UUIPanel_LuaResetInputActions_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.UIPanel.LuaRemoveMappingContext
	 */
	struct UUIPanel_LuaRemoveMappingContext_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputMappingContext*                                MappingContext;                                          // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.UIPanel.LuaRemoveActionBinding
	 */
	struct UUIPanel_LuaRemoveActionBinding_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.UIPanel.LuaRegisterUIActionBinding_Internal
	 */
	struct UUIPanel_LuaRegisterUIActionBinding_Internal_Params
	{
	public:
		struct FDataTableRowHandle                                 InHandle;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bDisplayInActionBar;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_07J5[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InIndex;                                                 // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.UIPanel.LuaBindInputAction_Internal
	 */
	struct UUIPanel_LuaBindInputAction_Internal_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETriggerEvent                                              TriggerEvent;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9BND[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0014(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.UIPanel.LuaAddMappingContext
	 */
	struct UUIPanel_LuaAddMappingContext_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputMappingContext*                                MappingContext;                                          // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InPriority;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.UIPanel.LuaAddActionBinding
	 */
	struct UUIPanel_LuaAddActionBinding_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.UIPanel.CallLuaCommonUIFunction
	 */
	struct UUIPanel_CallLuaCommonUIFunction_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.EditableTextBoxEx.RemoveHookKeyUpName
	 */
	struct UEditableTextBoxEx_RemoveHookKeyUpName_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.EditableTextBoxEx.RemoveHookKeyDownName
	 */
	struct UEditableTextBoxEx_RemoveHookKeyDownName_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Main.EditableTextBoxEx.OnKeyUpEvent__DelegateSignature
	 */
	struct UEditableTextBoxEx_OnKeyUpEvent__DelegateSignature_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Main.EditableTextBoxEx.OnKeyDownEvent__DelegateSignature
	 */
	struct UEditableTextBoxEx_OnKeyDownEvent__DelegateSignature_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShift;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCtrl;                                                   // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAlt;                                                    // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWin;                                                    // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.EditableTextBoxEx.AddHookKeyUpName
	 */
	struct UEditableTextBoxEx_AddHookKeyUpName_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.EditableTextBoxEx.AddHookKeyDownName
	 */
	struct UEditableTextBoxEx_AddHookKeyDownName_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.EditableTextEx.RemoveHookKeyUpName
	 */
	struct UEditableTextEx_RemoveHookKeyUpName_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.EditableTextEx.RemoveHookKeyDownName
	 */
	struct UEditableTextEx_RemoveHookKeyDownName_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Main.EditableTextEx.OnKeyUpEvent__DelegateSignature
	 */
	struct UEditableTextEx_OnKeyUpEvent__DelegateSignature_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Main.EditableTextEx.OnKeyDownEvent__DelegateSignature
	 */
	struct UEditableTextEx_OnKeyDownEvent__DelegateSignature_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShift;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCtrl;                                                   // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAlt;                                                    // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWin;                                                    // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.EditableTextEx.AddHookKeyUpName
	 */
	struct UEditableTextEx_AddHookKeyUpName_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.EditableTextEx.AddHookKeyDownName
	 */
	struct UEditableTextEx_AddHookKeyDownName_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FootPrintComponent.Size
	 */
	struct UFootPrintComponent_Size_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FootPrintComponent.IsInRange
	 */
	struct UFootPrintComponent_IsInRange_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Status;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Height;                                                  // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FPSManager.SetTargetMaxFps
	 */
	struct UFPSManager_SetTargetMaxFps_Params
	{
	public:
		unsigned char                                              targetFps;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FPSManager.SetEnable
	 */
	struct UFPSManager_SetEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FPSManager.Init
	 */
	struct UFPSManager_Init_Params
	{
	public:
		unsigned char                                              optimizeFps;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FSMState.BindMontageEndDelegate
	 */
	struct UFSMState_BindMontageEndDelegate_Params
	{
	public:
		bool                                                       BlendOut;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FSMSystem.Start
	 */
	struct UFSMSystem_Start_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EStateType                                                 Type;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FSMSystem.ServerChangeState
	 */
	struct UFSMSystem_ServerChangeState_Params
	{
	public:
		EStateType                                                 Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EStateType                                                 nextType;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FSMSystem.MultiCastChangeState
	 */
	struct UFSMSystem_MultiCastChangeState_Params
	{
	public:
		EStateType                                                 Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EStateType                                                 nextType;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FSMSystem.ChangeState
	 */
	struct UFSMSystem_ChangeState_Params
	{
	public:
		EStateType                                                 Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EStateType                                                 nextType;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.FSMSystem.AddState
	 */
	struct UFSMSystem_AddState_Params
	{
	public:
		EStateType                                                 Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_25GW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              StateClass;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.GameplayCueNotify_Burst.OnBurst
	 */
	struct UGameplayCueNotify_Burst_OnBurst_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayCueNotify_SpawnResult                      SpawnResults;                                            // 0x00D0(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Main.GridPanelEx.OnMouseEvent__DelegateSignature
	 */
	struct UGridPanelEx_OnMouseEvent__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           screenPos;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           CursorDelta;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x0010(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.GridPanelEx.AddItem
	 */
	struct UGridPanelEx_AddItem_Params
	{
	public:
		int32_t                                                    nId;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InRow;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InColumn;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_STYL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ImageMouseEvent.ReleasePress
	 */
	struct UImageMouseEvent_ReleasePress_Params
	{	};

	/**
	 * DelegateFunction Main.ImageMouseEvent.OnMouseEvent__DelegateSignature
	 */
	struct UImageMouseEvent_OnMouseEvent__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           screenPos;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           CursorDelta;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    buttonIndex;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F3Q4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventReply                                         ReturnValue;                                             // 0x0018(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ImageMouseEvent.DrawLine
	 */
	struct UImageMouseEvent_DrawLine_Params
	{
	public:
		bool                                                       bDraw;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_800Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           pos1;                                                    // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           pos2;                                                    // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      fInter;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      nPerDis;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Thickness;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.IrregularButton.SetAdvancedHitTexture
	 */
	struct UIrregularButton_SetAdvancedHitTexture_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.IrregularButton.SetAdvancedHitAlpha
	 */
	struct UIrregularButton_SetAdvancedHitAlpha_Params
	{
	public:
		int32_t                                                    InAlpha;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LocalizationEditorUtilityActor.SetNoneTranslateChineseToEmpty
	 */
	struct ALocalizationEditorUtilityActor_SetNoneTranslateChineseToEmpty_Params
	{	};

	/**
	 * LuaFunction Main.LuaManger.OnCancelDragWidget
	 */
	struct ULuaManger_OnCancelDragWidget_Params
	{
	public:
		class UObject*                                             pDragObj;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDragType;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z2LC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         pTopParent;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.SetPlatformInfo
	 */
	struct ULuaManger_SetPlatformInfo_Params
	{
	public:
		int32_t                                                    nPlatformId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OJKZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ProjectID;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              channelId;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DeviceID;                                                // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.TickInLua
	 */
	struct ULuaManger_TickInLua_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnDownloadComplete
	 */
	struct ULuaManger_OnDownloadComplete_Params
	{
	public:
		class FString                                              strUrl;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F79Y[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              contentOrsavePath;                                       // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSaveFile;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RGFG[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    errorCode;                                               // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnBeginDragWidget
	 */
	struct ULuaManger_OnBeginDragWidget_Params
	{
	public:
		class UObject*                                             pDragObj;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDragType;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BTDY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         pTopParent;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDragDropWidget*                                     _CurDragVisualWidget;                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnCoverWidgetChange
	 */
	struct ULuaManger_OnCoverWidgetChange_Params
	{
	public:
		class UUserWidget*                                         pTopParent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         coverPanel;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDragDropWidget*                                     coverObj;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDragDropWidget*                                     dragObj;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDragType;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDropType;                                               // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnLevelUnloadComplete
	 */
	struct ULuaManger_OnLevelUnloadComplete_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              worldName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSessionEnded;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCleanupResources;                                       // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnWigetMouseLeave
	 */
	struct ULuaManger_OnWigetMouseLeave_Params
	{
	public:
		class UWidget*                                             topwidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnAxisKey
	 */
	struct ULuaManger_OnAxisKey_Params
	{
	public:
		class UObject*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AxisValue;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Touch1;                                                  // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Touch2;                                                  // 0x0024(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.DragWidget
	 */
	struct ULuaManger_DragWidget_Params
	{
	public:
		class UObject*                                             pDragObj;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDragType;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDropType;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             pDrop;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         pTopParent;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnWigetMouseButtonMove
	 */
	struct ULuaManger_OnWigetMouseButtonMove_Params
	{
	public:
		class UWidget*                                             topwidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           screenPos;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           CursorDelta;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.Start
	 */
	struct ULuaManger_Start_Params
	{	};

	/**
	 * LuaFunction Main.LuaManger.OnPressKey
	 */
	struct ULuaManger_OnPressKey_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnDsNetWorkFailure
	 */
	struct ULuaManger_OnDsNetWorkFailure_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              worldName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNetDriver*                                          NetDriver;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nailureType;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7M95[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorString;                                             // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnWigetMouseButtonDown
	 */
	struct ULuaManger_OnWigetMouseButtonDown_Params
	{
	public:
		class UWidget*                                             topwidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           screenPos;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnWigetRightMouseButtonDown
	 */
	struct ULuaManger_OnWigetRightMouseButtonDown_Params
	{
	public:
		class UWidget*                                             topwidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           screenPos;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.LuaFree
	 */
	struct ULuaManger_LuaFree_Params
	{	};

	/**
	 * LuaFunction Main.LuaManger.Shutdown
	 */
	struct ULuaManger_Shutdown_Params
	{	};

	/**
	 * LuaFunction Main.LuaManger.OnWigetMouseButtonUp
	 */
	struct ULuaManger_OnWigetMouseButtonUp_Params
	{
	public:
		class UWidget*                                             topwidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           screenPos;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.LuaReportLogToGameServer
	 */
	struct ULuaManger_LuaReportLogToGameServer_Params
	{
	public:
		class FString                                              V;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnLevelLoaded
	 */
	struct ULuaManger_OnLevelLoaded_Params
	{
	public:
		class UWorld*                                              pWorld;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LevelName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.OnShortcutKey
	 */
	struct ULuaManger_OnShortcutKey_Params
	{
	public:
		class UObject*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShift;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bAlt;                                                    // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCtrl;                                                   // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCmd;                                                    // 0x001B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    InputEvent;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * LuaFunction Main.LuaManger.Init
	 */
	struct ULuaManger_Init_Params
	{	};

	/**
	 * Function Main.LuaManger.WriteIniFile
	 */
	struct ULuaManger_WriteIniFile_Params
	{
	public:
		class FString                                              strSection;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.WaitAndFork
	 */
	struct ULuaManger_WaitAndFork_Params
	{	};

	/**
	 * Function Main.LuaManger.VerifyActivationCode
	 */
	struct ULuaManger_VerifyActivationCode_Params
	{
	public:
		class FString                                              strCode;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.UploadLog
	 */
	struct ULuaManger_UploadLog_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint64_t                                                   roleid;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              roleName;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      updateCallback;                                          // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.UploadException
	 */
	struct ULuaManger_UploadException_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Reason;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StackTrace;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.UpdateToken
	 */
	struct ULuaManger_UpdateToken_Params
	{
	public:
		class FString                                              Token;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.UpdatePostion
	 */
	struct ULuaManger_UpdatePostion_Params
	{
	public:
		double                                                     posX;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     posY;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     posZ;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.UnZip
	 */
	struct ULuaManger_UnZip_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              destDir;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSoZip;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteFile;                                             // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.UnregisterSettingInputProcess
	 */
	struct ULuaManger_UnregisterSettingInputProcess_Params
	{	};

	/**
	 * Function Main.LuaManger.UnMountSavePaks
	 */
	struct ULuaManger_UnMountSavePaks_Params
	{
	public:
		bool                                                       bAutoDelete;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C55W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.UnLoadWorldStreamLevel
	 */
	struct ULuaManger_UnLoadWorldStreamLevel_Params
	{
	public:
		class UObject*                                             worldObject;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LevelName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldBlockOnLoad;                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.UnLoadStreamLevel
	 */
	struct ULuaManger_UnLoadStreamLevel_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldBlockOnLoad;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ToGc
	 */
	struct ULuaManger_ToGc_Params
	{	};

	/**
	 * Function Main.LuaManger.TickInLua__Overridden
	 */
	struct ULuaManger_TickInLua__Overridden_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SwitchWorld
	 */
	struct ULuaManger_SwitchWorld_Params
	{
	public:
		class FName                                                ToWorldContextHandle;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SwitchLogin
	 */
	struct ULuaManger_SwitchLogin_Params
	{
	public:
		uint64_t                                                   userId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSwitchAccoutBack;                                      // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.StopDownload
	 */
	struct ULuaManger_StopDownload_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.StartListen
	 */
	struct ULuaManger_StartListen_Params
	{
	public:
		int32_t                                                    Port;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.StartDownloadRange
	 */
	struct ULuaManger_StartDownloadRange_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              savePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            nRanges;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    nRetryTimes;                                             // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YPWS[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              strMd5;                                                  // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.StartDownloadLargeFileRange
	 */
	struct ULuaManger_StartDownloadLargeFileRange_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              savePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      nRanges;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    nRetryTimes;                                             // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GES2[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              strMd5;                                                  // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.StartDownload
	 */
	struct ULuaManger_StartDownload_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              savePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nRetryTimes;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NHPQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int64_t                                                    nTotalSize;                                              // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nThreadCount;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L8Z7[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              strMd5;                                                  // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.Start__Overridden
	 */
	struct ULuaManger_Start__Overridden_Params
	{	};

	/**
	 * Function Main.LuaManger.Shutdown__Overridden
	 */
	struct ULuaManger_Shutdown__Overridden_Params
	{	};

	/**
	 * Function Main.LuaManger.ShowRatingUi
	 */
	struct ULuaManger_ShowRatingUi_Params
	{	};

	/**
	 * Function Main.LuaManger.ShowRatingCustomUi
	 */
	struct ULuaManger_ShowRatingCustomUi_Params
	{	};

	/**
	 * Function Main.LuaManger.ShowLoginPanel
	 */
	struct ULuaManger_ShowLoginPanel_Params
	{	};

	/**
	 * Function Main.LuaManger.SetWorldTick
	 */
	struct ULuaManger_SetWorldTick_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetWorldRoomReceivelRange
	 */
	struct ULuaManger_SetWorldRoomReceivelRange_Params
	{
	public:
		int32_t                                                    disMin;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    disMax;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetUserInfoForSecureService
	 */
	struct ULuaManger_SetUserInfoForSecureService_Params
	{
	public:
		class FString                                              roleid;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              serverid;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetUserHasAgreedProtocolsUpdate
	 */
	struct ULuaManger_SetUserHasAgreedProtocolsUpdate_Params
	{	};

	/**
	 * Function Main.LuaManger.SetUROParam
	 */
	struct ULuaManger_SetUROParam_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              thresholds;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetTimer
	 */
	struct ULuaManger_SetTimer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetTexture2DPixel
	 */
	struct ULuaManger_SetTexture2DPixel_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    X;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Y;                                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Value;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetTextBlock
	 */
	struct ULuaManger_SetTextBlock_Params
	{
	public:
		class UObject*                                             TextObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              str;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetSpeakerVolumeChangedCallback
	 */
	struct ULuaManger_SetSpeakerVolumeChangedCallback_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetShadowQuality
	 */
	struct ULuaManger_SetShadowQuality_Params
	{
	public:
		unsigned char                                              quality;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetScalabilityLevel
	 */
	struct ULuaManger_SetScalabilityLevel_Params
	{
	public:
		unsigned char                                              Scalability;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetSandbox
	 */
	struct ULuaManger_SetSandbox_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetReportLogLevel
	 */
	struct ULuaManger_SetReportLogLevel_Params
	{
	public:
		bool                                                       bReport;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              eLevel;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetRecordingVolume
	 */
	struct ULuaManger_SetRecordingVolume_Params
	{
	public:
		int32_t                                                    Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetPlaybackVolume
	 */
	struct ULuaManger_SetPlaybackVolume_Params
	{
	public:
		int32_t                                                    Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L10M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              userId;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetPlatformInfo__Overridden
	 */
	struct ULuaManger_SetPlatformInfo__Overridden_Params
	{
	public:
		int32_t                                                    nPlatformId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q1LX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ProjectID;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              channelId;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DeviceID;                                                // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetMSAA
	 */
	struct ULuaManger_SetMSAA_Params
	{
	public:
		unsigned char                                              quality;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetMinorLimit
	 */
	struct ULuaManger_SetMinorLimit_Params
	{
	public:
		class FString                                              country;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Content;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSetMinorLimitBack;                                     // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetMaterialQualityLevel
	 */
	struct ULuaManger_SetMaterialQualityLevel_Params
	{
	public:
		unsigned char                                              quality;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetLuaSearchPathAndOcPath
	 */
	struct ULuaManger_SetLuaSearchPathAndOcPath_Params
	{
	public:
		TArray<class FString>                                      luaSearchPaths;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ocPath;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetListAlignment
	 */
	struct ULuaManger_SetListAlignment_Params
	{
	public:
		class UWidget*                                             pWidget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Alignment;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetInputMode
	 */
	struct ULuaManger_SetInputMode_Params
	{
	public:
		bool                                                       bUiOnly;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowMouse;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_729W[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLockMouse;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetGetSpeakersCallback
	 */
	struct ULuaManger_SetGetSpeakersCallback_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetEnableMotionData
	 */
	struct ULuaManger_SetEnableMotionData_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetDebug
	 */
	struct ULuaManger_SetDebug_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SetCommandLine
	 */
	struct ULuaManger_SetCommandLine_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ServerTravel
	 */
	struct ULuaManger_ServerTravel_Params
	{
	public:
		class FString                                              InURL;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAbsolute;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldSkipGameNotify;                                   // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SendMsgToFriend
	 */
	struct ULuaManger_SendMsgToFriend_Params
	{
	public:
		class FString                                              friendID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Msg;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SearchTinderActorsAt
	 */
	struct ULuaManger_SearchTinderActorsAt_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      Actors;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SearchPlayersAt
	 */
	struct ULuaManger_SearchPlayersAt_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      Actors;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SearchActorsAt
	 */
	struct ULuaManger_SearchActorsAt_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      Actors;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SdkIsInit
	 */
	struct ULuaManger_SdkIsInit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.SaveStringToFile
	 */
	struct ULuaManger_SaveStringToFile_Params
	{
	public:
		class FString                                              strFilePath;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              strContent;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RestartApp
	 */
	struct ULuaManger_RestartApp_Params
	{	};

	/**
	 * Function Main.LuaManger.ResetBodyInstanceDamping
	 */
	struct ULuaManger_ResetBodyInstanceDamping_Params
	{
	public:
		class USkeletalMeshComponent*                              TargetMesh;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RequestPermission
	 */
	struct ULuaManger_RequestPermission_Params
	{
	public:
		class FString                                              strPermission;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFirstRequest;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.Report
	 */
	struct ULuaManger_Report_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              extraData;                                               // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RemoveWidgetFromGameViewPort
	 */
	struct ULuaManger_RemoveWidgetFromGameViewPort_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RemoveUObjectFromRoot
	 */
	struct ULuaManger_RemoveUObjectFromRoot_Params
	{
	public:
		class UObject*                                             pObject;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RemoveTinderActor
	 */
	struct ULuaManger_RemoveTinderActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RemoveShortcutKey
	 */
	struct ULuaManger_RemoveShortcutKey_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             obj;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShift;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAlt;                                                    // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCtrl;                                                   // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCmd;                                                    // 0x001B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InputEvent;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RemoveReplicationFromNormalActors
	 */
	struct ULuaManger_RemoveReplicationFromNormalActors_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RemoveObjectShortcutKeys
	 */
	struct ULuaManger_RemoveObjectShortcutKeys_Params
	{
	public:
		class UObject*                                             obj;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RemoveKeyIniFile
	 */
	struct ULuaManger_RemoveKeyIniFile_Params
	{
	public:
		class FString                                              strSection;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RemoveFromAlwaysRelevant
	 */
	struct ULuaManger_RemoveFromAlwaysRelevant_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RemoveAxisKey
	 */
	struct ULuaManger_RemoveAxisKey_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             obj;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RegisterSettingInputProcess
	 */
	struct ULuaManger_RegisterSettingInputProcess_Params
	{	};

	/**
	 * Function Main.LuaManger.RefreshMeshPose
	 */
	struct ULuaManger_RefreshMeshPose_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.RefreshBindCommonUIKeys
	 */
	struct ULuaManger_RefreshBindCommonUIKeys_Params
	{
	public:
		TMap<class FName, struct FCommonUIRedirectKeyData>         RedirectMap;                                             // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ReDownloadErrorTask
	 */
	struct ULuaManger_ReDownloadErrorTask_Params
	{	};

	/**
	 * Function Main.LuaManger.RealNameVerify
	 */
	struct ULuaManger_RealNameVerify_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMustSuccess;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WRJR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      realNameCallback;                                        // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.QueryProducts
	 */
	struct ULuaManger_QueryProducts_Params
	{
	public:
		class FString                                              productId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnQueryProductInfo;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.QueryGoods
	 */
	struct ULuaManger_QueryGoods_Params
	{
	public:
		class FString                                              roleid;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              serverid;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCurrency;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QOXK[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnQueryGoodsBack;                                        // 0x0024(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.QueryAgeGateStatus
	 */
	struct ULuaManger_QueryAgeGateStatus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ProjectContentDir
	 */
	struct ULuaManger_ProjectContentDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.Pay
	 */
	struct ULuaManger_Pay_Params
	{
	public:
		class FString                                              productId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    goodType;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Amount;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Currency;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              roleid;                                                  // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              roleName;                                                // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    roleLevel;                                               // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    roleVipLevel;                                            // 0x004C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              serverid;                                                // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              extInfo;                                                 // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnPay;                                                   // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.PauseDownload
	 */
	struct ULuaManger_PauseDownload_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OpenUserCenter
	 */
	struct ULuaManger_OpenUserCenter_Params
	{	};

	/**
	 * Function Main.LuaManger.OpenUrlBySdk
	 */
	struct ULuaManger_OpenUrlBySdk_Params
	{
	public:
		class FString                                              Title;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              URL;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              extraData;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OpenUrl
	 */
	struct ULuaManger_OpenUrl_Params
	{
	public:
		class FString                                              strUrl;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OpenLevel
	 */
	struct ULuaManger_OpenLevel_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OpenDisregardForGC
	 */
	struct ULuaManger_OpenDisregardForGC_Params
	{	};

	/**
	 * Function Main.LuaManger.OpenAppSetting
	 */
	struct ULuaManger_OpenAppSetting_Params
	{	};

	/**
	 * Function Main.LuaManger.OnWigetRightMouseButtonDown__Overridden
	 */
	struct ULuaManger_OnWigetRightMouseButtonDown__Overridden_Params
	{
	public:
		class UWidget*                                             topwidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           screenPos;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnWigetMouseLeave__Overridden
	 */
	struct ULuaManger_OnWigetMouseLeave__Overridden_Params
	{
	public:
		class UWidget*                                             topwidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnWigetMouseButtonUp__Overridden
	 */
	struct ULuaManger_OnWigetMouseButtonUp__Overridden_Params
	{
	public:
		class UWidget*                                             topwidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           screenPos;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnWigetMouseButtonMove__Overridden
	 */
	struct ULuaManger_OnWigetMouseButtonMove__Overridden_Params
	{
	public:
		class UWidget*                                             topwidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           screenPos;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           CursorDelta;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnWigetMouseButtonDown__Overridden
	 */
	struct ULuaManger_OnWigetMouseButtonDown__Overridden_Params
	{
	public:
		class UWidget*                                             topwidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           screenPos;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnUnLoadStreamLevel
	 */
	struct ULuaManger_OnUnLoadStreamLevel_Params
	{
	public:
		class FString                                              worldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorld*                                              pWorld;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnShortcutKey__Overridden
	 */
	struct ULuaManger_OnShortcutKey__Overridden_Params
	{
	public:
		class UObject*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShift;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAlt;                                                    // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCtrl;                                                   // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCmd;                                                    // 0x001B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InputEvent;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnRatingPraiseBtnClick
	 */
	struct ULuaManger_OnRatingPraiseBtnClick_Params
	{	};

	/**
	 * Function Main.LuaManger.OnRatingFeedbackBtnClick
	 */
	struct ULuaManger_OnRatingFeedbackBtnClick_Params
	{	};

	/**
	 * Function Main.LuaManger.OnPressKey__Overridden
	 */
	struct ULuaManger_OnPressKey__Overridden_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnPersistantLevelLoaded
	 */
	struct ULuaManger_OnPersistantLevelLoaded_Params
	{	};

	/**
	 * Function Main.LuaManger.OnLoadStreamLevel
	 */
	struct ULuaManger_OnLoadStreamLevel_Params
	{
	public:
		class FString                                              worldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorld*                                              pWorld;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnLevelUnloadComplete__Overridden
	 */
	struct ULuaManger_OnLevelUnloadComplete__Overridden_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              worldName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSessionEnded;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCleanupResources;                                       // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnLevelLoaded__Overridden
	 */
	struct ULuaManger_OnLevelLoaded__Overridden_Params
	{
	public:
		class UWorld*                                              pWorld;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LevelName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnDsNetWorkFailure__Overridden
	 */
	struct ULuaManger_OnDsNetWorkFailure__Overridden_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              worldName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNetDriver*                                          NetDriver;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nailureType;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SHAT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorString;                                             // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnDownloadComplete__Overridden
	 */
	struct ULuaManger_OnDownloadComplete__Overridden_Params
	{
	public:
		class FString                                              strUrl;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S5ZW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              contentOrsavePath;                                       // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSaveFile;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EU9T[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    errorCode;                                               // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnCoverWidgetChange__Overridden
	 */
	struct ULuaManger_OnCoverWidgetChange__Overridden_Params
	{
	public:
		class UUserWidget*                                         pTopParent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         coverPanel;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDragDropWidget*                                     coverObj;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDragDropWidget*                                     dragObj;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDragType;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDropType;                                               // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnCancelDragWidget__Overridden
	 */
	struct ULuaManger_OnCancelDragWidget__Overridden_Params
	{
	public:
		class UObject*                                             pDragObj;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDragType;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VGMQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         pTopParent;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnBeginDragWidget__Overridden
	 */
	struct ULuaManger_OnBeginDragWidget__Overridden_Params
	{
	public:
		class UObject*                                             pDragObj;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDragType;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5EL5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         pTopParent;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDragDropWidget*                                     _CurDragVisualWidget;                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.OnAxisKey__Overridden
	 */
	struct ULuaManger_OnAxisKey__Overridden_Params
	{
	public:
		class UObject*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AxisValue;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Touch1;                                                  // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Touch2;                                                  // 0x0024(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.NewEmptyUObject
	 */
	struct ULuaManger_NewEmptyUObject_Params
	{
	public:
		class UObject*                                             Outer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.NetMpaStop
	 */
	struct ULuaManger_NetMpaStop_Params
	{
	public:
		class FString                                              stopLog;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.NetMpaStart
	 */
	struct ULuaManger_NetMpaStart_Params
	{
	public:
		class FString                                              startLog;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.NetMpaAddAddress
	 */
	struct ULuaManger_NetMpaAddAddress_Params
	{
	public:
		class FString                                              Host;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IOUU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              contextId;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bChangeHost;                                             // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D2S7[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              finalUrl;                                                // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.NetDiagnosis
	 */
	struct ULuaManger_NetDiagnosis_Params
	{
	public:
		class FString                                              Target;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.MountPaks
	 */
	struct ULuaManger_MountPaks_Params
	{	};

	/**
	 * Function Main.LuaManger.ModifyAgeGateStatus
	 */
	struct ULuaManger_ModifyAgeGateStatus_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.MobileIsCharging
	 */
	struct ULuaManger_MobileIsCharging_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.MarkObjectToDestory
	 */
	struct ULuaManger_MarkObjectToDestory_Params
	{
	public:
		class UObject*                                             pObject;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.MapSignAlphaTest
	 */
	struct ULuaManger_MapSignAlphaTest_Params
	{
	public:
		class UImage*                                              InMapImage;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          AdvancedHitTexture;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              TestAlpha;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_043I[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FVector2D>                            InPosMap;                                                // 0x0018(0x0050)  (Parm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.LuaReportLogToGameServer__Overridden
	 */
	struct ULuaManger_LuaReportLogToGameServer__Overridden_Params
	{
	public:
		class FString                                              V;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.LuaFree__Overridden
	 */
	struct ULuaManger_LuaFree__Overridden_Params
	{	};

	/**
	 * Function Main.LuaManger.LogOut
	 */
	struct ULuaManger_LogOut_Params
	{	};

	/**
	 * Function Main.LuaManger.Login
	 */
	struct ULuaManger_Login_Params
	{
	public:
		int32_t                                                    nLoginType;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.Log
	 */
	struct ULuaManger_Log_Params
	{
	public:
		int32_t                                                    nLevel;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q8VZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              strModuleName;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              strLogContent;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.LoadWorldStreamLevel
	 */
	struct ULuaManger_LoadWorldStreamLevel_Params
	{
	public:
		class UObject*                                             worldObject;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LevelName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMakeVisibleAfterLoad;                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldBlockOnLoad;                                      // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.LoadWorld
	 */
	struct ULuaManger_LoadWorld_Params
	{
	public:
		class FString                                              LevelPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.LoadStreamLevel
	 */
	struct ULuaManger_LoadStreamLevel_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMakeVisibleAfterLoad;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldBlockOnLoad;                                      // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.LoadResAsync
	 */
	struct ULuaManger_LoadResAsync_Params
	{
	public:
		class FString                                              ResPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallbackAutoRelease;                                    // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.LoadRes
	 */
	struct ULuaManger_LoadRes_Params
	{
	public:
		class FString                                              ResPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.LoadMultiResAsync
	 */
	struct ULuaManger_LoadMultiResAsync_Params
	{
	public:
		TArray<class FString>                                      ResPathList;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallbackAutoRelease;                                    // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.LoadMap
	 */
	struct ULuaManger_LoadMap_Params
	{
	public:
		class FName                                                WorldContextHandle;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              mapPath;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.LeaveRoom
	 */
	struct ULuaManger_LeaveRoom_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.JudgeAgeGate
	 */
	struct ULuaManger_JudgeAgeGate_Params
	{
	public:
		class FScriptDelegate                                      ageCallback;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.JoinRoom
	 */
	struct ULuaManger_JoinRoom_Params
	{
	public:
		class FString                                              roomId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              userId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Token;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    roomType;                                                // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    getspeakerInterval;                                      // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       enableRangeAudio;                                        // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ARUX[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x003C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsWorldReady
	 */
	struct ULuaManger_IsWorldReady_Params
	{
	public:
		class FName                                                WorldContextHandle;                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsServerWorldReady
	 */
	struct ULuaManger_IsServerWorldReady_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsSandbox
	 */
	struct ULuaManger_IsSandbox_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsPostionUnderWidget
	 */
	struct ULuaManger_IsPostionUnderWidget_Params
	{
	public:
		class UWidget*                                             pWidget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           AbsolutePos;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsPermissionGranted
	 */
	struct ULuaManger_IsPermissionGranted_Params
	{
	public:
		class FString                                              strPermission;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsNotificationsAllowed
	 */
	struct ULuaManger_IsNotificationsAllowed_Params
	{
	public:
		class FString                                              strChannelName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsLinuxPlatform
	 */
	struct ULuaManger_IsLinuxPlatform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsGESpecContainsTag
	 */
	struct ULuaManger_IsGESpecContainsTag_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                InName;                                                  // 0x02A0(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02A8(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsForkedChildProcess
	 */
	struct ULuaManger_IsForkedChildProcess_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsEmulator
	 */
	struct ULuaManger_IsEmulator_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsBsdkPay
	 */
	struct ULuaManger_IsBsdkPay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsAttributeChangeFromSpec
	 */
	struct ULuaManger_IsAttributeChangeFromSpec_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x02A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02A8(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.IsAllLoadingDone
	 */
	struct ULuaManger_IsAllLoadingDone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.InviteFriend
	 */
	struct ULuaManger_InviteFriend_Params
	{
	public:
		class FString                                              friendID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InviteInfo;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.Init__Overridden
	 */
	struct ULuaManger_Init__Overridden_Params
	{	};

	/**
	 * Function Main.LuaManger.IncreaseBodyInstanceDamping
	 */
	struct ULuaManger_IncreaseBodyInstanceDamping_Params
	{
	public:
		class USkeletalMeshComponent*                              TargetMesh;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MultiFactor;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InRootBoneName;                                          // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.HttpIsDownloading
	 */
	struct ULuaManger_HttpIsDownloading_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.HttpDataWriteToDisk
	 */
	struct ULuaManger_HttpDataWriteToDisk_Params
	{	};

	/**
	 * Function Main.LuaManger.HasOpenFriendChainPermission
	 */
	struct ULuaManger_HasOpenFriendChainPermission_Params
	{
	public:
		int32_t                                                    nPlatformId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCallBack;                                              // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetWorldByWorldContextHandle
	 */
	struct ULuaManger_GetWorldByWorldContextHandle_Params
	{
	public:
		class FName                                                WorldContextHandle;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorld*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetWidgetTexts
	 */
	struct ULuaManger_GetWidgetTexts_Params
	{
	public:
		class UWidget*                                             pWidget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UWidget*>                                     allText;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetWidgetSize
	 */
	struct ULuaManger_GetWidgetSize_Params
	{
	public:
		class UWidget*                                             pWidget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetWidgetRelativePos
	 */
	struct ULuaManger_GetWidgetRelativePos_Params
	{
	public:
		struct FVector2D                                           Pos;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             selfWidget;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             parentWidget;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetWidgetAbsolutePostion
	 */
	struct ULuaManger_GetWidgetAbsolutePostion_Params
	{
	public:
		class UWidget*                                             pWidget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetViewportSize
	 */
	struct ULuaManger_GetViewportSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetUserAgreementUrlAndPrivacyPolicy
	 */
	struct ULuaManger_GetUserAgreementUrlAndPrivacyPolicy_Params
	{
	public:
		class FString                                              strUserAgreementUrl;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              strPrivacyPolicy;                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetTopWidget
	 */
	struct ULuaManger_GetTopWidget_Params
	{
	public:
		class UWidget*                                             pCtrl;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetTick
	 */
	struct ULuaManger_GetTick_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetTaskDownloadedSize
	 */
	struct ULuaManger_GetTaskDownloadedSize_Params
	{
	public:
		class FString                                              strUrl;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetTagSetByCaller
	 */
	struct ULuaManger_GetTagSetByCaller_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InTag;                                                   // 0x02A0(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InDefaultValue;                                          // 0x02A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x02AC(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetStringWithTranslation
	 */
	struct ULuaManger_GetStringWithTranslation_Params
	{
	public:
		class FString                                              KeyString;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetStringAsciiLen
	 */
	struct ULuaManger_GetStringAsciiLen_Params
	{
	public:
		class FString                                              str;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetSetByCaller
	 */
	struct ULuaManger_GetSetByCaller_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                InName;                                                  // 0x02A0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InDefaultValue;                                          // 0x02A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x02AC(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetSdkOpenId
	 */
	struct ULuaManger_GetSdkOpenId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetSdkFriends
	 */
	struct ULuaManger_GetSdkFriends_Params
	{	};

	/**
	 * Function Main.LuaManger.GetRtcToken
	 */
	struct ULuaManger_GetRtcToken_Params
	{
	public:
		class FString                                              roomId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              userId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              appId;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              appkey;                                                  // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nExpireTime;                                             // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QQ9Q[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetResMgr
	 */
	struct ULuaManger_GetResMgr_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetProcessId
	 */
	struct ULuaManger_GetProcessId_Params
	{
	public:
		uint32_t                                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetPlatformInfo
	 */
	struct ULuaManger_GetPlatformInfo_Params
	{	};

	/**
	 * Function Main.LuaManger.GetPersistentDownloadDir
	 */
	struct ULuaManger_GetPersistentDownloadDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetPerformanceLevel
	 */
	struct ULuaManger_GetPerformanceLevel_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetPakSavePath
	 */
	struct ULuaManger_GetPakSavePath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetOperatingSystemId
	 */
	struct ULuaManger_GetOperatingSystemId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetObjectUniqueID
	 */
	struct ULuaManger_GetObjectUniqueID_Params
	{
	public:
		class UObject*                                             InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetMRam
	 */
	struct ULuaManger_GetMRam_Params
	{
	public:
		uint64_t                                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetModAttributeMagnitudeFromSpec
	 */
	struct ULuaManger_GetModAttributeMagnitudeFromSpec_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x02A0(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x02D8(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetMinorLimit
	 */
	struct ULuaManger_GetMinorLimit_Params
	{
	public:
		class FString                                              country;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnGetMinorLimitBack;                                     // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetMaterialPath
	 */
	struct ULuaManger_GetMaterialPath_Params
	{
	public:
		class UMaterialInstance*                                   mi;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetMapName
	 */
	struct ULuaManger_GetMapName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetMachineId
	 */
	struct ULuaManger_GetMachineId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetMacAddressString
	 */
	struct ULuaManger_GetMacAddressString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetLuaSrcPath
	 */
	struct ULuaManger_GetLuaSrcPath_Params
	{
	public:
		class FString                                              luaScriptName;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetLuaMem
	 */
	struct ULuaManger_GetLuaMem_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetLoginUserInfo
	 */
	struct ULuaManger_GetLoginUserInfo_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetListViewItemOfEntry
	 */
	struct ULuaManger_GetListViewItemOfEntry_Params
	{
	public:
		class UListView*                                           ListView;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         entry;                                                   // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetListViewFromListEntry
	 */
	struct ULuaManger_GetListViewFromListEntry_Params
	{
	public:
		class UUserWidget*                                         listEntry;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UListViewBase*                                       ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetListViewEntryOfItem
	 */
	struct ULuaManger_GetListViewEntryOfItem_Params
	{
	public:
		class UListView*                                           ListView;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             item;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetListenPort
	 */
	struct ULuaManger_GetListenPort_Params
	{
	public:
		uint32_t                                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetLevelByPackageName
	 */
	struct ULuaManger_GetLevelByPackageName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InLongPackageName;                                       // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelStreaming*                                     ReturnValue;                                             // 0x0018(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetInputComponent
	 */
	struct ULuaManger_GetInputComponent_Params
	{
	public:
		class UInputComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetIniFile
	 */
	struct ULuaManger_GetIniFile_Params
	{
	public:
		class FString                                              strSection;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetImpactForceFromASC
	 */
	struct ULuaManger_GetImpactForceFromASC_Params
	{
	public:
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetHttpDownloadedLen
	 */
	struct ULuaManger_GetHttpDownloadedLen_Params
	{
	public:
		class FString                                              downloadInfo;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetHitPosFromGESpec
	 */
	struct ULuaManger_GetHitPosFromGESpec_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x02A0(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetHistoryAccounts
	 */
	struct ULuaManger_GetHistoryAccounts_Params
	{
	public:
		class FScriptDelegate                                      OnHistoryAccout;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetGBRam
	 */
	struct ULuaManger_GetGBRam_Params
	{
	public:
		uint32_t                                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetGameUserSettings
	 */
	struct ULuaManger_GetGameUserSettings_Params
	{
	public:
		class UGameUserSettings*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetGameplayTagByString
	 */
	struct ULuaManger_GetGameplayTagByString_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetGameInstance
	 */
	struct ULuaManger_GetGameInstance_Params
	{
	public:
		class UGameInstance*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetFriendChainInfo
	 */
	struct ULuaManger_GetFriendChainInfo_Params
	{
	public:
		int32_t                                                    nPlatformId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCallBack;                                              // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetFPSManager
	 */
	struct ULuaManger_GetFPSManager_Params
	{
	public:
		class UFPSManager*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetForkedChildProcessIndex
	 */
	struct ULuaManger_GetForkedChildProcessIndex_Params
	{
	public:
		uint16_t                                                   ReturnValue;                                             // 0x0000(0x0002)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetFlyLocation
	 */
	struct ULuaManger_GetFlyLocation_Params
	{
	public:
		struct FVector                                             StartPos;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Speed;                                                   // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FlyTime;                                                 // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FallTime;                                                // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Gravity;                                                 // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetFirstLocalPlayer
	 */
	struct ULuaManger_GetFirstLocalPlayer_Params
	{
	public:
		class ULocalPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetFilesFromPath
	 */
	struct ULuaManger_GetFilesFromPath_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FileExtension;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      files;                                                   // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetFileContent
	 */
	struct ULuaManger_GetFileContent_Params
	{
	public:
		class FString                                              strFilePath;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bProjectFile;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H9LU[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetCurrentWorldContextHandle
	 */
	struct ULuaManger_GetCurrentWorldContextHandle_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetCurrentNetState
	 */
	struct ULuaManger_GetCurrentNetState_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetCppTime
	 */
	struct ULuaManger_GetCppTime_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetCountryCode
	 */
	struct ULuaManger_GetCountryCode_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetCommandLine
	 */
	struct ULuaManger_GetCommandLine_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetChannelOp
	 */
	struct ULuaManger_GetChannelOp_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetCDO
	 */
	struct ULuaManger_GetCDO_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetCauserFromGESpec
	 */
	struct ULuaManger_GetCauserFromGESpec_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x02A0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetBatteryLevel
	 */
	struct ULuaManger_GetBatteryLevel_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetAvailableMRam
	 */
	struct ULuaManger_GetAvailableMRam_Params
	{
	public:
		uint64_t                                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetAttackTracerManager
	 */
	struct ULuaManger_GetAttackTracerManager_Params
	{
	public:
		class UAttackTracerMgr*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetAntiAddictionState
	 */
	struct ULuaManger_GetAntiAddictionState_Params
	{	};

	/**
	 * Function Main.LuaManger.GetAllUText
	 */
	struct ULuaManger_GetAllUText_Params
	{
	public:
		class UUserWidget*                                         pWidget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UWidget*>                                     allText;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetAllImageGlobal
	 */
	struct ULuaManger_GetAllImageGlobal_Params
	{
	public:
		class UUserWidget*                                         pWidget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UWidget*>                                     allImage;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetActiveNodeFromBehaviorTree
	 */
	struct ULuaManger_GetActiveNodeFromBehaviorTree_Params
	{
	public:
		class UBehaviorTreeComponent*                              pTree;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBTNode*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetActiveInstanceIdFromBehaviorTree
	 */
	struct ULuaManger_GetActiveInstanceIdFromBehaviorTree_Params
	{
	public:
		class UBehaviorTreeComponent*                              pTree;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetActiveGETimeRemaining
	 */
	struct ULuaManger_GetActiveGETimeRemaining_Params
	{
	public:
		struct FActiveGameplayEffect                               ActiveGameplayEffect;                                    // 0x0000(0x0370)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0370(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetActiveGEHandle
	 */
	struct ULuaManger_GetActiveGEHandle_Params
	{
	public:
		struct FActiveGameplayEffect                               ActiveGameplayEffect;                                    // 0x0000(0x0370)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0370(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GetActiveDeviceProfileName
	 */
	struct ULuaManger_GetActiveDeviceProfileName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.GESpecGrantedHasTag
	 */
	struct ULuaManger_GESpecGrantedHasTag_Params
	{
	public:
		struct FGameplayEffectSpec                                 GESpec;                                                  // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                TagName;                                                 // 0x02A0(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02A8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ForceStopBehaviorTree
	 */
	struct ULuaManger_ForceStopBehaviorTree_Params
	{
	public:
		class UBehaviorTreeComponent*                              BehaviorTreeComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ForceRebuildKeymaps
	 */
	struct ULuaManger_ForceRebuildKeymaps_Params
	{	};

	/**
	 * Function Main.LuaManger.FileIsExist
	 */
	struct ULuaManger_FileIsExist_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bProjectRelativeFile;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.FetchNotice
	 */
	struct ULuaManger_FetchNotice_Params
	{
	public:
		int32_t                                                    nScene;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J7KT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              savePath;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              strLanguage;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              otherParams;                                             // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ExistPendingGame
	 */
	struct ULuaManger_ExistPendingGame_Params
	{
	public:
		class FName                                                WorldContextHandle;                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ExecuteCommand
	 */
	struct ULuaManger_ExecuteCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.EncodeUrl
	 */
	struct ULuaManger_EncodeUrl_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.EnableSpeakerphone
	 */
	struct ULuaManger_EnableSpeakerphone_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.EnableMicrophone
	 */
	struct ULuaManger_EnableMicrophone_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.EnableAudioReceive
	 */
	struct ULuaManger_EnableAudioReceive_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.EmptySectionIniFile
	 */
	struct ULuaManger_EmptySectionIniFile_Params
	{
	public:
		class FString                                              strSection;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMatchKey;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.EmptyOverrideMaterials
	 */
	struct ULuaManger_EmptyOverrideMaterials_Params
	{
	public:
		class UMeshComponent*                                      Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.DumpReplication
	 */
	struct ULuaManger_DumpReplication_Params
	{	};

	/**
	 * Function Main.LuaManger.DragWidget__Overridden
	 */
	struct ULuaManger_DragWidget__Overridden_Params
	{
	public:
		class UObject*                                             pDragObj;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDragType;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nDropType;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             pDrop;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         pTopParent;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.DismissRatingCustomUi
	 */
	struct ULuaManger_DismissRatingCustomUi_Params
	{	};

	/**
	 * Function Main.LuaManger.DirectoryExists
	 */
	struct ULuaManger_DirectoryExists_Params
	{
	public:
		class FString                                              dirPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.DeletePak
	 */
	struct ULuaManger_DeletePak_Params
	{
	public:
		class FString                                              pakName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.DeleteHistoryAccount
	 */
	struct ULuaManger_DeleteHistoryAccount_Params
	{
	public:
		uint64_t                                                   userId;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnDeleteResult;                                          // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.DeleteDir
	 */
	struct ULuaManger_DeleteDir_Params
	{
	public:
		class FString                                              strPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CreateUserWidgetFromPath
	 */
	struct ULuaManger_CreateUserWidgetFromPath_Params
	{
	public:
		class FString                                              ResPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAsync;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FMBW[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallbackAutoRelease;                                    // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VYRV[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         ReturnValue;                                             // 0x0030(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CreateUserWidget
	 */
	struct ULuaManger_CreateUserWidget_Params
	{
	public:
		class UClass*                                              WidgetType;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CreateProc
	 */
	struct ULuaManger_CreateProc_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Params;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLaunchDetached;                                         // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLaunchHidden;                                           // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLaunchReallyHidden;                                     // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CreateObject
	 */
	struct ULuaManger_CreateObject_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CreateDir
	 */
	struct ULuaManger_CreateDir_Params
	{
	public:
		class FString                                              strPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CopyStringToClipboard
	 */
	struct ULuaManger_CopyStringToClipboard_Params
	{
	public:
		class FString                                              StringToCopy;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.Copy
	 */
	struct ULuaManger_Copy_Params
	{
	public:
		class FString                                              str;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ContinueDownload
	 */
	struct ULuaManger_ContinueDownload_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CloseNetConnection
	 */
	struct ULuaManger_CloseNetConnection_Params
	{
	public:
		class UNetConnection*                                      Connection;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CloseDisregardForGC
	 */
	struct ULuaManger_CloseDisregardForGC_Params
	{	};

	/**
	 * Function Main.LuaManger.CheckStringAsciiLen
	 */
	struct ULuaManger_CheckStringAsciiLen_Params
	{
	public:
		class FString                                              str;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nLen;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IPWY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CheckProtocolVersion
	 */
	struct ULuaManger_CheckProtocolVersion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CheckLevelStreamingDistanceVisible
	 */
	struct ULuaManger_CheckLevelStreamingDistanceVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CheckKeyDown
	 */
	struct ULuaManger_CheckKeyDown_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ChannelGeneralAction
	 */
	struct ULuaManger_ChannelGeneralAction_Params
	{
	public:
		int32_t                                                    code;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ChangeShortcutKey
	 */
	struct ULuaManger_ChangeShortcutKey_Params
	{
	public:
		class FString                                              fromkeyName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              tokeyName;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             obj;                                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShift;                                                  // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAlt;                                                    // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCtrl;                                                   // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCmd;                                                    // 0x002B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InputEvent;                                              // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ChangePrecomputedVisibilityHandler
	 */
	struct ULuaManger_ChangePrecomputedVisibilityHandler_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InLongPackageName;                                       // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ChangeLanguage
	 */
	struct ULuaManger_ChangeLanguage_Params
	{
	public:
		class FString                                              langType;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ChangeAxisKey
	 */
	struct ULuaManger_ChangeAxisKey_Params
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              fromkeyName;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              tokeyName;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.ChangeActionKey
	 */
	struct ULuaManger_ChangeActionKey_Params
	{
	public:
		class FString                                              ActionName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              fromkeyName;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              tokeyName;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShift;                                                  // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAlt;                                                    // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCtrl;                                                   // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCmd;                                                    // 0x0033(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CDKeyExchange
	 */
	struct ULuaManger_CDKeyExchange_Params
	{
	public:
		class FString                                              cdkey;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              roleid;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              serverid;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      cdkeyCallback;                                           // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.CanAutoLogin
	 */
	struct ULuaManger_CanAutoLogin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.BindWindowEvent
	 */
	struct ULuaManger_BindWindowEvent_Params
	{	};

	/**
	 * Function Main.LuaManger.AutoLogin
	 */
	struct ULuaManger_AutoLogin_Params
	{	};

	/**
	 * Function Main.LuaManger.AllSubLevelIsLoaded
	 */
	struct ULuaManger_AllSubLevelIsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddWidgetToGameViewPort
	 */
	struct ULuaManger_AddWidgetToGameViewPort_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nOrder;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddUploadLogfileFullPaths
	 */
	struct ULuaManger_AddUploadLogfileFullPaths_Params
	{
	public:
		TArray<class FString>                                      files;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddUploadLogfileDirPath
	 */
	struct ULuaManger_AddUploadLogfileDirPath_Params
	{
	public:
		class FString                                              strDir;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddUObjectToRoot
	 */
	struct ULuaManger_AddUObjectToRoot_Params
	{
	public:
		class UObject*                                             pObject;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddToReplicationNormalActors
	 */
	struct ULuaManger_AddToReplicationNormalActors_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddToAlwaysRelevant
	 */
	struct ULuaManger_AddToAlwaysRelevant_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddTinderActor
	 */
	struct ULuaManger_AddTinderActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddShortcutKey
	 */
	struct ULuaManger_AddShortcutKey_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             obj;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShift;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAlt;                                                    // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCtrl;                                                   // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCmd;                                                    // 0x001B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InputEvent;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddRelevantChangeCallback
	 */
	struct ULuaManger_AddRelevantChangeCallback_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddObjectToActorCluster
	 */
	struct ULuaManger_AddObjectToActorCluster_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddLocalNotification
	 */
	struct ULuaManger_AddLocalNotification_Params
	{
	public:
		class FString                                              Title;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Content;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint64_t                                                   nDelaySeconds;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddLevelNameToGPM
	 */
	struct ULuaManger_AddLevelNameToGPM_Params
	{
	public:
		class FString                                              strLevelName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddHitResultToTargetDataMsg
	 */
	struct ULuaManger_AddHitResultToTargetDataMsg_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Handle;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0028(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x00B0(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddAxisKey
	 */
	struct ULuaManger_AddAxisKey_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             obj;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AddActorToLevelCluster
	 */
	struct ULuaManger_AddActorToLevelCluster_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AccountUnBind
	 */
	struct ULuaManger_AccountUnBind_Params
	{
	public:
		int32_t                                                    nLoginType;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnUnBindAccoutBack;                                      // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AccountForceRebend
	 */
	struct ULuaManger_AccountForceRebend_Params
	{
	public:
		int32_t                                                    nAccountType;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Force;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnBindAccoutBack;                                        // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.LuaManger.AccountBind
	 */
	struct ULuaManger_AccountBind_Params
	{
	public:
		int32_t                                                    nLoginType;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnBindAccoutBack;                                        // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetMaskSizeXY
	 */
	struct UMaskWidget_SetMaskSizeXY_Params
	{
	public:
		int32_t                                                    ClipIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetMaskSize
	 */
	struct UMaskWidget_SetMaskSize_Params
	{
	public:
		int32_t                                                    ClipIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Size;                                                    // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetMaskPosXY
	 */
	struct UMaskWidget_SetMaskPosXY_Params
	{
	public:
		int32_t                                                    ClipIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetMaskPosSizeXYZW
	 */
	struct UMaskWidget_SetMaskPosSizeXYZW_Params
	{
	public:
		int32_t                                                    ClipIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      X;                                                       // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Z;                                                       // 0x000C(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      W;                                                       // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetMaskPosSize
	 */
	struct UMaskWidget_SetMaskPosSize_Params
	{
	public:
		int32_t                                                    ClipIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KSYD[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            PosSize;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetMaskPos
	 */
	struct UMaskWidget_SetMaskPos_Params
	{
	public:
		int32_t                                                    ClipIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Pos;                                                     // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetMaskImage
	 */
	struct UMaskWidget_SetMaskImage_Params
	{
	public:
		int32_t                                                    ClipIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L33F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Tex;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetBrushTintColor
	 */
	struct UMaskWidget_SetBrushTintColor_Params
	{
	public:
		struct FSlateColor                                         TintColor;                                               // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetBgOpacity
	 */
	struct UMaskWidget_SetBgOpacity_Params
	{
	public:
		float                                                      InOpacity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetBgImage
	 */
	struct UMaskWidget_SetBgImage_Params
	{
	public:
		class UTexture2D*                                          Tex;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMatchSize;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.SetBgColorAndOpacity
	 */
	struct UMaskWidget_SetBgColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.RemoveMaskClickClip
	 */
	struct UMaskWidget_RemoveMaskClickClip_Params
	{
	public:
		int32_t                                                    ClipIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.GetDynamicMaterial
	 */
	struct UMaskWidget_GetDynamicMaterial_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.EnableMaskClickClip
	 */
	struct UMaskWidget_EnableMaskClickClip_Params
	{
	public:
		int32_t                                                    ClipIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       enable;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MaskWidget.AddMaskClickClip
	 */
	struct UMaskWidget_AddMaskClickClip_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Size;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          mask;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.UpdateSignificanceSettings
	 */
	struct AMyShootCharacter_UpdateSignificanceSettings_Params
	{
	public:
		TMap<float, float>                                         SignificanceThresholdsMap;                               // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.UpdatePitchYaw
	 */
	struct AMyShootCharacter_UpdatePitchYaw_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.UpdateDirection
	 */
	struct AMyShootCharacter_UpdateDirection_Params
	{	};

	/**
	 * DelegateFunction Main.MyShootCharacter.TwoFloatEvent__DelegateSignature
	 */
	struct AMyShootCharacter_TwoFloatEvent__DelegateSignature_Params
	{
	public:
		float                                                      PrevValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AfterValue;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.SetUROParam
	 */
	struct AMyShootCharacter_SetUROParam_Params
	{
	public:
		class USkeletalMeshComponent*                              M;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.SetOverlayType
	 */
	struct AMyShootCharacter_SetOverlayType_Params
	{
	public:
		EOverlayType                                               Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.SetAllTickIntervals
	 */
	struct AMyShootCharacter_SetAllTickIntervals_Params
	{
	public:
		float                                                      interval;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.ServerSetControlRotation
	 */
	struct AMyShootCharacter_ServerSetControlRotation_Params
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.ServerMoveAxis
	 */
	struct AMyShootCharacter_ServerMoveAxis_Params
	{
	public:
		struct FVector2D                                           V;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.ReSetWorldOrginPos
	 */
	struct AMyShootCharacter_ReSetWorldOrginPos_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.RemovePlayerMappedKey
	 */
	struct AMyShootCharacter_RemovePlayerMappedKey_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceImmediately;                                       // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C0Q3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.RemoveAllPlayerMappedKeys
	 */
	struct AMyShootCharacter_RemoveAllPlayerMappedKeys_Params
	{
	public:
		bool                                                       bForceImmediately;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.OpenSignificanceSystem
	 */
	struct AMyShootCharacter_OpenSignificanceSystem_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.OnReceiveAttributeChange
	 */
	struct AMyShootCharacter_OnReceiveAttributeChange_Params
	{	};

	/**
	 * DelegateFunction Main.MyShootCharacter.OnNearWeaponHit__DelegateSignature
	 */
	struct AMyShootCharacter_OnNearWeaponHit__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          HitInfo;                                                 // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FName                                                HitSocketName;                                           // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.OnHandAttack
	 */
	struct AMyShootCharacter_OnHandAttack_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.OnGetHurt
	 */
	struct AMyShootCharacter_OnGetHurt_Params
	{
	public:
		class AActor*                                              FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DamageAttributeType;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FromPlayerOrSystem;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Main.MyShootCharacter.OneStringTwoFloatEvent__DelegateSignature
	 */
	struct AMyShootCharacter_OneStringTwoFloatEvent__DelegateSignature_Params
	{
	public:
		class FString                                              AttributeName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PrevValue;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AfterValue;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Main.MyShootCharacter.OnAttributeSetInitFinish__DelegateSignature
	 */
	struct AMyShootCharacter_OnAttributeSetInitFinish__DelegateSignature_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.OnActorRotationChange
	 */
	struct AMyShootCharacter_OnActorRotationChange_Params
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.OnActorLocationChange
	 */
	struct AMyShootCharacter_OnActorLocationChange_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.MyAddControllerYawInput
	 */
	struct AMyShootCharacter_MyAddControllerYawInput_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.MyAddControllerPitchInput
	 */
	struct AMyShootCharacter_MyAddControllerPitchInput_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.MoveRightCpp
	 */
	struct AMyShootCharacter_MoveRightCpp_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.MoveForwardCpp
	 */
	struct AMyShootCharacter_MoveForwardCpp_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.LuaSetupPlayerInputComponent
	 */
	struct AMyShootCharacter_LuaSetupPlayerInputComponent_Params
	{
	public:
		class UInputComponent*                                     PlayerInputComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.LuaRemoveMappingContext
	 */
	struct AMyShootCharacter_LuaRemoveMappingContext_Params
	{
	public:
		class UInputMappingContext*                                MappingContext;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.LuaOnDie
	 */
	struct AMyShootCharacter_LuaOnDie_Params
	{
	public:
		class AActor*                                              EffectInstigator;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              EffectCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0010(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      EffectMagnitude;                                         // 0x02B0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AGD7[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              AvatarActor;                                             // 0x02B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.LuaAddMappingContext
	 */
	struct AMyShootCharacter_LuaAddMappingContext_Params
	{
	public:
		class UInputMappingContext*                                MappingContext;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.LocalInputConfirm
	 */
	struct AMyShootCharacter_LocalInputConfirm_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.LocalInputCancel
	 */
	struct AMyShootCharacter_LocalInputCancel_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.K2_OnGetHurt
	 */
	struct AMyShootCharacter_K2_OnGetHurt_Params
	{
	public:
		class AActor*                                              FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DamageAttributeType;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FromPlayerOrSystem;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.K2_GiveAbility
	 */
	struct AMyShootCharacter_K2_GiveAbility_Params
	{
	public:
		class UClass*                                              Ability;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InputID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Lv;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpecHandle                          ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.K2_AddAbilities
	 */
	struct AMyShootCharacter_K2_AddAbilities_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.IsRightHandAttack
	 */
	struct AMyShootCharacter_IsRightHandAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.InitCharacter
	 */
	struct AMyShootCharacter_InitCharacter_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.InitAttributesFromLua
	 */
	struct AMyShootCharacter_InitAttributesFromLua_Params
	{
	public:
		TMap<class FString, float>                                 InAttributes;                                            // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.GetRightHandHoldWeaponMesh
	 */
	struct AMyShootCharacter_GetRightHandHoldWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.GetPlayerMappedKey
	 */
	struct AMyShootCharacter_GetPlayerMappedKey_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.GetMaxHealth
	 */
	struct AMyShootCharacter_GetMaxHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.GetLocalVelocity
	 */
	struct AMyShootCharacter_GetLocalVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.GetLeftHandHoldWeaponMesh
	 */
	struct AMyShootCharacter_GetLeftHandHoldWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.GetHealth
	 */
	struct AMyShootCharacter_GetHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.GetAttributeValueByName
	 */
	struct AMyShootCharacter_GetAttributeValueByName_Params
	{
	public:
		class FName                                                AttributeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.GetAbilitySystemComponent
	 */
	struct AMyShootCharacter_GetAbilitySystemComponent_Params
	{
	public:
		class UAbilitySystemComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.DoBindInputComponent
	 */
	struct AMyShootCharacter_DoBindInputComponent_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.Cheat_Invincible
	 */
	struct AMyShootCharacter_Cheat_Invincible_Params
	{
	public:
		bool                                                       bOpen;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.CancelAim
	 */
	struct AMyShootCharacter_CancelAim_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.BindLuaFunction
	 */
	struct AMyShootCharacter_BindLuaFunction_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETriggerEvent                                              TriggerEvent;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YR8T[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.AttributeSetInitFinish
	 */
	struct AMyShootCharacter_AttributeSetInitFinish_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.AddPlayerMappedKey
	 */
	struct AMyShootCharacter_AddPlayerMappedKey_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                NewKey;                                                  // 0x0008(0x0018)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceImmediately;                                       // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UDGP[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.AddAbilities
	 */
	struct AMyShootCharacter_AddAbilities_Params
	{	};

	/**
	 * Function Main.MyShootCharacter.AbilityLocalInputReleased
	 */
	struct AMyShootCharacter_AbilityLocalInputReleased_Params
	{
	public:
		int32_t                                                    AbilityEnum;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.MyShootCharacter.AbilityLocalInputPressed
	 */
	struct AMyShootCharacter_AbilityLocalInputPressed_Params
	{
	public:
		int32_t                                                    AbilityEnum;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.PoolingManager.SetInitFunction
	 */
	struct APoolingManager_SetInitFunction_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Function;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.PoolingManager.RecycleActor
	 */
	struct APoolingManager_RecycleActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      RecycleActorFunction;                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.PoolingManager.GetActor
	 */
	struct APoolingManager_GetActor_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      InitFunction;                                            // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.PoolingManager.ClearAll
	 */
	struct APoolingManager_ClearAll_Params
	{	};

	/**
	 * Function Main.ProgressBarExt.SetPercent
	 */
	struct UProgressBarExt_SetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ProgressBarExt.SetIsMarquee
	 */
	struct UProgressBarExt_SetIsMarquee_Params
	{
	public:
		bool                                                       InbIsMarquee;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ProgressBarExt.SetFillColorAndOpacity
	 */
	struct UProgressBarExt_SetFillColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMenu.SetButtonPath
	 */
	struct URadialMenu_SetButtonPath_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMenu.SetButtonCount
	 */
	struct URadialMenu_SetButtonCount_Params
	{
	public:
		int32_t                                                    nCount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMenu.PreselectButtonGamepad
	 */
	struct URadialMenu_PreselectButtonGamepad_Params
	{
	public:
		float                                                      ThumbValue_X;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ThumbValue_Y;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMenu.OnHoverOver
	 */
	struct URadialMenu_OnHoverOver_Params
	{	};

	/**
	 * Function Main.RadialMenu.HoverOverEvent
	 */
	struct URadialMenu_HoverOverEvent_Params
	{	};

	/**
	 * Function Main.RadialMenu.DisableButton
	 */
	struct URadialMenu_DisableButton_Params
	{
	public:
		int32_t                                                    ActivateIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMenu.Destructor
	 */
	struct URadialMenu_Destructor_Params
	{	};

	/**
	 * Function Main.RadialMenu.DeactivateButtons
	 */
	struct URadialMenu_DeactivateButtons_Params
	{	};

	/**
	 * Function Main.RadialMenu.CreateOneButton
	 */
	struct URadialMenu_CreateOneButton_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nButtonId;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              iconPath;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              tip;                                                     // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMenu.CreateButtons
	 */
	struct URadialMenu_CreateButtons_Params
	{
	public:
		int32_t                                                    nCount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMenu.ActivateButton
	 */
	struct URadialMenu_ActivateButton_Params
	{
	public:
		int32_t                                                    ActivateIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMenu_Button.SetPercent
	 */
	struct URadialMenu_Button_SetPercent_Params
	{
	public:
		float                                                      fPercent;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMenu_Button.OnClicked
	 */
	struct URadialMenu_Button_OnClicked_Params
	{	};

	/**
	 * Function Main.RadialMenu_Button.ClickEvent
	 */
	struct URadialMenu_Button_ClickEvent_Params
	{	};

	/**
	 * Function Main.RadialMultLevelMenu.SetButtonCount
	 */
	struct URadialMultLevelMenu_SetButtonCount_Params
	{
	public:
		int32_t                                                    nMenuLevel;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nCount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMultLevelMenu.OnHoverOver
	 */
	struct URadialMultLevelMenu_OnHoverOver_Params
	{	};

	/**
	 * Function Main.RadialMultLevelMenu.HoverOverEvent
	 */
	struct URadialMultLevelMenu_HoverOverEvent_Params
	{	};

	/**
	 * Function Main.RadialMultLevelMenu.DisableButton
	 */
	struct URadialMultLevelMenu_DisableButton_Params
	{
	public:
		int32_t                                                    menuLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ActivateIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMultLevelMenu.Destructor
	 */
	struct URadialMultLevelMenu_Destructor_Params
	{	};

	/**
	 * Function Main.RadialMultLevelMenu.DeactivateButtons
	 */
	struct URadialMultLevelMenu_DeactivateButtons_Params
	{
	public:
		int32_t                                                    menuLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMultLevelMenu.CreateOneButton
	 */
	struct URadialMultLevelMenu_CreateOneButton_Params
	{
	public:
		int32_t                                                    nMenuLevel;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    nButtonId;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J4V7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              tip;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RadialMultLevelMenu.ActivateButton
	 */
	struct URadialMultLevelMenu_ActivateButton_Params
	{
	public:
		int32_t                                                    menuLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ActivateIndex;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RecoilGraphLib.RPM_RemoveRow
	 */
	struct URecoilGraphLib_RPM_RemoveRow_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                RowName;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDataTable*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RecoilGraphLib.RPM_AddRow
	 */
	struct URecoilGraphLib_RPM_AddRow_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                RowName;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRecoilGraph_Struct                                 Value;                                                   // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class UDataTable*                                          ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ResMgr.SyncLoadRes
	 */
	struct UResMgr_SyncLoadRes_Params
	{
	public:
		class FString                                              ResPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.ResMgr.AsyncLoadRes
	 */
	struct UResMgr_AsyncLoadRes_Params
	{
	public:
		class FString                                              ResPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfBaseJoyStrick.SetInputScale
	 */
	struct USelfBaseJoyStrick_SetInputScale_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfBaseJoyStrick.SetActiveOpacity
	 */
	struct USelfBaseJoyStrick_SetActiveOpacity_Params
	{
	public:
		float                                                      fActiveOpacity;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfGameInstance.LoadSubLevels
	 */
	struct USelfGameInstance_LoadSubLevels_Params
	{	};

	/**
	 * Function Main.SelfGameMode.OnPreLogin
	 */
	struct ASelfGameMode_OnPreLogin_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Address;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0020(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfGameMode.OnLogin
	 */
	struct ASelfGameMode_OnLogin_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Options;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfGameMode.LuaSpawnPlayerController
	 */
	struct ASelfGameMode_LuaSpawnPlayerController_Params
	{
	public:
		ENetRole                                                   InRemoteRole;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R8B8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Options;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfGameMode.LuaPostSeamlessTravel
	 */
	struct ASelfGameMode_LuaPostSeamlessTravel_Params
	{	};

	/**
	 * Function Main.SelfGameMode.LuaGetSeamlessTravelActorList
	 */
	struct ASelfGameMode_LuaGetSeamlessTravelActorList_Params
	{
	public:
		bool                                                       bToTransition;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S4A9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ActorList;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfJoyStrick.SetThumbBarFix
	 */
	struct USelfJoyStrick_SetThumbBarFix_Params
	{
	public:
		bool                                                       bFix;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfJoyStrick.SetShowAutoRush
	 */
	struct USelfJoyStrick_SetShowAutoRush_Params
	{
	public:
		bool                                                       Brush;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfJoyStrick.ReleaseJoystick
	 */
	struct USelfJoyStrick_ReleaseJoystick_Params
	{	};

	/**
	 * DelegateFunction Main.SelfJoyStrick.OnShowRun__DelegateSignature
	 */
	struct USelfJoyStrick_OnShowRun__DelegateSignature_Params
	{
	public:
		bool                                                       ShowRun;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfJoyStrick.GetThumbPos
	 */
	struct USelfJoyStrick_GetThumbPos_Params
	{
	public:
		int32_t                                                    ControlIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfLocalPlayer.RemoveOption
	 */
	struct USelfLocalPlayer_RemoveOption_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfLocalPlayer.ClearAllOptions
	 */
	struct USelfLocalPlayer_ClearAllOptions_Params
	{	};

	/**
	 * Function Main.SelfLocalPlayer.AddOption
	 */
	struct USelfLocalPlayer_AddOption_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfPlayerController.ShowDamageNumber
	 */
	struct ASelfPlayerController_ShowDamageNumber_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SAQE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TargetCharacter;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Pos;                                                     // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D3PB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpec                                 GESpec;                                                  // 0x0020(0x02A0)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfPlayerController.SetSessionMgr
	 */
	struct ASelfPlayerController_SetSessionMgr_Params
	{
	public:
		class USessionMgr*                                         pMgr;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfPlayerController.SendToServer
	 */
	struct ASelfPlayerController_SendToServer_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfPlayerController.SendToClient
	 */
	struct ASelfPlayerController_SendToClient_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfPlayerController.SendToAllClients
	 */
	struct ASelfPlayerController_SendToAllClients_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfPlayerController.LuaOnNetCleanup
	 */
	struct ASelfPlayerController_LuaOnNetCleanup_Params
	{	};

	/**
	 * Function Main.SelfPlayerController.LuaFlushPressedKeys
	 */
	struct ASelfPlayerController_LuaFlushPressedKeys_Params
	{	};

	/**
	 * Function Main.SelfPlayerController.K2_ShowDamageNumber
	 */
	struct ASelfPlayerController_K2_ShowDamageNumber_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OMPS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TargetCharacter;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Pos;                                                     // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I83V[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpec                                 GESpec;                                                  // 0x0020(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SelfPlayerController.GetConnectIp
	 */
	struct ASelfPlayerController_GetConnectIp_Params
	{
	public:
		int32_t                                                    nPort;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VQMI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.Session.Close
	 */
	struct USession_Close_Params
	{	};

	/**
	 * Function Main.SessionClient.SetSocketBufferSize
	 */
	struct USessionClient_SetSocketBufferSize_Params
	{
	public:
		int32_t                                                    recvSize;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    writeSize;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionClient.SetAliveTimeout
	 */
	struct USessionClient_SetAliveTimeout_Params
	{
	public:
		int32_t                                                    nTimeout;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionClient.ResetIpAndConnect
	 */
	struct USessionClient_ResetIpAndConnect_Params
	{
	public:
		class FString                                              strIp;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   nPort;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    connectTimeOut;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionClient.ReConnect
	 */
	struct USessionClient_ReConnect_Params
	{
	public:
		int32_t                                                    connectTimeOut;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionPingClient.Ping
	 */
	struct USessionPingClient_Ping_Params
	{
	public:
		class FString                                              strIp;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionPingClient.GetPing
	 */
	struct USessionPingClient_GetPing_Params
	{
	public:
		class FString                                              strIp;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SessionPingClient.CleanPings
	 */
	struct USessionPingClient_CleanPings_Params
	{	};

	/**
	 * Function Main.SmallEyeJoyStrick.SetTurnValue
	 */
	struct USmallEyeJoyStrick_SetTurnValue_Params
	{
	public:
		float                                                      fInDeadZone;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      fInInitValue;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      fInPitchInputScale;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SmallEyeJoyStrick.ReleaseJoystick
	 */
	struct USmallEyeJoyStrick_ReleaseJoystick_Params
	{	};

	/**
	 * DelegateFunction Main.SmallEyeJoyStrick.OnShowRun__DelegateSignature
	 */
	struct USmallEyeJoyStrick_OnShowRun__DelegateSignature_Params
	{
	public:
		bool                                                       ShowRun;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SmoothSyncComponent.SetLastReceivedPos
	 */
	struct USmoothSyncComponent_SetLastReceivedPos_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SmoothSyncComponent.SetEnable
	 */
	struct USmoothSyncComponent_SetEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SmoothSyncComponent.ServerSetRotationFollowVelocity
	 */
	struct USmoothSyncComponent_ServerSetRotationFollowVelocity_Params
	{
	public:
		bool                                                       follow;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SmoothSyncComponent.ServerSendRotationToEveryone
	 */
	struct USmoothSyncComponent_ServerSendRotationToEveryone_Params
	{
	public:
		uint16_t                                                   Roll;                                                    // 0x0000(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint16_t                                                   Pitch;                                                   // 0x0002(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint16_t                                                   Yaw;                                                     // 0x0004(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SmoothSyncComponent.ServerSendResetPosToEveryone
	 */
	struct USmoothSyncComponent_ServerSendResetPosToEveryone_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLerp;                                                   // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SmoothSyncComponent.ServerSendPosToEveryone
	 */
	struct USmoothSyncComponent_ServerSendPosToEveryone_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLerp;                                                   // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SmoothSyncComponent.OnRep_ServerFps
	 */
	struct USmoothSyncComponent_OnRep_ServerFps_Params
	{	};

	/**
	 * Function Main.SmoothSyncComponent.GetVelocity
	 */
	struct USmoothSyncComponent_GetVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.SetEnableServerAutoSend
	 */
	struct USyncMoveComponent_SetEnableServerAutoSend_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.SetCurState
	 */
	struct USyncMoveComponent_SetCurState_Params
	{
	public:
		EStateType                                                 State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.ServerSetPos_Multicast
	 */
	struct USyncMoveComponent_ServerSetPos_Multicast_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.ServerSendRotation_Multicast
	 */
	struct USyncMoveComponent_ServerSendRotation_Multicast_Params
	{
	public:
		int16_t                                                    Roll;                                                    // 0x0000(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int16_t                                                    Pitch;                                                   // 0x0002(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int16_t                                                    Yaw;                                                     // 0x0004(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.ServerSendPos_Multicast
	 */
	struct USyncMoveComponent_ServerSendPos_Multicast_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.ServerSendMsgIndex_Multicast
	 */
	struct USyncMoveComponent_ServerSendMsgIndex_Multicast_Params
	{
	public:
		uint32_t                                                   msgIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.SendRotation_Server
	 */
	struct USyncMoveComponent_SendRotation_Server_Params
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.SendPosition_Server
	 */
	struct USyncMoveComponent_SendPosition_Server_Params
	{
	public:
		struct FVector_NetQuantize100                              Pos;                                                     // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              Velocity;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     Timestamp;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EStateType                                                 State;                                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VIOA[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   sendPosMsgIndex;                                         // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.SendPosition
	 */
	struct USyncMoveComponent_SendPosition_Params
	{	};

	/**
	 * Function Main.SyncMoveComponent.RefreshSendPosMsgIndex_Multicast
	 */
	struct USyncMoveComponent_RefreshSendPosMsgIndex_Multicast_Params
	{	};

	/**
	 * Function Main.SyncMoveComponent.RefreshMsgIndex
	 */
	struct USyncMoveComponent_RefreshMsgIndex_Params
	{	};

	/**
	 * Function Main.SyncMoveComponent.OnRep_ServerTimestamp
	 */
	struct USyncMoveComponent_OnRep_ServerTimestamp_Params
	{	};

	/**
	 * Function Main.SyncMoveComponent.GetVelocity
	 */
	struct USyncMoveComponent_GetVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.GetCurState
	 */
	struct USyncMoveComponent_GetCurState_Params
	{
	public:
		EStateType                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.GetClientTimestamp
	 */
	struct USyncMoveComponent_GetClientTimestamp_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.SyncMoveComponent.GetClientPlatformTimestamp
	 */
	struct USyncMoveComponent_GetClientPlatformTimestamp_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.TileViewEx.SetListAlignment
	 */
	struct UTileViewEx_SetListAlignment_Params
	{
	public:
		EListItemAlignment                                         Alignment;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.TouchTurn.SetTurnValue
	 */
	struct UTouchTurn_SetTurnValue_Params
	{
	public:
		float                                                      I;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      S;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      limitPixel;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.TouchTurn.SetScopeValue
	 */
	struct UTouchTurn_SetScopeValue_Params
	{
	public:
		float                                                      S;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.TouchTurn.SetPitchValue
	 */
	struct UTouchTurn_SetPitchValue_Params
	{
	public:
		float                                                      pitchvalue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.TouchTurn.SetInputScale
	 */
	struct UTouchTurn_SetInputScale_Params
	{
	public:
		float                                                      fYawscale;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      fPitchscale;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.TouchTurn.SetInitValue
	 */
	struct UTouchTurn_SetInitValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Main.TrapActor.OnWeaponHit__DelegateSignature
	 */
	struct ATrapActor_OnWeaponHit__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          HitInfo;                                                 // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FName                                                HitSocketName;                                           // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.TrapActor.GetRightHandHoldWeaponMesh
	 */
	struct ATrapActor_GetRightHandHoldWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.TrapActor.GetLeftHandHoldWeaponMesh
	 */
	struct ATrapActor_GetLeftHandHoldWeaponMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Main.RichTextLinkBlockDecorator.ClickFun
	 */
	struct URichTextLinkBlockDecorator_ClickFun_Params
	{
	public:
		TMap<class FString, class FString>                         MetaData;                                                // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    nButtonIndex;                                            // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
