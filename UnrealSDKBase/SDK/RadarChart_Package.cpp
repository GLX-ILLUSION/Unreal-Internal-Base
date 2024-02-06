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
	 * 		Name   -> Function RadarChart.RadarChart.SetValuesForLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      ValueLayerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      InValues                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void URadarChart::SetValuesForLayer(unsigned char ValueLayerIndex, TArray<float> InValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChart.SetValuesForLayer");
		
		URadarChart_SetValuesForLayer_Params params {};
		params.ValueLayerIndex = ValueLayerIndex;
		params.InValues = InValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarChart.RadarChart.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      ValueLayerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ValueIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadarChart::SetValue(unsigned char ValueLayerIndex, unsigned char ValueIndex, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChart.SetValue");
		
		URadarChart_SetValue_Params params {};
		params.ValueLayerIndex = ValueLayerIndex;
		params.ValueIndex = ValueIndex;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarChart.RadarChart.SetNormalizationScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadarChart::SetNormalizationScale(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChart.SetNormalizationScale");
		
		URadarChart_SetNormalizationScale_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarChart.RadarChart.RefreshValueLayers
	 * 		Flags  -> ()
	 */
	void URadarChart::RefreshValueLayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChart.RefreshValueLayers");
		
		URadarChart_RefreshValueLayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarChart.RadarChart.RefreshBase
	 * 		Flags  -> ()
	 */
	void URadarChart::RefreshBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChart.RefreshBase");
		
		URadarChart_RefreshBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarChart.RadarChart.Refresh
	 * 		Flags  -> ()
	 */
	void URadarChart::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChart.Refresh");
		
		URadarChart_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarChart.RadarChart.InvalidateMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRadarChartAppearance                       InAppearance                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void URadarChart::InvalidateMaterial(struct FRadarChartAppearance* InAppearance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChart.InvalidateMaterial");
		
		URadarChart_InvalidateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InAppearance != nullptr)
			*InAppearance = params.InAppearance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarChart.RadarChart.InvalidateAllMaterials
	 * 		Flags  -> ()
	 */
	void URadarChart::InvalidateAllMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChart.InvalidateAllMaterials");
		
		URadarChart_InvalidateAllMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarChart.RadarChart.ForceRebuild
	 * 		Flags  -> ()
	 */
	void URadarChart::ForceRebuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChart.ForceRebuild");
		
		URadarChart_ForceRebuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadarChart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadarChart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RadarChart.RadarChart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarChart.RadarChartSetValuesAnimated.SetValuesAnimated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URadarChart*                                 Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ValueLayer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      FPS                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEasingFunc                                        Ease                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadarChartSetValuesAnimated* URadarChartSetValuesAnimated::SetValuesAnimated(class URadarChart* Target, unsigned char ValueLayer, TArray<float> Values, float Duration, unsigned char FPS, EEasingFunc Ease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChartSetValuesAnimated.SetValuesAnimated");
		
		URadarChartSetValuesAnimated_SetValuesAnimated_Params params {};
		params.Target = Target;
		params.ValueLayer = ValueLayer;
		params.Values = Values;
		params.Duration = Duration;
		params.FPS = FPS;
		params.Ease = Ease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadarChartSetValuesAnimated.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadarChartSetValuesAnimated::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RadarChart.RadarChartSetValuesAnimated");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RadarChart.RadarChartSetNormalizationScaleAnimated.SetNormalizationScaleAnimated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URadarChart*                                 Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      FPS                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEasingFunc                                        Ease                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadarChartSetNormalizationScaleAnimated* URadarChartSetNormalizationScaleAnimated::SetNormalizationScaleAnimated(class URadarChart* Target, float NewScale, float Duration, unsigned char FPS, EEasingFunc Ease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadarChart.RadarChartSetNormalizationScaleAnimated.SetNormalizationScaleAnimated");
		
		URadarChartSetNormalizationScaleAnimated_SetNormalizationScaleAnimated_Params params {};
		params.Target = Target;
		params.NewScale = NewScale;
		params.Duration = Duration;
		params.FPS = FPS;
		params.Ease = Ease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadarChartSetNormalizationScaleAnimated.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadarChartSetNormalizationScaleAnimated::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RadarChart.RadarChartSetNormalizationScaleAnimated");
		return ptr;
	}

}


