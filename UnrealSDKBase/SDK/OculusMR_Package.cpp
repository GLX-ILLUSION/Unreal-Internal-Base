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
	 * 		Name   -> PredefinedFunction AOculusMR_CastingCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOculusMR_CastingCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMR_CastingCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOculusMR_PlaneMeshTriangle>         Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOculusMR_PlaneMeshComponent::SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles");
		
		UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Params params {};
		params.Triangles = Triangles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
	 * 		Flags  -> ()
	 */
	void UOculusMR_PlaneMeshComponent::ClearCustomMeshTriangles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles");
		
		UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOculusMR_PlaneMeshTriangle>         Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_PlaneMeshComponent::AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles");
		
		UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Params params {};
		params.Triangles = Triangles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusMR_PlaneMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusMR_PlaneMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMR_PlaneMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_Settings.SetIsCasting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_Settings::SetIsCasting(bool Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetIsCasting");
		
		UOculusMR_Settings_SetIsCasting_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_Settings.SetCompositionMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusMR_CompositionMethod                        Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_Settings::SetCompositionMethod(EOculusMR_CompositionMethod Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetCompositionMethod");
		
		UOculusMR_Settings_SetCompositionMethod_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_Settings.SetCapturingCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusMR_CameraDeviceEnum                         Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_Settings::SetCapturingCamera(EOculusMR_CameraDeviceEnum Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetCapturingCamera");
		
		UOculusMR_Settings_SetCapturingCamera_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_Settings.SaveToIni
	 * 		Flags  -> ()
	 */
	void UOculusMR_Settings::SaveToIni()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SaveToIni");
		
		UOculusMR_Settings_SaveToIni_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_Settings.LoadFromIni
	 * 		Flags  -> ()
	 */
	void UOculusMR_Settings::LoadFromIni()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.LoadFromIni");
		
		UOculusMR_Settings_LoadFromIni_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_Settings.GetIsCasting
	 * 		Flags  -> ()
	 */
	bool UOculusMR_Settings::GetIsCasting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetIsCasting");
		
		UOculusMR_Settings_GetIsCasting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_Settings.GetCompositionMethod
	 * 		Flags  -> ()
	 */
	EOculusMR_CompositionMethod UOculusMR_Settings::GetCompositionMethod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetCompositionMethod");
		
		UOculusMR_Settings_GetCompositionMethod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_Settings.GetCapturingCamera
	 * 		Flags  -> ()
	 */
	EOculusMR_CameraDeviceEnum UOculusMR_Settings::GetCapturingCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetCapturingCamera");
		
		UOculusMR_Settings_GetCapturingCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
	 * 		Flags  -> ()
	 */
	int32_t UOculusMR_Settings::GetBindToTrackedCameraIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex");
		
		UOculusMR_Settings_GetBindToTrackedCameraIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTrackedCameraIndex                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_Settings::BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable");
		
		UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Params params {};
		params.InTrackedCameraIndex = InTrackedCameraIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusMR_Settings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusMR_Settings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMR_Settings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusMR_State.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusMR_State::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMR_State");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOculusMRFunctionLibrary::SetTrackingReferenceComponent(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent");
		
		UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMRFunctionLibrary.SetMrcScalingFactor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScalingFactor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOculusMRFunctionLibrary::SetMrcScalingFactor(float ScalingFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.SetMrcScalingFactor");
		
		UOculusMRFunctionLibrary_SetMrcScalingFactor_Params params {};
		params.ScalingFactor = ScalingFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled
	 * 		Flags  -> ()
	 */
	bool UOculusMRFunctionLibrary::IsMrcEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled");
		
		UOculusMRFunctionLibrary_IsMrcEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMRFunctionLibrary.IsMrcActive
	 * 		Flags  -> ()
	 */
	bool UOculusMRFunctionLibrary::IsMrcActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.IsMrcActive");
		
		UOculusMRFunctionLibrary_IsMrcActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* UOculusMRFunctionLibrary::GetTrackingReferenceComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent");
		
		UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
	 * 		Flags  -> ()
	 */
	class UOculusMR_Settings* UOculusMRFunctionLibrary::GetOculusMRSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings");
		
		UOculusMRFunctionLibrary_GetOculusMRSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusMR.OculusMRFunctionLibrary.GetMrcScalingFactor
	 * 		Flags  -> ()
	 */
	float UOculusMRFunctionLibrary::GetMrcScalingFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.GetMrcScalingFactor");
		
		UOculusMRFunctionLibrary_GetMrcScalingFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusMRFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusMRFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMRFunctionLibrary");
		return ptr;
	}

}


