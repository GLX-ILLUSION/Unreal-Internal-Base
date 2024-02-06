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
	 * 		Name   -> LuaFunction BP_MedicineActor_Base.BP_MedicineActor_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MedicineActor_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_MedicineActor_Base.BP_MedicineActor_Base_C.ReceiveBeginPlay");
		
		ABP_MedicineActor_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MedicineActor_Base.BP_MedicineActor_Base_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString ABP_MedicineActor_Base_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MedicineActor_Base.BP_MedicineActor_Base_C.GetModuleName");
		
		ABP_MedicineActor_Base_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MedicineActor_Base.BP_MedicineActor_Base_C.OnRep_isVisible
	 * 		Flags  -> ()
	 */
	void ABP_MedicineActor_Base_C::OnRep_isVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MedicineActor_Base.BP_MedicineActor_Base_C.OnRep_isVisible");
		
		ABP_MedicineActor_Base_C_OnRep_isVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MedicineActor_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MedicineActor_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MedicineActor_Base.BP_MedicineActor_Base_C");
		return ptr;
	}

}


