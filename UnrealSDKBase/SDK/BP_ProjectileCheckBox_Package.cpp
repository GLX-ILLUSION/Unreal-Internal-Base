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
	 * 		Name   -> Function BP_ProjectileCheckBox.BP_ProjectileCheckBox_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_ProjectileCheckBox_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileCheckBox.BP_ProjectileCheckBox_C.ReceiveBeginPlay");
		
		UBP_ProjectileCheckBox_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileCheckBox.BP_ProjectileCheckBox_C.ExecuteUbergraph_BP_ProjectileCheckBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProjectileCheckBox_C::ExecuteUbergraph_BP_ProjectileCheckBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileCheckBox.BP_ProjectileCheckBox_C.ExecuteUbergraph_BP_ProjectileCheckBox");
		
		UBP_ProjectileCheckBox_C_ExecuteUbergraph_BP_ProjectileCheckBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProjectileCheckBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProjectileCheckBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileCheckBox.BP_ProjectileCheckBox_C");
		return ptr;
	}

}


