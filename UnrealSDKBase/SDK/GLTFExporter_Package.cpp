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
	 * 		Name   -> Function GLTFExporter.GLTFExporter.ExportToGLTF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGLTFExportOptions*                          Options                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGLTFExportMessages                         OutMessages                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UGLTFExporter::ExportToGLTF(class UObject* Object, const class FString& FilePath, class UGLTFExportOptions* Options, struct FGLTFExportMessages* OutMessages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFExporter.ExportToGLTF");
		
		UGLTFExporter_ExportToGLTF_Params params {};
		params.Object = Object;
		params.FilePath = FilePath;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMessages != nullptr)
			*OutMessages = params.OutMessages;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFAnimSequenceExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFAnimSequenceExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFAnimSequenceExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GLTFExporter.GLTFCameraActor.OnMouseY
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGLTFCameraActor::OnMouseY(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFCameraActor.OnMouseY");
		
		AGLTFCameraActor_OnMouseY_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GLTFExporter.GLTFCameraActor.OnMouseX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGLTFCameraActor::OnMouseX(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFCameraActor.OnMouseX");
		
		AGLTFCameraActor_OnMouseX_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GLTFExporter.GLTFCameraActor.OnMouseWheelAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGLTFCameraActor::OnMouseWheelAxis(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFCameraActor.OnMouseWheelAxis");
		
		AGLTFCameraActor_OnMouseWheelAxis_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGLTFCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGLTFCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GLTFExporter.GLTFExportOptions.ResetToDefault
	 * 		Flags  -> ()
	 */
	void UGLTFExportOptions::ResetToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFExportOptions.ResetToDefault");
		
		UGLTFExportOptions_ResetToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFExportOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFExportOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFExportOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GLTFExporter.GLTFHotspotActor.EndCursorOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         TouchedComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGLTFHotspotActor::EndCursorOver(class UPrimitiveComponent* TouchedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFHotspotActor.EndCursorOver");
		
		AGLTFHotspotActor_EndCursorOver_Params params {};
		params.TouchedComponent = TouchedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GLTFExporter.GLTFHotspotActor.Clicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         TouchedComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        ButtonPressed                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGLTFHotspotActor::Clicked(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFHotspotActor.Clicked");
		
		AGLTFHotspotActor_Clicked_Params params {};
		params.TouchedComponent = TouchedComponent;
		params.ButtonPressed = ButtonPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GLTFExporter.GLTFHotspotActor.BeginCursorOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         TouchedComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGLTFHotspotActor::BeginCursorOver(class UPrimitiveComponent* TouchedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFHotspotActor.BeginCursorOver");
		
		AGLTFHotspotActor_BeginCursorOver_Params params {};
		params.TouchedComponent = TouchedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGLTFHotspotActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGLTFHotspotActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFHotspotActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFLevelExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFLevelExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFLevelExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFLevelSequenceExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFLevelSequenceExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFLevelSequenceExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFLevelVariantSetsExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFLevelVariantSetsExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFLevelVariantSetsExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFMaterialExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFMaterialExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFMaterialExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFMaterialExportOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFMaterialExportOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFMaterialExportOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GLTFExporter.GLTFProxyOptions.ResetToDefault
	 * 		Flags  -> ()
	 */
	void UGLTFProxyOptions::ResetToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFProxyOptions.ResetToDefault");
		
		UGLTFProxyOptions_ResetToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFProxyOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFProxyOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFProxyOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFSkeletalMeshExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFSkeletalMeshExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFSkeletalMeshExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFStaticMeshExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFStaticMeshExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFStaticMeshExporter");
		return ptr;
	}

}


