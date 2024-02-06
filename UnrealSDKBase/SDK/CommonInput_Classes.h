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
	 * Class CommonInput.CommonUIInputData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UCommonUIInputData : public UObject
	{
	public:
		struct FDataTableRowHandle                                 DefaultClickAction;                                      // 0x0028(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 DefaultBackAction;                                       // 0x0038(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommonInput.CommonInputBaseControllerData
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UCommonInputBaseControllerData : public UObject
	{
	public:
		ECommonInputType                                           InputType;                                               // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Q09[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GamepadName;                                             // 0x002C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QR1K[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ControllerTexture[0x28];                                 // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ControllerButtonMaskTexture[0x28];                       // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FCommonInputKeyBrushConfiguration>           InputBrushDataMap;                                       // 0x0088(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FCommonInputKeySetBrushConfiguration>        InputBrushKeySets;                                       // 0x0098(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		TArray<class FName> GetRegisteredGamepads();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonInput.CommonInputSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UCommonInputSettings : public UObject
	{
	public:
		unsigned char                                              InputData[0x28];                                         // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TMap<class FName, struct FCommonInputPlatformBaseData>     CommonInputPlatformData;                                 // 0x0050(0x0050) Edit, EditFixedSize, Config, NativeAccessSpecifierPrivate
		bool                                                       bEnableInputMethodThrashingProtection;                   // 0x00A0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X5FR[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputMethodThrashingLimit;                               // 0x00A4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		double                                                     InputMethodThrashingWindowInSeconds;                     // 0x00A8(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		double                                                     InputMethodThrashingCooldownInSeconds;                   // 0x00B0(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowOutOfFocusDeviceInput;                             // 0x00B8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GZSN[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InputDataClass;                                          // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FCommonInputPlatformBaseData                        CurrentPlatform;                                         // 0x00C8(0x0038) Transient, NativeAccessSpecifierPrivate

	public:
		TArray<class FName> GetRegisteredPlatforms();
		static UClass* StaticClass();
	};

	/**
	 * Class CommonInput.CommonInputSubsystem
	 * Size -> 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
	 */
	class UCommonInputSubsystem : public ULocalPlayerSubsystem
	{
	public:
		unsigned char                                              UnknownData_B5M0[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInputMethodChanged;                                    // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		int32_t                                                    NumberOfInputMethodChangesRecently;                      // 0x0060(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S1ZB[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastInputMethodChangeTime;                               // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		double                                                     LastTimeInputMethodThrashingBegan;                       // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECommonInputType                                           LastInputType;                                           // 0x0078(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECommonInputType                                           CurrentInputType;                                        // 0x0079(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9K26[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GamepadInputType;                                        // 0x007C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2NIJ[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, ECommonInputType>                        CurrentInputLocks;                                       // 0x0088(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CWIV[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsGamepadSimulatedClick;                                // 0x00F0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QZ92[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		bool ShouldShowInputKeys();
		void SetGamepadInputType(const class FName& InGamepadInputType);
		void SetCurrentInputType(ECommonInputType NewInputType);
		bool IsUsingPointerInput();
		bool IsInputMethodActive(ECommonInputType InputMethod);
		ECommonInputType GetDefaultInputType();
		ECommonInputType GetCurrentInputType();
		class FName GetCurrentGamepadName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
