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
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               recenterMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::SetReorientHMDOnControllerRecenter(bool recenterMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter");
		
		UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Params params {};
		params.recenterMode = recenterMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     PosScale3D                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::SetPositionScale3D(const struct FVector& PosScale3D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D");
		
		UOculusFunctionLibrary_SetPositionScale3D_Params params {};
		params.PosScale3D = PosScale3D;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               GuardianVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::SetGuardianVisibility(bool GuardianVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility");
		
		UOculusFunctionLibrary_SetGuardianVisibility_Params params {};
		params.GuardianVisible = GuardianVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFixedFoveatedRenderingLevel                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isDynamic                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel");
		
		UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Params params {};
		params.Level = Level;
		params.isDynamic = isDynamic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RequestedFrequency                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::SetDisplayFrequency(float RequestedFrequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency");
		
		UOculusFunctionLibrary_SetDisplayFrequency_Params params {};
		params.RequestedFrequency = RequestedFrequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CPULevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GPULevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels");
		
		UOculusFunctionLibrary_SetCPUAndGPULevels_Params params {};
		params.CPULevel = CPULevel;
		params.GPULevel = GPULevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ColorScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ColorOffset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bApplyToAllLayers                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::SetColorScaleAndOffset(const struct FLinearColor& ColorScale, const struct FLinearColor& ColorOffset, bool bApplyToAllLayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset");
		
		UOculusFunctionLibrary_SetColorScaleAndOffset_Params params {};
		params.ColorScale = ColorScale;
		params.ColorOffset = ColorOffset;
		params.bApplyToAllLayers = bApplyToAllLayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetClientColorDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EColorSpace                                        ColorSpace                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::SetClientColorDesc(EColorSpace ColorSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetClientColorDesc");
		
		UOculusFunctionLibrary_SetClientColorDesc_Params params {};
		params.ColorSpace = ColorSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    BaseRot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PosOffset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrientPositionSelector                            Options                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, EOrientPositionSelector Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset");
		
		UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params params {};
		params.BaseRot = BaseRot;
		params.PosOffset = PosOffset;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BaseOffsetInMeters                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrientPositionSelector                            Options                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, EOrientPositionSelector Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters");
		
		UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params params {};
		params.Rotation = Rotation;
		params.BaseOffsetInMeters = BaseOffsetInMeters;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
	 * 		Flags  -> ()
	 */
	bool UOculusFunctionLibrary::IsGuardianDisplayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed");
		
		UOculusFunctionLibrary_IsGuardianDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured
	 * 		Flags  -> ()
	 */
	bool UOculusFunctionLibrary::IsGuardianConfigured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured");
		
		UOculusFunctionLibrary_IsGuardianConfigured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETrackedDeviceType                                 DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOculusFunctionLibrary::IsDeviceTracked(ETrackedDeviceType DeviceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked");
		
		UOculusFunctionLibrary_IsDeviceTracked_Params params {};
		params.DeviceType = DeviceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
	 * 		Flags  -> ()
	 */
	bool UOculusFunctionLibrary::HasSystemOverlayPresent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent");
		
		UOculusFunctionLibrary_HasSystemOverlayPresent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.HasInputFocus
	 * 		Flags  -> ()
	 */
	bool UOculusFunctionLibrary::HasInputFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HasInputFocus");
		
		UOculusFunctionLibrary_HasInputFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetUserProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHmdUserProfile                             Profile                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UOculusFunctionLibrary::GetUserProfile(struct FHmdUserProfile* Profile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetUserProfile");
		
		UOculusFunctionLibrary_GetUserProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Profile != nullptr)
			*Profile = params.Profile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetSystemHmd3DofModeEnabled
	 * 		Flags  -> ()
	 */
	bool UOculusFunctionLibrary::GetSystemHmd3DofModeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetSystemHmd3DofModeEnabled");
		
		UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AngularAcceleration                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinearAcceleration                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     AngularVelocity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinearVelocity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeInSeconds                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETrackedDeviceType                                 DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::GetRawSensorData(struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds, ETrackedDeviceType DeviceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetRawSensorData");
		
		UOculusFunctionLibrary_GetRawSensorData_Params params {};
		params.DeviceType = DeviceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AngularAcceleration != nullptr)
			*AngularAcceleration = params.AngularAcceleration;
		if (LinearAcceleration != nullptr)
			*LinearAcceleration = params.LinearAcceleration;
		if (AngularVelocity != nullptr)
			*AngularVelocity = params.AngularVelocity;
		if (LinearVelocity != nullptr)
			*LinearVelocity = params.LinearVelocity;
		if (TimeInSeconds != nullptr)
			*TimeInSeconds = params.TimeInSeconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    DeviceRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DevicePosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NeckPosition                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseOrienationForPlayerCamera                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePositionForPlayerCamera                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PositionScale                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPose");
		
		UOculusFunctionLibrary_GetPose_Params params {};
		params.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
		params.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
		params.PositionScale = PositionScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceRotation != nullptr)
			*DeviceRotation = params.DeviceRotation;
		if (DevicePosition != nullptr)
			*DevicePosition = params.DevicePosition;
		if (NeckPosition != nullptr)
			*NeckPosition = params.NeckPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBoundaryType                                      BoundaryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuardianTestResult UOculusFunctionLibrary::GetPointGuardianIntersection(const struct FVector& Point, EBoundaryType BoundaryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection");
		
		UOculusFunctionLibrary_GetPointGuardianIntersection_Params params {};
		params.Point = Point;
		params.BoundaryType = BoundaryType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UOculusFunctionLibrary::GetPlayAreaTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform");
		
		UOculusFunctionLibrary_GetPlayAreaTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETrackedDeviceType                                 DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBoundaryType                                      BoundaryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuardianTestResult UOculusFunctionLibrary::GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection");
		
		UOculusFunctionLibrary_GetNodeGuardianIntersection_Params params {};
		params.DeviceType = DeviceType;
		params.BoundaryType = BoundaryType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetHmdColorDesc
	 * 		Flags  -> ()
	 */
	EColorSpace UOculusFunctionLibrary::GetHmdColorDesc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetHmdColorDesc");
		
		UOculusFunctionLibrary_GetHmdColorDesc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBoundaryType                                      BoundaryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               UsePawnSpace                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UOculusFunctionLibrary::GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints");
		
		UOculusFunctionLibrary_GetGuardianPoints_Params params {};
		params.BoundaryType = BoundaryType;
		params.UsePawnSpace = UsePawnSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBoundaryType                                      BoundaryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UOculusFunctionLibrary::GetGuardianDimensions(EBoundaryType BoundaryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions");
		
		UOculusFunctionLibrary_GetGuardianDimensions_Params params {};
		params.BoundaryType = BoundaryType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGPUAvailable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GPUUtilization                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization");
		
		UOculusFunctionLibrary_GetGPUUtilization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsGPUAvailable != nullptr)
			*IsGPUAvailable = params.IsGPUAvailable;
		if (GPUUtilization != nullptr)
			*GPUUtilization = params.GPUUtilization;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
	 * 		Flags  -> ()
	 */
	float UOculusFunctionLibrary::GetGPUFrameTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime");
		
		UOculusFunctionLibrary_GetGPUFrameTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel
	 * 		Flags  -> ()
	 */
	EFixedFoveatedRenderingLevel UOculusFunctionLibrary::GetFixedFoveatedRenderingLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel");
		
		UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetDeviceType
	 * 		Flags  -> ()
	 */
	EOculusDeviceType UOculusFunctionLibrary::GetDeviceType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetDeviceType");
		
		UOculusFunctionLibrary_GetDeviceType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetDeviceName
	 * 		Flags  -> ()
	 */
	class FString UOculusFunctionLibrary::GetDeviceName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetDeviceName");
		
		UOculusFunctionLibrary_GetDeviceName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
	 * 		Flags  -> ()
	 */
	float UOculusFunctionLibrary::GetCurrentDisplayFrequency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency");
		
		UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    OutRot                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutPosOffset                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset");
		
		UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRot != nullptr)
			*OutRot = params.OutRot;
		if (OutPosOffset != nullptr)
			*OutPosOffset = params.OutPosOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutBaseOffsetInMeters                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters");
		
		UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRotation != nullptr)
			*OutRotation = params.OutRotation;
		if (OutBaseOffsetInMeters != nullptr)
			*OutBaseOffsetInMeters = params.OutBaseOffsetInMeters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
	 * 		Flags  -> ()
	 */
	TArray<float> UOculusFunctionLibrary::GetAvailableDisplayFrequencies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies");
		
		UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPositionTracking                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::EnablePositionTracking(bool bPositionTracking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking");
		
		UOculusFunctionLibrary_EnablePositionTracking_Params params {};
		params.bPositionTracking = bPositionTracking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOrientationTracking                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::EnableOrientationTracking(bool bOrientationTracking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking");
		
		UOculusFunctionLibrary_EnableOrientationTracking_Params params {};
		params.bOrientationTracking = bOrientationTracking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
	 * 		Flags  -> ()
	 */
	void UOculusFunctionLibrary::ClearLoadingSplashScreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens");
		
		UOculusFunctionLibrary_ClearLoadingSplashScreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TranslationInMeters                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   SizeInMeters                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    DeltaRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearBeforeAdd                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusFunctionLibrary::AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen");
		
		UOculusFunctionLibrary_AddLoadingSplashScreen_Params params {};
		params.Texture = Texture;
		params.TranslationInMeters = TranslationInMeters;
		params.Rotation = Rotation;
		params.SizeInMeters = SizeInMeters;
		params.DeltaRotation = DeltaRotation;
		params.bClearBeforeAdd = bClearBeforeAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusHMD.OculusFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusHMDRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusHMDRuntimeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusHMD.OculusHMDRuntimeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusResourceHolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusResourceHolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusHMD.OculusResourceHolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusSceneCaptureCubemap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusSceneCaptureCubemap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusHMD.OculusSceneCaptureCubemap");
		return ptr;
	}

}


