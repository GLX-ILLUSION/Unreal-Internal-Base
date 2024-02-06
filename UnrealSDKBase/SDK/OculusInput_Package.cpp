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
	 * 		Name   -> PredefinedFunction UOculusHandComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusHandComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusInput.OculusHandComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusInput.OculusInputFunctionLibrary.IsPointerPoseValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusHandType                                    DeviceHand                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerIndex                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOculusInputFunctionLibrary::IsPointerPoseValid(EOculusHandType DeviceHand, int32_t ControllerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusInput.OculusInputFunctionLibrary.IsPointerPoseValid");
		
		UOculusInputFunctionLibrary_IsPointerPoseValid_Params params {};
		params.DeviceHand = DeviceHand;
		params.ControllerIndex = ControllerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusInput.OculusInputFunctionLibrary.IsHandTrackingEnabled
	 * 		Flags  -> ()
	 */
	bool UOculusInputFunctionLibrary::IsHandTrackingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusInput.OculusInputFunctionLibrary.IsHandTrackingEnabled");
		
		UOculusInputFunctionLibrary_IsHandTrackingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusInput.OculusInputFunctionLibrary.InitializeHandPhysics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusHandType                                    SkeletonType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkinnedMeshComponent*                       HandComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WorldToMeters                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FOculusCapsuleCollider> UOculusInputFunctionLibrary::InitializeHandPhysics(EOculusHandType SkeletonType, class USkinnedMeshComponent* HandComponent, float WorldToMeters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusInput.OculusInputFunctionLibrary.InitializeHandPhysics");
		
		UOculusInputFunctionLibrary_InitializeHandPhysics_Params params {};
		params.SkeletonType = SkeletonType;
		params.HandComponent = HandComponent;
		params.WorldToMeters = WorldToMeters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusInput.OculusInputFunctionLibrary.GetTrackingConfidence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusHandType                                    DeviceHand                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerIndex                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ETrackingConfidence UOculusInputFunctionLibrary::GetTrackingConfidence(EOculusHandType DeviceHand, int32_t ControllerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusInput.OculusInputFunctionLibrary.GetTrackingConfidence");
		
		UOculusInputFunctionLibrary_GetTrackingConfidence_Params params {};
		params.DeviceHand = DeviceHand;
		params.ControllerIndex = ControllerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusInput.OculusInputFunctionLibrary.GetPointerPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusHandType                                    DeviceHand                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerIndex                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UOculusInputFunctionLibrary::GetPointerPose(EOculusHandType DeviceHand, int32_t ControllerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusInput.OculusInputFunctionLibrary.GetPointerPose");
		
		UOculusInputFunctionLibrary_GetPointerPose_Params params {};
		params.DeviceHand = DeviceHand;
		params.ControllerIndex = ControllerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusInput.OculusInputFunctionLibrary.GetHandSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               HandSkeletalMesh                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOculusHandType                                    SkeletonType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOculusHandType                                    MeshType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WorldToMeters                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOculusInputFunctionLibrary::GetHandSkeletalMesh(class USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, float WorldToMeters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusInput.OculusInputFunctionLibrary.GetHandSkeletalMesh");
		
		UOculusInputFunctionLibrary_GetHandSkeletalMesh_Params params {};
		params.HandSkeletalMesh = HandSkeletalMesh;
		params.SkeletonType = SkeletonType;
		params.MeshType = MeshType;
		params.WorldToMeters = WorldToMeters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusInput.OculusInputFunctionLibrary.GetHandScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusHandType                                    DeviceHand                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerIndex                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UOculusInputFunctionLibrary::GetHandScale(EOculusHandType DeviceHand, int32_t ControllerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusInput.OculusInputFunctionLibrary.GetHandScale");
		
		UOculusInputFunctionLibrary_GetHandScale_Params params {};
		params.DeviceHand = DeviceHand;
		params.ControllerIndex = ControllerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusInput.OculusInputFunctionLibrary.GetDominantHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControllerIndex                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOculusHandType UOculusInputFunctionLibrary::GetDominantHand(int32_t ControllerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusInput.OculusInputFunctionLibrary.GetDominantHand");
		
		UOculusInputFunctionLibrary_GetDominantHand_Params params {};
		params.ControllerIndex = ControllerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusInput.OculusInputFunctionLibrary.GetBoneRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusHandType                                    DeviceHand                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBone                                              BoneId                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerIndex                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FQuat UOculusInputFunctionLibrary::GetBoneRotation(EOculusHandType DeviceHand, EBone BoneId, int32_t ControllerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusInput.OculusInputFunctionLibrary.GetBoneRotation");
		
		UOculusInputFunctionLibrary_GetBoneRotation_Params params {};
		params.DeviceHand = DeviceHand;
		params.BoneId = BoneId;
		params.ControllerIndex = ControllerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusInput.OculusInputFunctionLibrary.GetBoneName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBone                                              BoneId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UOculusInputFunctionLibrary::GetBoneName(EBone BoneId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusInput.OculusInputFunctionLibrary.GetBoneName");
		
		UOculusInputFunctionLibrary_GetBoneName_Params params {};
		params.BoneId = BoneId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusInputFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusInputFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusInput.OculusInputFunctionLibrary");
		return ptr;
	}

}


