/**
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
	 * 		Name   -> PredefinedFunction UGE_KnockedBack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_KnockedBack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_KnockedBack.GE_KnockedBack_C");
		return ptr;
	}

}


