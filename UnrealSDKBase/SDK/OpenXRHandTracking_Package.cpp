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
	 * 		Name   -> PredefinedFunction ULiveLinkOpenXRHandTrackingSourceFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkOpenXRHandTrackingSourceFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenXRHandTrackingLiveLinkRemapAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset");
		return ptr;
	}

}


