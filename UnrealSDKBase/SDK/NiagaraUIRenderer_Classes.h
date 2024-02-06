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
	 * Class NiagaraUIRenderer.NiagaraSystemWidget
	 * Size -> 0x0088 (FullSize[0x0190] - InheritedSize[0x0108])
	 */
	class UNiagaraSystemWidget : public UWidget
	{
	public:
		class UNiagaraSystem*                                      NiagaraSystemReference;                                  // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                       // 0x0110(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       AutoActivate;                                            // 0x0160(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TickWhenPaused;                                          // 0x0161(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FakeDepthScale;                                          // 0x0162(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LERG[0x1];                                   // 0x0163(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FakeDepthScaleDistance;                                  // 0x0164(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowDebugSystemInWorld;                                  // 0x0168(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableWarnings;                                         // 0x0169(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASOY[0x16];                                  // 0x016A(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANiagaraUIActor*                                     NiagaraActor;                                            // 0x0180(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraUIComponent*                                 NiagaraComponent;                                        // 0x0188(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UpdateTickWhenPaused(bool NewTickWhenPaused);
		void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);
		class UNiagaraUIComponent* GetNiagaraComponent();
		void DeactivateSystem();
		void ActivateSystem(bool Reset);
		static UClass* StaticClass();
	};

	/**
	 * Class NiagaraUIRenderer.NiagaraUIActor
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class ANiagaraUIActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NiagaraUIRenderer.NiagaraUIComponent
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class UNiagaraUIComponent : public UNiagaraComponent
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
