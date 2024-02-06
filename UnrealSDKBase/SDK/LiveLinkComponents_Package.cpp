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
	 * 		Name   -> PredefinedFunction ULiveLinkComponentController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkComponentController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkComponentSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkComponentSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkControllerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkControllerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkControllerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkLightController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkLightController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkLightController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkTransformController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkTransformController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkTransformController");
		return ptr;
	}

}


