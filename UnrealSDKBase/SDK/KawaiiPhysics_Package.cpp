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
	 * 		Name   -> PredefinedFunction UKawaiiPhysicsLimitsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKawaiiPhysicsLimitsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset");
		return ptr;
	}

}


