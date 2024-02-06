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
	 * 		Name   -> Function BPI_Combat.BPI_Combat_C.BPI_EndReduceMoveSpeed
	 * 		Flags  -> ()
	 */
	void UBPI_Combat_C::BPI_EndReduceMoveSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Combat.BPI_Combat_C.BPI_EndReduceMoveSpeed");
		
		UBPI_Combat_C_BPI_EndReduceMoveSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Combat.BPI_Combat_C.BPI_BeginReduceMoveSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Combat_C::BPI_BeginReduceMoveSpeed(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Combat.BPI_Combat_C.BPI_BeginReduceMoveSpeed");
		
		UBPI_Combat_C_BPI_BeginReduceMoveSpeed_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Combat.BPI_Combat_C.BPI_PlaySoundEventName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CfgId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Combat_C::BPI_PlaySoundEventName(const class FName& EventName, int32_t CfgId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Combat.BPI_Combat_C.BPI_PlaySoundEventName");
		
		UBPI_Combat_C_BPI_PlaySoundEventName_Params params {};
		params.EventName = EventName;
		params.CfgId = CfgId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Combat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Combat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Combat.BPI_Combat_C");
		return ptr;
	}

}


