﻿/**
 * Name: GreedIsGood
 * Version: playtest
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
	 * 		Name   -> LuaFunction GA_Base.GA_Base_C.LuaGetCooldownGameplayEffect
	 * 		Flags  -> ()
	 */
	struct FGameplayEffectSpecHandle UGA_Base_C::LuaGetCooldownGameplayEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction GA_Base.GA_Base_C.LuaGetCooldownGameplayEffect");
		
		UGA_Base_C_LuaGetCooldownGameplayEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction GA_Base.GA_Base_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Base_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction GA_Base.GA_Base_C.K2_ActivateAbility");
		
		UGA_Base_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction GA_Base.GA_Base_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGA_Base_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction GA_Base.GA_Base_C.K2_OnEndAbility");
		
		UGA_Base_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction GA_Base.GA_Base_C.OnFindTaskDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayTask*                               GameplayTask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DelegateName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGA_Base_C::OnFindTaskDelegate(class UGameplayTask* GameplayTask, const class FString& DelegateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction GA_Base.GA_Base_C.OnFindTaskDelegate");
		
		UGA_Base_C_OnFindTaskDelegate_Params params {};
		params.GameplayTask = GameplayTask;
		params.DelegateName = DelegateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction GA_Base.GA_Base_C.LuaGetCostGameplayEffect
	 * 		Flags  -> ()
	 */
	struct FGameplayEffectSpecHandle UGA_Base_C::LuaGetCostGameplayEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction GA_Base.GA_Base_C.LuaGetCostGameplayEffect");
		
		UGA_Base_C_LuaGetCostGameplayEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction GA_Base.GA_Base_C.OnTaskFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayTask*                               GameplayTask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGA_Base_C::OnTaskFinished(class UGameplayTask* GameplayTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction GA_Base.GA_Base_C.OnTaskFinished");
		
		UGA_Base_C_OnTaskFinished_Params params {};
		params.GameplayTask = GameplayTask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction GA_Base.GA_Base_C.LuaOnGiveAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (ConstParm, Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilitySpec                        Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGA_Base_C::LuaOnGiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction GA_Base.GA_Base_C.LuaOnGiveAbility");
		
		UGA_Base_C_LuaOnGiveAbility_Params params {};
		params.ActorInfo = ActorInfo;
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction GA_Base.GA_Base_C.K2_ActivateAbilityFromEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGA_Base_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction GA_Base.GA_Base_C.K2_ActivateAbilityFromEvent");
		
		UGA_Base_C_K2_ActivateAbilityFromEvent_Params params {};
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Base.GA_Base_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString UGA_Base_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Base.GA_Base_C.GetModuleName");
		
		UGA_Base_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Base.GA_Base_C");
		return ptr;
	}

}


