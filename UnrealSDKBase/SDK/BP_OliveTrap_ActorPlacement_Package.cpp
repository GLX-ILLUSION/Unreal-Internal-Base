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
	 * 		Name   -> PredefinedFunction ABP_OliveTrap_ActorPlacement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OliveTrap_ActorPlacement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OliveTrap_ActorPlacement.BP_OliveTrap_ActorPlacement_C");
		return ptr;
	}

}


