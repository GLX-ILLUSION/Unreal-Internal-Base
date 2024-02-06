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
	 * Class UnLua.LuaDelegateHandler
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULuaDelegateHandler : public UObject
	{
	public:
		unsigned char                                              UnknownData_8YBE[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		void Dummy();
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.LuaEnvLocator
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULuaEnvLocator : public UObject
	{
	public:
		unsigned char                                              UnknownData_RSJX[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.LuaEnvLocator_ByGameInstance
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class ULuaEnvLocator_ByGameInstance : public ULuaEnvLocator
	{
	public:
		unsigned char                                              UnknownData_HB2Z[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.LuaFunction
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class ULuaFunction : public UFunction
	{
	public:
		unsigned char                                              UnknownData_M2JG[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.LuaModuleLocator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULuaModuleLocator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.LuaModuleLocator_ByPackage
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class ULuaModuleLocator_ByPackage : public ULuaModuleLocator
	{
	public:
		unsigned char                                              UnknownData_XFKN[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.UnLuaFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUnLuaFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void HotReload();
		class FString GetScriptRootPath();
		int64_t GetFileLastModifiedTimestamp(const class FString& Path);
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.UnLuaInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUnLuaInterface : public UInterface
	{
	public:
		class FString GetModuleName();
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.UnLuaLatentAction
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UUnLuaLatentAction : public UObject
	{
	public:
		unsigned char                                              UnknownData_6OLY[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3X9V[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bTickEvenWhenPaused : 1;                                 // 0x0048(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_52XL[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetTickableWhenPaused(bool bTickableWhenPaused);
		void OnLegacyCallback(int32_t InLinkage);
		void OnCompleted(int32_t InLinkage);
		bool GetTickableWhenPaused();
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.UnLuaManager
	 * Size -> 0x0138 (FullSize[0x0160] - InheritedSize[0x0028])
	 */
	class UUnLuaManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_KAEW[0x138];                                 // 0x0028(0x0138) MISSED OFFSET (PADDING)

	public:
		void TriggerAnimNotify();
		void Override(class UClass* Class, const class FName& FunctionName, const class FName& LuaFunctionName);
		void OnLatentActionCompleted(int32_t LinkID);
		void InputVectorAxis(const struct FVector& AxisValue);
		void InputTouch(ETouchIndex FingerIndex, const struct FVector& Location);
		void InputGesture(float Value);
		void InputAxis(float AxisValue);
		void InputAction(const struct FKey& Key);
		class UDynamicBlueprintBinding* GetOrAddBindingObject(class UClass* Class, class UClass* BindingClass);
		static UClass* StaticClass();
	};

	/**
	 * Class UnLua.UnLuaSettings
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UUnLuaSettings : public UObject
	{
	public:
		class FString                                              StartupModuleName;                                       // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeadLoopCheck;                                           // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_929K[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              EnvLocatorClass;                                         // 0x0040(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ModuleLocatorClass;                                      // 0x0048(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoftClassPath>                              PreBindClasses;                                          // 0x0050(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
