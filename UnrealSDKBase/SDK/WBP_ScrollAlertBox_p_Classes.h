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
	 * WidgetBlueprintGeneratedClass WBP_ScrollAlertBox_p.WBP_ScrollAlertBox_p_C
	 * Size -> 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
	 */
	class UWBP_ScrollAlertBox_p_C : public UUIPanel
	{
	public:
		class UCanvasPanel*                                        m_info;                                                  // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void CallLuaCommonUIFunction(int32_t InIndex);
		bool BP_OnHandleBackAction();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
