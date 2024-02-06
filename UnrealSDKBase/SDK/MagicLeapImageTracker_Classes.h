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
	 * Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
	 * Size -> 0x0078 (FullSize[0x0270] - InheritedSize[0x01F8])
	 */
	class UMagicLeapImageTrackerComponent : public USceneComponent
	{
	public:
		class UTexture2D*                                          TargetImageTexture;                                      // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0200(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LongerDimension;                                         // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStationary;                                           // 0x0214(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseUnreliablePose;                                      // 0x0215(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapImageTargetOrientation                           AxisOrientation;                                         // 0x0216(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOQ1[0x1];                                   // 0x0217(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSetImageTargetSucceeded;                               // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetImageTargetFailed;                                  // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnImageTargetFound;                                      // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnImageTargetLost;                                       // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnImageTargetUnreliableTracking;                         // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9THY[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (PADDING)

	public:
		bool SetTargetAsync(class UTexture2D* ImageTarget);
		bool RemoveTargetAsync();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets);
		bool IsImageTrackingEnabled();
		int32_t GetMaxSimultaneousTargets();
		void EnableImageTracking(bool bEnable);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
