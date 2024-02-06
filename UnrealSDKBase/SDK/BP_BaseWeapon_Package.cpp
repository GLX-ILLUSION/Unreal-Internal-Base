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
	 * 		Name   -> LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BaseWeapon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.ReceiveBeginPlay");
		
		ABP_BaseWeapon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_BaseWeapon_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.ReceiveEndPlay");
		
		ABP_BaseWeapon_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_ExtraWeaponPart
	 * 		Flags  -> ()
	 */
	void ABP_BaseWeapon_C::OnRep_ExtraWeaponPart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_ExtraWeaponPart");
		
		ABP_BaseWeapon_C_OnRep_ExtraWeaponPart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bOnHand
	 * 		Flags  -> ()
	 */
	void ABP_BaseWeapon_C::OnRep_bOnHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bOnHand");
		
		ABP_BaseWeapon_C_OnRep_bOnHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bDefense
	 * 		Flags  -> ()
	 */
	void ABP_BaseWeapon_C::OnRep_bDefense()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bDefense");
		
		ABP_BaseWeapon_C_OnRep_bDefense_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.Mult_SetOnHandAndOnRep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnHand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseWeapon_C::Mult_SetOnHandAndOnRep(bool bOnHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.Mult_SetOnHandAndOnRep");
		
		ABP_BaseWeapon_C_Mult_SetOnHandAndOnRep_Params params {};
		params.bOnHand = bOnHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_BulletNum
	 * 		Flags  -> ()
	 */
	void ABP_BaseWeapon_C::OnRep_BulletNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_BaseWeapon.BP_BaseWeapon_C.OnRep_BulletNum");
		
		ABP_BaseWeapon_C_OnRep_BulletNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseWeapon.BP_BaseWeapon_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString ABP_BaseWeapon_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseWeapon.BP_BaseWeapon_C.GetModuleName");
		
		ABP_BaseWeapon_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_ExtraWeaponPart__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_BaseWeapon_C::OnRep_ExtraWeaponPart__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_ExtraWeaponPart__Overridden");
		
		ABP_BaseWeapon_C_OnRep_ExtraWeaponPart__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bDefense__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_BaseWeapon_C::OnRep_bDefense__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bDefense__Overridden");
		
		ABP_BaseWeapon_C_OnRep_bDefense__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_BulletNum__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_BaseWeapon_C::OnRep_BulletNum__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_BulletNum__Overridden");
		
		ABP_BaseWeapon_C_OnRep_BulletNum__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bOnHand__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_BaseWeapon_C::OnRep_bOnHand__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseWeapon.BP_BaseWeapon_C.OnRep_bOnHand__Overridden");
		
		ABP_BaseWeapon_C_OnRep_bOnHand__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseWeapon.BP_BaseWeapon_C.Mult_SetOnHandAndOnRep__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnHand                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseWeapon_C::Mult_SetOnHandAndOnRep__Overridden(bool bOnHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseWeapon.BP_BaseWeapon_C.Mult_SetOnHandAndOnRep__Overridden");
		
		ABP_BaseWeapon_C_Mult_SetOnHandAndOnRep__Overridden_Params params {};
		params.bOnHand = bOnHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseWeapon.BP_BaseWeapon_C.ExecuteUbergraph_BP_BaseWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseWeapon_C::ExecuteUbergraph_BP_BaseWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseWeapon.BP_BaseWeapon_C.ExecuteUbergraph_BP_BaseWeapon");
		
		ABP_BaseWeapon_C_ExecuteUbergraph_BP_BaseWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BaseWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BaseWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseWeapon.BP_BaseWeapon_C");
		return ptr;
	}

}


