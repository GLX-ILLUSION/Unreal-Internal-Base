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
	 * 		Name   -> LuaFunction BP_EquipInfoBillboard.BP_EquipInfoBillboard_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_EquipInfoBillboard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_EquipInfoBillboard.BP_EquipInfoBillboard_C.ReceiveBeginPlay");
		
		UBP_EquipInfoBillboard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EquipInfoBillboard.BP_EquipInfoBillboard_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString UBP_EquipInfoBillboard_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EquipInfoBillboard.BP_EquipInfoBillboard_C.GetModuleName");
		
		UBP_EquipInfoBillboard_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EquipInfoBillboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EquipInfoBillboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EquipInfoBillboard.BP_EquipInfoBillboard_C");
		return ptr;
	}

}


