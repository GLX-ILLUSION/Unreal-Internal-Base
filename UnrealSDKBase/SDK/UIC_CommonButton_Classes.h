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
	 * WidgetBlueprintGeneratedClass UIC_CommonButton.UIC_CommonButton_C
	 * Size -> 0x0020 (FullSize[0x0C78] - InheritedSize[0x0C58])
	 */
	class UUIC_CommonButton_C : public UCustomCommonButtonBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C58(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                Name;                                                    // 0x0C60(0x0018) Edit, BlueprintVisible

	public:
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UIC_CommonButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
