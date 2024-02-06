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
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientPlayEffectAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientPlayEffectAttached(const class FString& Path, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientPlayEffectAttached");
		
		AAI_Base_C_ClientPlayEffectAttached_Params params {};
		params.Path = Path;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ReceiveDestroyed");
		
		AAI_Base_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.LockLookAtTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RotateSpeedRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::LockLookAtTarget(float RotateSpeedRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.LockLookAtTarget");
		
		AAI_Base_C_LockLookAtTarget_Params params {};
		params.RotateSpeedRate = RotateSpeedRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAI_Base_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ReceiveActorEndOverlap");
		
		AAI_Base_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientUseDoll
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::ClientUseDoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientUseDoll");
		
		AAI_Base_C_ClientUseDoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientStopSlotMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SlotName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientStopSlotMontage(const class FString& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientStopSlotMontage");
		
		AAI_Base_C_ClientStopSlotMontage_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.GetLeftHandHoldWeaponMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* AAI_Base_C::GetLeftHandHoldWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.GetLeftHandHoldWeaponMesh");
		
		AAI_Base_C_GetLeftHandHoldWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientPlaySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientPlaySound(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientPlaySound");
		
		AAI_Base_C_ClientPlaySound_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.InitMonster
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::InitMonster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.InitMonster");
		
		AAI_Base_C_InitMonster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.GetRightHandHoldWeaponMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* AAI_Base_C::GetRightHandHoldWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.GetRightHandHoldWeaponMesh");
		
		AAI_Base_C_GetRightHandHoldWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.GetInteractionFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void AAI_Base_C::GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.GetInteractionFunctions");
		
		AAI_Base_C_GetInteractionFunctions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAI_Base_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ReceiveEndPlay");
		
		AAI_Base_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientDie
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::ClientDie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientDie");
		
		AAI_Base_C_ClientDie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.OnRep_MoveBlendSpace
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::OnRep_MoveBlendSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.OnRep_MoveBlendSpace");
		
		AAI_Base_C_OnRep_MoveBlendSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientPlayEffectById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSaved                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAI_Base_C::ClientPlayEffectById(int32_t ID, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientPlayEffectById");
		
		AAI_Base_C_ClientPlayEffectById_Params params {};
		params.ID = ID;
		params.Location = Location;
		params.Rotation = Rotation;
		params.IsSaved = IsSaved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.OnRep_Hp
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::OnRep_Hp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.OnRep_Hp");
		
		AAI_Base_C_OnRep_Hp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.Die
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         DamageEffectSpec                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              DamageMagnitude                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      AvatarActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AAI_Base_C::Die(class AActor* DamageInstigator, class AActor* DamageCauser, const struct FGameplayEffectSpec& DamageEffectSpec, float DamageMagnitude, class AActor* AvatarActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.Die");
		
		AAI_Base_C_Die_Params params {};
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
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.K2_AddAbilities
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::K2_AddAbilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.K2_AddAbilities");
		
		AAI_Base_C_K2_AddAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientStopAllMontage
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::ClientStopAllMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientStopAllMontage");
		
		AAI_Base_C_ClientStopAllMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientPlayEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSaved                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAI_Base_C::ClientPlayEffect(const class FString& Path, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientPlayEffect");
		
		AAI_Base_C_ClientPlayEffect_Params params {};
		params.Path = Path;
		params.Location = Location;
		params.Rotation = Rotation;
		params.IsSaved = IsSaved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientStopMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientStopMontage(class UAnimMontage* Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientStopMontage");
		
		AAI_Base_C_ClientStopMontage_Params params {};
		params.Montage = Montage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAI_Base_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ReceiveActorBeginOverlap");
		
		AAI_Base_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientStopEffectById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientStopEffectById(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientStopEffectById");
		
		AAI_Base_C_ClientStopEffectById_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction AI_Base.AI_Base_C.ClientStopEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientStopEffect(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction AI_Base.AI_Base_C.ClientStopEffect");
		
		AAI_Base_C_ClientStopEffect_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.GetInteractionFunctions__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void AAI_Base_C::GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.GetInteractionFunctions__Overridden");
		
		AAI_Base_C_GetInteractionFunctions__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.GetMenuName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::GetMenuName(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.GetMenuName");
		
		AAI_Base_C_GetMenuName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString AAI_Base_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.GetModuleName");
		
		AAI_Base_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientUseDoll__Overridden
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::ClientUseDoll__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientUseDoll__Overridden");
		
		AAI_Base_C_ClientUseDoll__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.OnRep_MoveBlendSpace__Overridden
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::OnRep_MoveBlendSpace__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.OnRep_MoveBlendSpace__Overridden");
		
		AAI_Base_C_OnRep_MoveBlendSpace__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.OnRep_Hp__Overridden
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::OnRep_Hp__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.OnRep_Hp__Overridden");
		
		AAI_Base_C_OnRep_Hp__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientPlayEffectAttached__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientPlayEffectAttached__Overridden(const class FString& Path, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientPlayEffectAttached__Overridden");
		
		AAI_Base_C_ClientPlayEffectAttached__Overridden_Params params {};
		params.Path = Path;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.LuaServerBeginPlay
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::LuaServerBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.LuaServerBeginPlay");
		
		AAI_Base_C_LuaServerBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientStopEffectById__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientStopEffectById__Overridden(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientStopEffectById__Overridden");
		
		AAI_Base_C_ClientStopEffectById__Overridden_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientPlayEffectById__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSaved                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAI_Base_C::ClientPlayEffectById__Overridden(int32_t ID, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientPlayEffectById__Overridden");
		
		AAI_Base_C_ClientPlayEffectById__Overridden_Params params {};
		params.ID = ID;
		params.Location = Location;
		params.Rotation = Rotation;
		params.IsSaved = IsSaved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientRotateTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientRotateTo(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientRotateTo");
		
		AAI_Base_C_ClientRotateTo_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientStopEffect__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientStopEffect__Overridden(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientStopEffect__Overridden");
		
		AAI_Base_C_ClientStopEffect__Overridden_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientPlayEffect__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSaved                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAI_Base_C::ClientPlayEffect__Overridden(const class FString& Path, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientPlayEffect__Overridden");
		
		AAI_Base_C_ClientPlayEffect__Overridden_Params params {};
		params.Path = Path;
		params.Location = Location;
		params.Rotation = Rotation;
		params.IsSaved = IsSaved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientPlaySound__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientPlaySound__Overridden(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientPlaySound__Overridden");
		
		AAI_Base_C_ClientPlaySound__Overridden_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientElectricShock
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::ClientElectricShock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientElectricShock");
		
		AAI_Base_C_ClientElectricShock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientStopSlotMontage__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SlotName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientStopSlotMontage__Overridden(const class FString& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientStopSlotMontage__Overridden");
		
		AAI_Base_C_ClientStopSlotMontage__Overridden_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientStopMontage__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ClientStopMontage__Overridden(class UAnimMontage* Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientStopMontage__Overridden");
		
		AAI_Base_C_ClientStopMontage__Overridden_Params params {};
		params.Montage = Montage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientStopAllMontage__Overridden
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::ClientStopAllMontage__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientStopAllMontage__Overridden");
		
		AAI_Base_C_ClientStopAllMontage__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ClientDie__Overridden
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::ClientDie__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ClientDie__Overridden");
		
		AAI_Base_C_ClientDie__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.InitMonster__Overridden
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::InitMonster__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.InitMonster__Overridden");
		
		AAI_Base_C_InitMonster__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiStopMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::MultiStopMontage(class UAnimMontage* Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiStopMontage");
		
		AAI_Base_C_MultiStopMontage_Params params {};
		params.Montage = Montage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiStopSlotMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SlotName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::MultiStopSlotMontage(const class FString& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiStopSlotMontage");
		
		AAI_Base_C_MultiStopSlotMontage_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiStopAllMontage
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::MultiStopAllMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiStopAllMontage");
		
		AAI_Base_C_MultiStopAllMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiSetCollisionEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SelfEnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAI_Base_C::MultiSetCollisionEnable(bool SelfEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiSetCollisionEnable");
		
		AAI_Base_C_MultiSetCollisionEnable_Params params {};
		params.SelfEnable = SelfEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiSetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAI_Base_C::MultiSetVisible(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiSetVisible");
		
		AAI_Base_C_MultiSetVisible_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiElectricShock
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::MultiElectricShock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiElectricShock");
		
		AAI_Base_C_MultiElectricShock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiDie
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::MultiDie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiDie");
		
		AAI_Base_C_MultiDie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiPlaySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SoundId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::MultiPlaySound(int32_t SoundId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiPlaySound");
		
		AAI_Base_C_MultiPlaySound_Params params {};
		params.SoundId = SoundId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiPlayEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSaved                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAI_Base_C::MultiPlayEffect(const class FString& Path, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiPlayEffect");
		
		AAI_Base_C_MultiPlayEffect_Params params {};
		params.Path = Path;
		params.Location = Location;
		params.Rotation = Rotation;
		params.IsSaved = IsSaved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiStopEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::MultiStopEffect(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiStopEffect");
		
		AAI_Base_C_MultiStopEffect_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiRotateTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::MultiRotateTo(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiRotateTo");
		
		AAI_Base_C_MultiRotateTo_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiPlayEffectById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSaved                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAI_Base_C::MultiPlayEffectById(int32_t ID, const struct FVector& Location, const struct FRotator& Rotation, bool IsSaved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiPlayEffectById");
		
		AAI_Base_C_MultiPlayEffectById_Params params {};
		params.ID = ID;
		params.Location = Location;
		params.Rotation = Rotation;
		params.IsSaved = IsSaved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiStopEffectById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::MultiStopEffectById(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiStopEffectById");
		
		AAI_Base_C_MultiStopEffectById_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiPlayEffectAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::MultiPlayEffectAttached(const class FString& Path, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiPlayEffectAttached");
		
		AAI_Base_C_MultiPlayEffectAttached_Params params {};
		params.Path = Path;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.UseDoll
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::UseDoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.UseDoll");
		
		AAI_Base_C_UseDoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ReceiveBeginPlay");
		
		AAI_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.LockLookAtTarget__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RotateSpeedRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::LockLookAtTarget__Overridden(float RotateSpeedRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.LockLookAtTarget__Overridden");
		
		AAI_Base_C_LockLookAtTarget__Overridden_Params params {};
		params.RotateSpeedRate = RotateSpeedRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.DrawDebugPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                LineColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::DrawDebugPos(const struct FVector& Pos, const struct FLinearColor& LineColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.DrawDebugPos");
		
		AAI_Base_C_DrawDebugPos_Params params {};
		params.Pos = Pos;
		params.LineColor = LineColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.MultiPlayMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isStopMontage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAI_Base_C::MultiPlayMontage(class UAnimMontage* Montage, float Rate, float StartTime, bool isStopMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.MultiPlayMontage");
		
		AAI_Base_C_MultiPlayMontage_Params params {};
		params.Montage = Montage;
		params.Rate = Rate;
		params.StartTime = StartTime;
		params.isStopMontage = isStopMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.StartRagdoll
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::StartRagdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.StartRagdoll");
		
		AAI_Base_C_StartRagdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.StopRagdoll
	 * 		Flags  -> ()
	 */
	void AAI_Base_C::StopRagdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.StopRagdoll");
		
		AAI_Base_C_StopRagdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AI_Base.AI_Base_C.ExecuteUbergraph_AI_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAI_Base_C::ExecuteUbergraph_AI_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AI_Base.AI_Base_C.ExecuteUbergraph_AI_Base");
		
		AAI_Base_C_ExecuteUbergraph_AI_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAI_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAI_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AI_Base.AI_Base_C");
		return ptr;
	}

}


