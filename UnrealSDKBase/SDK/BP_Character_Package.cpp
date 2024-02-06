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
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.K2_OnStartCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScaledHalfHeightAdjust                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Character_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.K2_OnStartCrouch");
		
		ABP_Character_C_K2_OnStartCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_MaxWalkSpeed
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_MaxWalkSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_MaxWalkSpeed");
		
		ABP_Character_C_OnRep_MaxWalkSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.Mult_Possessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::Mult_Possessed(class APlayerController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.Mult_Possessed");
		
		ABP_Character_C_Mult_Possessed_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.DoOpenDeathBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DeathBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DeathActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::DoOpenDeathBox(class AActor* DeathBox, class AActor* DeathActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.DoOpenDeathBox");
		
		ABP_Character_C_DoOpenDeathBox_Params params {};
		params.DeathBox = DeathBox;
		params.DeathActor = DeathActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_bSoul
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_bSoul()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_bSoul");
		
		ABP_Character_C_OnRep_bSoul_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.DoInteractiveStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            interactiveNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::DoInteractiveStart(class AActor* Actor, float Time, int32_t interactiveNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.DoInteractiveStart");
		
		ABP_Character_C_DoInteractiveStart_Params params {};
		params.Actor = Actor;
		params.Time = Time;
		params.interactiveNum = interactiveNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.Mult_Jump
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::Mult_Jump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.Mult_Jump");
		
		ABP_Character_C_Mult_Jump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_ThrowWeapon
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_ThrowWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_ThrowWeapon");
		
		ABP_Character_C_OnRep_ThrowWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.BPI_PlaySoundEventName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CfgId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::BPI_PlaySoundEventName(const class FName& EventName, int32_t CfgId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.BPI_PlaySoundEventName");
		
		ABP_Character_C_BPI_PlaySoundEventName_Params params {};
		params.EventName = EventName;
		params.CfgId = CfgId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.MultOwn_PlayHitSoundEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            hitAudioId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            hitEffectId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Character_C::MultOwn_PlayHitSoundEffect(int32_t hitAudioId, int32_t hitEffectId, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.MultOwn_PlayHitSoundEffect");
		
		ABP_Character_C_MultOwn_PlayHitSoundEffect_Params params {};
		params.hitAudioId = hitAudioId;
		params.hitEffectId = hitEffectId;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.GetLeftHandHoldWeaponMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ABP_Character_C::GetLeftHandHoldWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.GetLeftHandHoldWeaponMesh");
		
		ABP_Character_C_GetLeftHandHoldWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.IsSelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bself                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::IsSelf(bool* bself)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.IsSelf");
		
		ABP_Character_C_IsSelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bself != nullptr)
			*bself = params.bself;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_RightWeaponList
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_RightWeaponList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_RightWeaponList");
		
		ABP_Character_C_OnRep_RightWeaponList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_ShoesId
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_ShoesId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_ShoesId");
		
		ABP_Character_C_OnRep_ShoesId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_ChestId
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_ChestId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_ChestId");
		
		ABP_Character_C_OnRep_ChestId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_ThighId
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_ThighId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_ThighId");
		
		ABP_Character_C_OnRep_ThighId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.LuaOnDie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      EffectInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      EffectCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         EffectSpec                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              EffectMagnitude                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      AvatarActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Character_C::LuaOnDie(class AActor* EffectInstigator, class AActor* EffectCauser, const struct FGameplayEffectSpec& EffectSpec, float EffectMagnitude, class AActor* AvatarActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.LuaOnDie");
		
		ABP_Character_C_LuaOnDie_Params params {};
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
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.BPI_SetMovementState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MovementState                                    State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::BPI_SetMovementState(E_MovementState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.BPI_SetMovementState");
		
		ABP_Character_C_BPI_SetMovementState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.K2_OnMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.K2_OnMovementModeChanged");
		
		ABP_Character_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.InitCharacter
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::InitCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.InitCharacter");
		
		ABP_Character_C_InitCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.BPI_EndReduceMoveSpeed
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::BPI_EndReduceMoveSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.BPI_EndReduceMoveSpeed");
		
		ABP_Character_C_BPI_EndReduceMoveSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_QuickUse
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_QuickUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_QuickUse");
		
		ABP_Character_C_OnRep_QuickUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_bOffline
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_bOffline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_bOffline");
		
		ABP_Character_C_OnRep_bOffline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_bDead
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_bDead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_bDead");
		
		ABP_Character_C_OnRep_bDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.GetInteractionFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_Character_C::GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.GetInteractionFunctions");
		
		ABP_Character_C_GetInteractionFunctions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.SetHudIndex
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::SetHudIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.SetHudIndex");
		
		ABP_Character_C_SetHudIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.K2_OnEndCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScaledHalfHeightAdjust                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Character_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.K2_OnEndCrouch");
		
		ABP_Character_C_K2_OnEndCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_GlovesId
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_GlovesId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_GlovesId");
		
		ABP_Character_C_OnRep_GlovesId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.LuaReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::LuaReceiveTick(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.LuaReceiveTick");
		
		ABP_Character_C_LuaReceiveTick_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_HelmetId
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_HelmetId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_HelmetId");
		
		ABP_Character_C_OnRep_HelmetId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.Mult_Escape
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRedGate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::Mult_Escape(bool isRedGate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.Mult_Escape");
		
		ABP_Character_C_Mult_Escape_Params params {};
		params.isRedGate = isRedGate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.SetCameraBoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              targetHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              targetDis                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              reverseHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              reverseDis                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              cacheHeight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              cacheDis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reverse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::SetCameraBoom(float Alpha, float targetHeight, float targetDis, float reverseHeight, float reverseDis, float cacheHeight, float cacheDis, bool Reverse, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.SetCameraBoom");
		
		ABP_Character_C_SetCameraBoom_Params params {};
		params.Alpha = Alpha;
		params.targetHeight = targetHeight;
		params.targetDis = targetDis;
		params.reverseHeight = reverseHeight;
		params.reverseDis = reverseDis;
		params.cacheHeight = cacheHeight;
		params.cacheDis = cacheDis;
		params.Reverse = Reverse;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.MoveForwardLua
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::MoveForwardLua(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.MoveForwardLua");
		
		ABP_Character_C_MoveForwardLua_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_RoleId
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_RoleId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_RoleId");
		
		ABP_Character_C_OnRep_RoleId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_LeftWeaponList
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_LeftWeaponList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_LeftWeaponList");
		
		ABP_Character_C_OnRep_LeftWeaponList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.AttributeSetInitFinish
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::AttributeSetInitFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.AttributeSetInitFinish");
		
		ABP_Character_C_AttributeSetInitFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.LuaBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::LuaBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.LuaBeginPlay");
		
		ABP_Character_C_LuaBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.CacheCameraSpringValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::CacheCameraSpringValue(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.CacheCameraSpringValue");
		
		ABP_Character_C_CacheCameraSpringValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.STC_OnBattleStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInBattleState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::STC_OnBattleStateChange(bool bInBattleState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.STC_OnBattleStateChange");
		
		ABP_Character_C_STC_OnBattleStateChange_Params params {};
		params.bInBattleState = bInBattleState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Character_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.ReceiveEndPlay");
		
		ABP_Character_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.ChangeCamera
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::ChangeCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.ChangeCamera");
		
		ABP_Character_C_ChangeCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnReceiveAttributeChange
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnReceiveAttributeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnReceiveAttributeChange");
		
		ABP_Character_C_OnReceiveAttributeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_CurMatch
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_CurMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_CurMatch");
		
		ABP_Character_C_OnRep_CurMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_BattleStage
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_BattleStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_BattleStage");
		
		ABP_Character_C_OnRep_BattleStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.Server_Jump
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::Server_Jump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.Server_Jump");
		
		ABP_Character_C_Server_Jump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.ServerChangeMoveDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Dir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ServerChangeMoveDir(int32_t Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.ServerChangeMoveDir");
		
		ABP_Character_C_ServerChangeMoveDir_Params params {};
		params.Dir = Dir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnRep_bEscape
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_bEscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnRep_bEscape");
		
		ABP_Character_C_OnRep_bEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.MultUseControllerRotationYaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               use                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::MultUseControllerRotationYaw(bool use)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.MultUseControllerRotationYaw");
		
		ABP_Character_C_MultUseControllerRotationYaw_Params params {};
		params.use = use;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.K2_OnClientCorrectionReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Character_C::K2_OnClientCorrectionReceived(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.K2_OnClientCorrectionReceived");
		
		ABP_Character_C_K2_OnClientCorrectionReceived_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.K2_AddAbilities
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::K2_AddAbilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.K2_AddAbilities");
		
		ABP_Character_C_K2_AddAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.K2_OnGetHurt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DamageAttributeType                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FromPlayerOrSystem                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Character_C::K2_OnGetHurt(class AActor* FromCharacter, int32_t DamageAttributeType, int32_t FromPlayerOrSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.K2_OnGetHurt");
		
		ABP_Character_C_K2_OnGetHurt_Params params {};
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
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.LuaSetupPlayerInputComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputComponent*                             PlayerInputComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Character_C::LuaSetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.LuaSetupPlayerInputComponent");
		
		ABP_Character_C_LuaSetupPlayerInputComponent_Params params {};
		params.PlayerInputComponent = PlayerInputComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.OnJumped
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.OnJumped");
		
		ABP_Character_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.MoveRightLua
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::MoveRightLua(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.MoveRightLua");
		
		ABP_Character_C_MoveRightLua_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.GetRightHandHoldWeaponMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ABP_Character_C::GetRightHandHoldWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.GetRightHandHoldWeaponMesh");
		
		ABP_Character_C_GetRightHandHoldWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.UserConstructionScript");
		
		ABP_Character_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_Character.BP_Character_C.BPI_BeginReduceMoveSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::BPI_BeginReduceMoveSpeed(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_Character.BP_Character_C.BPI_BeginReduceMoveSpeed");
		
		ABP_Character_C_BPI_BeginReduceMoveSpeed_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.GetInteractionFunctions__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_Character_C::GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.GetInteractionFunctions__Overridden");
		
		ABP_Character_C_GetInteractionFunctions__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.GetMenuName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::GetMenuName(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.GetMenuName");
		
		ABP_Character_C_GetMenuName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString ABP_Character_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.GetModuleName");
		
		ABP_Character_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_BattleStage__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_BattleStage__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_BattleStage__Overridden");
		
		ABP_Character_C_OnRep_BattleStage__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_QuickUse__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_QuickUse__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_QuickUse__Overridden");
		
		ABP_Character_C_OnRep_QuickUse__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_GlovesId__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_GlovesId__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_GlovesId__Overridden");
		
		ABP_Character_C_OnRep_GlovesId__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_ShoesId__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_ShoesId__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_ShoesId__Overridden");
		
		ABP_Character_C_OnRep_ShoesId__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_bEscape__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_bEscape__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_bEscape__Overridden");
		
		ABP_Character_C_OnRep_bEscape__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_bOffline__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_bOffline__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_bOffline__Overridden");
		
		ABP_Character_C_OnRep_bOffline__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_CurMatch__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_CurMatch__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_CurMatch__Overridden");
		
		ABP_Character_C_OnRep_CurMatch__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_LeftWeaponList__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_LeftWeaponList__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_LeftWeaponList__Overridden");
		
		ABP_Character_C_OnRep_LeftWeaponList__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_RightWeaponList__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_RightWeaponList__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_RightWeaponList__Overridden");
		
		ABP_Character_C_OnRep_RightWeaponList__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.DoInteractiveStart__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            interactiveNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::DoInteractiveStart__Overridden(class AActor* Actor, float Time, int32_t interactiveNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.DoInteractiveStart__Overridden");
		
		ABP_Character_C_DoInteractiveStart__Overridden_Params params {};
		params.Actor = Actor;
		params.Time = Time;
		params.interactiveNum = interactiveNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.DoOpenDeathBox__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DeathBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DeathActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::DoOpenDeathBox__Overridden(class AActor* DeathBox, class AActor* DeathActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.DoOpenDeathBox__Overridden");
		
		ABP_Character_C_DoOpenDeathBox__Overridden_Params params {};
		params.DeathBox = DeathBox;
		params.DeathActor = DeathActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_MaxWalkSpeed__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_MaxWalkSpeed__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_MaxWalkSpeed__Overridden");
		
		ABP_Character_C_OnRep_MaxWalkSpeed__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_SpeedRate
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_SpeedRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_SpeedRate");
		
		ABP_Character_C_OnRep_SpeedRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ChangeCamera__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::ChangeCamera__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ChangeCamera__Overridden");
		
		ABP_Character_C_ChangeCamera__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_bSoul__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_bSoul__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_bSoul__Overridden");
		
		ABP_Character_C_OnRep_bSoul__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_ThrowWeapon__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_ThrowWeapon__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_ThrowWeapon__Overridden");
		
		ABP_Character_C_OnRep_ThrowWeapon__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.MyShowDamageNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isBaoji                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::MyShowDamageNumber(const struct FVector& Pos, int32_t Num, bool isBaoji)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MyShowDamageNumber");
		
		ABP_Character_C_MyShowDamageNumber_Params params {};
		params.Pos = Pos;
		params.Num = Num;
		params.isBaoji = isBaoji;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.SetHudIndex__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::SetHudIndex__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SetHudIndex__Overridden");
		
		ABP_Character_C_SetHudIndex__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_ThighId__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_ThighId__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_ThighId__Overridden");
		
		ABP_Character_C_OnRep_ThighId__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_ChestId__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_ChestId__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_ChestId__Overridden");
		
		ABP_Character_C_OnRep_ChestId__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_HelmetId__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_HelmetId__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_HelmetId__Overridden");
		
		ABP_Character_C_OnRep_HelmetId__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_SecondWeaponId
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_SecondWeaponId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_SecondWeaponId");
		
		ABP_Character_C_OnRep_SecondWeaponId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_MainWeaponId
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_MainWeaponId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_MainWeaponId");
		
		ABP_Character_C_OnRep_MainWeaponId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_bSecondHp
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_bSecondHp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_bSecondHp");
		
		ABP_Character_C_OnRep_bSecondHp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_maxSpeedChangeRate
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_maxSpeedChangeRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_maxSpeedChangeRate");
		
		ABP_Character_C_OnRep_maxSpeedChangeRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_bDead__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_bDead__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_bDead__Overridden");
		
		ABP_Character_C_OnRep_bDead__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OnRep_RoleId__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::OnRep_RoleId__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OnRep_RoleId__Overridden");
		
		ABP_Character_C_OnRep_RoleId__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.SetCameraBoom__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              targetHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              targetDis                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              reverseHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              reverseDis                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              cacheHeight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              cacheDis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reverse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::SetCameraBoom__Overridden(float Alpha, float targetHeight, float targetDis, float reverseHeight, float reverseDis, float cacheHeight, float cacheDis, bool Reverse, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SetCameraBoom__Overridden");
		
		ABP_Character_C_SetCameraBoom__Overridden_Params params {};
		params.Alpha = Alpha;
		params.targetHeight = targetHeight;
		params.targetDis = targetDis;
		params.reverseHeight = reverseHeight;
		params.reverseDis = reverseDis;
		params.cacheHeight = cacheHeight;
		params.cacheDis = cacheDis;
		params.Reverse = Reverse;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.CacheCameraSpringValue__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::CacheCameraSpringValue__Overridden(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CacheCameraSpringValue__Overridden");
		
		ABP_Character_C_CacheCameraSpringValue__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.IsSelf__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bself                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::IsSelf__Overridden(bool* bself)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.IsSelf__Overridden");
		
		ABP_Character_C_IsSelf__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bself != nullptr)
			*bself = params.bself;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.LuaReceiveTick__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::LuaReceiveTick__Overridden(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LuaReceiveTick__Overridden");
		
		ABP_Character_C_LuaReceiveTick__Overridden_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.MoveRightLua__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::MoveRightLua__Overridden(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MoveRightLua__Overridden");
		
		ABP_Character_C_MoveRightLua__Overridden_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.MoveForwardLua__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::MoveForwardLua__Overridden(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MoveForwardLua__Overridden");
		
		ABP_Character_C_MoveForwardLua__Overridden_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.LuaBeginPlay__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::LuaBeginPlay__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.LuaBeginPlay__Overridden");
		
		ABP_Character_C_LuaBeginPlay__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.CrouchDown__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::CrouchDown__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CrouchDown__FinishedFunc");
		
		ABP_Character_C_CrouchDown__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.CrouchDown__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::CrouchDown__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.CrouchDown__UpdateFunc");
		
		ABP_Character_C_CrouchDown__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ReceiveBeginPlay");
		
		ABP_Character_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ReceiveTick");
		
		ABP_Character_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.MultUseControllerRotationYaw__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               use                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::MultUseControllerRotationYaw__Overridden(bool use)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MultUseControllerRotationYaw__Overridden");
		
		ABP_Character_C_MultUseControllerRotationYaw__Overridden_Params params {};
		params.use = use;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.SendUseControllerRotationYaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               use                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::SendUseControllerRotationYaw(bool use)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.SendUseControllerRotationYaw");
		
		ABP_Character_C_SendUseControllerRotationYaw_Params params {};
		params.use = use;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.K2_OnMovementModeChanged__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::K2_OnMovementModeChanged__Overridden(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.K2_OnMovementModeChanged__Overridden");
		
		ABP_Character_C_K2_OnMovementModeChanged__Overridden_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.DoTL_Crouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reverse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::DoTL_Crouch(bool Reverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.DoTL_Crouch");
		
		ABP_Character_C_DoTL_Crouch_Params params {};
		params.Reverse = Reverse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.MultOwn_PlayHitSoundEffect__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            hitAudioId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            hitEffectId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Character_C::MultOwn_PlayHitSoundEffect__Overridden(int32_t hitAudioId, int32_t hitEffectId, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.MultOwn_PlayHitSoundEffect__Overridden");
		
		ABP_Character_C_MultOwn_PlayHitSoundEffect__Overridden_Params params {};
		params.hitAudioId = hitAudioId;
		params.hitEffectId = hitEffectId;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ServerSetMaxSpeedChangeRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ServerSetMaxSpeedChangeRate(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ServerSetMaxSpeedChangeRate");
		
		ABP_Character_C_ServerSetMaxSpeedChangeRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.Server_Jump__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::Server_Jump__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.Server_Jump__Overridden");
		
		ABP_Character_C_Server_Jump__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.Mult_Jump__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::Mult_Jump__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.Mult_Jump__Overridden");
		
		ABP_Character_C_Mult_Jump__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ServerChangeWeapon2Hand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               onHand                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_BaseWeapon_C*                            Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ServerChangeWeapon2Hand(bool onHand, class ABP_BaseWeapon_C* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ServerChangeWeapon2Hand");
		
		ABP_Character_C_ServerChangeWeapon2Hand_Params params {};
		params.onHand = onHand;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.Mult_Escape__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRedGate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::Mult_Escape__Overridden(bool isRedGate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.Mult_Escape__Overridden");
		
		ABP_Character_C_Mult_Escape__Overridden_Params params {};
		params.isRedGate = isRedGate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ReceivePossessed");
		
		ABP_Character_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.Mult_Possessed__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::Mult_Possessed__Overridden(class APlayerController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.Mult_Possessed__Overridden");
		
		ABP_Character_C_Mult_Possessed__Overridden_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.BPI_SetMovementState__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MovementState                                    State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::BPI_SetMovementState__Overridden(E_MovementState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.BPI_SetMovementState__Overridden");
		
		ABP_Character_C_BPI_SetMovementState__Overridden_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.STC_OnBattleStateChange__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInBattleState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::STC_OnBattleStateChange__Overridden(bool bInBattleState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.STC_OnBattleStateChange__Overridden");
		
		ABP_Character_C_STC_OnBattleStateChange__Overridden_Params params {};
		params.bInBattleState = bInBattleState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.STC_OnAttributeChange
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::STC_OnAttributeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.STC_OnAttributeChange");
		
		ABP_Character_C_STC_OnAttributeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.InteractiveActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::InteractiveActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InteractiveActor");
		
		ABP_Character_C_InteractiveActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ServerSetSpeedRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ServerSetSpeedRate(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ServerSetSpeedRate");
		
		ABP_Character_C_ServerSetSpeedRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ServerChangeMoveDir__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Dir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ServerChangeMoveDir__Overridden(int32_t Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ServerChangeMoveDir__Overridden");
		
		ABP_Character_C_ServerChangeMoveDir__Overridden_Params params {};
		params.Dir = Dir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.OpenDeathBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DeathBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DeathActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::OpenDeathBox(class AActor* DeathBox, class AActor* DeathActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.OpenDeathBox");
		
		ABP_Character_C_OpenDeathBox_Params params {};
		params.DeathBox = DeathBox;
		params.DeathActor = DeathActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.InteractiveStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            interactiveNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::InteractiveStart(class AActor* Actor, float Time, int32_t interactiveNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.InteractiveStart");
		
		ABP_Character_C_InteractiveStart_Params params {};
		params.Actor = Actor;
		params.Time = Time;
		params.interactiveNum = interactiveNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ReviveTeammate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InstanceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ReviveTeammate(class AActor* Actor, int32_t InstanceId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ReviveTeammate");
		
		ABP_Character_C_ReviveTeammate_Params params {};
		params.Actor = Actor;
		params.InstanceId = InstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.Mult_PlayMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isStopMontage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Character_C::Mult_PlayMontage(class UAnimMontage* Montage, float Rate, float StartTime, bool isStopMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.Mult_PlayMontage");
		
		ABP_Character_C_Mult_PlayMontage_Params params {};
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
	 * 		Name   -> Function BP_Character.BP_Character_C.DrawServerDebugLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::DrawServerDebugLine(const struct FVector& Start, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.DrawServerDebugLine");
		
		ABP_Character_C_DrawServerDebugLine_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.BPI_Jumped
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::BPI_Jumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.BPI_Jumped");
		
		ABP_Character_C_BPI_Jumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.BPI_EndReduceMoveSpeed__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::BPI_EndReduceMoveSpeed__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.BPI_EndReduceMoveSpeed__Overridden");
		
		ABP_Character_C_BPI_EndReduceMoveSpeed__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.BPI_BeginReduceMoveSpeed__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::BPI_BeginReduceMoveSpeed__Overridden(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.BPI_BeginReduceMoveSpeed__Overridden");
		
		ABP_Character_C_BPI_BeginReduceMoveSpeed__Overridden_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.BPI_PlaySoundEventName__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CfgId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::BPI_PlaySoundEventName__Overridden(const class FName& EventName, int32_t CfgId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.BPI_PlaySoundEventName__Overridden");
		
		ABP_Character_C_BPI_PlaySoundEventName__Overridden_Params params {};
		params.EventName = EventName;
		params.CfgId = CfgId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.StartRagdoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              delayBakeTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::StartRagdoll(float delayBakeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.StartRagdoll");
		
		ABP_Character_C_StartRagdoll_Params params {};
		params.delayBakeTime = delayBakeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.StopRagdoll
	 * 		Flags  -> ()
	 */
	void ABP_Character_C::StopRagdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.StopRagdoll");
		
		ABP_Character_C_StopRagdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_C::ExecuteUbergraph_BP_Character(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character");
		
		ABP_Character_C_ExecuteUbergraph_BP_Character_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character.BP_Character_C");
		return ptr;
	}

}


