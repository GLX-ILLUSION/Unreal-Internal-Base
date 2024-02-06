/**
 * Name: GreedIsGood
 * Version: fodase
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.UpdateSignificanceSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<float, float>                                 SignificanceThresholdsMap                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AAIPawn::UpdateSignificanceSettings(TMap<float, float> SignificanceThresholdsMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.UpdateSignificanceSettings");
		
		AAIPawn_UpdateSignificanceSettings_Params params {};
		params.SignificanceThresholdsMap = SignificanceThresholdsMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.UnlockLookAt
	 * 		Flags  -> ()
	 */
	void AAIPawn::UnlockLookAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.UnlockLookAt");
		
		AAIPawn_UnlockLookAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.AIPawn.TwoFloatEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PrevValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AfterValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIPawn::TwoFloatEvent__DelegateSignature(float PrevValue, float AfterValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.AIPawn.TwoFloatEvent__DelegateSignature");
		
		AAIPawn_TwoFloatEvent__DelegateSignature_Params params {};
		params.PrevValue = PrevValue;
		params.AfterValue = AfterValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.StopMovementImmediately
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bClearDelegate                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIPawn::StopMovementImmediately(bool bClearDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.StopMovementImmediately");
		
		AAIPawn_StopMovementImmediately_Params params {};
		params.bClearDelegate = bClearDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.SetUpProperties
	 * 		Flags  -> ()
	 */
	void AAIPawn::SetUpProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.SetUpProperties");
		
		AAIPawn_SetUpProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.SetSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIPawn::SetSpeed(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.SetSpeed");
		
		AAIPawn_SetSpeed_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.SetRotationFollowVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFollow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIPawn::SetRotationFollowVelocity(bool bFollow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.SetRotationFollowVelocity");
		
		AAIPawn_SetRotationFollowVelocity_Params params {};
		params.bFollow = bFollow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.RotateToTargetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              UsedRotateSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIPawn::RotateToTargetRotation(const struct FRotator& Rotation, float UsedRotateSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.RotateToTargetRotation");
		
		AAIPawn_RotateToTargetRotation_Params params {};
		params.Rotation = Rotation;
		params.UsedRotateSpeed = UsedRotateSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.OnRep_IsDead
	 * 		Flags  -> ()
	 */
	void AAIPawn::OnRep_IsDead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.OnRep_IsDead");
		
		AAIPawn_OnRep_IsDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.MoveToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      StopOnOverlap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      AcceptPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockAILogic                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseContinuosGoalTracking                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      ProjectGoalOnNavigation                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAITask_MoveTo* AAIPawn::MoveToLocation(const struct FVector& Position, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag ProjectGoalOnNavigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.MoveToLocation");
		
		AAIPawn_MoveToLocation_Params params {};
		params.Position = Position;
		params.AcceptanceRadius = AcceptanceRadius;
		params.StopOnOverlap = StopOnOverlap;
		params.AcceptPartialPath = AcceptPartialPath;
		params.bUsePathfinding = bUsePathfinding;
		params.bLockAILogic = bLockAILogic;
		params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;
		params.ProjectGoalOnNavigation = ProjectGoalOnNavigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.MoveToActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorPtr                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      StopOnOverlap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      AcceptPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockAILogic                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseContinuosGoalTracking                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      ProjectGoalOnNavigation                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAITask_MoveTo* AAIPawn::MoveToActor(class AActor* ActorPtr, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag ProjectGoalOnNavigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.MoveToActor");
		
		AAIPawn_MoveToActor_Params params {};
		params.ActorPtr = ActorPtr;
		params.AcceptanceRadius = AcceptanceRadius;
		params.StopOnOverlap = StopOnOverlap;
		params.AcceptPartialPath = AcceptPartialPath;
		params.bUsePathfinding = bUsePathfinding;
		params.bLockAILogic = bLockAILogic;
		params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;
		params.ProjectGoalOnNavigation = ProjectGoalOnNavigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.LockLookAtPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UsedRotateSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIPawn::LockLookAtPos(const struct FVector& TargetLocation, float UsedRotateSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.LockLookAtPos");
		
		AAIPawn_LockLookAtPos_Params params {};
		params.TargetLocation = TargetLocation;
		params.UsedRotateSpeed = UsedRotateSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.LockLookAtActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UsedRotateSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIPawn::LockLookAtActor(class AActor* Actor, float UsedRotateSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.LockLookAtActor");
		
		AAIPawn_LockLookAtActor_Params params {};
		params.Actor = Actor;
		params.UsedRotateSpeed = UsedRotateSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.K2_GiveAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Ability                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Lv                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilitySpecHandle AAIPawn::K2_GiveAbility(class UClass* Ability, int32_t Lv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.K2_GiveAbility");
		
		AAIPawn_K2_GiveAbility_Params params {};
		params.Ability = Ability;
		params.Lv = Lv;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.K2_AddAbilities
	 * 		Flags  -> ()
	 */
	void AAIPawn::K2_AddAbilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.K2_AddAbilities");
		
		AAIPawn_K2_AddAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.InitAttributesFromLua
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, float>                         InAttributes                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void AAIPawn::InitAttributesFromLua(TMap<class FString, float> InAttributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.InitAttributesFromLua");
		
		AAIPawn_InitAttributesFromLua_Params params {};
		params.InAttributes = InAttributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.GetSpeed
	 * 		Flags  -> ()
	 */
	float AAIPawn::GetSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.GetSpeed");
		
		AAIPawn_GetSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.GetRightHandHoldWeaponMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* AAIPawn::GetRightHandHoldWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.GetRightHandHoldWeaponMesh");
		
		AAIPawn_GetRightHandHoldWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.GetMaxHealth
	 * 		Flags  -> ()
	 */
	float AAIPawn::GetMaxHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.GetMaxHealth");
		
		AAIPawn_GetMaxHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.GetLeftHandHoldWeaponMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* AAIPawn::GetLeftHandHoldWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.GetLeftHandHoldWeaponMesh");
		
		AAIPawn_GetLeftHandHoldWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.GetHealth
	 * 		Flags  -> ()
	 */
	float AAIPawn::GetHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.GetHealth");
		
		AAIPawn_GetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.GetAttributeValueByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AAIPawn::GetAttributeValueByName(const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.GetAttributeValueByName");
		
		AAIPawn_GetAttributeValueByName_Params params {};
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.FindRandomLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     CenterLocation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ResultLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Range                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIPawn::FindRandomLocation(const struct FVector& CenterLocation, struct FVector* ResultLocation, float Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.FindRandomLocation");
		
		AAIPawn_FindRandomLocation_Params params {};
		params.CenterLocation = CenterLocation;
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultLocation != nullptr)
			*ResultLocation = params.ResultLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawn.Die
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         DamageEffectSpec                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              DamageMagnitude                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      AvatarActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AAIPawn::Die(class AActor* DamageInstigator, class AActor* DamageCauser, const struct FGameplayEffectSpec& DamageEffectSpec, float DamageMagnitude, class AActor* AvatarActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawn.Die");
		
		AAIPawn_Die_Params params {};
		params.DamageInstigator = DamageInstigator;
		params.DamageCauser = DamageCauser;
		params.DamageEffectSpec = DamageEffectSpec;
		params.DamageMagnitude = DamageMagnitude;
		params.AvatarActor = AvatarActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AIPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AbilityTask_PlayMontageAndWaitForNotify.PlayMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAbilityEnds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AnimRootMotionTranslationScale                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNotStopAllMontages                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_PlayMontageAndWaitForNotify* UAbilityTask_PlayMontageAndWaitForNotify::PlayMontage(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, bool bNotStopAllMontages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AbilityTask_PlayMontageAndWaitForNotify.PlayMontage");
		
		UAbilityTask_PlayMontageAndWaitForNotify_PlayMontage_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.MontageToPlay = MontageToPlay;
		params.Rate = Rate;
		params.StartSection = StartSection;
		params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
		params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
		params.bNotStopAllMontages = bNotStopAllMontages;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AbilityTask_PlayMontageAndWaitForNotify.OnAnimNotifyState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomAnimNotifyState*                      CustomAnimNotifyState                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        EventName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_PlayMontageAndWaitForNotify::OnAnimNotifyState(class UCustomAnimNotifyState* CustomAnimNotifyState, const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AbilityTask_PlayMontageAndWaitForNotify.OnAnimNotifyState");
		
		UAbilityTask_PlayMontageAndWaitForNotify_OnAnimNotifyState_Params params {};
		params.CustomAnimNotifyState = CustomAnimNotifyState;
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AbilityTask_PlayMontageAndWaitForNotify.OnAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomAnimNotify*                           CustomAnimNotify                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_PlayMontageAndWaitForNotify::OnAnimNotify(class UCustomAnimNotify* CustomAnimNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AbilityTask_PlayMontageAndWaitForNotify.OnAnimNotify");
		
		UAbilityTask_PlayMontageAndWaitForNotify_OnAnimNotify_Params params {};
		params.CustomAnimNotify = CustomAnimNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_PlayMontageAndWaitForNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_PlayMontageAndWaitForNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AbilityTask_PlayMontageAndWaitForNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AbilityTask_ServerWaitForClientTargetData.ServerWaitForClientTargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_ServerWaitForClientTargetData* UAbilityTask_ServerWaitForClientTargetData::ServerWaitForClientTargetData(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, bool TriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AbilityTask_ServerWaitForClientTargetData.ServerWaitForClientTargetData");
		
		UAbilityTask_ServerWaitForClientTargetData_ServerWaitForClientTargetData_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.TriggerOnce = TriggerOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AbilityTask_ServerWaitForClientTargetData.OnTargetDataReplicatedCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActivationTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_ServerWaitForClientTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AbilityTask_ServerWaitForClientTargetData.OnTargetDataReplicatedCallback");
		
		UAbilityTask_ServerWaitForClientTargetData_OnTargetDataReplicatedCallback_Params params {};
		params.Data = Data;
		params.ActivationTag = ActivationTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_ServerWaitForClientTargetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_ServerWaitForClientTargetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AbilityTask_ServerWaitForClientTargetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorComponent_ClientOnly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorComponent_ClientOnly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.ActorComponent_ClientOnly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ActorRandom.Random
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFromClick                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActorRandom::Random(bool bFromClick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ActorRandom.Random");
		
		AActorRandom_Random_Params params {};
		params.bFromClick = bFromClick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ActorRandom.NotifyDestroyed
	 * 		Flags  -> ()
	 */
	void AActorRandom::NotifyDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ActorRandom.NotifyDestroyed");
		
		AActorRandom_NotifyDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ActorRandom.GetActorRandomProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InTargetActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AActorRandom::GetActorRandomProperty(class AActor* InTargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ActorRandom.GetActorRandomProperty");
		
		AActorRandom_GetActorRandomProperty_Params params {};
		params.InTargetActor = InTargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ActorRandom.DestroySelfAndAllChildren
	 * 		Flags  -> ()
	 */
	void AActorRandom::DestroySelfAndAllChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ActorRandom.DestroySelfAndAllChildren");
		
		AActorRandom_DestroySelfAndAllChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ActorRandom.DestroySelf
	 * 		Flags  -> ()
	 */
	void AActorRandom::DestroySelf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ActorRandom.DestroySelf");
		
		AActorRandom_DestroySelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ActorRandom.DestroyChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Child                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActorRandom::DestroyChild(class AActor* Child)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ActorRandom.DestroyChild");
		
		AActorRandom_DestroyChild_Params params {};
		params.Child = Child;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AActorRandom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActorRandom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.ActorRandom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AINavLinkComponent.SetNavEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAINavLinkComponent::SetNavEnabled(bool bNewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AINavLinkComponent.SetNavEnabled");
		
		UAINavLinkComponent_SetNavEnabled_Params params {};
		params.bNewEnabled = bNewEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAINavLinkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAINavLinkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AINavLinkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawnMovementComponent.StopMoveNow
	 * 		Flags  -> ()
	 */
	void UAIPawnMovementComponent::StopMoveNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawnMovementComponent.StopMoveNow");
		
		UAIPawnMovementComponent_StopMoveNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.AIPawnMovementComponent.OnMovementStatusChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPawnMovementComponent::OnMovementStatusChange__DelegateSignature(int32_t Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.AIPawnMovementComponent.OnMovementStatusChange__DelegateSignature");
		
		UAIPawnMovementComponent_OnMovementStatusChange__DelegateSignature_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawnMovementComponent.MoveToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TeleportAfterTimeout                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPawnMovementComponent::MoveToLocation(const struct FVector& TargetPosition, int32_t Timeout, bool TeleportAfterTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawnMovementComponent.MoveToLocation");
		
		UAIPawnMovementComponent_MoveToLocation_Params params {};
		params.TargetPosition = TargetPosition;
		params.Timeout = Timeout;
		params.TeleportAfterTimeout = TeleportAfterTimeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawnMovementComponent.MoveToActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TeleportAfterTimeout                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPawnMovementComponent::MoveToActor(class AActor* TargetActor, int32_t Timeout, bool TeleportAfterTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawnMovementComponent.MoveToActor");
		
		UAIPawnMovementComponent_MoveToActor_Params params {};
		params.TargetActor = TargetActor;
		params.Timeout = Timeout;
		params.TeleportAfterTimeout = TeleportAfterTimeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AIPawnMovementComponent.LookAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPawnMovementComponent::LookAt(const struct FVector& TargetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AIPawnMovementComponent.LookAt");
		
		UAIPawnMovementComponent_LookAt_Params params {};
		params.TargetPosition = TargetPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPawnMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPawnMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AIPawnMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AITask_FlyTo.OnUpdateActorLocation
	 * 		Flags  -> ()
	 */
	void UAITask_FlyTo::OnUpdateActorLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AITask_FlyTo.OnUpdateActorLocation");
		
		UAITask_FlyTo_OnUpdateActorLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AITask_FlyTo.OnFindFlyPathSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCPathNode>                          Path                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ECPathfindingFailReason                            FailReason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAITask_FlyTo::OnFindFlyPathSuccess(TArray<struct FCPathNode> Path, ECPathfindingFailReason FailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AITask_FlyTo.OnFindFlyPathSuccess");
		
		UAITask_FlyTo_OnFindFlyPathSuccess_Params params {};
		params.Path = Path;
		params.FailReason = FailReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AITask_FlyTo.OnFindFlyPathFail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCPathNode>                          Path                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ECPathfindingFailReason                            FailReason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAITask_FlyTo::OnFindFlyPathFail(TArray<struct FCPathNode> Path, ECPathfindingFailReason FailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AITask_FlyTo.OnFindFlyPathFail");
		
		UAITask_FlyTo_OnFindFlyPathFail_Params params {};
		params.Path = Path;
		params.FailReason = FailReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITask_FlyTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask_FlyTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AITask_FlyTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlphaTestButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlphaTestButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AlphaTestButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AlphaTestParent.ReleasePress
	 * 		Flags  -> ()
	 */
	void UAlphaTestParent::ReleasePress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AlphaTestParent.ReleasePress");
		
		UAlphaTestParent_ReleasePress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.AlphaTestParent.OnMouseEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   CursorDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UAlphaTestParent::OnMouseEvent__DelegateSignature(const struct FVector2D& screenPos, const struct FVector2D& CursorDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.AlphaTestParent.OnMouseEvent__DelegateSignature");
		
		UAlphaTestParent_OnMouseEvent__DelegateSignature_Params params {};
		params.screenPos = screenPos;
		params.CursorDelta = CursorDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlphaTestParent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlphaTestParent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AlphaTestParent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ARider.UpdateSignificanceSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<float, float>                                 SignificanceThresholdsMap                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AARider::UpdateSignificanceSettings(TMap<float, float> SignificanceThresholdsMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ARider.UpdateSignificanceSettings");
		
		AARider_UpdateSignificanceSettings_Params params {};
		params.SignificanceThresholdsMap = SignificanceThresholdsMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ARider.MoveToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      StopOnOverlap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      AcceptPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockAILogic                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseContinuosGoalTracking                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      ProjectGoalOnNavigation                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAITask_MoveTo* AARider::MoveToLocation(const struct FVector& Position, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag ProjectGoalOnNavigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ARider.MoveToLocation");
		
		AARider_MoveToLocation_Params params {};
		params.Position = Position;
		params.AcceptanceRadius = AcceptanceRadius;
		params.StopOnOverlap = StopOnOverlap;
		params.AcceptPartialPath = AcceptPartialPath;
		params.bUsePathfinding = bUsePathfinding;
		params.bLockAILogic = bLockAILogic;
		params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;
		params.ProjectGoalOnNavigation = ProjectGoalOnNavigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ARider.MoveToActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorPtr                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      StopOnOverlap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      AcceptPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockAILogic                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseContinuosGoalTracking                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAIOptionFlag                                      ProjectGoalOnNavigation                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAITask_MoveTo* AARider::MoveToActor(class AActor* ActorPtr, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag ProjectGoalOnNavigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ARider.MoveToActor");
		
		AARider_MoveToActor_Params params {};
		params.ActorPtr = ActorPtr;
		params.AcceptanceRadius = AcceptanceRadius;
		params.StopOnOverlap = StopOnOverlap;
		params.AcceptPartialPath = AcceptPartialPath;
		params.bUsePathfinding = bUsePathfinding;
		params.bLockAILogic = bLockAILogic;
		params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;
		params.ProjectGoalOnNavigation = ProjectGoalOnNavigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.ARider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAnimNotifyState.ProcessEventByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAnimNotifyState::ProcessEventByName(const class FName& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAnimNotifyState.ProcessEventByName");
		
		UCustomAnimNotifyState_ProcessEventByName_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAnimNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAnimNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomAnimNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AttackTracer.OnHitted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResultArray                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FName                                        HitSocketName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttackTracer::OnHitted(const struct FHitResult& HitResultArray, const class FName& HitSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AttackTracer.OnHitted");
		
		UAttackTracer_OnHitted_Params params {};
		params.HitResultArray = HitResultArray;
		params.HitSocketName = HitSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AttackTracer.GetAttackSpeedRate
	 * 		Flags  -> ()
	 */
	float UAttackTracer::GetAttackSpeedRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AttackTracer.GetAttackSpeedRate");
		
		UAttackTracer_GetAttackSpeedRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AttackTracer.CanStuck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAttackTracer::CanStuck(const struct FHitResult& HitResult, class USkeletalMeshComponent* MeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AttackTracer.CanStuck");
		
		UAttackTracer_CanStuck_Params params {};
		params.HitResult = HitResult;
		params.MeshComp = MeshComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AttackTracer.CanBounce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAttackTracer::CanBounce(const struct FHitResult& HitResult, class USkeletalMeshComponent* MeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AttackTracer.CanBounce");
		
		UAttackTracer_CanBounce_Params params {};
		params.HitResult = HitResult;
		params.MeshComp = MeshComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AttackTracer.BeginStuck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttackTracer::BeginStuck(class USkeletalMeshComponent* MeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AttackTracer.BeginStuck");
		
		UAttackTracer_BeginStuck_Params params {};
		params.MeshComp = MeshComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AttackTracer.BeginBounce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttackTracer::BeginBounce(class USkeletalMeshComponent* MeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AttackTracer.BeginBounce");
		
		UAttackTracer_BeginBounce_Params params {};
		params.MeshComp = MeshComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttackTracer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttackTracer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AttackTracer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttackTracerInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttackTracerInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AttackTracerInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AttackTracerMgr.RemoveBlockStuck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttackTracerMgr::RemoveBlockStuck(class USkeletalMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AttackTracerMgr.RemoveBlockStuck");
		
		UAttackTracerMgr_RemoveBlockStuck_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AttackTracerMgr.BeginStuck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StuckTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StuckPlayRate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Anim                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttackTracerMgr::BeginStuck(float StuckTime, float StuckPlayRate, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AttackTracerMgr.BeginStuck");
		
		UAttackTracerMgr_BeginStuck_Params params {};
		params.StuckTime = StuckTime;
		params.StuckPlayRate = StuckPlayRate;
		params.MeshComp = MeshComp;
		params.Anim = Anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AttackTracerMgr.BeginBounce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BounceTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BouncePlayRate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BounceBlendOutTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Anim                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttackTracerMgr::BeginBounce(float BounceTime, float BouncePlayRate, float BounceBlendOutTime, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AttackTracerMgr.BeginBounce");
		
		UAttackTracerMgr_BeginBounce_Params params {};
		params.BounceTime = BounceTime;
		params.BouncePlayRate = BouncePlayRate;
		params.BounceBlendOutTime = BounceBlendOutTime;
		params.MeshComp = MeshComp;
		params.Anim = Anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.AttackTracerMgr.AddBlockStuck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttackTracerMgr::AddBlockStuck(class USkeletalMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.AttackTracerMgr.AddBlockStuck");
		
		UAttackTracerMgr_AddBlockStuck_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttackTracerMgr.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttackTracerMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.AttackTracerMgr");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.BaseCheatChecker.SetZMoveCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCurveFloat*                                 Curve                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseCheatChecker::SetZMoveCurve(class UCurveFloat* Curve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.BaseCheatChecker.SetZMoveCurve");
		
		UBaseCheatChecker_SetZMoveCurve_Params params {};
		params.Curve = Curve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.BaseCheatChecker.SetYMoveCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCurveFloat*                                 Curve                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseCheatChecker::SetYMoveCurve(class UCurveFloat* Curve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.BaseCheatChecker.SetYMoveCurve");
		
		UBaseCheatChecker_SetYMoveCurve_Params params {};
		params.Curve = Curve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.BaseCheatChecker.SetXMoveCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCurveFloat*                                 Curve                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseCheatChecker::SetXMoveCurve(class UCurveFloat* Curve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.BaseCheatChecker.SetXMoveCurve");
		
		UBaseCheatChecker_SetXMoveCurve_Params params {};
		params.Curve = Curve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.BaseCheatChecker.SetMaxSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseCheatChecker::SetMaxSpeed(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.BaseCheatChecker.SetMaxSpeed");
		
		UBaseCheatChecker_SetMaxSpeed_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseCheatChecker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCheatChecker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.BaseCheatChecker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.BaseWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseGunWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseGunWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.BaseGunWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCanvasPanelEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCanvasPanelEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CanvasPanelEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterCheatChecker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterCheatChecker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CharacterCheatChecker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionMgr.Tick
	 * 		Flags  -> ()
	 */
	void USessionMgr::Tick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionMgr.Tick");
		
		USessionMgr_Tick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionMgr.Stop
	 * 		Flags  -> ()
	 */
	void USessionMgr::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionMgr.Stop");
		
		USessionMgr_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionMgr.Start
	 * 		Flags  -> ()
	 */
	void USessionMgr::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionMgr.Start");
		
		USessionMgr_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionMgr.RemoveSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USession*                                    pSession                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USessionMgr::RemoveSession(class USession* pSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionMgr.RemoveSession");
		
		USessionMgr_RemoveSession_Params params {};
		params.pSession = pSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionMgr.Listen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strHost                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           nMaxCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           connectedAliveTimeout                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* USessionMgr::Listen(const class FString& strHost, uint32_t Port, uint32_t nMaxCount, uint32_t connectedAliveTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionMgr.Listen");
		
		USessionMgr_Listen_Params params {};
		params.strHost = strHost;
		params.Port = Port;
		params.nMaxCount = nMaxCount;
		params.connectedAliveTimeout = connectedAliveTimeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionMgr.CreateSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strHost                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            connectTimeOut                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* USessionMgr::CreateSession(const class FString& strHost, uint32_t Port, int32_t connectTimeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionMgr.CreateSession");
		
		USessionMgr_CreateSession_Params params {};
		params.strHost = strHost;
		params.Port = Port;
		params.connectTimeOut = connectTimeOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionMgr.CreatePingSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strIp                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* USessionMgr::CreatePingSession(const class FString& strIp, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionMgr.CreatePingSession");
		
		USessionMgr_CreatePingSession_Params params {};
		params.strIp = strIp;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionMgr.AddSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USession*                                    pSession                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USessionMgr::AddSession(class USession* pSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionMgr.AddSession");
		
		USessionMgr_AddSession_Params params {};
		params.pSession = pSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USessionMgr.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USessionMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SessionMgr");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClientOnlineMgr.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClientOnlineMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.ClientOnlineMgr");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAttributeSet.K2_GetActorInfo
	 * 		Flags  -> ()
	 */
	struct FGameplayAbilityActorInfo UCustomAttributeSet::K2_GetActorInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAttributeSet.K2_GetActorInfo");
		
		UCustomAttributeSet_K2_GetActorInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAttributeSet.GetPropertyByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AttributeSetClass                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAttribute UCustomAttributeSet::GetPropertyByName(class UClass* AttributeSetClass, const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAttributeSet.GetPropertyByName");
		
		UCustomAttributeSet_GetPropertyByName_Params params {};
		params.AttributeSetClass = AttributeSetClass;
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.CombatAttributeSet.GetTeammateDamageReduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AvatarActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GEId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurDamage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCombatAttributeSet::GetTeammateDamageReduction(class AActor* AvatarActor, int32_t GEId, float CurDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.CombatAttributeSet.GetTeammateDamageReduction");
		
		UCombatAttributeSet_GetTeammateDamageReduction_Params params {};
		params.AvatarActor = AvatarActor;
		params.GEId = GEId;
		params.CurDamage = CurDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ShieldDamageReducePercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ShieldDamageReducePercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ShieldDamageReducePercent");
		
		UCombatAttributeSet_OnRep_ShieldDamageReducePercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ShieldDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ShieldDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ShieldDamageIncrease");
		
		UCombatAttributeSet_OnRep_ShieldDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_Shield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_Shield(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_Shield");
		
		UCombatAttributeSet_OnRep_Shield_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_SeeRangeCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_SeeRangeCoefficient(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_SeeRangeCoefficient");
		
		UCombatAttributeSet_OnRep_SeeRangeCoefficient_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_RemainShield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_RemainShield(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_RemainShield");
		
		UCombatAttributeSet_OnRep_RemainShield_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ReloadSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ReloadSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ReloadSpeed");
		
		UCombatAttributeSet_OnRep_ReloadSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ProjectileReduce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ProjectileReduce(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ProjectileReduce");
		
		UCombatAttributeSet_OnRep_ProjectileReduce_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_PoisonResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_PoisonResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_PoisonResistance");
		
		UCombatAttributeSet_OnRep_PoisonResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_PoisonDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_PoisonDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_PoisonDamageIncrease");
		
		UCombatAttributeSet_OnRep_PoisonDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_PhysicalResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_PhysicalResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_PhysicalResistance");
		
		UCombatAttributeSet_OnRep_PhysicalResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_PhysicalReboundDamagePercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_PhysicalReboundDamagePercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_PhysicalReboundDamagePercent");
		
		UCombatAttributeSet_OnRep_PhysicalReboundDamagePercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_PhysicalReboundDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_PhysicalReboundDamage(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_PhysicalReboundDamage");
		
		UCombatAttributeSet_OnRep_PhysicalReboundDamage_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_PhysicalDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_PhysicalDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_PhysicalDamageIncrease");
		
		UCombatAttributeSet_OnRep_PhysicalDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_PhysicalBloodsucking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_PhysicalBloodsucking(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_PhysicalBloodsucking");
		
		UCombatAttributeSet_OnRep_PhysicalBloodsucking_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_PhysicalAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_PhysicalAttack(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_PhysicalAttack");
		
		UCombatAttributeSet_OnRep_PhysicalAttack_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MoveSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MoveSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MoveSpeed");
		
		UCombatAttributeSet_OnRep_MoveSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MeleeReduce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MeleeReduce(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MeleeReduce");
		
		UCombatAttributeSet_OnRep_MeleeReduce_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MaxMana
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MaxMana(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MaxMana");
		
		UCombatAttributeSet_OnRep_MaxMana_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MaxMagicAdditive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MaxMagicAdditive(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MaxMagicAdditive");
		
		UCombatAttributeSet_OnRep_MaxMagicAdditive_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MaxHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MaxHealth(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MaxHealth");
		
		UCombatAttributeSet_OnRep_MaxHealth_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MaxEnergy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MaxEnergy(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MaxEnergy");
		
		UCombatAttributeSet_OnRep_MaxEnergy_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MaxAnger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MaxAnger(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MaxAnger");
		
		UCombatAttributeSet_OnRep_MaxAnger_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_Mana
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_Mana(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_Mana");
		
		UCombatAttributeSet_OnRep_Mana_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MagicResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MagicResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MagicResistance");
		
		UCombatAttributeSet_OnRep_MagicResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MagicPenetrationPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MagicPenetrationPercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MagicPenetrationPercent");
		
		UCombatAttributeSet_OnRep_MagicPenetrationPercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MagicPenetration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MagicPenetration(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MagicPenetration");
		
		UCombatAttributeSet_OnRep_MagicPenetration_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MagicGainSpeedAdditive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MagicGainSpeedAdditive(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MagicGainSpeedAdditive");
		
		UCombatAttributeSet_OnRep_MagicGainSpeedAdditive_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MagicalReboundDamagePercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MagicalReboundDamagePercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MagicalReboundDamagePercent");
		
		UCombatAttributeSet_OnRep_MagicalReboundDamagePercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MagicalReboundDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MagicalReboundDamage(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MagicalReboundDamage");
		
		UCombatAttributeSet_OnRep_MagicalReboundDamage_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MagicalBloodsucking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MagicalBloodsucking(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MagicalBloodsucking");
		
		UCombatAttributeSet_OnRep_MagicalBloodsucking_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_MagicalAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_MagicalAttack(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_MagicalAttack");
		
		UCombatAttributeSet_OnRep_MagicalAttack_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_LightningResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_LightningResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_LightningResistance");
		
		UCombatAttributeSet_OnRep_LightningResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_LightningDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_LightningDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_LightningDamageIncrease");
		
		UCombatAttributeSet_OnRep_LightningDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_LengthenHealPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_LengthenHealPercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_LengthenHealPercent");
		
		UCombatAttributeSet_OnRep_LengthenHealPercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_InteractionSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_InteractionSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_InteractionSpeed");
		
		UCombatAttributeSet_OnRep_InteractionSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ImpactForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ImpactForce(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ImpactForce");
		
		UCombatAttributeSet_OnRep_ImpactForce_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_IceResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_IceResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_IceResistance");
		
		UCombatAttributeSet_OnRep_IceResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_IceDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_IceDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_IceDamageIncrease");
		
		UCombatAttributeSet_OnRep_IceDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_HolyResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_HolyResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_HolyResistance");
		
		UCombatAttributeSet_OnRep_HolyResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_HolyDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_HolyDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_HolyDamageIncrease");
		
		UCombatAttributeSet_OnRep_HolyDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_HearRangeCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_HearRangeCoefficient(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_HearRangeCoefficient");
		
		UCombatAttributeSet_OnRep_HearRangeCoefficient_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_Health
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_Health(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_Health");
		
		UCombatAttributeSet_OnRep_Health_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_HealReduceTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_HealReduceTime(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_HealReduceTime");
		
		UCombatAttributeSet_OnRep_HealReduceTime_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_HealIncreasePercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_HealIncreasePercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_HealIncreasePercent");
		
		UCombatAttributeSet_OnRep_HealIncreasePercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_Heal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_Heal(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_Heal");
		
		UCombatAttributeSet_OnRep_Heal_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_HeadDamageReducePercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_HeadDamageReducePercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_HeadDamageReducePercent");
		
		UCombatAttributeSet_OnRep_HeadDamageReducePercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_HeadDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_HeadDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_HeadDamageIncrease");
		
		UCombatAttributeSet_OnRep_HeadDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_GhostDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_GhostDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_GhostDamageIncrease");
		
		UCombatAttributeSet_OnRep_GhostDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_GainManaSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_GainManaSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_GainManaSpeed");
		
		UCombatAttributeSet_OnRep_GainManaSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_GainEnergySpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_GainEnergySpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_GainEnergySpeed");
		
		UCombatAttributeSet_OnRep_GainEnergySpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_GainAngerSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_GainAngerSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_GainAngerSpeed");
		
		UCombatAttributeSet_OnRep_GainAngerSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_FireResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_FireResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_FireResistance");
		
		UCombatAttributeSet_OnRep_FireResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_FireDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_FireDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_FireDamageIncrease");
		
		UCombatAttributeSet_OnRep_FireDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_FinalAttackAddPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_FinalAttackAddPercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_FinalAttackAddPercent");
		
		UCombatAttributeSet_OnRep_FinalAttackAddPercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ExtraProvideShieldPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ExtraProvideShieldPercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ExtraProvideShieldPercent");
		
		UCombatAttributeSet_OnRep_ExtraProvideShieldPercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_EvilDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_EvilDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_EvilDamageIncrease");
		
		UCombatAttributeSet_OnRep_EvilDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_EquipSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_EquipSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_EquipSpeed");
		
		UCombatAttributeSet_OnRep_EquipSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_Energy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_Energy(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_Energy");
		
		UCombatAttributeSet_OnRep_Energy_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_DebuffReduceTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_DebuffReduceTime(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_DebuffReduceTime");
		
		UCombatAttributeSet_OnRep_DebuffReduceTime_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_DarkResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_DarkResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_DarkResistance");
		
		UCombatAttributeSet_OnRep_DarkResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_DarkDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_DarkDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_DarkDamageIncrease");
		
		UCombatAttributeSet_OnRep_DarkDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_DamageReduce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_DamageReduce(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_DamageReduce");
		
		UCombatAttributeSet_OnRep_DamageReduce_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_CreatureDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_CreatureDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_CreatureDamageIncrease");
		
		UCombatAttributeSet_OnRep_CreatureDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_CoolingReduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_CoolingReduction(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_CoolingReduction");
		
		UCombatAttributeSet_OnRep_CoolingReduction_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_CastSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_CastSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_CastSpeed");
		
		UCombatAttributeSet_OnRep_CastSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_BuffOvertime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_BuffOvertime(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_BuffOvertime");
		
		UCombatAttributeSet_OnRep_BuffOvertime_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_BodyDamageReducePercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_BodyDamageReducePercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_BodyDamageReducePercent");
		
		UCombatAttributeSet_OnRep_BodyDamageReducePercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_BodyDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_BodyDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_BodyDamageIncrease");
		
		UCombatAttributeSet_OnRep_BodyDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_BehaviorAudioCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_BehaviorAudioCoefficient(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_BehaviorAudioCoefficient");
		
		UCombatAttributeSet_OnRep_BehaviorAudioCoefficient_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_AttackSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_AttackSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_AttackSpeed");
		
		UCombatAttributeSet_OnRep_AttackSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ArmsLegsDamageReducePercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ArmsLegsDamageReducePercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ArmsLegsDamageReducePercent");
		
		UCombatAttributeSet_OnRep_ArmsLegsDamageReducePercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ArmsLegsDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ArmsLegsDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ArmsLegsDamageIncrease");
		
		UCombatAttributeSet_OnRep_ArmsLegsDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ArmorPenetrationPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ArmorPenetrationPercent(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ArmorPenetrationPercent");
		
		UCombatAttributeSet_OnRep_ArmorPenetrationPercent_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ArmorPenetration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ArmorPenetration(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ArmorPenetration");
		
		UCombatAttributeSet_OnRep_ArmorPenetration_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_Armor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_Armor(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_Armor");
		
		UCombatAttributeSet_OnRep_Armor_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ArcaneResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ArcaneResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ArcaneResistance");
		
		UCombatAttributeSet_OnRep_ArcaneResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_ArcaneDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_ArcaneDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_ArcaneDamageIncrease");
		
		UCombatAttributeSet_OnRep_ArcaneDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_Anger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_Anger(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_Anger");
		
		UCombatAttributeSet_OnRep_Anger_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_AllMagicalResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_AllMagicalResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_AllMagicalResistance");
		
		UCombatAttributeSet_OnRep_AllMagicalResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.OnRep_AllMagicalDamageIncrease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCombatAttributeSet::OnRep_AllMagicalDamageIncrease(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.OnRep_AllMagicalDamageIncrease");
		
		UCombatAttributeSet_OnRep_AllMagicalDamageIncrease_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CombatAttributeSet.GetTeammateDamageReduction__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AvatarActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GEId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurDamage                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCombatAttributeSet::GetTeammateDamageReduction__Overridden(class AActor* AvatarActor, int32_t GEId, float CurDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CombatAttributeSet.GetTeammateDamageReduction__Overridden");
		
		UCombatAttributeSet_GetTeammateDamageReduction__Overridden_Params params {};
		params.AvatarActor = AvatarActor;
		params.GEId = GEId;
		params.CurDamage = CurDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombatAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombatAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CombatAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ComboBoxStringEx.SetPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuPlacement                                     InPlacement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComboBoxStringEx::SetPlacement(EMenuPlacement InPlacement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ComboBoxStringEx.SetPlacement");
		
		UComboBoxStringEx_SetPlacement_Params params {};
		params.InPlacement = InPlacement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ComboBoxStringEx.SetDownArrowRenderTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWidgetTransform                            InDownArrowTransform                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UComboBoxStringEx::SetDownArrowRenderTransform(const struct FWidgetTransform& InDownArrowTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ComboBoxStringEx.SetDownArrowRenderTransform");
		
		UComboBoxStringEx_SetDownArrowRenderTransform_Params params {};
		params.InDownArrowTransform = InDownArrowTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ComboBoxStringEx.SetDownArrowAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAngle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComboBoxStringEx::SetDownArrowAngle(float InAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ComboBoxStringEx.SetDownArrowAngle");
		
		UComboBoxStringEx_SetDownArrowAngle_Params params {};
		params.InAngle = InAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComboBoxStringEx.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboBoxStringEx::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.ComboBoxStringEx");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.SetGESpecContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                ContextHandle                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemBlueprintLibrary::SetGESpecContext(struct FGameplayEffectSpecHandle* SpecHandle, struct FGameplayEffectContextHandle* ContextHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.SetGESpecContext");
		
		UCustomAbilitySystemBlueprintLibrary_SetGESpecContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpecHandle != nullptr)
			*SpecHandle = params.SpecHandle;
		if (ContextHandle != nullptr)
			*ContextHandle = params.ContextHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.RemoveAllActiveGE_ClientCallOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     ASC                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemBlueprintLibrary::RemoveAllActiveGE_ClientCallOnly(class UAbilitySystemComponent* ASC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.RemoveAllActiveGE_ClientCallOnly");
		
		UCustomAbilitySystemBlueprintLibrary_RemoveAllActiveGE_ClientCallOnly_Params params {};
		params.ASC = ASC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.MakeSpecHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGameplayEffect*                             InGameplayEffect                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InInstigator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InEffectCauser                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UCustomAbilitySystemBlueprintLibrary::MakeSpecHandle(int32_t ID, class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.MakeSpecHandle");
		
		UCustomAbilitySystemBlueprintLibrary_MakeSpecHandle_Params params {};
		params.ID = ID;
		params.InGameplayEffect = InGameplayEffect;
		params.InInstigator = InInstigator;
		params.InEffectCauser = InEffectCauser;
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.MakeGameplayAbilityTargetDataHandleFromSingleHitResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResults                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UCustomAbilitySystemBlueprintLibrary::MakeGameplayAbilityTargetDataHandleFromSingleHitResult(const struct FHitResult& HitResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.MakeGameplayAbilityTargetDataHandleFromSingleHitResult");
		
		UCustomAbilitySystemBlueprintLibrary_MakeGameplayAbilityTargetDataHandleFromSingleHitResult_Params params {};
		params.HitResults = HitResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.MakeGameplayAbilityTargetDataHandleFromHitResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          HitResults                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UCustomAbilitySystemBlueprintLibrary::MakeGameplayAbilityTargetDataHandleFromHitResults(TArray<struct FHitResult> HitResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.MakeGameplayAbilityTargetDataHandleFromHitResults");
		
		UCustomAbilitySystemBlueprintLibrary_MakeGameplayAbilityTargetDataHandleFromHitResults_Params params {};
		params.HitResults = HitResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.MakeGameplayAbilityTargetDataHandleFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UCustomAbilitySystemBlueprintLibrary::MakeGameplayAbilityTargetDataHandleFromActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.MakeGameplayAbilityTargetDataHandleFromActor");
		
		UCustomAbilitySystemBlueprintLibrary_MakeGameplayAbilityTargetDataHandleFromActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.MakeAbilityTargetDataFromMeleeHitInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UCustomAbilitySystemBlueprintLibrary::MakeAbilityTargetDataFromMeleeHitInfo(const struct FHitResult& HitResult, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.MakeAbilityTargetDataFromMeleeHitInfo");
		
		UCustomAbilitySystemBlueprintLibrary_MakeAbilityTargetDataFromMeleeHitInfo_Params params {};
		params.HitResult = HitResult;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.MakeAbilityTargetDataFromInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UCustomAbilitySystemBlueprintLibrary::MakeAbilityTargetDataFromInt(int32_t Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.MakeAbilityTargetDataFromInt");
		
		UCustomAbilitySystemBlueprintLibrary_MakeAbilityTargetDataFromInt_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.MakeAbilityTargetDataFromFireProjectileInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InStartPos                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UCustomAbilitySystemBlueprintLibrary::MakeAbilityTargetDataFromFireProjectileInfo(const struct FHitResult& HitResult, const struct FVector& InStartPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.MakeAbilityTargetDataFromFireProjectileInfo");
		
		UCustomAbilitySystemBlueprintLibrary_MakeAbilityTargetDataFromFireProjectileInfo_Params params {};
		params.HitResult = HitResult;
		params.InStartPos = InStartPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.InitAttribute_ClientCallOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCombatAttributeSet*                         InTargetAttributeSet                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, float>                         InAttributes                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemBlueprintLibrary::InitAttribute_ClientCallOnly(class UCombatAttributeSet* InTargetAttributeSet, TMap<class FString, float> InAttributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.InitAttribute_ClientCallOnly");
		
		UCustomAbilitySystemBlueprintLibrary_InitAttribute_ClientCallOnly_Params params {};
		params.InTargetAttributeSet = InTargetAttributeSet;
		params.InAttributes = InAttributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.GetTargetDataFromHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Handle                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetData UCustomAbilitySystemBlueprintLibrary::GetTargetDataFromHandle(struct FGameplayAbilityTargetDataHandle* Handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.GetTargetDataFromHandle");
		
		UCustomAbilitySystemBlueprintLibrary_GetTargetDataFromHandle_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handle != nullptr)
			*Handle = params.Handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.GetSetByCallerMagnitudeFromGESpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         EffectSpec                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                DataTag                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DefaultIfNotFound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCustomAbilitySystemBlueprintLibrary::GetSetByCallerMagnitudeFromGESpec(const struct FGameplayEffectSpec& EffectSpec, const struct FGameplayTag& DataTag, float DefaultIfNotFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.GetSetByCallerMagnitudeFromGESpec");
		
		UCustomAbilitySystemBlueprintLibrary_GetSetByCallerMagnitudeFromGESpec_Params params {};
		params.EffectSpec = EffectSpec;
		params.DataTag = DataTag;
		params.DefaultIfNotFound = DefaultIfNotFound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.GetGESpecFromSpecHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpec UCustomAbilitySystemBlueprintLibrary::GetGESpecFromSpecHandle(struct FGameplayEffectSpecHandle* SpecHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.GetGESpecFromSpecHandle");
		
		UCustomAbilitySystemBlueprintLibrary_GetGESpecFromSpecHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpecHandle != nullptr)
			*SpecHandle = params.SpecHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.GetGEContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                ContextHandle                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectContext UCustomAbilitySystemBlueprintLibrary::GetGEContext(struct FGameplayEffectContextHandle* ContextHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.GetGEContext");
		
		UCustomAbilitySystemBlueprintLibrary_GetGEContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContextHandle != nullptr)
			*ContextHandle = params.ContextHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.GetActiveGEHandleFromActiveGE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffect                       ActiveGE                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle UCustomAbilitySystemBlueprintLibrary::GetActiveGEHandleFromActiveGE(const struct FActiveGameplayEffect& ActiveGE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.GetActiveGEHandleFromActiveGE");
		
		UCustomAbilitySystemBlueprintLibrary_GetActiveGEHandleFromActiveGE_Params params {};
		params.ActiveGE = ActiveGE;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.ExtractMeleeHitInfoFromAbilityTargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Handle                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetData_MeleeHitInfo UCustomAbilitySystemBlueprintLibrary::ExtractMeleeHitInfoFromAbilityTargetData(const struct FGameplayAbilityTargetDataHandle& Handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.ExtractMeleeHitInfoFromAbilityTargetData");
		
		UCustomAbilitySystemBlueprintLibrary_ExtractMeleeHitInfoFromAbilityTargetData_Params params {};
		params.Handle = Handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.ExtractIntFromAbilityTargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Handle                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCustomAbilitySystemBlueprintLibrary::ExtractIntFromAbilityTargetData(const struct FGameplayAbilityTargetDataHandle& Handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.ExtractIntFromAbilityTargetData");
		
		UCustomAbilitySystemBlueprintLibrary_ExtractIntFromAbilityTargetData_Params params {};
		params.Handle = Handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.ExtractHitResultAbilityTargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Handle                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FHitResult UCustomAbilitySystemBlueprintLibrary::ExtractHitResultAbilityTargetData(const struct FGameplayAbilityTargetDataHandle& Handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.ExtractHitResultAbilityTargetData");
		
		UCustomAbilitySystemBlueprintLibrary_ExtractHitResultAbilityTargetData_Params params {};
		params.Handle = Handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.ExtractFireProjectileInfoFromAbilityTargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Handle                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetData_FireProjectileInfo UCustomAbilitySystemBlueprintLibrary::ExtractFireProjectileInfoFromAbilityTargetData(const struct FGameplayAbilityTargetDataHandle& Handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.ExtractFireProjectileInfoFromAbilityTargetData");
		
		UCustomAbilitySystemBlueprintLibrary_ExtractFireProjectileInfoFromAbilityTargetData_Params params {};
		params.Handle = Handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.EffectContextGetTargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UCustomAbilitySystemBlueprintLibrary::EffectContextGetTargetData(const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.EffectContextGetTargetData");
		
		UCustomAbilitySystemBlueprintLibrary_EffectContextGetTargetData_Params params {};
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.EffectContextAddTargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContextHandle                                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemBlueprintLibrary::EffectContextAddTargetData(const struct FGameplayEffectContextHandle& EffectContextHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.EffectContextAddTargetData");
		
		UCustomAbilitySystemBlueprintLibrary_EffectContextAddTargetData_Params params {};
		params.EffectContextHandle = EffectContextHandle;
		params.TargetData = TargetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.ClearTargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemBlueprintLibrary::ClearTargetData(struct FGameplayAbilityTargetDataHandle* TargetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.ClearTargetData");
		
		UCustomAbilitySystemBlueprintLibrary_ClearTargetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetData != nullptr)
			*TargetData = params.TargetData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.ClearAllAbilities_ClientCallOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     ASC                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemBlueprintLibrary::ClearAllAbilities_ClientCallOnly(class UAbilitySystemComponent* ASC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.ClearAllAbilities_ClientCallOnly");
		
		UCustomAbilitySystemBlueprintLibrary_ClearAllAbilities_ClientCallOnly_Params params {};
		params.ASC = ASC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemBlueprintLibrary.AddAttributeSet_ClientCallOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     ASC                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAttributeSet*                               InAttributeSet                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemBlueprintLibrary::AddAttributeSet_ClientCallOnly(class UAbilitySystemComponent* ASC, class UAttributeSet* InAttributeSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemBlueprintLibrary.AddAttributeSet_ClientCallOnly");
		
		UCustomAbilitySystemBlueprintLibrary_AddAttributeSet_ClientCallOnly_Params params {};
		params.ASC = ASC;
		params.InAttributeSet = InAttributeSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAbilitySystemBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAbilitySystemBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomAbilitySystemBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.CustomAbilitySystemComponent.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UCustomAbilitySystemComponent::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.CustomAbilitySystemComponent.ReceiveBeginPlay");
		
		UCustomAbilitySystemComponent_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.CustomAbilitySystemComponent.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.CustomAbilitySystemComponent.ReceiveEndPlay");
		
		UCustomAbilitySystemComponent_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.UnRegisterGameplayTagChangeEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameplayTagEventType                              EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::UnRegisterGameplayTagChangeEvent(const struct FGameplayTag& Tag, EGameplayTagEventType EventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.UnRegisterGameplayTagChangeEvent");
		
		UCustomAbilitySystemComponent_UnRegisterGameplayTagChangeEvent_Params params {};
		params.Tag = Tag;
		params.EventType = EventType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.SetMoveSpeedBaseValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::SetMoveSpeedBaseValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.SetMoveSpeedBaseValue");
		
		UCustomAbilitySystemComponent_SetMoveSpeedBaseValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.SetAttributeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::SetAttributeValue(const struct FGameplayAttribute& Attribute, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.SetAttributeValue");
		
		UCustomAbilitySystemComponent_SetAttributeValue_Params params {};
		params.Attribute = Attribute;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.RemoveGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::RemoveGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.RemoveGameplayCueLocal");
		
		UCustomAbilitySystemComponent_RemoveGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.RemoveAllActiveGE
	 * 		Flags  -> ()
	 */
	void UCustomAbilitySystemComponent::RemoveAllActiveGE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.RemoveAllActiveGE");
		
		UCustomAbilitySystemComponent_RemoveAllActiveGE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.RegisterGameplayTagChangeEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EGameplayTagEventType                              EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::RegisterGameplayTagChangeEvent(const struct FGameplayTag& Tag, const class FScriptDelegate& Callback, EGameplayTagEventType EventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.RegisterGameplayTagChangeEvent");
		
		UCustomAbilitySystemComponent_RegisterGameplayTagChangeEvent_Params params {};
		params.Tag = Tag;
		params.Callback = Callback;
		params.EventType = EventType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.RegisterGameplayAttributeValueChangeDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::RegisterGameplayAttributeValueChangeDelegate(const struct FGameplayAttribute& Attribute, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.RegisterGameplayAttributeValueChangeDelegate");
		
		UCustomAbilitySystemComponent_RegisterGameplayAttributeValueChangeDelegate_Params params {};
		params.Attribute = Attribute;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.OnGameplayEffectRemovedCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffect                       AGE                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::OnGameplayEffectRemovedCallback(const struct FActiveGameplayEffect& AGE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.OnGameplayEffectRemovedCallback");
		
		UCustomAbilitySystemComponent_OnGameplayEffectRemovedCallback_Params params {};
		params.AGE = AGE;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.OnApplyGameplayEffectToTargetCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         SpecApplied                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::OnApplyGameplayEffectToTargetCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.OnApplyGameplayEffectToTargetCallback");
		
		UCustomAbilitySystemComponent_OnApplyGameplayEffectToTargetCallback_Params params {};
		params.Target = Target;
		params.SpecApplied = SpecApplied;
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.OnApplyGameplayEffectCallback_Client
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         SpecApplied                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::OnApplyGameplayEffectCallback_Client(class UAbilitySystemComponent* Source, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.OnApplyGameplayEffectCallback_Client");
		
		UCustomAbilitySystemComponent_OnApplyGameplayEffectCallback_Client_Params params {};
		params.Source = Source;
		params.SpecApplied = SpecApplied;
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.OnApplyGameplayEffectCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         SpecApplied                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Source, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.OnApplyGameplayEffectCallback");
		
		UCustomAbilitySystemComponent_OnApplyGameplayEffectCallback_Params params {};
		params.Source = Source;
		params.SpecApplied = SpecApplied;
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.OnAbilityEndedCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAbilityEndedData                           AbilityData                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::OnAbilityEndedCallback(const struct FAbilityEndedData& AbilityData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.OnAbilityEndedCallback");
		
		UCustomAbilitySystemComponent_OnAbilityEndedCallback_Params params {};
		params.AbilityData = AbilityData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_TryActivateAbilityBySpecHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowRemoteActivation                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCustomAbilitySystemComponent::K2_TryActivateAbilityBySpecHandle(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool bAllowRemoteActivation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_TryActivateAbilityBySpecHandle");
		
		UCustomAbilitySystemComponent_K2_TryActivateAbilityBySpecHandle_Params params {};
		params.AbilityToActivate = AbilityToActivate;
		params.bAllowRemoteActivation = bAllowRemoteActivation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_SetReplicationMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameplayEffectReplicationMode                     NewReplicationMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_SetReplicationMode(EGameplayEffectReplicationMode NewReplicationMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_SetReplicationMode");
		
		UCustomAbilitySystemComponent_K2_SetReplicationMode_Params params {};
		params.NewReplicationMode = NewReplicationMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_RemoveLooseGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_RemoveLooseGameplayTag(const struct FGameplayTag& GameplayTag, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_RemoveLooseGameplayTag");
		
		UCustomAbilitySystemComponent_K2_RemoveLooseGameplayTag_Params params {};
		params.GameplayTag = GameplayTag;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_RemoveGameplayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isPrediction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag, bool isPrediction, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_RemoveGameplayCue");
		
		UCustomAbilitySystemComponent_K2_RemoveGameplayCue_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.isPrediction = isPrediction;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_RemoveAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_RemoveAbility(const struct FGameplayAbilitySpecHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_RemoveAbility");
		
		UCustomAbilitySystemComponent_K2_RemoveAbility_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_RemoteEndOrCancelAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToEnd                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasCanceled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_RemoteEndOrCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, bool bWasCanceled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_RemoteEndOrCancelAbility");
		
		UCustomAbilitySystemComponent_K2_RemoteEndOrCancelAbility_Params params {};
		params.AbilityToEnd = AbilityToEnd;
		params.ActivationInfo = ActivationInfo;
		params.bWasCanceled = bWasCanceled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_IsCurShield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 GEHandle                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCustomAbilitySystemComponent::K2_IsCurShield(const struct FActiveGameplayEffectHandle& GEHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_IsCurShield");
		
		UCustomAbilitySystemComponent_K2_IsCurShield_Params params {};
		params.GEHandle = GEHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_GiveAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Ability                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AbilityID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Lv                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilitySpecHandle UCustomAbilitySystemComponent::K2_GiveAbility(class UClass* Ability, int32_t AbilityID, int32_t Lv, int32_t InputID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_GiveAbility");
		
		UCustomAbilitySystemComponent_K2_GiveAbility_Params params {};
		params.Ability = Ability;
		params.AbilityID = AbilityID;
		params.Lv = Lv;
		params.InputID = InputID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_GetGameplayEffectDefForHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayEffect* UCustomAbilitySystemComponent::K2_GetGameplayEffectDefForHandle(const struct FActiveGameplayEffectHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_GetGameplayEffectDefForHandle");
		
		UCustomAbilitySystemComponent_K2_GetGameplayEffectDefForHandle_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_GetActiveGameplayEffectSpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpec UCustomAbilitySystemComponent::K2_GetActiveGameplayEffectSpec(const struct FActiveGameplayEffectHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_GetActiveGameplayEffectSpec");
		
		UCustomAbilitySystemComponent_K2_GetActiveGameplayEffectSpec_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_FindAbilitySpecFromHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilitySpec UCustomAbilitySystemComponent::K2_FindAbilitySpecFromHandle(const struct FGameplayAbilitySpecHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_FindAbilitySpecFromHandle");
		
		UCustomAbilitySystemComponent_K2_FindAbilitySpecFromHandle_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_ExecuteGameplayCue_WithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_ExecuteGameplayCue_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_ExecuteGameplayCue_WithParams");
		
		UCustomAbilitySystemComponent_K2_ExecuteGameplayCue_WithParams_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_ExecuteGameplayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_ExecuteGameplayCue");
		
		UCustomAbilitySystemComponent_K2_ExecuteGameplayCue_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_CurrentMontageStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OverrideBlendOutTime                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_CurrentMontageStop(float OverrideBlendOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_CurrentMontageStop");
		
		UCustomAbilitySystemComponent_K2_CurrentMontageStop_Params params {};
		params.OverrideBlendOutTime = OverrideBlendOutTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_CancelAllAbilities
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            Ignore                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_CancelAllAbilities(class UGameplayAbility* Ignore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_CancelAllAbilities");
		
		UCustomAbilitySystemComponent_K2_CancelAllAbilities_Params params {};
		params.Ignore = Ignore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_AddLooseGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_AddLooseGameplayTag(const struct FGameplayTag& GameplayTag, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_AddLooseGameplayTag");
		
		UCustomAbilitySystemComponent_K2_AddLooseGameplayTag_Params params {};
		params.GameplayTag = GameplayTag;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_AddGameplayCue_WithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_AddGameplayCue_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_AddGameplayCue_WithParams");
		
		UCustomAbilitySystemComponent_K2_AddGameplayCue_WithParams_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.K2_AddGameplayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.K2_AddGameplayCue");
		
		UCustomAbilitySystemComponent_K2_AddGameplayCue_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.ExecuteGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::ExecuteGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.ExecuteGameplayCueLocal");
		
		UCustomAbilitySystemComponent_ExecuteGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.CancelAbilityByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            Ability                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::CancelAbilityByClass(class UGameplayAbility* Ability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.CancelAbilityByClass");
		
		UCustomAbilitySystemComponent_CancelAbilityByClass_Params params {};
		params.Ability = Ability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemComponent.AddGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::AddGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemComponent.AddGameplayCueLocal");
		
		UCustomAbilitySystemComponent_AddGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAbilitySystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAbilitySystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomAbilitySystemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomAbilitySystemGlobals.CustomGet
	 * 		Flags  -> ()
	 */
	class UCustomAbilitySystemGlobals* UCustomAbilitySystemGlobals::CustomGet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomAbilitySystemGlobals.CustomGet");
		
		UCustomAbilitySystemGlobals_CustomGet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAbilitySystemGlobals.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAbilitySystemGlobals::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomAbilitySystemGlobals");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAnimNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAnimNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomAnimNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomBoxCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomBoxCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomBoxCollisionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomCalculation.GetTagSetByCaller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                InTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDefaultValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCustomCalculation::GetTagSetByCaller(const struct FGameplayEffectSpec& Spec, struct FGameplayTag* InTag, float InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomCalculation.GetTagSetByCaller");
		
		UCustomCalculation_GetTagSetByCaller_Params params {};
		params.Spec = Spec;
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTag != nullptr)
			*InTag = params.InTag;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomCalculation.GetSetByCaller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        InName                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDefaultValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCustomCalculation::GetSetByCaller(const struct FGameplayEffectSpec& Spec, class FName* InName, float InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomCalculation.GetSetByCaller");
		
		UCustomCalculation_GetSetByCaller_Params params {};
		params.Spec = Spec;
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InName != nullptr)
			*InName = params.InName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomCalculation.GetAttributeCaptureSpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      AttributeSetClass                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameplayEffectAttributeCaptureSource              InType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCustomCalculation::GetAttributeCaptureSpec(const struct FGameplayEffectSpec& Spec, class UClass* AttributeSetClass, const class FString& InName, EGameplayEffectAttributeCaptureSource InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomCalculation.GetAttributeCaptureSpec");
		
		UCustomCalculation_GetAttributeCaptureSpec_Params params {};
		params.Spec = Spec;
		params.AttributeSetClass = AttributeSetClass;
		params.InName = InName;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomCalculation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomCalculation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomCalculation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomCapsuleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomCapsuleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomCapsuleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomCommonButtonBase.SetCheckedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECheckBoxState                                     InCheckedState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlaySound                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomCommonButtonBase::SetCheckedState(ECheckBoxState InCheckedState, bool bPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomCommonButtonBase.SetCheckedState");
		
		UCustomCommonButtonBase_SetCheckedState_Params params {};
		params.InCheckedState = InCheckedState;
		params.bPlaySound = bPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomCommonButtonBase.IsChecked
	 * 		Flags  -> ()
	 */
	bool UCustomCommonButtonBase::IsChecked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomCommonButtonBase.IsChecked");
		
		UCustomCommonButtonBase_IsChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomCommonButtonBase.GetCheckedState
	 * 		Flags  -> ()
	 */
	ECheckBoxState UCustomCommonButtonBase::GetCheckedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomCommonButtonBase.GetCheckedState");
		
		UCustomCommonButtonBase_GetCheckedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomCommonButtonBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomCommonButtonBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomCommonButtonBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.SendTargetDataToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ApplicationTag                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGenerateNewKey                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomGameplayAbility::SendTargetDataToServer(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag, bool bGenerateNewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.SendTargetDataToServer");
		
		UCustomGameplayAbility_SendTargetDataToServer_Params params {};
		params.TargetData = TargetData;
		params.ApplicationTag = ApplicationTag;
		params.bGenerateNewKey = bGenerateNewKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.RemoveShareCooldown
	 * 		Flags  -> ()
	 */
	void UCustomGameplayAbility::RemoveShareCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.RemoveShareCooldown");
		
		UCustomGameplayAbility_RemoveShareCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.OnTaskFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayTask*                               GameplayTask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomGameplayAbility::OnTaskFinished(class UGameplayTask* GameplayTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.OnTaskFinished");
		
		UCustomGameplayAbility_OnTaskFinished_Params params {};
		params.GameplayTask = GameplayTask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.OnFindTaskDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayTask*                               GameplayTask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DelegateName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomGameplayAbility::OnFindTaskDelegate(class UGameplayTask* GameplayTask, const class FString& DelegateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.OnFindTaskDelegate");
		
		UCustomGameplayAbility_OnFindTaskDelegate_Params params {};
		params.GameplayTask = GameplayTask;
		params.DelegateName = DelegateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.LuaOnGiveAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (ConstParm, Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilitySpec                        Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomGameplayAbility::LuaOnGiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.LuaOnGiveAbility");
		
		UCustomGameplayAbility_LuaOnGiveAbility_Params params {};
		params.ActorInfo = ActorInfo;
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.LuaGetCostGameplayEffect
	 * 		Flags  -> ()
	 */
	struct FGameplayEffectSpecHandle UCustomGameplayAbility::LuaGetCostGameplayEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.LuaGetCostGameplayEffect");
		
		UCustomGameplayAbility_LuaGetCostGameplayEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.LuaGetCooldownGameplayEffect
	 * 		Flags  -> ()
	 */
	struct FGameplayEffectSpecHandle UCustomGameplayAbility::LuaGetCooldownGameplayEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.LuaGetCooldownGameplayEffect");
		
		UCustomGameplayAbility_LuaGetCooldownGameplayEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.LuaCommitAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCreatePredictionWindow                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCustomGameplayAbility::LuaCommitAbility(bool InCreatePredictionWindow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.LuaCommitAbility");
		
		UCustomGameplayAbility_LuaCommitAbility_Params params {};
		params.InCreatePredictionWindow = InCreatePredictionWindow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.K2_MakeEffectContext
	 * 		Flags  -> ()
	 */
	struct FGameplayEffectContextHandle UCustomGameplayAbility::K2_MakeEffectContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.K2_MakeEffectContext");
		
		UCustomGameplayAbility_K2_MakeEffectContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.K2_GetCurrentAbilitySpecHandle
	 * 		Flags  -> ()
	 */
	struct FGameplayAbilitySpecHandle UCustomGameplayAbility::K2_GetCurrentAbilitySpecHandle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.K2_GetCurrentAbilitySpecHandle");
		
		UCustomGameplayAbility_K2_GetCurrentAbilitySpecHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.K2_GetCurrentAbilitySpec
	 * 		Flags  -> ()
	 */
	struct FGameplayAbilitySpec UCustomGameplayAbility::K2_GetCurrentAbilitySpec()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.K2_GetCurrentAbilitySpec");
		
		UCustomGameplayAbility_K2_GetCurrentAbilitySpec_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.K2_GetCurrentAbilityActorInfo
	 * 		Flags  -> ()
	 */
	struct FGameplayAbilityActorInfo UCustomGameplayAbility::K2_GetCurrentAbilityActorInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.K2_GetCurrentAbilityActorInfo");
		
		UCustomGameplayAbility_K2_GetCurrentAbilityActorInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.K2_GetCurrentAbilityActivationInfo
	 * 		Flags  -> ()
	 */
	struct FGameplayAbilityActivationInfo UCustomGameplayAbility::K2_GetCurrentAbilityActivationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.K2_GetCurrentAbilityActivationInfo");
		
		UCustomGameplayAbility_K2_GetCurrentAbilityActivationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.IsTaskFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayTask*                               Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCustomGameplayAbility::IsTaskFinished(class UGameplayTask* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.IsTaskFinished");
		
		UCustomGameplayAbility_IsTaskFinished_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.GetCooldownTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeRemaining                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CooldownDuration                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomGameplayAbility::GetCooldownTime(float* TimeRemaining, float* CooldownDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.GetCooldownTime");
		
		UCustomGameplayAbility_GetCooldownTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeRemaining != nullptr)
			*TimeRemaining = params.TimeRemaining;
		if (CooldownDuration != nullptr)
			*CooldownDuration = params.CooldownDuration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.GetCooldownTag
	 * 		Flags  -> ()
	 */
	struct FGameplayTag UCustomGameplayAbility::GetCooldownTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.GetCooldownTag");
		
		UCustomGameplayAbility_GetCooldownTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayAbility.AddShareCooldown
	 * 		Flags  -> ()
	 */
	void UCustomGameplayAbility::AddShareCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayAbility.AddShareCooldown");
		
		UCustomGameplayAbility_AddShareCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomGameplayAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomGameplayAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomGameplayAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.CustomGameplayCueManager.FetchGameplayCueListOfGEId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GEId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FGameplayEffectCue> UCustomGameplayCueManager::FetchGameplayCueListOfGEId(int32_t GEId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.CustomGameplayCueManager.FetchGameplayCueListOfGEId");
		
		UCustomGameplayCueManager_FetchGameplayCueListOfGEId_Params params {};
		params.GEId = GEId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.CustomGameplayCueManager.FetchGameplayCueListOfGEId__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GEId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FGameplayEffectCue> UCustomGameplayCueManager::FetchGameplayCueListOfGEId__Overridden(int32_t GEId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.CustomGameplayCueManager.FetchGameplayCueListOfGEId__Overridden");
		
		UCustomGameplayCueManager_FetchGameplayCueListOfGEId__Overridden_Params params {};
		params.GEId = GEId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomGameplayCueManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomGameplayCueManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomGameplayCueManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomGameplayCueNotify_Actor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomGameplayCueNotify_Actor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomGameplayCueNotify_Actor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomGameplayCueNotify_Static.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomGameplayCueNotify_Static::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomGameplayCueNotify_Static");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.CustomPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.DangerTriggerVolume.OnOverlapEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADangerTriggerVolume::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.DangerTriggerVolume.OnOverlapEnd");
		
		ADangerTriggerVolume_OnOverlapEnd_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.DangerTriggerVolume.OnOverlapBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADangerTriggerVolume::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.DangerTriggerVolume.OnOverlapBegin");
		
		ADangerTriggerVolume_OnOverlapBegin_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.DangerTriggerVolume.Exit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADangerTriggerVolume::Exit(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.DangerTriggerVolume.Exit");
		
		ADangerTriggerVolume_Exit_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.DangerTriggerVolume.Enter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADangerTriggerVolume::Enter(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.DangerTriggerVolume.Enter");
		
		ADangerTriggerVolume_Enter_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADangerTriggerVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADangerTriggerVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.DangerTriggerVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.UIPanel.ResetZOrderInViewPort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ZOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIPanel::ResetZOrderInViewPort(int32_t ZOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.UIPanel.ResetZOrderInViewPort");
		
		UUIPanel_ResetZOrderInViewPort_Params params {};
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.UIPanel.LuaResetInputActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIPanel::LuaResetInputActions(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.UIPanel.LuaResetInputActions");
		
		UUIPanel_LuaResetInputActions_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.UIPanel.LuaRemoveMappingContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputMappingContext*                        MappingContext                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIPanel::LuaRemoveMappingContext(class APlayerController* PC, class UInputMappingContext* MappingContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.UIPanel.LuaRemoveMappingContext");
		
		UUIPanel_LuaRemoveMappingContext_Params params {};
		params.PC = PC;
		params.MappingContext = MappingContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.UIPanel.LuaRemoveActionBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIPanel::LuaRemoveActionBinding(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.UIPanel.LuaRemoveActionBinding");
		
		UUIPanel_LuaRemoveActionBinding_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.UIPanel.LuaRegisterUIActionBinding_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bDisplayInActionBar                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InIndex                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUIPanel::LuaRegisterUIActionBinding_Internal(const struct FDataTableRowHandle& InHandle, bool bDisplayInActionBar, int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.UIPanel.LuaRegisterUIActionBinding_Internal");
		
		UUIPanel_LuaRegisterUIActionBinding_Internal_Params params {};
		params.InHandle = InHandle;
		params.bDisplayInActionBar = bDisplayInActionBar;
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.UIPanel.LuaBindInputAction_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETriggerEvent                                      TriggerEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUIPanel::LuaBindInputAction_Internal(class APlayerController* PC, class UInputAction* Action, ETriggerEvent TriggerEvent, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.UIPanel.LuaBindInputAction_Internal");
		
		UUIPanel_LuaBindInputAction_Internal_Params params {};
		params.PC = PC;
		params.Action = Action;
		params.TriggerEvent = TriggerEvent;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.UIPanel.LuaAddMappingContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputMappingContext*                        MappingContext                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIPanel::LuaAddMappingContext(class APlayerController* PC, class APawn* Pawn, class UInputMappingContext* MappingContext, int32_t InPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.UIPanel.LuaAddMappingContext");
		
		UUIPanel_LuaAddMappingContext_Params params {};
		params.PC = PC;
		params.Pawn = Pawn;
		params.MappingContext = MappingContext;
		params.InPriority = InPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.UIPanel.LuaAddActionBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIPanel::LuaAddActionBinding(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.UIPanel.LuaAddActionBinding");
		
		UUIPanel_LuaAddActionBinding_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.UIPanel.CallLuaCommonUIFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUIPanel::CallLuaCommonUIFunction(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.UIPanel.CallLuaCommonUIFunction");
		
		UUIPanel_CallLuaCommonUIFunction_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.UIPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDragDropWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragDropWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.DragDropWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.EditableTextBoxEx.RemoveHookKeyUpName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextBoxEx::RemoveHookKeyUpName(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.EditableTextBoxEx.RemoveHookKeyUpName");
		
		UEditableTextBoxEx_RemoveHookKeyUpName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.EditableTextBoxEx.RemoveHookKeyDownName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextBoxEx::RemoveHookKeyDownName(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.EditableTextBoxEx.RemoveHookKeyDownName");
		
		UEditableTextBoxEx_RemoveHookKeyDownName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.EditableTextBoxEx.OnKeyUpEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextBoxEx::OnKeyUpEvent__DelegateSignature(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.EditableTextBoxEx.OnKeyUpEvent__DelegateSignature");
		
		UEditableTextBoxEx_OnKeyUpEvent__DelegateSignature_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.EditableTextBoxEx.OnKeyDownEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShift                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCtrl                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextBoxEx::OnKeyDownEvent__DelegateSignature(const class FString& KeyName, bool bShift, bool bCtrl, bool bAlt, bool bWin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.EditableTextBoxEx.OnKeyDownEvent__DelegateSignature");
		
		UEditableTextBoxEx_OnKeyDownEvent__DelegateSignature_Params params {};
		params.KeyName = KeyName;
		params.bShift = bShift;
		params.bCtrl = bCtrl;
		params.bAlt = bAlt;
		params.bWin = bWin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.EditableTextBoxEx.AddHookKeyUpName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextBoxEx::AddHookKeyUpName(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.EditableTextBoxEx.AddHookKeyUpName");
		
		UEditableTextBoxEx_AddHookKeyUpName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.EditableTextBoxEx.AddHookKeyDownName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextBoxEx::AddHookKeyDownName(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.EditableTextBoxEx.AddHookKeyDownName");
		
		UEditableTextBoxEx_AddHookKeyDownName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableTextBoxEx.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableTextBoxEx::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.EditableTextBoxEx");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.EditableTextEx.RemoveHookKeyUpName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextEx::RemoveHookKeyUpName(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.EditableTextEx.RemoveHookKeyUpName");
		
		UEditableTextEx_RemoveHookKeyUpName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.EditableTextEx.RemoveHookKeyDownName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextEx::RemoveHookKeyDownName(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.EditableTextEx.RemoveHookKeyDownName");
		
		UEditableTextEx_RemoveHookKeyDownName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.EditableTextEx.OnKeyUpEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextEx::OnKeyUpEvent__DelegateSignature(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.EditableTextEx.OnKeyUpEvent__DelegateSignature");
		
		UEditableTextEx_OnKeyUpEvent__DelegateSignature_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.EditableTextEx.OnKeyDownEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShift                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCtrl                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextEx::OnKeyDownEvent__DelegateSignature(const class FString& KeyName, bool bShift, bool bCtrl, bool bAlt, bool bWin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.EditableTextEx.OnKeyDownEvent__DelegateSignature");
		
		UEditableTextEx_OnKeyDownEvent__DelegateSignature_Params params {};
		params.KeyName = KeyName;
		params.bShift = bShift;
		params.bCtrl = bCtrl;
		params.bAlt = bAlt;
		params.bWin = bWin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.EditableTextEx.AddHookKeyUpName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextEx::AddHookKeyUpName(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.EditableTextEx.AddHookKeyUpName");
		
		UEditableTextEx_AddHookKeyUpName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.EditableTextEx.AddHookKeyDownName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableTextEx::AddHookKeyDownName(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.EditableTextEx.AddHookKeyDownName");
		
		UEditableTextEx_AddHookKeyDownName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableTextEx.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableTextEx::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.EditableTextEx");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmptyObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmptyObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.EmptyObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatingPawnMovement_ServerOnly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatingPawnMovement_ServerOnly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.FloatingPawnMovement_ServerOnly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlyPathVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlyPathVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.FlyPathVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FootPrintComponent.Size
	 * 		Flags  -> ()
	 */
	int32_t UFootPrintComponent::Size()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FootPrintComponent.Size");
		
		UFootPrintComponent_Size_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FootPrintComponent.IsInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Status                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFootPrintComponent::IsInRange(const struct FVector& Location, int32_t Status, float Radius, float Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FootPrintComponent.IsInRange");
		
		UFootPrintComponent_IsInRange_Params params {};
		params.Location = Location;
		params.Status = Status;
		params.Radius = Radius;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFootPrintComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootPrintComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.FootPrintComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FPSManager.SetTargetMaxFps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      targetFps                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFPSManager::SetTargetMaxFps(unsigned char targetFps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FPSManager.SetTargetMaxFps");
		
		UFPSManager_SetTargetMaxFps_Params params {};
		params.targetFps = targetFps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FPSManager.SetEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFPSManager::SetEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FPSManager.SetEnable");
		
		UFPSManager_SetEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FPSManager.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      optimizeFps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFPSManager::Init(unsigned char optimizeFps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FPSManager.Init");
		
		UFPSManager_Init_Params params {};
		params.optimizeFps = optimizeFps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPSManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPSManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.FPSManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FSMState.BindMontageEndDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BlendOut                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSMState::BindMontageEndDelegate(bool BlendOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FSMState.BindMontageEndDelegate");
		
		UFSMState_BindMontageEndDelegate_Params params {};
		params.BlendOut = BlendOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFSMState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSMState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.FSMState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FSMSystem.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStateType                                         Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSMSystem::Start(class UAnimInstance* AnimInstance, EStateType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FSMSystem.Start");
		
		UFSMSystem_Start_Params params {};
		params.AnimInstance = AnimInstance;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FSMSystem.ServerChangeState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStateType                                         Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStateType                                         nextType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSMSystem::ServerChangeState(EStateType Type, EStateType nextType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FSMSystem.ServerChangeState");
		
		UFSMSystem_ServerChangeState_Params params {};
		params.Type = Type;
		params.nextType = nextType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FSMSystem.MultiCastChangeState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStateType                                         Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStateType                                         nextType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSMSystem::MultiCastChangeState(EStateType Type, EStateType nextType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FSMSystem.MultiCastChangeState");
		
		UFSMSystem_MultiCastChangeState_Params params {};
		params.Type = Type;
		params.nextType = nextType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FSMSystem.ChangeState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStateType                                         Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStateType                                         nextType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSMSystem::ChangeState(EStateType Type, EStateType nextType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FSMSystem.ChangeState");
		
		UFSMSystem_ChangeState_Params params {};
		params.Type = Type;
		params.nextType = nextType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.FSMSystem.AddState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStateType                                         Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      StateClass                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFSMSystem::AddState(EStateType Type, class UClass* StateClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.FSMSystem.AddState");
		
		UFSMSystem_AddState_Params params {};
		params.Type = Type;
		params.StateClass = StateClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFSMSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFSMSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.FSMSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.GameplayCueNotify_Burst.OnBurst
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueNotify_SpawnResult              SpawnResults                                               (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGameplayCueNotify_Burst::OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.GameplayCueNotify_Burst.OnBurst");
		
		UGameplayCueNotify_Burst_OnBurst_Params params {};
		params.Target = Target;
		params.Parameters = Parameters;
		params.SpawnResults = SpawnResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayCueNotify_Burst.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayCueNotify_Burst::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.GameplayCueNotify_Burst");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.GridPanelEx.OnMouseEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   CursorDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UGridPanelEx::OnMouseEvent__DelegateSignature(const struct FVector2D& screenPos, const struct FVector2D& CursorDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.GridPanelEx.OnMouseEvent__DelegateSignature");
		
		UGridPanelEx_OnMouseEvent__DelegateSignature_Params params {};
		params.screenPos = screenPos;
		params.CursorDelta = CursorDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.GridPanelEx.AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UGridPanelEx::AddItem(int32_t nId, int32_t InRow, int32_t InColumn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.GridPanelEx.AddItem");
		
		UGridPanelEx_AddItem_Params params {};
		params.nId = nId;
		params.InRow = InRow;
		params.InColumn = InColumn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGridPanelEx.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGridPanelEx::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.GridPanelEx");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHubClientMgr.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHubClientMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.HubClientMgr");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImageGlobal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageGlobal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.ImageGlobal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ImageMouseEvent.ReleasePress
	 * 		Flags  -> ()
	 */
	void UImageMouseEvent::ReleasePress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ImageMouseEvent.ReleasePress");
		
		UImageMouseEvent_ReleasePress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.ImageMouseEvent.OnMouseEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   CursorDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            buttonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UImageMouseEvent::OnMouseEvent__DelegateSignature(const struct FVector2D& screenPos, const struct FVector2D& CursorDelta, int32_t buttonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.ImageMouseEvent.OnMouseEvent__DelegateSignature");
		
		UImageMouseEvent_OnMouseEvent__DelegateSignature_Params params {};
		params.screenPos = screenPos;
		params.CursorDelta = CursorDelta;
		params.buttonIndex = buttonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ImageMouseEvent.DrawLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDraw                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   pos1                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   pos2                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              fInter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              nPerDis                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImageMouseEvent::DrawLine(bool bDraw, const struct FVector2D& pos1, const struct FVector2D& pos2, float fInter, float nPerDis, float Thickness, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ImageMouseEvent.DrawLine");
		
		UImageMouseEvent_DrawLine_Params params {};
		params.bDraw = bDraw;
		params.pos1 = pos1;
		params.pos2 = pos2;
		params.fInter = fInter;
		params.nPerDis = nPerDis;
		params.Thickness = Thickness;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImageMouseEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImageMouseEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.ImageMouseEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.IrregularButton.SetAdvancedHitTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIrregularButton::SetAdvancedHitTexture(class UTexture2D* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.IrregularButton.SetAdvancedHitTexture");
		
		UIrregularButton_SetAdvancedHitTexture_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.IrregularButton.SetAdvancedHitAlpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAlpha                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIrregularButton::SetAdvancedHitAlpha(int32_t InAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.IrregularButton.SetAdvancedHitAlpha");
		
		UIrregularButton_SetAdvancedHitAlpha_Params params {};
		params.InAlpha = InAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIrregularButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIrregularButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.IrregularButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALerpMoveActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALerpMoveActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.LerpMoveActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LocalizationEditorUtilityActor.SetNoneTranslateChineseToEmpty
	 * 		Flags  -> ()
	 */
	void ALocalizationEditorUtilityActor::SetNoneTranslateChineseToEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LocalizationEditorUtilityActor.SetNoneTranslateChineseToEmpty");
		
		ALocalizationEditorUtilityActor_SetNoneTranslateChineseToEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALocalizationEditorUtilityActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALocalizationEditorUtilityActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.LocalizationEditorUtilityActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaBTDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaBTDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.LuaBTDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaBTService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaBTService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.LuaBTService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaBTTaskNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaBTTaskNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.LuaBTTaskNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnCancelDragWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     pDragObj                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDragType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 pTopParent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnCancelDragWidget(class UObject* pDragObj, int32_t nDragType, class UUserWidget* pTopParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnCancelDragWidget");
		
		ULuaManger_OnCancelDragWidget_Params params {};
		params.pDragObj = pDragObj;
		params.nDragType = nDragType;
		params.pTopParent = pTopParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.SetPlatformInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nPlatformId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProjectID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      channelId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeviceID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetPlatformInfo(int32_t nPlatformId, const class FString& ProjectID, const class FString& channelId, const class FString& DeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.SetPlatformInfo");
		
		ULuaManger_SetPlatformInfo_Params params {};
		params.nPlatformId = nPlatformId;
		params.ProjectID = ProjectID;
		params.channelId = channelId;
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.TickInLua
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::TickInLua(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.TickInLua");
		
		ULuaManger_TickInLua_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnDownloadComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strUrl                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      contentOrsavePath                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSaveFile                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            errorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnDownloadComplete(const class FString& strUrl, bool bSuccess, const class FString& contentOrsavePath, bool bSaveFile, int32_t errorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnDownloadComplete");
		
		ULuaManger_OnDownloadComplete_Params params {};
		params.strUrl = strUrl;
		params.bSuccess = bSuccess;
		params.contentOrsavePath = contentOrsavePath;
		params.bSaveFile = bSaveFile;
		params.errorCode = errorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnBeginDragWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     pDragObj                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDragType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 pTopParent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDragDropWidget*                             _CurDragVisualWidget                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnBeginDragWidget(class UObject* pDragObj, int32_t nDragType, class UUserWidget* pTopParent, class UDragDropWidget* _CurDragVisualWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnBeginDragWidget");
		
		ULuaManger_OnBeginDragWidget_Params params {};
		params.pDragObj = pDragObj;
		params.nDragType = nDragType;
		params.pTopParent = pTopParent;
		params._CurDragVisualWidget = _CurDragVisualWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnCoverWidgetChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 pTopParent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 coverPanel                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDragDropWidget*                             coverObj                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDragDropWidget*                             dragObj                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDragType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDropType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnCoverWidgetChange(class UUserWidget* pTopParent, class UUserWidget* coverPanel, class UDragDropWidget* coverObj, class UDragDropWidget* dragObj, int32_t nDragType, int32_t nDropType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnCoverWidgetChange");
		
		ULuaManger_OnCoverWidgetChange_Params params {};
		params.pTopParent = pTopParent;
		params.coverPanel = coverPanel;
		params.coverObj = coverObj;
		params.dragObj = dragObj;
		params.nDragType = nDragType;
		params.nDropType = nDropType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnLevelUnloadComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      worldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSessionEnded                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCleanupResources                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnLevelUnloadComplete(class UWorld* World, const class FString& worldName, bool bSessionEnded, bool bCleanupResources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnLevelUnloadComplete");
		
		ULuaManger_OnLevelUnloadComplete_Params params {};
		params.World = World;
		params.worldName = worldName;
		params.bSessionEnded = bSessionEnded;
		params.bCleanupResources = bCleanupResources;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnWigetMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     topwidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::OnWigetMouseLeave(class UWidget* topwidget, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnWigetMouseLeave");
		
		ULuaManger_OnWigetMouseLeave_Params params {};
		params.topwidget = topwidget;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnAxisKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Touch1                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Touch2                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnAxisKey(class UObject* Widget, const class FString& KeyName, float AxisValue, const struct FVector2D& Touch1, const struct FVector2D& Touch2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnAxisKey");
		
		ULuaManger_OnAxisKey_Params params {};
		params.Widget = Widget;
		params.KeyName = KeyName;
		params.AxisValue = AxisValue;
		params.Touch1 = Touch1;
		params.Touch2 = Touch2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.DragWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     pDragObj                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDragType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDropType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     pDrop                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 pTopParent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::DragWidget(class UObject* pDragObj, int32_t nDragType, int32_t nDropType, class UWidget* pDrop, class UUserWidget* pTopParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.DragWidget");
		
		ULuaManger_DragWidget_Params params {};
		params.pDragObj = pDragObj;
		params.nDragType = nDragType;
		params.nDropType = nDropType;
		params.pDrop = pDrop;
		params.pTopParent = pTopParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnWigetMouseButtonMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     topwidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   CursorDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::OnWigetMouseButtonMove(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos, const struct FVector2D& CursorDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnWigetMouseButtonMove");
		
		ULuaManger_OnWigetMouseButtonMove_Params params {};
		params.topwidget = topwidget;
		params.Widget = Widget;
		params.screenPos = screenPos;
		params.CursorDelta = CursorDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.Start
	 * 		Flags  -> ()
	 */
	void ULuaManger::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.Start");
		
		ULuaManger_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnPressKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnPressKey(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnPressKey");
		
		ULuaManger_OnPressKey_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnDsNetWorkFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      worldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNetDriver*                                  NetDriver                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nailureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnDsNetWorkFailure(class UWorld* World, const class FString& worldName, class UNetDriver* NetDriver, int32_t nailureType, const class FString& ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnDsNetWorkFailure");
		
		ULuaManger_OnDsNetWorkFailure_Params params {};
		params.World = World;
		params.worldName = worldName;
		params.NetDriver = NetDriver;
		params.nailureType = nailureType;
		params.ErrorString = ErrorString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnWigetMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     topwidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::OnWigetMouseButtonDown(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnWigetMouseButtonDown");
		
		ULuaManger_OnWigetMouseButtonDown_Params params {};
		params.topwidget = topwidget;
		params.Widget = Widget;
		params.screenPos = screenPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnWigetRightMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     topwidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::OnWigetRightMouseButtonDown(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnWigetRightMouseButtonDown");
		
		ULuaManger_OnWigetRightMouseButtonDown_Params params {};
		params.topwidget = topwidget;
		params.Widget = Widget;
		params.screenPos = screenPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.LuaFree
	 * 		Flags  -> ()
	 */
	void ULuaManger::LuaFree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.LuaFree");
		
		ULuaManger_LuaFree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.Shutdown
	 * 		Flags  -> ()
	 */
	void ULuaManger::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.Shutdown");
		
		ULuaManger_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnWigetMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     topwidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::OnWigetMouseButtonUp(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnWigetMouseButtonUp");
		
		ULuaManger_OnWigetMouseButtonUp_Params params {};
		params.topwidget = topwidget;
		params.Widget = Widget;
		params.screenPos = screenPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.LuaReportLogToGameServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      V                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::LuaReportLogToGameServer(const class FString& V)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.LuaReportLogToGameServer");
		
		ULuaManger_LuaReportLogToGameServer_Params params {};
		params.V = V;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnLevelLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      pWorld                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnLevelLoaded(class UWorld* pWorld, const class FString& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnLevelLoaded");
		
		ULuaManger_OnLevelLoaded_Params params {};
		params.pWorld = pWorld;
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.OnShortcutKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShift                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCtrl                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCmd                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InputEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnShortcutKey(class UObject* Widget, const class FString& KeyName, bool bShift, bool bAlt, bool bCtrl, bool bCmd, int32_t InputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.OnShortcutKey");
		
		ULuaManger_OnShortcutKey_Params params {};
		params.Widget = Widget;
		params.KeyName = KeyName;
		params.bShift = bShift;
		params.bAlt = bAlt;
		params.bCtrl = bCtrl;
		params.bCmd = bCmd;
		params.InputEvent = InputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction Main.LuaManger.Init
	 * 		Flags  -> ()
	 */
	void ULuaManger::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction Main.LuaManger.Init");
		
		ULuaManger_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.WriteIniFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strSection                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::WriteIniFile(const class FString& strSection, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.WriteIniFile");
		
		ULuaManger_WriteIniFile_Params params {};
		params.strSection = strSection;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.WaitAndFork
	 * 		Flags  -> ()
	 */
	void ULuaManger::WaitAndFork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.WaitAndFork");
		
		ULuaManger_WaitAndFork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.VerifyActivationCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strCode                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::VerifyActivationCode(const class FString& strCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.VerifyActivationCode");
		
		ULuaManger_VerifyActivationCode_Params params {};
		params.strCode = strCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.UploadLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint64_t                                           roleid                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      roleName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              updateCallback                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::UploadLog(const class FString& FilePath, uint64_t roleid, const class FString& roleName, const class FScriptDelegate& updateCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.UploadLog");
		
		ULuaManger_UploadLog_Params params {};
		params.FilePath = FilePath;
		params.roleid = roleid;
		params.roleName = roleName;
		params.updateCallback = updateCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.UploadException
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Reason                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StackTrace                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::UploadException(const class FString& Name, const class FString& Reason, const class FString& StackTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.UploadException");
		
		ULuaManger_UploadException_Params params {};
		params.Name = Name;
		params.Reason = Reason;
		params.StackTrace = StackTrace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.UpdateToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Token                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::UpdateToken(const class FString& Token)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.UpdateToken");
		
		ULuaManger_UpdateToken_Params params {};
		params.Token = Token;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.UpdatePostion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		double                                             posX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             posY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             posZ                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::UpdatePostion(double posX, double posY, double posZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.UpdatePostion");
		
		ULuaManger_UpdatePostion_Params params {};
		params.posX = posX;
		params.posY = posY;
		params.posZ = posZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.UnZip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      destDir                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSoZip                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteFile                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::UnZip(const class FString& FilePath, const class FString& destDir, bool bSoZip, bool bDeleteFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.UnZip");
		
		ULuaManger_UnZip_Params params {};
		params.FilePath = FilePath;
		params.destDir = destDir;
		params.bSoZip = bSoZip;
		params.bDeleteFile = bDeleteFile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.UnregisterSettingInputProcess
	 * 		Flags  -> ()
	 */
	void ULuaManger::UnregisterSettingInputProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.UnregisterSettingInputProcess");
		
		ULuaManger_UnregisterSettingInputProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.UnMountSavePaks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAutoDelete                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULuaManger::UnMountSavePaks(bool bAutoDelete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.UnMountSavePaks");
		
		ULuaManger_UnMountSavePaks_Params params {};
		params.bAutoDelete = bAutoDelete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.UnLoadWorldStreamLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     worldObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldBlockOnLoad                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::UnLoadWorldStreamLevel(class UObject* worldObject, const class FString& LevelName, bool bShouldBlockOnLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.UnLoadWorldStreamLevel");
		
		ULuaManger_UnLoadWorldStreamLevel_Params params {};
		params.worldObject = worldObject;
		params.LevelName = LevelName;
		params.bShouldBlockOnLoad = bShouldBlockOnLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.UnLoadStreamLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldBlockOnLoad                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::UnLoadStreamLevel(const class FString& LevelName, bool bShouldBlockOnLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.UnLoadStreamLevel");
		
		ULuaManger_UnLoadStreamLevel_Params params {};
		params.LevelName = LevelName;
		params.bShouldBlockOnLoad = bShouldBlockOnLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ToGc
	 * 		Flags  -> ()
	 */
	void ULuaManger::ToGc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ToGc");
		
		ULuaManger_ToGc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.TickInLua__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::TickInLua__Overridden(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.TickInLua__Overridden");
		
		ULuaManger_TickInLua__Overridden_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SwitchWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ToWorldContextHandle                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULuaManger::SwitchWorld(const class FName& ToWorldContextHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SwitchWorld");
		
		ULuaManger_SwitchWorld_Params params {};
		params.ToWorldContextHandle = ToWorldContextHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SwitchLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint64_t                                           userId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSwitchAccoutBack                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SwitchLogin(uint64_t userId, const class FScriptDelegate& OnSwitchAccoutBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SwitchLogin");
		
		ULuaManger_SwitchLogin_Params params {};
		params.userId = userId;
		params.OnSwitchAccoutBack = OnSwitchAccoutBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.StopDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::StopDownload(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.StopDownload");
		
		ULuaManger_StopDownload_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.StartListen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::StartListen(int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.StartListen");
		
		ULuaManger_StartListen_Params params {};
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.StartDownloadRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      savePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    nRanges                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nRetryTimes                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strMd5                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::StartDownloadRange(const class FString& URL, const class FString& savePath, TArray<int32_t> nRanges, int32_t nRetryTimes, const class FString& strMd5, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.StartDownloadRange");
		
		ULuaManger_StartDownloadRange_Params params {};
		params.URL = URL;
		params.savePath = savePath;
		params.nRanges = nRanges;
		params.nRetryTimes = nRetryTimes;
		params.strMd5 = strMd5;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.StartDownloadLargeFileRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      savePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              nRanges                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nRetryTimes                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strMd5                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::StartDownloadLargeFileRange(const class FString& URL, const class FString& savePath, TArray<class FString> nRanges, int32_t nRetryTimes, const class FString& strMd5, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.StartDownloadLargeFileRange");
		
		ULuaManger_StartDownloadLargeFileRange_Params params {};
		params.URL = URL;
		params.savePath = savePath;
		params.nRanges = nRanges;
		params.nRetryTimes = nRetryTimes;
		params.strMd5 = strMd5;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.StartDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      savePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nRetryTimes                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            nTotalSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nThreadCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strMd5                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::StartDownload(const class FString& URL, const class FString& savePath, int32_t nRetryTimes, int64_t nTotalSize, int32_t nThreadCount, const class FString& strMd5, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.StartDownload");
		
		ULuaManger_StartDownload_Params params {};
		params.URL = URL;
		params.savePath = savePath;
		params.nRetryTimes = nRetryTimes;
		params.nTotalSize = nTotalSize;
		params.nThreadCount = nThreadCount;
		params.strMd5 = strMd5;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.Start__Overridden
	 * 		Flags  -> ()
	 */
	void ULuaManger::Start__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.Start__Overridden");
		
		ULuaManger_Start__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.Shutdown__Overridden
	 * 		Flags  -> ()
	 */
	void ULuaManger::Shutdown__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.Shutdown__Overridden");
		
		ULuaManger_Shutdown__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ShowRatingUi
	 * 		Flags  -> ()
	 */
	void ULuaManger::ShowRatingUi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ShowRatingUi");
		
		ULuaManger_ShowRatingUi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ShowRatingCustomUi
	 * 		Flags  -> ()
	 */
	void ULuaManger::ShowRatingCustomUi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ShowRatingCustomUi");
		
		ULuaManger_ShowRatingCustomUi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ShowLoginPanel
	 * 		Flags  -> ()
	 */
	void ULuaManger::ShowLoginPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ShowLoginPanel");
		
		ULuaManger_ShowLoginPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetWorldTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetWorldTick(class UWorld* World, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetWorldTick");
		
		ULuaManger_SetWorldTick_Params params {};
		params.World = World;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetWorldRoomReceivelRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            disMin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            disMax                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetWorldRoomReceivelRange(int32_t disMin, int32_t disMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetWorldRoomReceivelRange");
		
		ULuaManger_SetWorldRoomReceivelRange_Params params {};
		params.disMin = disMin;
		params.disMax = disMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetUserInfoForSecureService
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      roleid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      serverid                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetUserInfoForSecureService(const class FString& roleid, const class FString& serverid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetUserInfoForSecureService");
		
		ULuaManger_SetUserInfoForSecureService_Params params {};
		params.roleid = roleid;
		params.serverid = serverid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetUserHasAgreedProtocolsUpdate
	 * 		Flags  -> ()
	 */
	void ULuaManger::SetUserHasAgreedProtocolsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetUserHasAgreedProtocolsUpdate");
		
		ULuaManger_SetUserHasAgreedProtocolsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetUROParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      thresholds                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetUROParam(class USkeletalMeshComponent* Mesh, TArray<float>* thresholds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetUROParam");
		
		ULuaManger_SetUROParam_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (thresholds != nullptr)
			*thresholds = params.thresholds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetTimer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetTimer");
		
		ULuaManger_SetTimer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetTexture2DPixel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetTexture2DPixel(class UTexture2D* Texture, int32_t X, int32_t Y, unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetTexture2DPixel");
		
		ULuaManger_SetTexture2DPixel_Params params {};
		params.Texture = Texture;
		params.X = X;
		params.Y = Y;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetTextBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     TextObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetTextBlock(class UObject* TextObject, const class FString& str)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetTextBlock");
		
		ULuaManger_SetTextBlock_Params params {};
		params.TextObject = TextObject;
		params.str = str;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetSpeakerVolumeChangedCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetSpeakerVolumeChangedCallback(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetSpeakerVolumeChangedCallback");
		
		ULuaManger_SetSpeakerVolumeChangedCallback_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetShadowQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      quality                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetShadowQuality(unsigned char quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetShadowQuality");
		
		ULuaManger_SetShadowQuality_Params params {};
		params.quality = quality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetScalabilityLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Scalability                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetScalabilityLevel(unsigned char Scalability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetScalabilityLevel");
		
		ULuaManger_SetScalabilityLevel_Params params {};
		params.Scalability = Scalability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetSandbox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetSandbox(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetSandbox");
		
		ULuaManger_SetSandbox_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetReportLogLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReport                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      eLevel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetReportLogLevel(bool bReport, unsigned char eLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetReportLogLevel");
		
		ULuaManger_SetReportLogLevel_Params params {};
		params.bReport = bReport;
		params.eLevel = eLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetRecordingVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetRecordingVolume(int32_t Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetRecordingVolume");
		
		ULuaManger_SetRecordingVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetPlaybackVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetPlaybackVolume(int32_t Volume, const class FString& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetPlaybackVolume");
		
		ULuaManger_SetPlaybackVolume_Params params {};
		params.Volume = Volume;
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetPlatformInfo__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nPlatformId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProjectID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      channelId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeviceID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetPlatformInfo__Overridden(int32_t nPlatformId, const class FString& ProjectID, const class FString& channelId, const class FString& DeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetPlatformInfo__Overridden");
		
		ULuaManger_SetPlatformInfo__Overridden_Params params {};
		params.nPlatformId = nPlatformId;
		params.ProjectID = ProjectID;
		params.channelId = channelId;
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetMSAA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      quality                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetMSAA(unsigned char quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetMSAA");
		
		ULuaManger_SetMSAA_Params params {};
		params.quality = quality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetMinorLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      country                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSetMinorLimitBack                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetMinorLimit(const class FString& country, const class FString& Content, const class FScriptDelegate& OnSetMinorLimitBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetMinorLimit");
		
		ULuaManger_SetMinorLimit_Params params {};
		params.country = country;
		params.Content = Content;
		params.OnSetMinorLimitBack = OnSetMinorLimitBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetMaterialQualityLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      quality                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetMaterialQualityLevel(unsigned char quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetMaterialQualityLevel");
		
		ULuaManger_SetMaterialQualityLevel_Params params {};
		params.quality = quality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetLuaSearchPathAndOcPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              luaSearchPaths                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ocPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetLuaSearchPathAndOcPath(TArray<class FString> luaSearchPaths, const class FString& ocPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetLuaSearchPathAndOcPath");
		
		ULuaManger_SetLuaSearchPathAndOcPath_Params params {};
		params.luaSearchPaths = luaSearchPaths;
		params.ocPath = ocPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetListAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     pWidget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Alignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetListAlignment(class UWidget* pWidget, int32_t Alignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetListAlignment");
		
		ULuaManger_SetListAlignment_Params params {};
		params.pWidget = pWidget;
		params.Alignment = Alignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetInputMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUiOnly                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowMouse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockMouse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetInputMode(bool bUiOnly, bool bShowMouse, class UWidget* Widget, bool bLockMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetInputMode");
		
		ULuaManger_SetInputMode_Params params {};
		params.bUiOnly = bUiOnly;
		params.bShowMouse = bShowMouse;
		params.Widget = Widget;
		params.bLockMouse = bLockMouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetGetSpeakersCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetGetSpeakersCallback(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetGetSpeakersCallback");
		
		ULuaManger_SetGetSpeakersCallback_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetEnableMotionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetEnableMotionData(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetEnableMotionData");
		
		ULuaManger_SetEnableMotionData_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetDebug(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetDebug");
		
		ULuaManger_SetDebug_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SetCommandLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SetCommandLine(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SetCommandLine");
		
		ULuaManger_SetCommandLine_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ServerTravel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InURL                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAbsolute                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldSkipGameNotify                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::ServerTravel(const class FString& InURL, bool bAbsolute, bool bShouldSkipGameNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ServerTravel");
		
		ULuaManger_ServerTravel_Params params {};
		params.InURL = InURL;
		params.bAbsolute = bAbsolute;
		params.bShouldSkipGameNotify = bShouldSkipGameNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SendMsgToFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      friendID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SendMsgToFriend(const class FString& friendID, const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SendMsgToFriend");
		
		ULuaManger_SendMsgToFriend_Params params {};
		params.friendID = friendID;
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SearchTinderActorsAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SearchTinderActorsAt(const struct FVector& Location, float Distance, TArray<class AActor*>* Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SearchTinderActorsAt");
		
		ULuaManger_SearchTinderActorsAt_Params params {};
		params.Location = Location;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SearchPlayersAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SearchPlayersAt(const struct FVector& Location, float Distance, TArray<class AActor*>* Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SearchPlayersAt");
		
		ULuaManger_SearchPlayersAt_Params params {};
		params.Location = Location;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SearchActorsAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::SearchActorsAt(const struct FVector& Location, float Distance, TArray<class AActor*>* Actors, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SearchActorsAt");
		
		ULuaManger_SearchActorsAt_Params params {};
		params.Location = Location;
		params.Distance = Distance;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SdkIsInit
	 * 		Flags  -> ()
	 */
	bool ULuaManger::SdkIsInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SdkIsInit");
		
		ULuaManger_SdkIsInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.SaveStringToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strFilePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strContent                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::SaveStringToFile(const class FString& strFilePath, const class FString& strContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.SaveStringToFile");
		
		ULuaManger_SaveStringToFile_Params params {};
		params.strFilePath = strFilePath;
		params.strContent = strContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RestartApp
	 * 		Flags  -> ()
	 */
	void ULuaManger::RestartApp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RestartApp");
		
		ULuaManger_RestartApp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ResetBodyInstanceDamping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      TargetMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::ResetBodyInstanceDamping(class USkeletalMeshComponent* TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ResetBodyInstanceDamping");
		
		ULuaManger_ResetBodyInstanceDamping_Params params {};
		params.TargetMesh = TargetMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RequestPermission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strPermission                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFirstRequest                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::RequestPermission(const class FString& strPermission, bool bFirstRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RequestPermission");
		
		ULuaManger_RequestPermission_Params params {};
		params.strPermission = strPermission;
		params.bFirstRequest = bFirstRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.Report
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      extraData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::Report(const class FString& EventName, const class FString& Key, const class FString& Value, const class FString& extraData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.Report");
		
		ULuaManger_Report_Params params {};
		params.EventName = EventName;
		params.Key = Key;
		params.Value = Value;
		params.extraData = extraData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RemoveWidgetFromGameViewPort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RemoveWidgetFromGameViewPort(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RemoveWidgetFromGameViewPort");
		
		ULuaManger_RemoveWidgetFromGameViewPort_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RemoveUObjectFromRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     pObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RemoveUObjectFromRoot(class UObject* pObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RemoveUObjectFromRoot");
		
		ULuaManger_RemoveUObjectFromRoot_Params params {};
		params.pObject = pObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RemoveTinderActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RemoveTinderActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RemoveTinderActor");
		
		ULuaManger_RemoveTinderActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RemoveShortcutKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     obj                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShift                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCtrl                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCmd                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InputEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RemoveShortcutKey(const class FString& KeyName, class UObject* obj, bool bShift, bool bAlt, bool bCtrl, bool bCmd, int32_t InputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RemoveShortcutKey");
		
		ULuaManger_RemoveShortcutKey_Params params {};
		params.KeyName = KeyName;
		params.obj = obj;
		params.bShift = bShift;
		params.bAlt = bAlt;
		params.bCtrl = bCtrl;
		params.bCmd = bCmd;
		params.InputEvent = InputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RemoveReplicationFromNormalActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RemoveReplicationFromNormalActors(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RemoveReplicationFromNormalActors");
		
		ULuaManger_RemoveReplicationFromNormalActors_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RemoveObjectShortcutKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     obj                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RemoveObjectShortcutKeys(class UObject* obj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RemoveObjectShortcutKeys");
		
		ULuaManger_RemoveObjectShortcutKeys_Params params {};
		params.obj = obj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RemoveKeyIniFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strSection                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RemoveKeyIniFile(const class FString& strSection, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RemoveKeyIniFile");
		
		ULuaManger_RemoveKeyIniFile_Params params {};
		params.strSection = strSection;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RemoveFromAlwaysRelevant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RemoveFromAlwaysRelevant(class AActor* Actor, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RemoveFromAlwaysRelevant");
		
		ULuaManger_RemoveFromAlwaysRelevant_Params params {};
		params.Actor = Actor;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RemoveAxisKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     obj                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RemoveAxisKey(const class FString& KeyName, class UObject* obj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RemoveAxisKey");
		
		ULuaManger_RemoveAxisKey_Params params {};
		params.KeyName = KeyName;
		params.obj = obj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RegisterSettingInputProcess
	 * 		Flags  -> ()
	 */
	void ULuaManger::RegisterSettingInputProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RegisterSettingInputProcess");
		
		ULuaManger_RegisterSettingInputProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RefreshMeshPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RefreshMeshPose(class USkeletalMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RefreshMeshPose");
		
		ULuaManger_RefreshMeshPose_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RefreshBindCommonUIKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FCommonUIRedirectKeyData> RedirectMap                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RefreshBindCommonUIKeys(TMap<class FName, struct FCommonUIRedirectKeyData>* RedirectMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RefreshBindCommonUIKeys");
		
		ULuaManger_RefreshBindCommonUIKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RedirectMap != nullptr)
			*RedirectMap = params.RedirectMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ReDownloadErrorTask
	 * 		Flags  -> ()
	 */
	void ULuaManger::ReDownloadErrorTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ReDownloadErrorTask");
		
		ULuaManger_ReDownloadErrorTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.RealNameVerify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMustSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              realNameCallback                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::RealNameVerify(const class FString& URL, bool bMustSuccess, const class FScriptDelegate& realNameCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.RealNameVerify");
		
		ULuaManger_RealNameVerify_Params params {};
		params.URL = URL;
		params.bMustSuccess = bMustSuccess;
		params.realNameCallback = realNameCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.QueryProducts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      productId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnQueryProductInfo                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::QueryProducts(const class FString& productId, const class FScriptDelegate& OnQueryProductInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.QueryProducts");
		
		ULuaManger_QueryProducts_Params params {};
		params.productId = productId;
		params.OnQueryProductInfo = OnQueryProductInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.QueryGoods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      roleid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      serverid                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCurrency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnQueryGoodsBack                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::QueryGoods(const class FString& roleid, const class FString& serverid, bool bCurrency, const class FScriptDelegate& OnQueryGoodsBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.QueryGoods");
		
		ULuaManger_QueryGoods_Params params {};
		params.roleid = roleid;
		params.serverid = serverid;
		params.bCurrency = bCurrency;
		params.OnQueryGoodsBack = OnQueryGoodsBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.QueryAgeGateStatus
	 * 		Flags  -> ()
	 */
	bool ULuaManger::QueryAgeGateStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.QueryAgeGateStatus");
		
		ULuaManger_QueryAgeGateStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ProjectContentDir
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::ProjectContentDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ProjectContentDir");
		
		ULuaManger_ProjectContentDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.Pay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      productId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            goodType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      roleid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      roleName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            roleLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            roleVipLevel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      serverid                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      extInfo                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnPay                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::Pay(const class FString& productId, int32_t goodType, int32_t Amount, const class FString& Currency, const class FString& roleid, const class FString& roleName, int32_t roleLevel, int32_t roleVipLevel, const class FString& serverid, const class FString& extInfo, const class FScriptDelegate& OnPay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.Pay");
		
		ULuaManger_Pay_Params params {};
		params.productId = productId;
		params.goodType = goodType;
		params.Amount = Amount;
		params.Currency = Currency;
		params.roleid = roleid;
		params.roleName = roleName;
		params.roleLevel = roleLevel;
		params.roleVipLevel = roleVipLevel;
		params.serverid = serverid;
		params.extInfo = extInfo;
		params.OnPay = OnPay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.PauseDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::PauseDownload(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.PauseDownload");
		
		ULuaManger_PauseDownload_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OpenUserCenter
	 * 		Flags  -> ()
	 */
	void ULuaManger::OpenUserCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OpenUserCenter");
		
		ULuaManger_OpenUserCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OpenUrlBySdk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      extraData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OpenUrlBySdk(const class FString& Title, const class FString& URL, const class FString& extraData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OpenUrlBySdk");
		
		ULuaManger_OpenUrlBySdk_Params params {};
		params.Title = Title;
		params.URL = URL;
		params.extraData = extraData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OpenUrl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strUrl                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OpenUrl(const class FString& strUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OpenUrl");
		
		ULuaManger_OpenUrl_Params params {};
		params.strUrl = strUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OpenLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OpenLevel(const class FString& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OpenLevel");
		
		ULuaManger_OpenLevel_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OpenDisregardForGC
	 * 		Flags  -> ()
	 */
	void ULuaManger::OpenDisregardForGC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OpenDisregardForGC");
		
		ULuaManger_OpenDisregardForGC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OpenAppSetting
	 * 		Flags  -> ()
	 */
	void ULuaManger::OpenAppSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OpenAppSetting");
		
		ULuaManger_OpenAppSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnWigetRightMouseButtonDown__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     topwidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::OnWigetRightMouseButtonDown__Overridden(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnWigetRightMouseButtonDown__Overridden");
		
		ULuaManger_OnWigetRightMouseButtonDown__Overridden_Params params {};
		params.topwidget = topwidget;
		params.Widget = Widget;
		params.screenPos = screenPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnWigetMouseLeave__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     topwidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::OnWigetMouseLeave__Overridden(class UWidget* topwidget, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnWigetMouseLeave__Overridden");
		
		ULuaManger_OnWigetMouseLeave__Overridden_Params params {};
		params.topwidget = topwidget;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnWigetMouseButtonUp__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     topwidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::OnWigetMouseButtonUp__Overridden(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnWigetMouseButtonUp__Overridden");
		
		ULuaManger_OnWigetMouseButtonUp__Overridden_Params params {};
		params.topwidget = topwidget;
		params.Widget = Widget;
		params.screenPos = screenPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnWigetMouseButtonMove__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     topwidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   CursorDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::OnWigetMouseButtonMove__Overridden(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos, const struct FVector2D& CursorDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnWigetMouseButtonMove__Overridden");
		
		ULuaManger_OnWigetMouseButtonMove__Overridden_Params params {};
		params.topwidget = topwidget;
		params.Widget = Widget;
		params.screenPos = screenPos;
		params.CursorDelta = CursorDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnWigetMouseButtonDown__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     topwidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   screenPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::OnWigetMouseButtonDown__Overridden(class UWidget* topwidget, class UUserWidget* Widget, const struct FVector2D& screenPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnWigetMouseButtonDown__Overridden");
		
		ULuaManger_OnWigetMouseButtonDown__Overridden_Params params {};
		params.topwidget = topwidget;
		params.Widget = Widget;
		params.screenPos = screenPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnUnLoadStreamLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      worldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWorld*                                      pWorld                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnUnLoadStreamLevel(const class FString& worldName, class UWorld* pWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnUnLoadStreamLevel");
		
		ULuaManger_OnUnLoadStreamLevel_Params params {};
		params.worldName = worldName;
		params.pWorld = pWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnShortcutKey__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShift                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCtrl                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCmd                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InputEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnShortcutKey__Overridden(class UObject* Widget, const class FString& KeyName, bool bShift, bool bAlt, bool bCtrl, bool bCmd, int32_t InputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnShortcutKey__Overridden");
		
		ULuaManger_OnShortcutKey__Overridden_Params params {};
		params.Widget = Widget;
		params.KeyName = KeyName;
		params.bShift = bShift;
		params.bAlt = bAlt;
		params.bCtrl = bCtrl;
		params.bCmd = bCmd;
		params.InputEvent = InputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnRatingPraiseBtnClick
	 * 		Flags  -> ()
	 */
	void ULuaManger::OnRatingPraiseBtnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnRatingPraiseBtnClick");
		
		ULuaManger_OnRatingPraiseBtnClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnRatingFeedbackBtnClick
	 * 		Flags  -> ()
	 */
	void ULuaManger::OnRatingFeedbackBtnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnRatingFeedbackBtnClick");
		
		ULuaManger_OnRatingFeedbackBtnClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnPressKey__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnPressKey__Overridden(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnPressKey__Overridden");
		
		ULuaManger_OnPressKey__Overridden_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnPersistantLevelLoaded
	 * 		Flags  -> ()
	 */
	void ULuaManger::OnPersistantLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnPersistantLevelLoaded");
		
		ULuaManger_OnPersistantLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnLoadStreamLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      worldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWorld*                                      pWorld                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnLoadStreamLevel(const class FString& worldName, class UWorld* pWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnLoadStreamLevel");
		
		ULuaManger_OnLoadStreamLevel_Params params {};
		params.worldName = worldName;
		params.pWorld = pWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnLevelUnloadComplete__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      worldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSessionEnded                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCleanupResources                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnLevelUnloadComplete__Overridden(class UWorld* World, const class FString& worldName, bool bSessionEnded, bool bCleanupResources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnLevelUnloadComplete__Overridden");
		
		ULuaManger_OnLevelUnloadComplete__Overridden_Params params {};
		params.World = World;
		params.worldName = worldName;
		params.bSessionEnded = bSessionEnded;
		params.bCleanupResources = bCleanupResources;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnLevelLoaded__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      pWorld                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnLevelLoaded__Overridden(class UWorld* pWorld, const class FString& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnLevelLoaded__Overridden");
		
		ULuaManger_OnLevelLoaded__Overridden_Params params {};
		params.pWorld = pWorld;
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnDsNetWorkFailure__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      worldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNetDriver*                                  NetDriver                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nailureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnDsNetWorkFailure__Overridden(class UWorld* World, const class FString& worldName, class UNetDriver* NetDriver, int32_t nailureType, const class FString& ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnDsNetWorkFailure__Overridden");
		
		ULuaManger_OnDsNetWorkFailure__Overridden_Params params {};
		params.World = World;
		params.worldName = worldName;
		params.NetDriver = NetDriver;
		params.nailureType = nailureType;
		params.ErrorString = ErrorString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnDownloadComplete__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strUrl                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      contentOrsavePath                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSaveFile                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            errorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnDownloadComplete__Overridden(const class FString& strUrl, bool bSuccess, const class FString& contentOrsavePath, bool bSaveFile, int32_t errorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnDownloadComplete__Overridden");
		
		ULuaManger_OnDownloadComplete__Overridden_Params params {};
		params.strUrl = strUrl;
		params.bSuccess = bSuccess;
		params.contentOrsavePath = contentOrsavePath;
		params.bSaveFile = bSaveFile;
		params.errorCode = errorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnCoverWidgetChange__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 pTopParent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 coverPanel                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDragDropWidget*                             coverObj                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDragDropWidget*                             dragObj                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDragType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDropType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnCoverWidgetChange__Overridden(class UUserWidget* pTopParent, class UUserWidget* coverPanel, class UDragDropWidget* coverObj, class UDragDropWidget* dragObj, int32_t nDragType, int32_t nDropType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnCoverWidgetChange__Overridden");
		
		ULuaManger_OnCoverWidgetChange__Overridden_Params params {};
		params.pTopParent = pTopParent;
		params.coverPanel = coverPanel;
		params.coverObj = coverObj;
		params.dragObj = dragObj;
		params.nDragType = nDragType;
		params.nDropType = nDropType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnCancelDragWidget__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     pDragObj                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDragType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 pTopParent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnCancelDragWidget__Overridden(class UObject* pDragObj, int32_t nDragType, class UUserWidget* pTopParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnCancelDragWidget__Overridden");
		
		ULuaManger_OnCancelDragWidget__Overridden_Params params {};
		params.pDragObj = pDragObj;
		params.nDragType = nDragType;
		params.pTopParent = pTopParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnBeginDragWidget__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     pDragObj                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDragType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 pTopParent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDragDropWidget*                             _CurDragVisualWidget                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnBeginDragWidget__Overridden(class UObject* pDragObj, int32_t nDragType, class UUserWidget* pTopParent, class UDragDropWidget* _CurDragVisualWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnBeginDragWidget__Overridden");
		
		ULuaManger_OnBeginDragWidget__Overridden_Params params {};
		params.pDragObj = pDragObj;
		params.nDragType = nDragType;
		params.pTopParent = pTopParent;
		params._CurDragVisualWidget = _CurDragVisualWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.OnAxisKey__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Touch1                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Touch2                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::OnAxisKey__Overridden(class UObject* Widget, const class FString& KeyName, float AxisValue, const struct FVector2D& Touch1, const struct FVector2D& Touch2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.OnAxisKey__Overridden");
		
		ULuaManger_OnAxisKey__Overridden_Params params {};
		params.Widget = Widget;
		params.KeyName = KeyName;
		params.AxisValue = AxisValue;
		params.Touch1 = Touch1;
		params.Touch2 = Touch2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.NewEmptyUObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULuaManger::NewEmptyUObject(class UObject* Outer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.NewEmptyUObject");
		
		ULuaManger_NewEmptyUObject_Params params {};
		params.Outer = Outer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.NetMpaStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      stopLog                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::NetMpaStop(const class FString& stopLog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.NetMpaStop");
		
		ULuaManger_NetMpaStop_Params params {};
		params.stopLog = stopLog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.NetMpaStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      startLog                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::NetMpaStart(const class FString& startLog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.NetMpaStart");
		
		ULuaManger_NetMpaStart_Params params {};
		params.startLog = startLog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.NetMpaAddAddress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Host                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      contextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bChangeHost                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      finalUrl                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::NetMpaAddAddress(const class FString& Host, int32_t Port, const class FString& contextId, bool bChangeHost, class FString* finalUrl, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.NetMpaAddAddress");
		
		ULuaManger_NetMpaAddAddress_Params params {};
		params.Host = Host;
		params.Port = Port;
		params.contextId = contextId;
		params.bChangeHost = bChangeHost;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (finalUrl != nullptr)
			*finalUrl = params.finalUrl;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.NetDiagnosis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::NetDiagnosis(const class FString& Target, int32_t Timeout, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.NetDiagnosis");
		
		ULuaManger_NetDiagnosis_Params params {};
		params.Target = Target;
		params.Timeout = Timeout;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.MountPaks
	 * 		Flags  -> ()
	 */
	void ULuaManger::MountPaks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.MountPaks");
		
		ULuaManger_MountPaks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ModifyAgeGateStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::ModifyAgeGateStatus(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ModifyAgeGateStatus");
		
		ULuaManger_ModifyAgeGateStatus_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.MobileIsCharging
	 * 		Flags  -> ()
	 */
	bool ULuaManger::MobileIsCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.MobileIsCharging");
		
		ULuaManger_MobileIsCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.MarkObjectToDestory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     pObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::MarkObjectToDestory(class UObject* pObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.MarkObjectToDestory");
		
		ULuaManger_MarkObjectToDestory_Params params {};
		params.pObject = pObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.MapSignAlphaTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      InMapImage                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  AdvancedHitTexture                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      TestAlpha                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<int32_t, struct FVector2D>                    InPosMap                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> ULuaManger::MapSignAlphaTest(class UImage* InMapImage, class UTexture2D* AdvancedHitTexture, unsigned char TestAlpha, TMap<int32_t, struct FVector2D> InPosMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.MapSignAlphaTest");
		
		ULuaManger_MapSignAlphaTest_Params params {};
		params.InMapImage = InMapImage;
		params.AdvancedHitTexture = AdvancedHitTexture;
		params.TestAlpha = TestAlpha;
		params.InPosMap = InPosMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LuaReportLogToGameServer__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      V                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::LuaReportLogToGameServer__Overridden(const class FString& V)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LuaReportLogToGameServer__Overridden");
		
		ULuaManger_LuaReportLogToGameServer__Overridden_Params params {};
		params.V = V;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LuaFree__Overridden
	 * 		Flags  -> ()
	 */
	void ULuaManger::LuaFree__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LuaFree__Overridden");
		
		ULuaManger_LuaFree__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LogOut
	 * 		Flags  -> ()
	 */
	void ULuaManger::LogOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LogOut");
		
		ULuaManger_LogOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.Login
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nLoginType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::Login(int32_t nLoginType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.Login");
		
		ULuaManger_Login_Params params {};
		params.nLoginType = nLoginType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.Log
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nLevel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strModuleName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strLogContent                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::Log(int32_t nLevel, class FString* strModuleName, class FString* strLogContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.Log");
		
		ULuaManger_Log_Params params {};
		params.nLevel = nLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (strModuleName != nullptr)
			*strModuleName = params.strModuleName;
		if (strLogContent != nullptr)
			*strLogContent = params.strLogContent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LoadWorldStreamLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     worldObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMakeVisibleAfterLoad                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldBlockOnLoad                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::LoadWorldStreamLevel(class UObject* worldObject, const class FString& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LoadWorldStreamLevel");
		
		ULuaManger_LoadWorldStreamLevel_Params params {};
		params.worldObject = worldObject;
		params.LevelName = LevelName;
		params.bMakeVisibleAfterLoad = bMakeVisibleAfterLoad;
		params.bShouldBlockOnLoad = bShouldBlockOnLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LoadWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULuaManger::LoadWorld(const class FString& LevelPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LoadWorld");
		
		ULuaManger_LoadWorld_Params params {};
		params.LevelPath = LevelPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LoadStreamLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMakeVisibleAfterLoad                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldBlockOnLoad                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::LoadStreamLevel(const class FString& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LoadStreamLevel");
		
		ULuaManger_LoadStreamLevel_Params params {};
		params.LevelName = LevelName;
		params.bMakeVisibleAfterLoad = bMakeVisibleAfterLoad;
		params.bShouldBlockOnLoad = bShouldBlockOnLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LoadResAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallbackAutoRelease                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::LoadResAsync(const class FString& ResPath, const class FScriptDelegate& Callback, int32_t Priority, bool bCallbackAutoRelease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LoadResAsync");
		
		ULuaManger_LoadResAsync_Params params {};
		params.ResPath = ResPath;
		params.Callback = Callback;
		params.Priority = Priority;
		params.bCallbackAutoRelease = bCallbackAutoRelease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LoadRes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULuaManger::LoadRes(const class FString& ResPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LoadRes");
		
		ULuaManger_LoadRes_Params params {};
		params.ResPath = ResPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LoadMultiResAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ResPathList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallbackAutoRelease                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::LoadMultiResAsync(TArray<class FString>* ResPathList, const class FScriptDelegate& Callback, int32_t Priority, bool bCallbackAutoRelease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LoadMultiResAsync");
		
		ULuaManger_LoadMultiResAsync_Params params {};
		params.Callback = Callback;
		params.Priority = Priority;
		params.bCallbackAutoRelease = bCallbackAutoRelease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResPathList != nullptr)
			*ResPathList = params.ResPathList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LoadMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WorldContextHandle                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      mapPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::LoadMap(const class FName& WorldContextHandle, const class FString& mapPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LoadMap");
		
		ULuaManger_LoadMap_Params params {};
		params.WorldContextHandle = WorldContextHandle;
		params.mapPath = mapPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.LeaveRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::LeaveRoom(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.LeaveRoom");
		
		ULuaManger_LeaveRoom_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.JudgeAgeGate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ageCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::JudgeAgeGate(const class FScriptDelegate& ageCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.JudgeAgeGate");
		
		ULuaManger_JudgeAgeGate_Params params {};
		params.ageCallback = ageCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.JoinRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      roomId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Token                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            roomType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            getspeakerInterval                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               enableRangeAudio                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::JoinRoom(const class FString& roomId, const class FString& userId, const class FString& Token, int32_t roomType, int32_t getspeakerInterval, bool enableRangeAudio, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.JoinRoom");
		
		ULuaManger_JoinRoom_Params params {};
		params.roomId = roomId;
		params.userId = userId;
		params.Token = Token;
		params.roomType = roomType;
		params.getspeakerInterval = getspeakerInterval;
		params.enableRangeAudio = enableRangeAudio;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsWorldReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WorldContextHandle                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::IsWorldReady(const class FName& WorldContextHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsWorldReady");
		
		ULuaManger_IsWorldReady_Params params {};
		params.WorldContextHandle = WorldContextHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsServerWorldReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::IsServerWorldReady(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsServerWorldReady");
		
		ULuaManger_IsServerWorldReady_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsSandbox
	 * 		Flags  -> ()
	 */
	bool ULuaManger::IsSandbox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsSandbox");
		
		ULuaManger_IsSandbox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsPostionUnderWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     pWidget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   AbsolutePos                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::IsPostionUnderWidget(class UWidget* pWidget, const struct FVector2D& AbsolutePos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsPostionUnderWidget");
		
		ULuaManger_IsPostionUnderWidget_Params params {};
		params.pWidget = pWidget;
		params.AbsolutePos = AbsolutePos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsPermissionGranted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strPermission                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::IsPermissionGranted(const class FString& strPermission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsPermissionGranted");
		
		ULuaManger_IsPermissionGranted_Params params {};
		params.strPermission = strPermission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsNotificationsAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strChannelName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::IsNotificationsAllowed(const class FString& strChannelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsNotificationsAllowed");
		
		ULuaManger_IsNotificationsAllowed_Params params {};
		params.strChannelName = strChannelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsLinuxPlatform
	 * 		Flags  -> ()
	 */
	bool ULuaManger::IsLinuxPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsLinuxPlatform");
		
		ULuaManger_IsLinuxPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsGESpecContainsTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        InName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::IsGESpecContainsTag(const struct FGameplayEffectSpec& Spec, const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsGESpecContainsTag");
		
		ULuaManger_IsGESpecContainsTag_Params params {};
		params.Spec = Spec;
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsForkedChildProcess
	 * 		Flags  -> ()
	 */
	bool ULuaManger::IsForkedChildProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsForkedChildProcess");
		
		ULuaManger_IsForkedChildProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsEmulator
	 * 		Flags  -> ()
	 */
	bool ULuaManger::IsEmulator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsEmulator");
		
		ULuaManger_IsEmulator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsBsdkPay
	 * 		Flags  -> ()
	 */
	bool ULuaManger::IsBsdkPay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsBsdkPay");
		
		ULuaManger_IsBsdkPay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsAttributeChangeFromSpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::IsAttributeChangeFromSpec(const struct FGameplayEffectSpec& Spec, const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsAttributeChangeFromSpec");
		
		ULuaManger_IsAttributeChangeFromSpec_Params params {};
		params.Spec = Spec;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IsAllLoadingDone
	 * 		Flags  -> ()
	 */
	bool ULuaManger::IsAllLoadingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IsAllLoadingDone");
		
		ULuaManger_IsAllLoadingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.InviteFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      friendID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InviteInfo                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::InviteFriend(const class FString& friendID, const class FString& InviteInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.InviteFriend");
		
		ULuaManger_InviteFriend_Params params {};
		params.friendID = friendID;
		params.InviteInfo = InviteInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.Init__Overridden
	 * 		Flags  -> ()
	 */
	void ULuaManger::Init__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.Init__Overridden");
		
		ULuaManger_Init__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.IncreaseBodyInstanceDamping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      TargetMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MultiFactor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InRootBoneName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::IncreaseBodyInstanceDamping(class USkeletalMeshComponent* TargetMesh, float MultiFactor, const class FName& InRootBoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.IncreaseBodyInstanceDamping");
		
		ULuaManger_IncreaseBodyInstanceDamping_Params params {};
		params.TargetMesh = TargetMesh;
		params.MultiFactor = MultiFactor;
		params.InRootBoneName = InRootBoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.HttpIsDownloading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::HttpIsDownloading(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.HttpIsDownloading");
		
		ULuaManger_HttpIsDownloading_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.HttpDataWriteToDisk
	 * 		Flags  -> ()
	 */
	void ULuaManger::HttpDataWriteToDisk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.HttpDataWriteToDisk");
		
		ULuaManger_HttpDataWriteToDisk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.HasOpenFriendChainPermission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nPlatformId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCallBack                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::HasOpenFriendChainPermission(int32_t nPlatformId, const class FScriptDelegate& OnCallBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.HasOpenFriendChainPermission");
		
		ULuaManger_HasOpenFriendChainPermission_Params params {};
		params.nPlatformId = nPlatformId;
		params.OnCallBack = OnCallBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetWorldByWorldContextHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WorldContextHandle                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWorld* ULuaManger::GetWorldByWorldContextHandle(const class FName& WorldContextHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetWorldByWorldContextHandle");
		
		ULuaManger_GetWorldByWorldContextHandle_Params params {};
		params.WorldContextHandle = WorldContextHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetWidgetTexts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     pWidget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UWidget*>                             allText                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::GetWidgetTexts(class UWidget* pWidget, TArray<class UWidget*>* allText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetWidgetTexts");
		
		ULuaManger_GetWidgetTexts_Params params {};
		params.pWidget = pWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (allText != nullptr)
			*allText = params.allText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetWidgetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     pWidget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D ULuaManger::GetWidgetSize(class UWidget* pWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetWidgetSize");
		
		ULuaManger_GetWidgetSize_Params params {};
		params.pWidget = pWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetWidgetRelativePos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     selfWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     parentWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D ULuaManger::GetWidgetRelativePos(const struct FVector2D& Pos, class UWidget* selfWidget, class UWidget* parentWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetWidgetRelativePos");
		
		ULuaManger_GetWidgetRelativePos_Params params {};
		params.Pos = Pos;
		params.selfWidget = selfWidget;
		params.parentWidget = parentWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetWidgetAbsolutePostion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     pWidget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D ULuaManger::GetWidgetAbsolutePostion(class UWidget* pWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetWidgetAbsolutePostion");
		
		ULuaManger_GetWidgetAbsolutePostion_Params params {};
		params.pWidget = pWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetViewportSize
	 * 		Flags  -> ()
	 */
	struct FVector2D ULuaManger::GetViewportSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetViewportSize");
		
		ULuaManger_GetViewportSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetUserAgreementUrlAndPrivacyPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strUserAgreementUrl                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strPrivacyPolicy                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::GetUserAgreementUrlAndPrivacyPolicy(class FString* strUserAgreementUrl, class FString* strPrivacyPolicy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetUserAgreementUrlAndPrivacyPolicy");
		
		ULuaManger_GetUserAgreementUrlAndPrivacyPolicy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (strUserAgreementUrl != nullptr)
			*strUserAgreementUrl = params.strUserAgreementUrl;
		if (strPrivacyPolicy != nullptr)
			*strPrivacyPolicy = params.strPrivacyPolicy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetTopWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     pCtrl                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* ULuaManger::GetTopWidget(class UWidget* pCtrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetTopWidget");
		
		ULuaManger_GetTopWidget_Params params {};
		params.pCtrl = pCtrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetTick
	 * 		Flags  -> ()
	 */
	int64_t ULuaManger::GetTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetTick");
		
		ULuaManger_GetTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetTaskDownloadedSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strUrl                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t ULuaManger::GetTaskDownloadedSize(const class FString& strUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetTaskDownloadedSize");
		
		ULuaManger_GetTaskDownloadedSize_Params params {};
		params.strUrl = strUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetTagSetByCaller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                InTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDefaultValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULuaManger::GetTagSetByCaller(const struct FGameplayEffectSpec& Spec, struct FGameplayTag* InTag, float InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetTagSetByCaller");
		
		ULuaManger_GetTagSetByCaller_Params params {};
		params.Spec = Spec;
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTag != nullptr)
			*InTag = params.InTag;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetStringWithTranslation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyString                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText ULuaManger::GetStringWithTranslation(const class FString& KeyString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetStringWithTranslation");
		
		ULuaManger_GetStringWithTranslation_Params params {};
		params.KeyString = KeyString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetStringAsciiLen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULuaManger::GetStringAsciiLen(const class FString& str)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetStringAsciiLen");
		
		ULuaManger_GetStringAsciiLen_Params params {};
		params.str = str;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetSetByCaller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        InName                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDefaultValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULuaManger::GetSetByCaller(const struct FGameplayEffectSpec& Spec, class FName* InName, float InDefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetSetByCaller");
		
		ULuaManger_GetSetByCaller_Params params {};
		params.Spec = Spec;
		params.InDefaultValue = InDefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InName != nullptr)
			*InName = params.InName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetSdkOpenId
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetSdkOpenId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetSdkOpenId");
		
		ULuaManger_GetSdkOpenId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetSdkFriends
	 * 		Flags  -> ()
	 */
	void ULuaManger::GetSdkFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetSdkFriends");
		
		ULuaManger_GetSdkFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetRtcToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      roomId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      appId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      appkey                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nExpireTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULuaManger::GetRtcToken(const class FString& roomId, const class FString& userId, const class FString& appId, const class FString& appkey, int32_t nExpireTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetRtcToken");
		
		ULuaManger_GetRtcToken_Params params {};
		params.roomId = roomId;
		params.userId = userId;
		params.appId = appId;
		params.appkey = appkey;
		params.nExpireTime = nExpireTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetResMgr
	 * 		Flags  -> ()
	 */
	class UObject* ULuaManger::GetResMgr()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetResMgr");
		
		ULuaManger_GetResMgr_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetProcessId
	 * 		Flags  -> ()
	 */
	uint32_t ULuaManger::GetProcessId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetProcessId");
		
		ULuaManger_GetProcessId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetPlatformInfo
	 * 		Flags  -> ()
	 */
	void ULuaManger::GetPlatformInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetPlatformInfo");
		
		ULuaManger_GetPlatformInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetPersistentDownloadDir
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetPersistentDownloadDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetPersistentDownloadDir");
		
		ULuaManger_GetPersistentDownloadDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetPerformanceLevel
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetPerformanceLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetPerformanceLevel");
		
		ULuaManger_GetPerformanceLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetPakSavePath
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetPakSavePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetPakSavePath");
		
		ULuaManger_GetPakSavePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetOperatingSystemId
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetOperatingSystemId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetOperatingSystemId");
		
		ULuaManger_GetOperatingSystemId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetObjectUniqueID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	uint32_t ULuaManger::GetObjectUniqueID(class UObject* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetObjectUniqueID");
		
		ULuaManger_GetObjectUniqueID_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetMRam
	 * 		Flags  -> ()
	 */
	uint64_t ULuaManger::GetMRam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetMRam");
		
		ULuaManger_GetMRam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetModAttributeMagnitudeFromSpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULuaManger::GetModAttributeMagnitudeFromSpec(const struct FGameplayEffectSpec& Spec, const struct FGameplayAttribute& Attribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetModAttributeMagnitudeFromSpec");
		
		ULuaManger_GetModAttributeMagnitudeFromSpec_Params params {};
		params.Spec = Spec;
		params.Attribute = Attribute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetMinorLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      country                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnGetMinorLimitBack                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::GetMinorLimit(const class FString& country, const class FScriptDelegate& OnGetMinorLimitBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetMinorLimit");
		
		ULuaManger_GetMinorLimit_Params params {};
		params.country = country;
		params.OnGetMinorLimitBack = OnGetMinorLimitBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetMaterialPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           mi                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULuaManger::GetMaterialPath(class UMaterialInstance* mi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetMaterialPath");
		
		ULuaManger_GetMaterialPath_Params params {};
		params.mi = mi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetMapName
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetMapName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetMapName");
		
		ULuaManger_GetMapName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetMachineId
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetMachineId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetMachineId");
		
		ULuaManger_GetMachineId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetMacAddressString
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetMacAddressString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetMacAddressString");
		
		ULuaManger_GetMacAddressString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetLuaSrcPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      luaScriptName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULuaManger::GetLuaSrcPath(class FString* luaScriptName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetLuaSrcPath");
		
		ULuaManger_GetLuaSrcPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (luaScriptName != nullptr)
			*luaScriptName = params.luaScriptName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetLuaMem
	 * 		Flags  -> ()
	 */
	int32_t ULuaManger::GetLuaMem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetLuaMem");
		
		ULuaManger_GetLuaMem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetLoginUserInfo
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetLoginUserInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetLoginUserInfo");
		
		ULuaManger_GetLoginUserInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetListViewItemOfEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UListView*                                   ListView                                                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 entry                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULuaManger::GetListViewItemOfEntry(class UListView* ListView, class UUserWidget* entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetListViewItemOfEntry");
		
		ULuaManger_GetListViewItemOfEntry_Params params {};
		params.ListView = ListView;
		params.entry = entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetListViewFromListEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 listEntry                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UListViewBase* ULuaManger::GetListViewFromListEntry(class UUserWidget* listEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetListViewFromListEntry");
		
		ULuaManger_GetListViewFromListEntry_Params params {};
		params.listEntry = listEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetListViewEntryOfItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UListView*                                   ListView                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* ULuaManger::GetListViewEntryOfItem(class UListView* ListView, class UObject* item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetListViewEntryOfItem");
		
		ULuaManger_GetListViewEntryOfItem_Params params {};
		params.ListView = ListView;
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetListenPort
	 * 		Flags  -> ()
	 */
	uint32_t ULuaManger::GetListenPort()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetListenPort");
		
		ULuaManger_GetListenPort_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetLevelByPackageName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InLongPackageName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelStreaming* ULuaManger::GetLevelByPackageName(class UObject* WorldContextObject, const class FString& InLongPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetLevelByPackageName");
		
		ULuaManger_GetLevelByPackageName_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InLongPackageName = InLongPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetInputComponent
	 * 		Flags  -> ()
	 */
	class UInputComponent* ULuaManger::GetInputComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetInputComponent");
		
		ULuaManger_GetInputComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetIniFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strSection                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULuaManger::GetIniFile(const class FString& strSection, const class FString& Key, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetIniFile");
		
		ULuaManger_GetIniFile_Params params {};
		params.strSection = strSection;
		params.Key = Key;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetImpactForceFromASC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     ASC                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULuaManger::GetImpactForceFromASC(class UAbilitySystemComponent* ASC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetImpactForceFromASC");
		
		ULuaManger_GetImpactForceFromASC_Params params {};
		params.ASC = ASC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetHttpDownloadedLen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      downloadInfo                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t ULuaManger::GetHttpDownloadedLen(class FString* downloadInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetHttpDownloadedLen");
		
		ULuaManger_GetHttpDownloadedLen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (downloadInfo != nullptr)
			*downloadInfo = params.downloadInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetHitPosFromGESpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVector ULuaManger::GetHitPosFromGESpec(const struct FGameplayEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetHitPosFromGESpec");
		
		ULuaManger_GetHitPosFromGESpec_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetHistoryAccounts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnHistoryAccout                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::GetHistoryAccounts(const class FScriptDelegate& OnHistoryAccout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetHistoryAccounts");
		
		ULuaManger_GetHistoryAccounts_Params params {};
		params.OnHistoryAccout = OnHistoryAccout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetGBRam
	 * 		Flags  -> ()
	 */
	uint32_t ULuaManger::GetGBRam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetGBRam");
		
		ULuaManger_GetGBRam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetGameUserSettings
	 * 		Flags  -> ()
	 */
	class UGameUserSettings* ULuaManger::GetGameUserSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetGameUserSettings");
		
		ULuaManger_GetGameUserSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetGameplayTagByString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTag ULuaManger::GetGameplayTagByString(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetGameplayTagByString");
		
		ULuaManger_GetGameplayTagByString_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetGameInstance
	 * 		Flags  -> ()
	 */
	class UGameInstance* ULuaManger::GetGameInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetGameInstance");
		
		ULuaManger_GetGameInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetFriendChainInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nPlatformId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCallBack                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::GetFriendChainInfo(int32_t nPlatformId, const class FScriptDelegate& OnCallBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetFriendChainInfo");
		
		ULuaManger_GetFriendChainInfo_Params params {};
		params.nPlatformId = nPlatformId;
		params.OnCallBack = OnCallBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetFPSManager
	 * 		Flags  -> ()
	 */
	class UFPSManager* ULuaManger::GetFPSManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetFPSManager");
		
		ULuaManger_GetFPSManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetForkedChildProcessIndex
	 * 		Flags  -> ()
	 */
	uint16_t ULuaManger::GetForkedChildProcessIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetForkedChildProcessIndex");
		
		ULuaManger_GetForkedChildProcessIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetFlyLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPos                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Speed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FlyTime                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FallTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gravity                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ULuaManger::GetFlyLocation(const struct FVector& StartPos, const struct FVector& Speed, float FlyTime, float FallTime, float Gravity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetFlyLocation");
		
		ULuaManger_GetFlyLocation_Params params {};
		params.StartPos = StartPos;
		params.Speed = Speed;
		params.FlyTime = FlyTime;
		params.FallTime = FallTime;
		params.Gravity = Gravity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetFirstLocalPlayer
	 * 		Flags  -> ()
	 */
	class ULocalPlayer* ULuaManger::GetFirstLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetFirstLocalPlayer");
		
		ULuaManger_GetFirstLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetFilesFromPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FileExtension                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              files                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::GetFilesFromPath(const class FString& FilePath, const class FString& FileExtension, TArray<class FString>* files)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetFilesFromPath");
		
		ULuaManger_GetFilesFromPath_Params params {};
		params.FilePath = FilePath;
		params.FileExtension = FileExtension;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (files != nullptr)
			*files = params.files;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetFileContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strFilePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProjectFile                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULuaManger::GetFileContent(const class FString& strFilePath, bool bProjectFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetFileContent");
		
		ULuaManger_GetFileContent_Params params {};
		params.strFilePath = strFilePath;
		params.bProjectFile = bProjectFile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetCurrentWorldContextHandle
	 * 		Flags  -> ()
	 */
	class FName ULuaManger::GetCurrentWorldContextHandle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetCurrentWorldContextHandle");
		
		ULuaManger_GetCurrentWorldContextHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetCurrentNetState
	 * 		Flags  -> ()
	 */
	int32_t ULuaManger::GetCurrentNetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetCurrentNetState");
		
		ULuaManger_GetCurrentNetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetCppTime
	 * 		Flags  -> ()
	 */
	double ULuaManger::GetCppTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetCppTime");
		
		ULuaManger_GetCppTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetCountryCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::GetCountryCode(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetCountryCode");
		
		ULuaManger_GetCountryCode_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetCommandLine
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetCommandLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetCommandLine");
		
		ULuaManger_GetCommandLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetChannelOp
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetChannelOp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetChannelOp");
		
		ULuaManger_GetChannelOp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetCDO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULuaManger::GetCDO(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetCDO");
		
		ULuaManger_GetCDO_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetCauserFromGESpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class AActor* ULuaManger::GetCauserFromGESpec(const struct FGameplayEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetCauserFromGESpec");
		
		ULuaManger_GetCauserFromGESpec_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetBatteryLevel
	 * 		Flags  -> ()
	 */
	double ULuaManger::GetBatteryLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetBatteryLevel");
		
		ULuaManger_GetBatteryLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetAvailableMRam
	 * 		Flags  -> ()
	 */
	uint64_t ULuaManger::GetAvailableMRam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetAvailableMRam");
		
		ULuaManger_GetAvailableMRam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetAttackTracerManager
	 * 		Flags  -> ()
	 */
	class UAttackTracerMgr* ULuaManger::GetAttackTracerManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetAttackTracerManager");
		
		ULuaManger_GetAttackTracerManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetAntiAddictionState
	 * 		Flags  -> ()
	 */
	void ULuaManger::GetAntiAddictionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetAntiAddictionState");
		
		ULuaManger_GetAntiAddictionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetAllUText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 pWidget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UWidget*>                             allText                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::GetAllUText(class UUserWidget* pWidget, TArray<class UWidget*>* allText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetAllUText");
		
		ULuaManger_GetAllUText_Params params {};
		params.pWidget = pWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (allText != nullptr)
			*allText = params.allText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetAllImageGlobal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 pWidget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UWidget*>                             allImage                                                   (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::GetAllImageGlobal(class UUserWidget* pWidget, TArray<class UWidget*>* allImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetAllImageGlobal");
		
		ULuaManger_GetAllImageGlobal_Params params {};
		params.pWidget = pWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (allImage != nullptr)
			*allImage = params.allImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetActiveNodeFromBehaviorTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBehaviorTreeComponent*                      pTree                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBTNode* ULuaManger::GetActiveNodeFromBehaviorTree(class UBehaviorTreeComponent* pTree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetActiveNodeFromBehaviorTree");
		
		ULuaManger_GetActiveNodeFromBehaviorTree_Params params {};
		params.pTree = pTree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetActiveInstanceIdFromBehaviorTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBehaviorTreeComponent*                      pTree                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULuaManger::GetActiveInstanceIdFromBehaviorTree(class UBehaviorTreeComponent* pTree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetActiveInstanceIdFromBehaviorTree");
		
		ULuaManger_GetActiveInstanceIdFromBehaviorTree_Params params {};
		params.pTree = pTree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetActiveGETimeRemaining
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffect                       ActiveGameplayEffect                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float ULuaManger::GetActiveGETimeRemaining(const struct FActiveGameplayEffect& ActiveGameplayEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetActiveGETimeRemaining");
		
		ULuaManger_GetActiveGETimeRemaining_Params params {};
		params.ActiveGameplayEffect = ActiveGameplayEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetActiveGEHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffect                       ActiveGameplayEffect                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle ULuaManger::GetActiveGEHandle(const struct FActiveGameplayEffect& ActiveGameplayEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetActiveGEHandle");
		
		ULuaManger_GetActiveGEHandle_Params params {};
		params.ActiveGameplayEffect = ActiveGameplayEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GetActiveDeviceProfileName
	 * 		Flags  -> ()
	 */
	class FString ULuaManger::GetActiveDeviceProfileName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GetActiveDeviceProfileName");
		
		ULuaManger_GetActiveDeviceProfileName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.GESpecGrantedHasTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         GESpec                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        TagName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::GESpecGrantedHasTag(const struct FGameplayEffectSpec& GESpec, const class FName& TagName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.GESpecGrantedHasTag");
		
		ULuaManger_GESpecGrantedHasTag_Params params {};
		params.GESpec = GESpec;
		params.TagName = TagName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ForceStopBehaviorTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBehaviorTreeComponent*                      BehaviorTreeComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::ForceStopBehaviorTree(class UBehaviorTreeComponent* BehaviorTreeComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ForceStopBehaviorTree");
		
		ULuaManger_ForceStopBehaviorTree_Params params {};
		params.BehaviorTreeComponent = BehaviorTreeComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ForceRebuildKeymaps
	 * 		Flags  -> ()
	 */
	void ULuaManger::ForceRebuildKeymaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ForceRebuildKeymaps");
		
		ULuaManger_ForceRebuildKeymaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.FileIsExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProjectRelativeFile                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::FileIsExist(const class FString& FilePath, bool bProjectRelativeFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.FileIsExist");
		
		ULuaManger_FileIsExist_Params params {};
		params.FilePath = FilePath;
		params.bProjectRelativeFile = bProjectRelativeFile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.FetchNotice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nScene                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      savePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      strLanguage                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      otherParams                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::FetchNotice(int32_t nScene, const class FString& savePath, const class FString& strLanguage, const class FString& otherParams, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.FetchNotice");
		
		ULuaManger_FetchNotice_Params params {};
		params.nScene = nScene;
		params.savePath = savePath;
		params.strLanguage = strLanguage;
		params.otherParams = otherParams;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ExistPendingGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WorldContextHandle                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::ExistPendingGame(const class FName& WorldContextHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ExistPendingGame");
		
		ULuaManger_ExistPendingGame_Params params {};
		params.WorldContextHandle = WorldContextHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ExecuteCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::ExecuteCommand(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ExecuteCommand");
		
		ULuaManger_ExecuteCommand_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.EncodeUrl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULuaManger::EncodeUrl(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.EncodeUrl");
		
		ULuaManger_EncodeUrl_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.EnableSpeakerphone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::EnableSpeakerphone(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.EnableSpeakerphone");
		
		ULuaManger_EnableSpeakerphone_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.EnableMicrophone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::EnableMicrophone(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.EnableMicrophone");
		
		ULuaManger_EnableMicrophone_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.EnableAudioReceive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::EnableAudioReceive(const class FString& userId, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.EnableAudioReceive");
		
		ULuaManger_EnableAudioReceive_Params params {};
		params.userId = userId;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.EmptySectionIniFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strSection                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::EmptySectionIniFile(const class FString& strSection, bool bMatchKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.EmptySectionIniFile");
		
		ULuaManger_EmptySectionIniFile_Params params {};
		params.strSection = strSection;
		params.bMatchKey = bMatchKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.EmptyOverrideMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMeshComponent*                              Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::EmptyOverrideMaterials(class UMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.EmptyOverrideMaterials");
		
		ULuaManger_EmptyOverrideMaterials_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.DumpReplication
	 * 		Flags  -> ()
	 */
	void ULuaManger::DumpReplication()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.DumpReplication");
		
		ULuaManger_DumpReplication_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.DragWidget__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     pDragObj                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDragType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nDropType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     pDrop                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 pTopParent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::DragWidget__Overridden(class UObject* pDragObj, int32_t nDragType, int32_t nDropType, class UWidget* pDrop, class UUserWidget* pTopParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.DragWidget__Overridden");
		
		ULuaManger_DragWidget__Overridden_Params params {};
		params.pDragObj = pDragObj;
		params.nDragType = nDragType;
		params.nDropType = nDropType;
		params.pDrop = pDrop;
		params.pTopParent = pTopParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.DismissRatingCustomUi
	 * 		Flags  -> ()
	 */
	void ULuaManger::DismissRatingCustomUi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.DismissRatingCustomUi");
		
		ULuaManger_DismissRatingCustomUi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.DirectoryExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      dirPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::DirectoryExists(const class FString& dirPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.DirectoryExists");
		
		ULuaManger_DirectoryExists_Params params {};
		params.dirPath = dirPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.DeletePak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pakName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::DeletePak(const class FString& pakName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.DeletePak");
		
		ULuaManger_DeletePak_Params params {};
		params.pakName = pakName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.DeleteHistoryAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint64_t                                           userId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnDeleteResult                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::DeleteHistoryAccount(uint64_t userId, const class FScriptDelegate& OnDeleteResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.DeleteHistoryAccount");
		
		ULuaManger_DeleteHistoryAccount_Params params {};
		params.userId = userId;
		params.OnDeleteResult = OnDeleteResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.DeleteDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::DeleteDir(const class FString& strPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.DeleteDir");
		
		ULuaManger_DeleteDir_Params params {};
		params.strPath = strPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CreateUserWidgetFromPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAsync                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallbackAutoRelease                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* ULuaManger::CreateUserWidgetFromPath(const class FString& ResPath, bool bAsync, const class FScriptDelegate& Callback, int32_t Priority, bool bCallbackAutoRelease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CreateUserWidgetFromPath");
		
		ULuaManger_CreateUserWidgetFromPath_Params params {};
		params.ResPath = ResPath;
		params.bAsync = bAsync;
		params.Callback = Callback;
		params.Priority = Priority;
		params.bCallbackAutoRelease = bCallbackAutoRelease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CreateUserWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      WidgetType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* ULuaManger::CreateUserWidget(class UClass* WidgetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CreateUserWidget");
		
		ULuaManger_CreateUserWidget_Params params {};
		params.WidgetType = WidgetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CreateProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLaunchDetached                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLaunchHidden                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLaunchReallyHidden                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::CreateProc(const class FString& URL, const class FString& Params, bool bLaunchDetached, bool bLaunchHidden, bool bLaunchReallyHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CreateProc");
		
		ULuaManger_CreateProc_Params params {};
		params.URL = URL;
		params.Params = Params;
		params.bLaunchDetached = bLaunchDetached;
		params.bLaunchHidden = bLaunchHidden;
		params.bLaunchReallyHidden = bLaunchReallyHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CreateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULuaManger::CreateObject(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CreateObject");
		
		ULuaManger_CreateObject_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CreateDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::CreateDir(const class FString& strPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CreateDir");
		
		ULuaManger_CreateDir_Params params {};
		params.strPath = strPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CopyStringToClipboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringToCopy                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::CopyStringToClipboard(const class FString& StringToCopy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CopyStringToClipboard");
		
		ULuaManger_CopyStringToClipboard_Params params {};
		params.StringToCopy = StringToCopy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.Copy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      str                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::Copy(class FString* str)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.Copy");
		
		ULuaManger_Copy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (str != nullptr)
			*str = params.str;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ContinueDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::ContinueDownload(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ContinueDownload");
		
		ULuaManger_ContinueDownload_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CloseNetConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNetConnection*                              Connection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::CloseNetConnection(class UNetConnection* Connection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CloseNetConnection");
		
		ULuaManger_CloseNetConnection_Params params {};
		params.Connection = Connection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CloseDisregardForGC
	 * 		Flags  -> ()
	 */
	void ULuaManger::CloseDisregardForGC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CloseDisregardForGC");
		
		ULuaManger_CloseDisregardForGC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CheckStringAsciiLen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nLen                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULuaManger::CheckStringAsciiLen(const class FString& str, int32_t nLen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CheckStringAsciiLen");
		
		ULuaManger_CheckStringAsciiLen_Params params {};
		params.str = str;
		params.nLen = nLen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CheckProtocolVersion
	 * 		Flags  -> ()
	 */
	bool ULuaManger::CheckProtocolVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CheckProtocolVersion");
		
		ULuaManger_CheckProtocolVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CheckLevelStreamingDistanceVisible
	 * 		Flags  -> ()
	 */
	bool ULuaManger::CheckLevelStreamingDistanceVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CheckLevelStreamingDistanceVisible");
		
		ULuaManger_CheckLevelStreamingDistanceVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CheckKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::CheckKeyDown(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CheckKeyDown");
		
		ULuaManger_CheckKeyDown_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ChannelGeneralAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            code                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::ChannelGeneralAction(int32_t code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ChannelGeneralAction");
		
		ULuaManger_ChannelGeneralAction_Params params {};
		params.code = code;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ChangeShortcutKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      fromkeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      tokeyName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     obj                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShift                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCtrl                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCmd                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InputEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::ChangeShortcutKey(const class FString& fromkeyName, const class FString& tokeyName, class UObject* obj, bool bShift, bool bAlt, bool bCtrl, bool bCmd, int32_t InputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ChangeShortcutKey");
		
		ULuaManger_ChangeShortcutKey_Params params {};
		params.fromkeyName = fromkeyName;
		params.tokeyName = tokeyName;
		params.obj = obj;
		params.bShift = bShift;
		params.bAlt = bAlt;
		params.bCtrl = bCtrl;
		params.bCmd = bCmd;
		params.InputEvent = InputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ChangePrecomputedVisibilityHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InLongPackageName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::ChangePrecomputedVisibilityHandler(class UObject* WorldContextObject, const class FString& InLongPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ChangePrecomputedVisibilityHandler");
		
		ULuaManger_ChangePrecomputedVisibilityHandler_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InLongPackageName = InLongPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ChangeLanguage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      langType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::ChangeLanguage(const class FString& langType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ChangeLanguage");
		
		ULuaManger_ChangeLanguage_Params params {};
		params.langType = langType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ChangeAxisKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ActionName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fromkeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      tokeyName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::ChangeAxisKey(const class FString& ActionName, const class FString& fromkeyName, const class FString& tokeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ChangeAxisKey");
		
		ULuaManger_ChangeAxisKey_Params params {};
		params.ActionName = ActionName;
		params.fromkeyName = fromkeyName;
		params.tokeyName = tokeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.ChangeActionKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ActionName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fromkeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      tokeyName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShift                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCtrl                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCmd                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaManger::ChangeActionKey(const class FString& ActionName, const class FString& fromkeyName, const class FString& tokeyName, bool bShift, bool bAlt, bool bCtrl, bool bCmd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.ChangeActionKey");
		
		ULuaManger_ChangeActionKey_Params params {};
		params.ActionName = ActionName;
		params.fromkeyName = fromkeyName;
		params.tokeyName = tokeyName;
		params.bShift = bShift;
		params.bAlt = bAlt;
		params.bCtrl = bCtrl;
		params.bCmd = bCmd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CDKeyExchange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      cdkey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      roleid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      serverid                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              cdkeyCallback                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::CDKeyExchange(const class FString& cdkey, const class FString& roleid, const class FString& serverid, const class FScriptDelegate& cdkeyCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CDKeyExchange");
		
		ULuaManger_CDKeyExchange_Params params {};
		params.cdkey = cdkey;
		params.roleid = roleid;
		params.serverid = serverid;
		params.cdkeyCallback = cdkeyCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.CanAutoLogin
	 * 		Flags  -> ()
	 */
	bool ULuaManger::CanAutoLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.CanAutoLogin");
		
		ULuaManger_CanAutoLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.BindWindowEvent
	 * 		Flags  -> ()
	 */
	void ULuaManger::BindWindowEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.BindWindowEvent");
		
		ULuaManger_BindWindowEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AutoLogin
	 * 		Flags  -> ()
	 */
	void ULuaManger::AutoLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AutoLogin");
		
		ULuaManger_AutoLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AllSubLevelIsLoaded
	 * 		Flags  -> ()
	 */
	bool ULuaManger::AllSubLevelIsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AllSubLevelIsLoaded");
		
		ULuaManger_AllSubLevelIsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddWidgetToGameViewPort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddWidgetToGameViewPort(class UUserWidget* Widget, int32_t nOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddWidgetToGameViewPort");
		
		ULuaManger_AddWidgetToGameViewPort_Params params {};
		params.Widget = Widget;
		params.nOrder = nOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddUploadLogfileFullPaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              files                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddUploadLogfileFullPaths(TArray<class FString> files)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddUploadLogfileFullPaths");
		
		ULuaManger_AddUploadLogfileFullPaths_Params params {};
		params.files = files;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddUploadLogfileDirPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strDir                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddUploadLogfileDirPath(const class FString& strDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddUploadLogfileDirPath");
		
		ULuaManger_AddUploadLogfileDirPath_Params params {};
		params.strDir = strDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddUObjectToRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     pObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddUObjectToRoot(class UObject* pObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddUObjectToRoot");
		
		ULuaManger_AddUObjectToRoot_Params params {};
		params.pObject = pObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddToReplicationNormalActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddToReplicationNormalActors(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddToReplicationNormalActors");
		
		ULuaManger_AddToReplicationNormalActors_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddToAlwaysRelevant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddToAlwaysRelevant(class AActor* Actor, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddToAlwaysRelevant");
		
		ULuaManger_AddToAlwaysRelevant_Params params {};
		params.Actor = Actor;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddTinderActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddTinderActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddTinderActor");
		
		ULuaManger_AddTinderActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddShortcutKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     obj                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShift                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlt                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCtrl                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCmd                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InputEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddShortcutKey(const class FString& KeyName, class UObject* obj, bool bShift, bool bAlt, bool bCtrl, bool bCmd, int32_t InputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddShortcutKey");
		
		ULuaManger_AddShortcutKey_Params params {};
		params.KeyName = KeyName;
		params.obj = obj;
		params.bShift = bShift;
		params.bAlt = bAlt;
		params.bCtrl = bCtrl;
		params.bCmd = bCmd;
		params.InputEvent = InputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddRelevantChangeCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddRelevantChangeCallback(class UClass* Class, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddRelevantChangeCallback");
		
		ULuaManger_AddRelevantChangeCallback_Params params {};
		params.Class = Class;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddObjectToActorCluster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddObjectToActorCluster(class UObject* Object, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddObjectToActorCluster");
		
		ULuaManger_AddObjectToActorCluster_Params params {};
		params.Object = Object;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddLocalNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint64_t                                           nDelaySeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddLocalNotification(const class FString& Title, const class FString& Content, uint64_t nDelaySeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddLocalNotification");
		
		ULuaManger_AddLocalNotification_Params params {};
		params.Title = Title;
		params.Content = Content;
		params.nDelaySeconds = nDelaySeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddLevelNameToGPM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strLevelName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddLevelNameToGPM(const class FString& strLevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddLevelNameToGPM");
		
		ULuaManger_AddLevelNameToGPM_Params params {};
		params.strLevelName = strLevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddHitResultToTargetDataMsg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Handle                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddHitResultToTargetDataMsg(const struct FGameplayAbilityTargetDataHandle& Handle, const struct FHitResult& HitResult, const struct FGameplayEffectContextHandle& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddHitResultToTargetDataMsg");
		
		ULuaManger_AddHitResultToTargetDataMsg_Params params {};
		params.Handle = Handle;
		params.HitResult = HitResult;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddAxisKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     obj                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddAxisKey(const class FString& KeyName, class UObject* obj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddAxisKey");
		
		ULuaManger_AddAxisKey_Params params {};
		params.KeyName = KeyName;
		params.obj = obj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AddActorToLevelCluster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AddActorToLevelCluster(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AddActorToLevelCluster");
		
		ULuaManger_AddActorToLevelCluster_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AccountUnBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nLoginType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnUnBindAccoutBack                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AccountUnBind(int32_t nLoginType, const class FScriptDelegate& OnUnBindAccoutBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AccountUnBind");
		
		ULuaManger_AccountUnBind_Params params {};
		params.nLoginType = nLoginType;
		params.OnUnBindAccoutBack = OnUnBindAccoutBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AccountForceRebend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nAccountType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnBindAccoutBack                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AccountForceRebend(int32_t nAccountType, int32_t Force, const class FScriptDelegate& OnBindAccoutBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AccountForceRebend");
		
		ULuaManger_AccountForceRebend_Params params {};
		params.nAccountType = nAccountType;
		params.Force = Force;
		params.OnBindAccoutBack = OnBindAccoutBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.LuaManger.AccountBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nLoginType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnBindAccoutBack                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaManger::AccountBind(int32_t nLoginType, const class FScriptDelegate& OnBindAccoutBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.LuaManger.AccountBind");
		
		ULuaManger_AccountBind_Params params {};
		params.nLoginType = nLoginType;
		params.OnBindAccoutBack = OnBindAccoutBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaManger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaManger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.LuaManger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaskSlateWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaskSlateWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.MaskSlateWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetMaskSizeXY
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipIndex                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetMaskSizeXY(int32_t ClipIndex, float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetMaskSizeXY");
		
		UMaskWidget_SetMaskSizeXY_Params params {};
		params.ClipIndex = ClipIndex;
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetMaskSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipIndex                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Size                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetMaskSize(int32_t ClipIndex, const struct FVector2D& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetMaskSize");
		
		UMaskWidget_SetMaskSize_Params params {};
		params.ClipIndex = ClipIndex;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetMaskPosXY
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipIndex                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetMaskPosXY(int32_t ClipIndex, float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetMaskPosXY");
		
		UMaskWidget_SetMaskPosXY_Params params {};
		params.ClipIndex = ClipIndex;
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetMaskPosSizeXYZW
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipIndex                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              W                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetMaskPosSizeXYZW(int32_t ClipIndex, float X, float Y, float Z, float W)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetMaskPosSizeXYZW");
		
		UMaskWidget_SetMaskPosSizeXYZW_Params params {};
		params.ClipIndex = ClipIndex;
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.W = W;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetMaskPosSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipIndex                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    PosSize                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetMaskPosSize(int32_t ClipIndex, const struct FVector4& PosSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetMaskPosSize");
		
		UMaskWidget_SetMaskPosSize_Params params {};
		params.ClipIndex = ClipIndex;
		params.PosSize = PosSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetMaskPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipIndex                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetMaskPos(int32_t ClipIndex, const struct FVector2D& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetMaskPos");
		
		UMaskWidget_SetMaskPos_Params params {};
		params.ClipIndex = ClipIndex;
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetMaskImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipIndex                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Tex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetMaskImage(int32_t ClipIndex, class UTexture2D* Tex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetMaskImage");
		
		UMaskWidget_SetMaskImage_Params params {};
		params.ClipIndex = ClipIndex;
		params.Tex = Tex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetBrushTintColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 TintColor                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetBrushTintColor(const struct FSlateColor& TintColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetBrushTintColor");
		
		UMaskWidget_SetBrushTintColor_Params params {};
		params.TintColor = TintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetBgOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetBgOpacity(float InOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetBgOpacity");
		
		UMaskWidget_SetBgOpacity_Params params {};
		params.InOpacity = InOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetBgImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Tex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetBgImage(class UTexture2D* Tex, bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetBgImage");
		
		UMaskWidget_SetBgImage_Params params {};
		params.Tex = Tex;
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.SetBgColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::SetBgColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.SetBgColorAndOpacity");
		
		UMaskWidget_SetBgColorAndOpacity_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.RemoveMaskClickClip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipIndex                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMaskWidget::RemoveMaskClickClip(int32_t ClipIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.RemoveMaskClickClip");
		
		UMaskWidget_RemoveMaskClickClip_Params params {};
		params.ClipIndex = ClipIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.GetDynamicMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInterface* UMaskWidget::GetDynamicMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.GetDynamicMaterial");
		
		UMaskWidget_GetDynamicMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.EnableMaskClickClip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipIndex                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMaskWidget::EnableMaskClickClip(int32_t ClipIndex, bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.EnableMaskClickClip");
		
		UMaskWidget_EnableMaskClickClip_Params params {};
		params.ClipIndex = ClipIndex;
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MaskWidget.AddMaskClickClip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Size                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  mask                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMaskWidget::AddMaskClickClip(const struct FVector2D& Position, const struct FVector2D& Size, class UTexture2D* mask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MaskWidget.AddMaskClickClip");
		
		UMaskWidget_AddMaskClickClip_Params params {};
		params.Position = Position;
		params.Size = Size;
		params.mask = mask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaskWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaskWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.MaskWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.UpdateSignificanceSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<float, float>                                 SignificanceThresholdsMap                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::UpdateSignificanceSettings(TMap<float, float> SignificanceThresholdsMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.UpdateSignificanceSettings");
		
		AMyShootCharacter_UpdateSignificanceSettings_Params params {};
		params.SignificanceThresholdsMap = SignificanceThresholdsMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.UpdatePitchYaw
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::UpdatePitchYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.UpdatePitchYaw");
		
		AMyShootCharacter_UpdatePitchYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.UpdateDirection
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::UpdateDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.UpdateDirection");
		
		AMyShootCharacter_UpdateDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.MyShootCharacter.TwoFloatEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PrevValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AfterValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::TwoFloatEvent__DelegateSignature(float PrevValue, float AfterValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.MyShootCharacter.TwoFloatEvent__DelegateSignature");
		
		AMyShootCharacter_TwoFloatEvent__DelegateSignature_Params params {};
		params.PrevValue = PrevValue;
		params.AfterValue = AfterValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.SetUROParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      M                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::SetUROParam(class USkeletalMeshComponent* M)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.SetUROParam");
		
		AMyShootCharacter_SetUROParam_Params params {};
		params.M = M;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.SetOverlayType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOverlayType                                       Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::SetOverlayType(EOverlayType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.SetOverlayType");
		
		AMyShootCharacter_SetOverlayType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.SetAllTickIntervals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              interval                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::SetAllTickIntervals(float interval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.SetAllTickIntervals");
		
		AMyShootCharacter_SetAllTickIntervals_Params params {};
		params.interval = interval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.ServerSetControlRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotator                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::ServerSetControlRotation(const struct FRotator& Rotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.ServerSetControlRotation");
		
		AMyShootCharacter_ServerSetControlRotation_Params params {};
		params.Rotator = Rotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.ServerMoveAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   V                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::ServerMoveAxis(const struct FVector2D& V)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.ServerMoveAxis");
		
		AMyShootCharacter_ServerMoveAxis_Params params {};
		params.V = V;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.ReSetWorldOrginPos
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::ReSetWorldOrginPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.ReSetWorldOrginPos");
		
		AMyShootCharacter_ReSetWorldOrginPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.RemovePlayerMappedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MappingName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceImmediately                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AMyShootCharacter::RemovePlayerMappedKey(const class FName& MappingName, bool bForceImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.RemovePlayerMappedKey");
		
		AMyShootCharacter_RemovePlayerMappedKey_Params params {};
		params.MappingName = MappingName;
		params.bForceImmediately = bForceImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.RemoveAllPlayerMappedKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForceImmediately                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::RemoveAllPlayerMappedKeys(bool bForceImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.RemoveAllPlayerMappedKeys");
		
		AMyShootCharacter_RemoveAllPlayerMappedKeys_Params params {};
		params.bForceImmediately = bForceImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.OpenSignificanceSystem
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::OpenSignificanceSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.OpenSignificanceSystem");
		
		AMyShootCharacter_OpenSignificanceSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.OnReceiveAttributeChange
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::OnReceiveAttributeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.OnReceiveAttributeChange");
		
		AMyShootCharacter_OnReceiveAttributeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.MyShootCharacter.OnNearWeaponHit__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FName                                        HitSocketName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::OnNearWeaponHit__DelegateSignature(const struct FHitResult& HitInfo, const class FName& HitSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.MyShootCharacter.OnNearWeaponHit__DelegateSignature");
		
		AMyShootCharacter_OnNearWeaponHit__DelegateSignature_Params params {};
		params.HitInfo = HitInfo;
		params.HitSocketName = HitSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.OnHandAttack
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::OnHandAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.OnHandAttack");
		
		AMyShootCharacter_OnHandAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.OnGetHurt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DamageAttributeType                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FromPlayerOrSystem                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::OnGetHurt(class AActor* FromCharacter, int32_t DamageAttributeType, int32_t FromPlayerOrSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.OnGetHurt");
		
		AMyShootCharacter_OnGetHurt_Params params {};
		params.FromCharacter = FromCharacter;
		params.DamageAttributeType = DamageAttributeType;
		params.FromPlayerOrSystem = FromPlayerOrSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.MyShootCharacter.OneStringTwoFloatEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PrevValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AfterValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::OneStringTwoFloatEvent__DelegateSignature(const class FString& AttributeName, float PrevValue, float AfterValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.MyShootCharacter.OneStringTwoFloatEvent__DelegateSignature");
		
		AMyShootCharacter_OneStringTwoFloatEvent__DelegateSignature_Params params {};
		params.AttributeName = AttributeName;
		params.PrevValue = PrevValue;
		params.AfterValue = AfterValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.MyShootCharacter.OnAttributeSetInitFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::OnAttributeSetInitFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.MyShootCharacter.OnAttributeSetInitFinish__DelegateSignature");
		
		AMyShootCharacter_OnAttributeSetInitFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.OnActorRotationChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotator                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::OnActorRotationChange(const struct FRotator& Rotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.OnActorRotationChange");
		
		AMyShootCharacter_OnActorRotationChange_Params params {};
		params.Rotator = Rotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.OnActorLocationChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::OnActorLocationChange(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.OnActorLocationChange");
		
		AMyShootCharacter_OnActorLocationChange_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.MyAddControllerYawInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::MyAddControllerYawInput(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.MyAddControllerYawInput");
		
		AMyShootCharacter_MyAddControllerYawInput_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.MyAddControllerPitchInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::MyAddControllerPitchInput(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.MyAddControllerPitchInput");
		
		AMyShootCharacter_MyAddControllerPitchInput_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.MoveRightCpp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::MoveRightCpp(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.MoveRightCpp");
		
		AMyShootCharacter_MoveRightCpp_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.MoveForwardCpp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::MoveForwardCpp(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.MoveForwardCpp");
		
		AMyShootCharacter_MoveForwardCpp_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.LuaSetupPlayerInputComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputComponent*                             PlayerInputComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::LuaSetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.LuaSetupPlayerInputComponent");
		
		AMyShootCharacter_LuaSetupPlayerInputComponent_Params params {};
		params.PlayerInputComponent = PlayerInputComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.LuaRemoveMappingContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputMappingContext*                        MappingContext                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::LuaRemoveMappingContext(class UInputMappingContext* MappingContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.LuaRemoveMappingContext");
		
		AMyShootCharacter_LuaRemoveMappingContext_Params params {};
		params.MappingContext = MappingContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.LuaOnDie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      EffectInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      EffectCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         EffectSpec                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              EffectMagnitude                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      AvatarActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::LuaOnDie(class AActor* EffectInstigator, class AActor* EffectCauser, const struct FGameplayEffectSpec& EffectSpec, float EffectMagnitude, class AActor* AvatarActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.LuaOnDie");
		
		AMyShootCharacter_LuaOnDie_Params params {};
		params.EffectInstigator = EffectInstigator;
		params.EffectCauser = EffectCauser;
		params.EffectSpec = EffectSpec;
		params.EffectMagnitude = EffectMagnitude;
		params.AvatarActor = AvatarActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.LuaAddMappingContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputMappingContext*                        MappingContext                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::LuaAddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.LuaAddMappingContext");
		
		AMyShootCharacter_LuaAddMappingContext_Params params {};
		params.MappingContext = MappingContext;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.LocalInputConfirm
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::LocalInputConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.LocalInputConfirm");
		
		AMyShootCharacter_LocalInputConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.LocalInputCancel
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::LocalInputCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.LocalInputCancel");
		
		AMyShootCharacter_LocalInputCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.K2_OnGetHurt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DamageAttributeType                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FromPlayerOrSystem                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::K2_OnGetHurt(class AActor* FromCharacter, int32_t DamageAttributeType, int32_t FromPlayerOrSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.K2_OnGetHurt");
		
		AMyShootCharacter_K2_OnGetHurt_Params params {};
		params.FromCharacter = FromCharacter;
		params.DamageAttributeType = DamageAttributeType;
		params.FromPlayerOrSystem = FromPlayerOrSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.K2_GiveAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Ability                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Lv                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilitySpecHandle AMyShootCharacter::K2_GiveAbility(class UClass* Ability, int32_t InputID, int32_t Lv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.K2_GiveAbility");
		
		AMyShootCharacter_K2_GiveAbility_Params params {};
		params.Ability = Ability;
		params.InputID = InputID;
		params.Lv = Lv;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.K2_AddAbilities
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::K2_AddAbilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.K2_AddAbilities");
		
		AMyShootCharacter_K2_AddAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.IsRightHandAttack
	 * 		Flags  -> ()
	 */
	bool AMyShootCharacter::IsRightHandAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.IsRightHandAttack");
		
		AMyShootCharacter_IsRightHandAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.InitCharacter
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::InitCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.InitCharacter");
		
		AMyShootCharacter_InitCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.InitAttributesFromLua
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, float>                         InAttributes                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::InitAttributesFromLua(TMap<class FString, float> InAttributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.InitAttributesFromLua");
		
		AMyShootCharacter_InitAttributesFromLua_Params params {};
		params.InAttributes = InAttributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.GetRightHandHoldWeaponMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* AMyShootCharacter::GetRightHandHoldWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.GetRightHandHoldWeaponMesh");
		
		AMyShootCharacter_GetRightHandHoldWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.GetPlayerMappedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MappingName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKey AMyShootCharacter::GetPlayerMappedKey(const class FName& MappingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.GetPlayerMappedKey");
		
		AMyShootCharacter_GetPlayerMappedKey_Params params {};
		params.MappingName = MappingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.GetMaxHealth
	 * 		Flags  -> ()
	 */
	float AMyShootCharacter::GetMaxHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.GetMaxHealth");
		
		AMyShootCharacter_GetMaxHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.GetLocalVelocity
	 * 		Flags  -> ()
	 */
	struct FVector AMyShootCharacter::GetLocalVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.GetLocalVelocity");
		
		AMyShootCharacter_GetLocalVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.GetLeftHandHoldWeaponMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* AMyShootCharacter::GetLeftHandHoldWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.GetLeftHandHoldWeaponMesh");
		
		AMyShootCharacter_GetLeftHandHoldWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.GetHealth
	 * 		Flags  -> ()
	 */
	float AMyShootCharacter::GetHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.GetHealth");
		
		AMyShootCharacter_GetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.GetAttributeValueByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AttributeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AMyShootCharacter::GetAttributeValueByName(const class FName& AttributeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.GetAttributeValueByName");
		
		AMyShootCharacter_GetAttributeValueByName_Params params {};
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.GetAbilitySystemComponent
	 * 		Flags  -> ()
	 */
	class UAbilitySystemComponent* AMyShootCharacter::GetAbilitySystemComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.GetAbilitySystemComponent");
		
		AMyShootCharacter_GetAbilitySystemComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.DoBindInputComponent
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::DoBindInputComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.DoBindInputComponent");
		
		AMyShootCharacter_DoBindInputComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.Cheat_Invincible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOpen                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::Cheat_Invincible(bool bOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.Cheat_Invincible");
		
		AMyShootCharacter_Cheat_Invincible_Params params {};
		params.bOpen = bOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.CancelAim
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::CancelAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.CancelAim");
		
		AMyShootCharacter_CancelAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.BindLuaFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETriggerEvent                                      TriggerEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::BindLuaFunction(class UInputAction* Action, ETriggerEvent TriggerEvent, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.BindLuaFunction");
		
		AMyShootCharacter_BindLuaFunction_Params params {};
		params.Action = Action;
		params.TriggerEvent = TriggerEvent;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.AttributeSetInitFinish
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::AttributeSetInitFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.AttributeSetInitFinish");
		
		AMyShootCharacter_AttributeSetInitFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.AddPlayerMappedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MappingName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        NewKey                                                     (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceImmediately                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AMyShootCharacter::AddPlayerMappedKey(const class FName& MappingName, const struct FKey& NewKey, bool bForceImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.AddPlayerMappedKey");
		
		AMyShootCharacter_AddPlayerMappedKey_Params params {};
		params.MappingName = MappingName;
		params.NewKey = NewKey;
		params.bForceImmediately = bForceImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.AddAbilities
	 * 		Flags  -> ()
	 */
	void AMyShootCharacter::AddAbilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.AddAbilities");
		
		AMyShootCharacter_AddAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.AbilityLocalInputReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AbilityEnum                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::AbilityLocalInputReleased(int32_t AbilityEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.AbilityLocalInputReleased");
		
		AMyShootCharacter_AbilityLocalInputReleased_Params params {};
		params.AbilityEnum = AbilityEnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.MyShootCharacter.AbilityLocalInputPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AbilityEnum                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMyShootCharacter::AbilityLocalInputPressed(int32_t AbilityEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.MyShootCharacter.AbilityLocalInputPressed");
		
		AMyShootCharacter_AbilityLocalInputPressed_Params params {};
		params.AbilityEnum = AbilityEnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMyShootCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMyShootCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.MyShootCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.PoolingManager.SetInitFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Function                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void APoolingManager::SetInitFunction(class UClass* ActorClass, const class FScriptDelegate& Function)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.PoolingManager.SetInitFunction");
		
		APoolingManager_SetInitFunction_Params params {};
		params.ActorClass = ActorClass;
		params.Function = Function;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.PoolingManager.RecycleActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              RecycleActorFunction                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void APoolingManager::RecycleActor(class AActor* Actor, const class FScriptDelegate& RecycleActorFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.PoolingManager.RecycleActor");
		
		APoolingManager_RecycleActor_Params params {};
		params.Actor = Actor;
		params.RecycleActorFunction = RecycleActorFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.PoolingManager.GetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InitFunction                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AActor* APoolingManager::GetActor(class UClass* ActorClass, const class FScriptDelegate& InitFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.PoolingManager.GetActor");
		
		APoolingManager_GetActor_Params params {};
		params.ActorClass = ActorClass;
		params.InitFunction = InitFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.PoolingManager.ClearAll
	 * 		Flags  -> ()
	 */
	void APoolingManager::ClearAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.PoolingManager.ClearAll");
		
		APoolingManager_ClearAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoolingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoolingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.PoolingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ProgressBarExt.SetPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProgressBarExt::SetPercent(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ProgressBarExt.SetPercent");
		
		UProgressBarExt_SetPercent_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ProgressBarExt.SetIsMarquee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InbIsMarquee                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProgressBarExt::SetIsMarquee(bool InbIsMarquee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ProgressBarExt.SetIsMarquee");
		
		UProgressBarExt_SetIsMarquee_Params params {};
		params.InbIsMarquee = InbIsMarquee;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ProgressBarExt.SetFillColorAndOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProgressBarExt::SetFillColorAndOpacity(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ProgressBarExt.SetFillColorAndOpacity");
		
		UProgressBarExt_SetFillColorAndOpacity_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgressBarExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgressBarExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.ProgressBarExt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.SetButtonPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMenu::SetButtonPath(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.SetButtonPath");
		
		URadialMenu_SetButtonPath_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.SetButtonCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMenu::SetButtonCount(int32_t nCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.SetButtonCount");
		
		URadialMenu_SetButtonCount_Params params {};
		params.nCount = nCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.PreselectButtonGamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ThumbValue_X                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ThumbValue_Y                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMenu::PreselectButtonGamepad(float ThumbValue_X, float ThumbValue_Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.PreselectButtonGamepad");
		
		URadialMenu_PreselectButtonGamepad_Params params {};
		params.ThumbValue_X = ThumbValue_X;
		params.ThumbValue_Y = ThumbValue_Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.OnHoverOver
	 * 		Flags  -> ()
	 */
	void URadialMenu::OnHoverOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.OnHoverOver");
		
		URadialMenu_OnHoverOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.HoverOverEvent
	 * 		Flags  -> ()
	 */
	void URadialMenu::HoverOverEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.HoverOverEvent");
		
		URadialMenu_HoverOverEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.DisableButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ActivateIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMenu::DisableButton(int32_t ActivateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.DisableButton");
		
		URadialMenu_DisableButton_Params params {};
		params.ActivateIndex = ActivateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.Destructor
	 * 		Flags  -> ()
	 */
	void URadialMenu::Destructor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.Destructor");
		
		URadialMenu_Destructor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.DeactivateButtons
	 * 		Flags  -> ()
	 */
	void URadialMenu::DeactivateButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.DeactivateButtons");
		
		URadialMenu_DeactivateButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.CreateOneButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nButtonId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      iconPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      tip                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMenu::CreateOneButton(int32_t Index, int32_t nButtonId, const class FString& iconPath, const class FString& tip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.CreateOneButton");
		
		URadialMenu_CreateOneButton_Params params {};
		params.Index = Index;
		params.nButtonId = nButtonId;
		params.iconPath = iconPath;
		params.tip = tip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.CreateButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMenu::CreateButtons(int32_t nCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.CreateButtons");
		
		URadialMenu_CreateButtons_Params params {};
		params.nCount = nCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu.ActivateButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ActivateIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMenu::ActivateButton(int32_t ActivateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu.ActivateButton");
		
		URadialMenu_ActivateButton_Params params {};
		params.ActivateIndex = ActivateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.RadialMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu_Button.SetPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fPercent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMenu_Button::SetPercent(float fPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu_Button.SetPercent");
		
		URadialMenu_Button_SetPercent_Params params {};
		params.fPercent = fPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu_Button.OnClicked
	 * 		Flags  -> ()
	 */
	void URadialMenu_Button::OnClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu_Button.OnClicked");
		
		URadialMenu_Button_OnClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMenu_Button.ClickEvent
	 * 		Flags  -> ()
	 */
	void URadialMenu_Button::ClickEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMenu_Button.ClickEvent");
		
		URadialMenu_Button_ClickEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialMenu_Button.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialMenu_Button::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.RadialMenu_Button");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMultLevelMenu.SetButtonCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nMenuLevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMultLevelMenu::SetButtonCount(int32_t nMenuLevel, int32_t nCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMultLevelMenu.SetButtonCount");
		
		URadialMultLevelMenu_SetButtonCount_Params params {};
		params.nMenuLevel = nMenuLevel;
		params.nCount = nCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMultLevelMenu.OnHoverOver
	 * 		Flags  -> ()
	 */
	void URadialMultLevelMenu::OnHoverOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMultLevelMenu.OnHoverOver");
		
		URadialMultLevelMenu_OnHoverOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMultLevelMenu.HoverOverEvent
	 * 		Flags  -> ()
	 */
	void URadialMultLevelMenu::HoverOverEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMultLevelMenu.HoverOverEvent");
		
		URadialMultLevelMenu_HoverOverEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMultLevelMenu.DisableButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            menuLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ActivateIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMultLevelMenu::DisableButton(int32_t menuLevel, int32_t ActivateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMultLevelMenu.DisableButton");
		
		URadialMultLevelMenu_DisableButton_Params params {};
		params.menuLevel = menuLevel;
		params.ActivateIndex = ActivateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMultLevelMenu.Destructor
	 * 		Flags  -> ()
	 */
	void URadialMultLevelMenu::Destructor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMultLevelMenu.Destructor");
		
		URadialMultLevelMenu_Destructor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMultLevelMenu.DeactivateButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            menuLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMultLevelMenu::DeactivateButtons(int32_t menuLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMultLevelMenu.DeactivateButtons");
		
		URadialMultLevelMenu_DeactivateButtons_Params params {};
		params.menuLevel = menuLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMultLevelMenu.CreateOneButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nMenuLevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nButtonId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      tip                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* URadialMultLevelMenu::CreateOneButton(int32_t nMenuLevel, int32_t Index, int32_t nButtonId, const class FString& tip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMultLevelMenu.CreateOneButton");
		
		URadialMultLevelMenu_CreateOneButton_Params params {};
		params.nMenuLevel = nMenuLevel;
		params.Index = Index;
		params.nButtonId = nButtonId;
		params.tip = tip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RadialMultLevelMenu.ActivateButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            menuLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ActivateIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadialMultLevelMenu::ActivateButton(int32_t menuLevel, int32_t ActivateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RadialMultLevelMenu.ActivateButton");
		
		URadialMultLevelMenu_ActivateButton_Params params {};
		params.menuLevel = menuLevel;
		params.ActivateIndex = ActivateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialMultLevelMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialMultLevelMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.RadialMultLevelMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RecoilGraphLib.RPM_RemoveRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDataTable* URecoilGraphLib::RPM_RemoveRow(class UDataTable* DataTable, const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RecoilGraphLib.RPM_RemoveRow");
		
		URecoilGraphLib_RPM_RemoveRow_Params params {};
		params.DataTable = DataTable;
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RecoilGraphLib.RPM_AddRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRecoilGraph_Struct                         Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	class UDataTable* URecoilGraphLib::RPM_AddRow(class UDataTable* DataTable, const class FName& RowName, const struct FRecoilGraph_Struct& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RecoilGraphLib.RPM_AddRow");
		
		URecoilGraphLib_RPM_AddRow_Params params {};
		params.DataTable = DataTable;
		params.RowName = RowName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecoilGraphLib.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecoilGraphLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.RecoilGraphLib");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ResMgr.SyncLoadRes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UResMgr::SyncLoadRes(const class FString& ResPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ResMgr.SyncLoadRes");
		
		UResMgr_SyncLoadRes_Params params {};
		params.ResPath = ResPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.ResMgr.AsyncLoadRes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UResMgr::AsyncLoadRes(const class FString& ResPath, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.ResMgr.AsyncLoadRes");
		
		UResMgr_AsyncLoadRes_Params params {};
		params.ResPath = ResPath;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResMgr.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.ResMgr");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextBlockInlineDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextBlockInlineDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.RichTextBlockInlineDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfBaseJoyStrick.SetInputScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USelfBaseJoyStrick::SetInputScale(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfBaseJoyStrick.SetInputScale");
		
		USelfBaseJoyStrick_SetInputScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfBaseJoyStrick.SetActiveOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fActiveOpacity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USelfBaseJoyStrick::SetActiveOpacity(float fActiveOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfBaseJoyStrick.SetActiveOpacity");
		
		USelfBaseJoyStrick_SetActiveOpacity_Params params {};
		params.fActiveOpacity = fActiveOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfBaseJoyStrick.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfBaseJoyStrick::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SelfBaseJoyStrick");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfGameInstance.LoadSubLevels
	 * 		Flags  -> ()
	 */
	void USelfGameInstance::LoadSubLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfGameInstance.LoadSubLevels");
		
		USelfGameInstance_LoadSubLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SelfGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfGameMode.OnPreLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Options                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Address                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUniqueNetIdRepl                            UniqueId                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ASelfGameMode::OnPreLogin(const class FString& Options, const class FString& Address, const struct FUniqueNetIdRepl& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfGameMode.OnPreLogin");
		
		ASelfGameMode_OnPreLogin_Params params {};
		params.Options = Options;
		params.Address = Address;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfGameMode.OnLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Options                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ASelfGameMode::OnLogin(class APlayerController* PlayerController, const class FString& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfGameMode.OnLogin");
		
		ASelfGameMode_OnLogin_Params params {};
		params.PlayerController = PlayerController;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfGameMode.LuaSpawnPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENetRole                                           InRemoteRole                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Options                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APlayerController* ASelfGameMode::LuaSpawnPlayerController(ENetRole InRemoteRole, const class FString& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfGameMode.LuaSpawnPlayerController");
		
		ASelfGameMode_LuaSpawnPlayerController_Params params {};
		params.InRemoteRole = InRemoteRole;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfGameMode.LuaPostSeamlessTravel
	 * 		Flags  -> ()
	 */
	void ASelfGameMode::LuaPostSeamlessTravel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfGameMode.LuaPostSeamlessTravel");
		
		ASelfGameMode_LuaPostSeamlessTravel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfGameMode.LuaGetSeamlessTravelActorList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bToTransition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorList                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ASelfGameMode::LuaGetSeamlessTravelActorList(bool bToTransition, TArray<class AActor*>* ActorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfGameMode.LuaGetSeamlessTravelActorList");
		
		ASelfGameMode_LuaGetSeamlessTravelActorList_Params params {};
		params.bToTransition = bToTransition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorList != nullptr)
			*ActorList = params.ActorList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASelfGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASelfGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SelfGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfJoyStrick.SetThumbBarFix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USelfJoyStrick::SetThumbBarFix(bool bFix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfJoyStrick.SetThumbBarFix");
		
		USelfJoyStrick_SetThumbBarFix_Params params {};
		params.bFix = bFix;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfJoyStrick.SetShowAutoRush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Brush                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USelfJoyStrick::SetShowAutoRush(bool Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfJoyStrick.SetShowAutoRush");
		
		USelfJoyStrick_SetShowAutoRush_Params params {};
		params.Brush = Brush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfJoyStrick.ReleaseJoystick
	 * 		Flags  -> ()
	 */
	void USelfJoyStrick::ReleaseJoystick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfJoyStrick.ReleaseJoystick");
		
		USelfJoyStrick_ReleaseJoystick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.SelfJoyStrick.OnShowRun__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowRun                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USelfJoyStrick::OnShowRun__DelegateSignature(bool ShowRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.SelfJoyStrick.OnShowRun__DelegateSignature");
		
		USelfJoyStrick_OnShowRun__DelegateSignature_Params params {};
		params.ShowRun = ShowRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfJoyStrick.GetThumbPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControlIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USelfJoyStrick::GetThumbPos(int32_t ControlIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfJoyStrick.GetThumbPos");
		
		USelfJoyStrick_GetThumbPos_Params params {};
		params.ControlIndex = ControlIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfJoyStrick.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfJoyStrick::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SelfJoyStrick");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfLocalPlayer.RemoveOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USelfLocalPlayer::RemoveOption(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfLocalPlayer.RemoveOption");
		
		USelfLocalPlayer_RemoveOption_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfLocalPlayer.ClearAllOptions
	 * 		Flags  -> ()
	 */
	void USelfLocalPlayer::ClearAllOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfLocalPlayer.ClearAllOptions");
		
		USelfLocalPlayer_ClearAllOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfLocalPlayer.AddOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USelfLocalPlayer::AddOption(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfLocalPlayer.AddOption");
		
		USelfLocalPlayer_AddOption_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SelfLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfPlayerController.ShowDamageNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         GESpec                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ASelfPlayerController::ShowDamageNumber(float DamageAmount, class AActor* TargetCharacter, const struct FVector& Pos, const struct FGameplayEffectSpec& GESpec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfPlayerController.ShowDamageNumber");
		
		ASelfPlayerController_ShowDamageNumber_Params params {};
		params.DamageAmount = DamageAmount;
		params.TargetCharacter = TargetCharacter;
		params.Pos = Pos;
		params.GESpec = GESpec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfPlayerController.SetSessionMgr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USessionMgr*                                 pMgr                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASelfPlayerController::SetSessionMgr(class USessionMgr* pMgr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfPlayerController.SetSessionMgr");
		
		ASelfPlayerController_SetSessionMgr_Params params {};
		params.pMgr = pMgr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfPlayerController.SendToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ASelfPlayerController::SendToServer(TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfPlayerController.SendToServer");
		
		ASelfPlayerController_SendToServer_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfPlayerController.SendToClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ASelfPlayerController::SendToClient(TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfPlayerController.SendToClient");
		
		ASelfPlayerController_SendToClient_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfPlayerController.SendToAllClients
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ASelfPlayerController::SendToAllClients(TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfPlayerController.SendToAllClients");
		
		ASelfPlayerController_SendToAllClients_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfPlayerController.LuaOnNetCleanup
	 * 		Flags  -> ()
	 */
	void ASelfPlayerController::LuaOnNetCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfPlayerController.LuaOnNetCleanup");
		
		ASelfPlayerController_LuaOnNetCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfPlayerController.LuaFlushPressedKeys
	 * 		Flags  -> ()
	 */
	void ASelfPlayerController::LuaFlushPressedKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfPlayerController.LuaFlushPressedKeys");
		
		ASelfPlayerController_LuaFlushPressedKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfPlayerController.K2_ShowDamageNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         GESpec                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ASelfPlayerController::K2_ShowDamageNumber(float DamageAmount, class AActor* TargetCharacter, const struct FVector& Pos, const struct FGameplayEffectSpec& GESpec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfPlayerController.K2_ShowDamageNumber");
		
		ASelfPlayerController_K2_ShowDamageNumber_Params params {};
		params.DamageAmount = DamageAmount;
		params.TargetCharacter = TargetCharacter;
		params.Pos = Pos;
		params.GESpec = GESpec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SelfPlayerController.GetConnectIp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nPort                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ASelfPlayerController::GetConnectIp(int32_t* nPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SelfPlayerController.GetConnectIp");
		
		ASelfPlayerController_GetConnectIp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (nPort != nullptr)
			*nPort = params.nPort;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASelfPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASelfPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SelfPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.Session.Close
	 * 		Flags  -> ()
	 */
	void USession::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.Session.Close");
		
		USession_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.Session");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionClient.SetSocketBufferSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            recvSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            writeSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USessionClient::SetSocketBufferSize(int32_t recvSize, int32_t writeSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionClient.SetSocketBufferSize");
		
		USessionClient_SetSocketBufferSize_Params params {};
		params.recvSize = recvSize;
		params.writeSize = writeSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionClient.SetAliveTimeout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            nTimeout                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USessionClient::SetAliveTimeout(int32_t nTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionClient.SetAliveTimeout");
		
		USessionClient_SetAliveTimeout_Params params {};
		params.nTimeout = nTimeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionClient.ResetIpAndConnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strIp                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           nPort                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            connectTimeOut                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USessionClient::ResetIpAndConnect(const class FString& strIp, uint32_t nPort, int32_t connectTimeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionClient.ResetIpAndConnect");
		
		USessionClient_ResetIpAndConnect_Params params {};
		params.strIp = strIp;
		params.nPort = nPort;
		params.connectTimeOut = connectTimeOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionClient.ReConnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            connectTimeOut                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USessionClient::ReConnect(int32_t connectTimeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionClient.ReConnect");
		
		USessionClient_ReConnect_Params params {};
		params.connectTimeOut = connectTimeOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USessionClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USessionClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SessionClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionPingClient.Ping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strIp                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USessionPingClient::Ping(const class FString& strIp, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionPingClient.Ping");
		
		USessionPingClient_Ping_Params params {};
		params.strIp = strIp;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionPingClient.GetPing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      strIp                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USessionPingClient::GetPing(const class FString& strIp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionPingClient.GetPing");
		
		USessionPingClient_GetPing_Params params {};
		params.strIp = strIp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SessionPingClient.CleanPings
	 * 		Flags  -> ()
	 */
	void USessionPingClient::CleanPings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SessionPingClient.CleanPings");
		
		USessionPingClient_CleanPings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USessionPingClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USessionPingClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SessionPingClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USessionServer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USessionServer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SessionServer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortcutkeyMgr.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortcutkeyMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.ShortcutkeyMgr");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleReplicationConnectionDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleReplicationConnectionDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SimpleReplicationConnectionDriver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleReplicationDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleReplicationDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SimpleReplicationDriver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SmallEyeJoyStrick.SetTurnValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fInDeadZone                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              fInInitValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              fInPitchInputScale                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmallEyeJoyStrick::SetTurnValue(float fInDeadZone, float fInInitValue, float fInPitchInputScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SmallEyeJoyStrick.SetTurnValue");
		
		USmallEyeJoyStrick_SetTurnValue_Params params {};
		params.fInDeadZone = fInDeadZone;
		params.fInInitValue = fInInitValue;
		params.fInPitchInputScale = fInPitchInputScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SmallEyeJoyStrick.ReleaseJoystick
	 * 		Flags  -> ()
	 */
	void USmallEyeJoyStrick::ReleaseJoystick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SmallEyeJoyStrick.ReleaseJoystick");
		
		USmallEyeJoyStrick_ReleaseJoystick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.SmallEyeJoyStrick.OnShowRun__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowRun                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmallEyeJoyStrick::OnShowRun__DelegateSignature(bool ShowRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.SmallEyeJoyStrick.OnShowRun__DelegateSignature");
		
		USmallEyeJoyStrick_OnShowRun__DelegateSignature_Params params {};
		params.ShowRun = ShowRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmallEyeJoyStrick.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmallEyeJoyStrick::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SmallEyeJoyStrick");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SmoothSyncComponent.SetLastReceivedPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSyncComponent::SetLastReceivedPos(const struct FVector& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SmoothSyncComponent.SetLastReceivedPos");
		
		USmoothSyncComponent_SetLastReceivedPos_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SmoothSyncComponent.SetEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSyncComponent::SetEnable(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SmoothSyncComponent.SetEnable");
		
		USmoothSyncComponent_SetEnable_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SmoothSyncComponent.ServerSetRotationFollowVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               follow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSyncComponent::ServerSetRotationFollowVelocity(bool follow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SmoothSyncComponent.ServerSetRotationFollowVelocity");
		
		USmoothSyncComponent_ServerSetRotationFollowVelocity_Params params {};
		params.follow = follow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SmoothSyncComponent.ServerSendRotationToEveryone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint16_t                                           Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint16_t                                           Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint16_t                                           Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSyncComponent::ServerSendRotationToEveryone(uint16_t Roll, uint16_t Pitch, uint16_t Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SmoothSyncComponent.ServerSendRotationToEveryone");
		
		USmoothSyncComponent_ServerSendRotationToEveryone_Params params {};
		params.Roll = Roll;
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SmoothSyncComponent.ServerSendResetPosToEveryone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLerp                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSyncComponent::ServerSendResetPosToEveryone(const struct FVector& Pos, bool bLerp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SmoothSyncComponent.ServerSendResetPosToEveryone");
		
		USmoothSyncComponent_ServerSendResetPosToEveryone_Params params {};
		params.Pos = Pos;
		params.bLerp = bLerp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SmoothSyncComponent.ServerSendPosToEveryone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLerp                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmoothSyncComponent::ServerSendPosToEveryone(const struct FVector& Pos, bool bLerp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SmoothSyncComponent.ServerSendPosToEveryone");
		
		USmoothSyncComponent_ServerSendPosToEveryone_Params params {};
		params.Pos = Pos;
		params.bLerp = bLerp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SmoothSyncComponent.OnRep_ServerFps
	 * 		Flags  -> ()
	 */
	void USmoothSyncComponent::OnRep_ServerFps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SmoothSyncComponent.OnRep_ServerFps");
		
		USmoothSyncComponent_OnRep_ServerFps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SmoothSyncComponent.GetVelocity
	 * 		Flags  -> ()
	 */
	struct FVector USmoothSyncComponent::GetVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SmoothSyncComponent.GetVelocity");
		
		USmoothSyncComponent_GetVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmoothSyncComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmoothSyncComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SmoothSyncComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.SetEnableServerAutoSend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USyncMoveComponent::SetEnableServerAutoSend(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.SetEnableServerAutoSend");
		
		USyncMoveComponent_SetEnableServerAutoSend_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.SetCurState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStateType                                         State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USyncMoveComponent::SetCurState(EStateType State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.SetCurState");
		
		USyncMoveComponent_SetCurState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.ServerSetPos_Multicast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USyncMoveComponent::ServerSetPos_Multicast(const struct FVector& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.ServerSetPos_Multicast");
		
		USyncMoveComponent_ServerSetPos_Multicast_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.ServerSendRotation_Multicast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int16_t                                            Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int16_t                                            Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int16_t                                            Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USyncMoveComponent::ServerSendRotation_Multicast(int16_t Roll, int16_t Pitch, int16_t Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.ServerSendRotation_Multicast");
		
		USyncMoveComponent_ServerSendRotation_Multicast_Params params {};
		params.Roll = Roll;
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.ServerSendPos_Multicast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USyncMoveComponent::ServerSendPos_Multicast(const struct FVector& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.ServerSendPos_Multicast");
		
		USyncMoveComponent_ServerSendPos_Multicast_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.ServerSendMsgIndex_Multicast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint32_t                                           msgIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USyncMoveComponent::ServerSendMsgIndex_Multicast(uint32_t msgIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.ServerSendMsgIndex_Multicast");
		
		USyncMoveComponent_ServerSendMsgIndex_Multicast_Params params {};
		params.msgIndex = msgIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.SendRotation_Server
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotator                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USyncMoveComponent::SendRotation_Server(const struct FRotator& Rotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.SendRotation_Server");
		
		USyncMoveComponent_SendRotation_Server_Params params {};
		params.Rotator = Rotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.SendPosition_Server
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize100                      Pos                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      Velocity                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStateType                                         State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           sendPosMsgIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USyncMoveComponent::SendPosition_Server(const struct FVector_NetQuantize100& Pos, const struct FVector_NetQuantize100& Velocity, double Timestamp, EStateType State, uint32_t sendPosMsgIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.SendPosition_Server");
		
		USyncMoveComponent_SendPosition_Server_Params params {};
		params.Pos = Pos;
		params.Velocity = Velocity;
		params.Timestamp = Timestamp;
		params.State = State;
		params.sendPosMsgIndex = sendPosMsgIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.SendPosition
	 * 		Flags  -> ()
	 */
	void USyncMoveComponent::SendPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.SendPosition");
		
		USyncMoveComponent_SendPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.RefreshSendPosMsgIndex_Multicast
	 * 		Flags  -> ()
	 */
	void USyncMoveComponent::RefreshSendPosMsgIndex_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.RefreshSendPosMsgIndex_Multicast");
		
		USyncMoveComponent_RefreshSendPosMsgIndex_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.RefreshMsgIndex
	 * 		Flags  -> ()
	 */
	void USyncMoveComponent::RefreshMsgIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.RefreshMsgIndex");
		
		USyncMoveComponent_RefreshMsgIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.OnRep_ServerTimestamp
	 * 		Flags  -> ()
	 */
	void USyncMoveComponent::OnRep_ServerTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.OnRep_ServerTimestamp");
		
		USyncMoveComponent_OnRep_ServerTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.GetVelocity
	 * 		Flags  -> ()
	 */
	struct FVector USyncMoveComponent::GetVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.GetVelocity");
		
		USyncMoveComponent_GetVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.GetCurState
	 * 		Flags  -> ()
	 */
	EStateType USyncMoveComponent::GetCurState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.GetCurState");
		
		USyncMoveComponent_GetCurState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.GetClientTimestamp
	 * 		Flags  -> ()
	 */
	float USyncMoveComponent::GetClientTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.GetClientTimestamp");
		
		USyncMoveComponent_GetClientTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.SyncMoveComponent.GetClientPlatformTimestamp
	 * 		Flags  -> ()
	 */
	float USyncMoveComponent::GetClientPlatformTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.SyncMoveComponent.GetClientPlatformTimestamp");
		
		USyncMoveComponent_GetClientPlatformTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USyncMoveComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USyncMoveComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.SyncMoveComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.TileViewEx.SetListAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EListItemAlignment                                 Alignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTileViewEx::SetListAlignment(EListItemAlignment Alignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.TileViewEx.SetListAlignment");
		
		UTileViewEx_SetListAlignment_Params params {};
		params.Alignment = Alignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTileViewEx.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTileViewEx::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.TileViewEx");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.TouchTurn.SetTurnValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              I                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              S                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              limitPixel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTouchTurn::SetTurnValue(float I, float S, float limitPixel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.TouchTurn.SetTurnValue");
		
		UTouchTurn_SetTurnValue_Params params {};
		params.I = I;
		params.S = S;
		params.limitPixel = limitPixel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.TouchTurn.SetScopeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              S                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTouchTurn::SetScopeValue(float S)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.TouchTurn.SetScopeValue");
		
		UTouchTurn_SetScopeValue_Params params {};
		params.S = S;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.TouchTurn.SetPitchValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              pitchvalue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTouchTurn::SetPitchValue(float pitchvalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.TouchTurn.SetPitchValue");
		
		UTouchTurn_SetPitchValue_Params params {};
		params.pitchvalue = pitchvalue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.TouchTurn.SetInputScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fYawscale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              fPitchscale                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTouchTurn::SetInputScale(float fYawscale, float fPitchscale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.TouchTurn.SetInputScale");
		
		UTouchTurn_SetInputScale_Params params {};
		params.fYawscale = fYawscale;
		params.fPitchscale = fPitchscale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.TouchTurn.SetInitValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTouchTurn::SetInitValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.TouchTurn.SetInitValue");
		
		UTouchTurn_SetInitValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTouchTurn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTouchTurn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.TouchTurn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Main.TrapActor.OnWeaponHit__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FName                                        HitSocketName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATrapActor::OnWeaponHit__DelegateSignature(const struct FHitResult& HitInfo, const class FName& HitSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Main.TrapActor.OnWeaponHit__DelegateSignature");
		
		ATrapActor_OnWeaponHit__DelegateSignature_Params params {};
		params.HitInfo = HitInfo;
		params.HitSocketName = HitSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.TrapActor.GetRightHandHoldWeaponMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ATrapActor::GetRightHandHoldWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.TrapActor.GetRightHandHoldWeaponMesh");
		
		ATrapActor_GetRightHandHoldWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.TrapActor.GetLeftHandHoldWeaponMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ATrapActor::GetLeftHandHoldWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.TrapActor.GetLeftHandHoldWeaponMesh");
		
		ATrapActor_GetLeftHandHoldWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrapActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrapActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.TrapActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main.RichTextLinkBlockDecorator.ClickFun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FString>                 MetaData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            nButtonIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichTextLinkBlockDecorator::ClickFun(TMap<class FString, class FString> MetaData, int32_t nButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main.RichTextLinkBlockDecorator.ClickFun");
		
		URichTextLinkBlockDecorator_ClickFun_Params params {};
		params.MetaData = MetaData;
		params.nButtonIndex = nButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextLinkBlockDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextLinkBlockDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.RichTextLinkBlockDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUSelfEngineSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUSelfEngineSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.USelfEngineSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUserWidgetMouseEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserWidgetMouseEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.UserWidgetMouseEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleCheatChecker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleCheatChecker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.VehicleCheatChecker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponOwnerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponOwnerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Main.WeaponOwnerInterface");
		return ptr;
	}

}


