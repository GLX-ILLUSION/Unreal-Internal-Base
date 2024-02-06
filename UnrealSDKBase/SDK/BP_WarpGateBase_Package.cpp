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
	 * 		Name   -> LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.Mult_BeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WarpGateBase_C::Mult_BeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.Mult_BeginPlay");
		
		ABP_WarpGateBase_C_Mult_BeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.Mult_OpenWarpGate
	 * 		Flags  -> ()
	 */
	void ABP_WarpGateBase_C::Mult_OpenWarpGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.Mult_OpenWarpGate");
		
		ABP_WarpGateBase_C_Mult_OpenWarpGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.OnOverlapWith
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WarpGateBase_C::OnOverlapWith(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.OnOverlapWith");
		
		ABP_WarpGateBase_C_OnOverlapWith_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.GetInteractionFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_WarpGateBase_C::GetInteractionFunctions(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.GetInteractionFunctions");
		
		ABP_WarpGateBase_C_GetInteractionFunctions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WarpGateBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.ReceiveBeginPlay");
		
		ABP_WarpGateBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.Mult_Escape
	 * 		Flags  -> ()
	 */
	void ABP_WarpGateBase_C::Mult_Escape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.Mult_Escape");
		
		ABP_WarpGateBase_C_Mult_Escape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.OnRep_IsOpen
	 * 		Flags  -> ()
	 */
	void ABP_WarpGateBase_C::OnRep_IsOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.OnRep_IsOpen");
		
		ABP_WarpGateBase_C_OnRep_IsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_WarpGateBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_WarpGateBase.BP_WarpGateBase_C.ReceiveEndPlay");
		
		ABP_WarpGateBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.GetInteractionFunctions__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       IdToFunc                                                   (Parm, OutParm)
	 */
	void ABP_WarpGateBase_C::GetInteractionFunctions__Overridden(TMap<int32_t, class FString>* IdToFunc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.GetInteractionFunctions__Overridden");
		
		ABP_WarpGateBase_C_GetInteractionFunctions__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdToFunc != nullptr)
			*IdToFunc = params.IdToFunc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.GetMenuName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_WarpGateBase_C::GetMenuName(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.GetMenuName");
		
		ABP_WarpGateBase_C_GetMenuName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString ABP_WarpGateBase_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.GetModuleName");
		
		ABP_WarpGateBase_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.OnOverlapWith__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WarpGateBase_C::OnOverlapWith__Overridden(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.OnOverlapWith__Overridden");
		
		ABP_WarpGateBase_C_OnOverlapWith__Overridden_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.OnRep_IsOpen__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_WarpGateBase_C::OnRep_IsOpen__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.OnRep_IsOpen__Overridden");
		
		ABP_WarpGateBase_C_OnRep_IsOpen__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.BndEvt__BP_WarpGateBase_CheckBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_WarpGateBase_C::BndEvt__BP_WarpGateBase_CheckBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.BndEvt__BP_WarpGateBase_CheckBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_WarpGateBase_C_BndEvt__BP_WarpGateBase_CheckBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.Server_OpenWarpGate
	 * 		Flags  -> ()
	 */
	void ABP_WarpGateBase_C::Server_OpenWarpGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.Server_OpenWarpGate");
		
		ABP_WarpGateBase_C_Server_OpenWarpGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.Mult_OpenWarpGate__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_WarpGateBase_C::Mult_OpenWarpGate__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.Mult_OpenWarpGate__Overridden");
		
		ABP_WarpGateBase_C_Mult_OpenWarpGate__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.Mult_Escape__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_WarpGateBase_C::Mult_Escape__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.Mult_Escape__Overridden");
		
		ABP_WarpGateBase_C_Mult_Escape__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.Mult_BeginPlay__Overridden
	 * 		Flags  -> ()
	 */
	void ABP_WarpGateBase_C::Mult_BeginPlay__Overridden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.Mult_BeginPlay__Overridden");
		
		ABP_WarpGateBase_C_Mult_BeginPlay__Overridden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WarpGateBase.BP_WarpGateBase_C.ExecuteUbergraph_BP_WarpGateBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WarpGateBase_C::ExecuteUbergraph_BP_WarpGateBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WarpGateBase.BP_WarpGateBase_C.ExecuteUbergraph_BP_WarpGateBase");
		
		ABP_WarpGateBase_C_ExecuteUbergraph_BP_WarpGateBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WarpGateBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WarpGateBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WarpGateBase.BP_WarpGateBase_C");
		return ptr;
	}

}


