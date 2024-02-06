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
	 * 		Name   -> PredefinedFunction UStyle_Map_ResetMaekButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyle_Map_ResetMaekButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Style_Map_ResetMaekButton.Style_Map_ResetMaekButton_C");
		return ptr;
	}

}


