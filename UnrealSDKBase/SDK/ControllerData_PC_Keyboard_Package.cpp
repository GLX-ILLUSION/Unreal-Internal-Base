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
	 * 		Name   -> PredefinedFunction UControllerData_PC_Keyboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControllerData_PC_Keyboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControllerData_PC_Keyboard.ControllerData_PC_Keyboard_C");
		return ptr;
	}

}


