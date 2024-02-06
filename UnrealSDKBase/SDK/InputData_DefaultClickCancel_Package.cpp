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
	 * 		Name   -> PredefinedFunction UInputData_DefaultClickCancel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputData_DefaultClickCancel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InputData_DefaultClickCancel.InputData_DefaultClickCancel_C");
		return ptr;
	}

}


