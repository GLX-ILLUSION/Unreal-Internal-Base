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
	 * 		Name   -> LuaFunction BP_FSMSystem.BP_FSMSystem_C.LuaServerChangeState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      nextType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int64_t                                            intArg                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      actorArg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FSMSystem_C::LuaServerChangeState(unsigned char Type, unsigned char nextType, int64_t intArg, class AActor* actorArg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_FSMSystem.BP_FSMSystem_C.LuaServerChangeState");
		
		UBP_FSMSystem_C_LuaServerChangeState_Params params {};
		params.Type = Type;
		params.nextType = nextType;
		params.intArg = intArg;
		params.actorArg = actorArg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_FSMSystem.BP_FSMSystem_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FSMSystem_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_FSMSystem.BP_FSMSystem_C.ReceiveTick");
		
		UBP_FSMSystem_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_FSMSystem.BP_FSMSystem_C.LuaMultiCastChangeState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      nextType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int64_t                                            intArg                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      arctorArg                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FSMSystem_C::LuaMultiCastChangeState(unsigned char Type, unsigned char nextType, int64_t intArg, class AActor* arctorArg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_FSMSystem.BP_FSMSystem_C.LuaMultiCastChangeState");
		
		UBP_FSMSystem_C_LuaMultiCastChangeState_Params params {};
		params.Type = Type;
		params.nextType = nextType;
		params.intArg = intArg;
		params.arctorArg = arctorArg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_FSMSystem.BP_FSMSystem_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_FSMSystem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_FSMSystem.BP_FSMSystem_C.ReceiveBeginPlay");
		
		UBP_FSMSystem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> LuaFunction BP_FSMSystem.BP_FSMSystem_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_FSMSystem_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("LuaFunction BP_FSMSystem.BP_FSMSystem_C.ReceiveEndPlay");
		
		UBP_FSMSystem_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSMSystem.BP_FSMSystem_C.GetModuleName
	 * 		Flags  -> ()
	 */
	class FString UBP_FSMSystem_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSMSystem.BP_FSMSystem_C.GetModuleName");
		
		UBP_FSMSystem_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSMSystem.BP_FSMSystem_C.ReceiveTick__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FSMSystem_C::ReceiveTick__Overridden(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSMSystem.BP_FSMSystem_C.ReceiveTick__Overridden");
		
		UBP_FSMSystem_C_ReceiveTick__Overridden_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSMSystem.BP_FSMSystem_C.LuaServerChangeState__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      nextType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int64_t                                            intArg                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      actorArg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FSMSystem_C::LuaServerChangeState__Overridden(unsigned char Type, unsigned char nextType, int64_t intArg, class AActor* actorArg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSMSystem.BP_FSMSystem_C.LuaServerChangeState__Overridden");
		
		UBP_FSMSystem_C_LuaServerChangeState__Overridden_Params params {};
		params.Type = Type;
		params.nextType = nextType;
		params.intArg = intArg;
		params.actorArg = actorArg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSMSystem.BP_FSMSystem_C.LuaMultiCastChangeState__Overridden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      nextType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int64_t                                            intArg                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      arctorArg                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FSMSystem_C::LuaMultiCastChangeState__Overridden(unsigned char Type, unsigned char nextType, int64_t intArg, class AActor* arctorArg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSMSystem.BP_FSMSystem_C.LuaMultiCastChangeState__Overridden");
		
		UBP_FSMSystem_C_LuaMultiCastChangeState__Overridden_Params params {};
		params.Type = Type;
		params.nextType = nextType;
		params.intArg = intArg;
		params.arctorArg = arctorArg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FSMSystem.BP_FSMSystem_C.ExecuteUbergraph_BP_FSMSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FSMSystem_C::ExecuteUbergraph_BP_FSMSystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FSMSystem.BP_FSMSystem_C.ExecuteUbergraph_BP_FSMSystem");
		
		UBP_FSMSystem_C_ExecuteUbergraph_BP_FSMSystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FSMSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FSMSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FSMSystem.BP_FSMSystem_C");
		return ptr;
	}

}


