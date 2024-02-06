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
	 * 		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapIdentityError                            ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMagicLeapIdentityAttribute>         AttributeValue                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapIdentity::RequestIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute> AttributeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature");
		
		UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params params {};
		params.ResultCode = ResultCode;
		params.AttributeValue = AttributeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EMagicLeapIdentityKey>                      RequestedAttributeList                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValueAsync(TArray<EMagicLeapIdentityKey> RequestedAttributeList, const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync");
		
		UMagicLeapIdentity_RequestAttributeValueAsync_Params params {};
		params.RequestedAttributeList = RequestedAttributeList;
		params.ResultDelegate = ResultDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EMagicLeapIdentityKey>                      RequestedAttributeList                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMagicLeapIdentityAttribute>         RequestedAttributeValues                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValue(TArray<EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue");
		
		UMagicLeapIdentity_RequestAttributeValue_Params params {};
		params.RequestedAttributeList = RequestedAttributeList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequestedAttributeValues != nullptr)
			*RequestedAttributeValues = params.RequestedAttributeValues;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapIdentityError                            ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EMagicLeapIdentityKey>                      AttributesUpdatedSuccessfully                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapIdentity::ModifyIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AttributesUpdatedSuccessfully)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature");
		
		UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params params {};
		params.ResultCode = ResultCode;
		params.AttributesUpdatedSuccessfully = AttributesUpdatedSuccessfully;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapIdentity::GetAllAvailableAttributesAsync(const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync");
		
		UMagicLeapIdentity_GetAllAvailableAttributesAsync_Params params {};
		params.ResultDelegate = ResultDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EMagicLeapIdentityKey>                      AvailableAttributes                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	EMagicLeapIdentityError UMagicLeapIdentity::GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>* AvailableAttributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes");
		
		UMagicLeapIdentity_GetAllAvailableAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableAttributes != nullptr)
			*AvailableAttributes = params.AvailableAttributes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapIdentityError                            ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EMagicLeapIdentityKey>                      AvailableAttributes                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapIdentity::AvailableIdentityAttributesDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AvailableAttributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature");
		
		UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params params {};
		params.ResultCode = ResultCode;
		params.AvailableAttributes = AvailableAttributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapIdentity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapIdentity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapIdentity.MagicLeapIdentity");
		return ptr;
	}

}


