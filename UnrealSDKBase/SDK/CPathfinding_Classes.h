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
	 * Class CPathfinding.CPathVolume
	 * Size -> 0x01B8 (FullSize[0x03E0] - InheritedSize[0x0228])
	 */
	class ACPathVolume : public AActor
	{
	public:
		class UBoxComponent*                                       VolumeBox;                                               // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x0230(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAgentShape                                                AgentShape;                                              // 0x0231(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YZM[0x2];                                   // 0x0232(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AgentRadius;                                             // 0x0234(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentHalfHeight;                                         // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoxelSize;                                               // 0x023C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DynamicObstaclesUpdateRate;                              // 0x0240(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OctreeDepth;                                             // 0x0244(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateOnBeginPlay;                                     // 0x0248(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverwriteMaxGenerationThreads;                           // 0x0249(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8LJ[0x2];                                   // 0x024A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxGenerationThreads;                                    // 0x024C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawFree;                                                // 0x0250(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawOccupied;                                            // 0x0251(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMDD[0x6];                                   // 0x0252(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               DepthsToDraw;                                            // 0x0258(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DebugBoxesThickness;                                     // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugPathThickness;                                      // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerationStarted;                                       // 0x0270(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTJF[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            OctreeCountAtDepth;                                      // 0x0278(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    TotalNodeCount;                                          // 0x0288(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InitialGenerationFinished;                               // 0x028C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PerformBenchmarkAfterGeneration;                         // 0x028D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R0P1[0x2];                                   // 0x028E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BenchmarkDurationSeconds;                                // 0x0290(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BenchmarkFindPathUserData;                               // 0x0294(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BenchmarkFindPathTimeLimit;                              // 0x0298(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMG3[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BenchmarkName;                                           // 0x02A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SaveBenchmarkResultToFile;                               // 0x02B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SaveBenchmarksWithUnreliableResults;                     // 0x02B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1LB[0x26];                                  // 0x02B2(0x0026) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACPathCore*                                          CoreInstance;                                            // 0x02D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9LZC[0x100];                                 // 0x02E0(0x0100) MISSED OFFSET (PADDING)

	public:
		void FindPathSynchronous(EBranchFailSuccessEnum* Branches, TArray<struct FCPathNode>* Path, ECPathfindingFailReason* FailReason, const struct FVector& Start, const struct FVector& End, int32_t SmoothingPasses, int32_t UserData, float TimeLimit);
		void DrawDebugPath(TArray<struct FCPathNode> Path, float Duration, bool DrawPoints, const struct FColor& Color);
		void DrawDebugNodesAroundLocation(const struct FVector& WorldLocation, int32_t VoxelLimit, float Duration);
		void DebugDrawNeighbours(const struct FVector& WorldLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class CPathfinding.CPathCore
	 * Size -> 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
	 */
	class ACPathCore : public AActor
	{
	public:
		unsigned char                                              UnknownData_TXHT[0x38];                                  // 0x0228(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CPathfinding.CPathDynamicObstacle
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UCPathDynamicObstacle : public UActorComponent
	{
	public:
		unsigned char                                              OverlappigVolumes[0x50];                                 // 0x00B0(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       ActivateOnBeginPlay;                                     // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VY6D[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnEndOverlap(class AActor* Owner, class AActor* OtherActor);
		void OnBeginOverlap(class AActor* Owner, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class CPathfinding.CPathAsyncFindPath
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UCPathAsyncFindPath : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Success;                                                 // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Failure;                                                 // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARQS[0x40];                                  // 0x0050(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnPathFound(struct FCPathResult* PathResult);
		class UCPathAsyncFindPath* FindPathAsync(class ACPathVolume* Volume, const struct FVector& StartLocation, const struct FVector& EndLocation, int32_t SmoothingPasses, int32_t UserData, float TimeLimit);
		static UClass* StaticClass();
	};

	/**
	 * Class CPathfinding.CPathVolumeGroundPrio
	 * Size -> 0x0000 (FullSize[0x03E0] - InheritedSize[0x03E0])
	 */
	class ACPathVolumeGroundPrio : public ACPathVolume
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
