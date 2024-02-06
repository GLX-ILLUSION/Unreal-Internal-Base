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
	 * 		Name   -> PredefinedFunction UTestCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestCameraShake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.TestCameraShake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.SimpleCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstantCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.ConstantCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositeCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositeCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.CompositeCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefaultCameraShakeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultCameraShakeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.DefaultCameraShakeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ShakeClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraShakeSourceComponent*                 SourceComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECameraShakePlaySpace                              PlaySpace                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    UserPlaySpaceRot                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource");
		
		UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params params {};
		params.PlayerCameraManager = PlayerCameraManager;
		params.ShakeClass = ShakeClass;
		params.SourceComponent = SourceComponent;
		params.Scale = Scale;
		params.PlaySpace = PlaySpace;
		params.UserPlaySpaceRot = UserPlaySpaceRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ShakeClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECameraShakePlaySpace                              PlaySpace                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    UserPlaySpaceRot                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake");
		
		UMatineeCameraShake_StartMatineeCameraShake_Params params {};
		params.PlayerCameraManager = PlayerCameraManager;
		params.ShakeClass = ShakeClass;
		params.Scale = Scale;
		params.PlaySpace = PlaySpace;
		params.UserPlaySpaceRot = UserPlaySpaceRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bImmediately                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatineeCameraShake::ReceiveStopShake(bool bImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.ReceiveStopShake");
		
		UMatineeCameraShake_ReceiveStopShake_Params params {};
		params.bImmediately = bImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatineeCameraShake::ReceivePlayShake(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.ReceivePlayShake");
		
		UMatineeCameraShake_ReceivePlayShake_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
	 * 		Flags  -> ()
	 */
	bool UMatineeCameraShake::ReceiveIsFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished");
		
		UMatineeCameraShake_ReceiveIsFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMinimalViewInfo                            POV                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FMinimalViewInfo                            ModifiedPOV                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UMatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake");
		
		UMatineeCameraShake_BlueprintUpdateCameraShake_Params params {};
		params.DeltaTime = DeltaTime;
		params.Alpha = Alpha;
		params.POV = POV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedPOV != nullptr)
			*ModifiedPOV = params.ModifiedPOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatineeCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatineeCameraShake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.MatineeCameraShake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatineeCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatineeCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.MatineeCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMatineeCameraShakeEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMatineeCameraShakeEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCameraShakeBase*                            CameraShake                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMatineeCameraShake* UMatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake");
		
		UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params params {};
		params.CameraShake = CameraShake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatineeCameraShakeFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatineeCameraShakeFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.MatineeCameraShakeFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerlinNoiseCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerlinNoiseCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.PerlinNoiseCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaveOscillatorCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaveOscillatorCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.WaveOscillatorCameraShakePattern");
		return ptr;
	}

}


