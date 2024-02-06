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
	 * WidgetBlueprintGeneratedClass UIC_CommonBigButton1_p.UIC_CommonBigButton1_p_C
	 * Size -> 0x0038 (FullSize[0x0C90] - InheritedSize[0x0C58])
	 */
	class UUIC_CommonBigButton1_p_C : public UCustomCommonButtonBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C58(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_412;                                               // 0x0C60(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNiagaraSystemWidget*                                NiagaraSystemWidget_181;                                 // 0x0C68(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonTextBlock*                                    Text_ActionName;                                         // 0x0C70(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Name;                                                    // 0x0C78(0x0018) Edit, BlueprintVisible

	public:
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UIC_CommonBigButton1_p(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
