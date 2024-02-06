#pragma once

/**
 * Name: GreedIsGood
 * Version: fodase
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class RadarChart.RadarChart
	 * Size -> 0x0978 (FullSize[0x0A80] - InheritedSize[0x0108])
	 */
	class URadarChart : public UWidget
	{
	public:
		struct FRadarChartStyle                                    ChartStyle;                                              // 0x0108(0x08E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FRadarChartValueLayer>                       ValueLayers;                                             // 0x09E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bWrapWithInvalidationPanel : 1;                          // 0x09F8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BG2C[0x7];                                   // 0x09F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0A00(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0A10(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x0A20(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0A30(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x0A40(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueSlide;                                            // 0x0A50(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1EM[0x20];                                  // 0x0A60(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValuesForLayer(unsigned char ValueLayerIndex, TArray<float> InValues);
		void SetValue(unsigned char ValueLayerIndex, unsigned char ValueIndex, float Value);
		void SetNormalizationScale(float InValue);
		void RefreshValueLayers();
		void RefreshBase();
		void Refresh();
		void InvalidateMaterial(struct FRadarChartAppearance* InAppearance);
		void InvalidateAllMaterials();
		void ForceRebuild();
		static UClass* StaticClass();
	};

	/**
	 * Class RadarChart.RadarChartSetValuesAnimated
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class URadarChartSetValuesAnimated : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_RXX3[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpdate;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URadarChartSetValuesAnimated* SetValuesAnimated(class URadarChart* Target, unsigned char ValueLayer, TArray<float> Values, float Duration, unsigned char FPS, EEasingFunc Ease);
		static UClass* StaticClass();
	};

	/**
	 * Class RadarChart.RadarChartSetNormalizationScaleAnimated
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class URadarChartSetNormalizationScaleAnimated : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_8M7P[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpdate;                                                // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URadarChartSetNormalizationScaleAnimated* SetNormalizationScaleAnimated(class URadarChart* Target, float NewScale, float Duration, unsigned char FPS, EEasingFunc Ease);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
