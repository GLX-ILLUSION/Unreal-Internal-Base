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
	 * Class MagicLeapPlanes.MagicLeapPlanesComponent
	 * Size -> 0x0068 (FullSize[0x0260] - InheritedSize[0x01F8])
	 */
	class UMagicLeapPlanesComponent : public USceneComponent
	{
	public:
		TArray<EMagicLeapPlaneQueryFlags>                          QueryFlags;                                              // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UBoxComponent*                                       SearchVolume;                                            // 0x0208(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResults;                                              // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHolePerimeter;                                        // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlaneArea;                                            // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapPlaneQueryType                                   QueryType;                                               // 0x021C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TKGQ[0x3];                                   // 0x021D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SimilarityThreshold;                                     // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXC4[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlanesQueryResult;                                     // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnPersistentPlanesQueryResult;                           // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JE5U[0x18];                                  // 0x0248(0x0018) MISSED OFFSET (PADDING)

	public:
		bool RequestPlanesAsync();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void ReorderPlaneFlags(TArray<EMagicLeapPlaneQueryFlags> InPriority, TArray<EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>* OutReorderedFlags);
		bool RemovePersistentQuery(const struct FGuid& Handle);
		void RemoveFlagsNotInQuery(TArray<EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<EMagicLeapPlaneQueryFlags> InResultFlags, TArray<EMagicLeapPlaneQueryFlags>* OutFlags);
		bool PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const class FScriptDelegate& ResultDelegate);
		bool PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const class FScriptDelegate& ResultDelegate);
		bool IsTrackerValid();
		struct FTransform GetContentScale(class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult);
		bool DestroyTracker();
		bool CreateTracker();
		struct FGuid AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
