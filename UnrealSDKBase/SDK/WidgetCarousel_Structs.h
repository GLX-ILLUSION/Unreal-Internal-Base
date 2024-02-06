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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
	 * Size -> 0x07F0 (FullSize[0x07F8] - InheritedSize[0x0008])
	 */
	struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HighlightBrush;                                          // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        LeftButtonStyle;                                         // 0x0090(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        CenterButtonStyle;                                       // 0x0308(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        RightButtonStyle;                                        // 0x0580(0x0278) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
	 * Size -> 0x0388 (FullSize[0x0390] - InheritedSize[0x0008])
	 */
	struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        InnerButtonStyle;                                        // 0x0008(0x0278) NativeAccessSpecifierPublic
		struct FSlateBrush                                         NavigationButtonLeftImage;                               // 0x0280(0x0088) NativeAccessSpecifierPublic
		struct FSlateBrush                                         NavigationButtonRightImage;                              // 0x0308(0x0088) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
