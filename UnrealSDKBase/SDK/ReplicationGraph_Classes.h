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
	 * Class ReplicationGraph.ReplicationGraph
	 * Size -> 0x0480 (FullSize[0x04A8] - InheritedSize[0x0028])
	 */
	class UReplicationGraph : public UReplicationDriver
	{
	public:
		class UClass*                                              ReplicationConnectionManagerClass;                       // 0x0028(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetDriver*                                          NetDriver;                                               // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNetReplicationGraphConnection*>              Connections;                                             // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UNetReplicationGraphConnection*>              PendingConnections;                                      // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RE4[0x40];                                  // 0x0058(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UReplicationGraphNode*>                       GlobalGraphNodes;                                        // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UReplicationGraphNode*>                       PrepareForReplicationNodes;                              // 0x00A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I6PR[0x3F0];                                 // 0x00B8(0x03F0) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.BasicReplicationGraph
	 * Size -> 0x0038 (FullSize[0x04E0] - InheritedSize[0x04A8])
	 */
	class UBasicReplicationGraph : public UReplicationGraph
	{
	public:
		class UReplicationGraphNode_GridSpatialization2D*          GridNode;                                                // 0x04A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_ActorList*                     AlwaysRelevantNode;                                      // 0x04B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConnectionAlwaysRelevantNodePair>           AlwaysRelevantForConnectionList;                         // 0x04B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsWithoutNetConnection;                              // 0x04C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7RB[0x8];                                   // 0x04D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UReplicationGraphNode : public UObject
	{
	public:
		TArray<class UReplicationGraphNode*>                       AllChildNodes;                                           // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X13T[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ActorList
	 * Size -> 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_ActorList : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_Q5SX[0x80];                                  // 0x0050(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
	 * Size -> 0x00B8 (FullSize[0x0108] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_1Y3B[0xB8];                                  // 0x0050(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_YCA7[0x30];                                  // 0x00D0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
	 * Size -> 0x0080 (FullSize[0x0150] - InheritedSize[0x00D0])
	 */
	class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_ZC88[0x80];                                  // 0x00D0(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_DormancyNode
	 * Size -> 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
	 */
	class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_85C3[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_GridCell
	 * Size -> 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
	 */
	class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_ERMI[0x40];                                  // 0x00D0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReplicationGraphNode*                               DynamicNode;                                             // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UReplicationGraphNode_DormancyNode*                  DormancyNode;                                            // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
	 * Size -> 0x01E0 (FullSize[0x0230] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_1CLN[0x1E0];                                 // 0x0050(0x01E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
	{
	public:
		class UReplicationGraphNode*                               ChildNode;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LFMV[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_88K2[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAlwaysRelevantActorInfo>                    PastRelevantActors;                                      // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
	{
	public:
		TArray<struct FTearOffActorInfo>                           TearOffActors;                                           // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UDQ[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.NetReplicationGraphConnection
	 * Size -> 0x0210 (FullSize[0x0238] - InheritedSize[0x0028])
	 */
	class UNetReplicationGraphConnection : public UReplicationConnectionDriver
	{
	public:
		class UNetConnection*                                      NetConnection;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OM3V[0x140];                                 // 0x0030(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AReplicationGraphDebugActor*                         DebugActor;                                              // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3CX[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLastLocationGatherInfo>                     LastGatherLocations;                                     // 0x0188(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KU5G[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UReplicationGraphNode*>                       ConnectionGraphNodes;                                    // 0x01A0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UReplicationGraphNode_TearOff_ForConnection*         TearOffNode;                                             // 0x01B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VHUI[0x80];                                  // 0x01B8(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphDebugActor
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class AReplicationGraphDebugActor : public AActor
	{
	public:
		class UReplicationGraph*                                   ReplicationGraph;                                        // 0x0228(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetReplicationGraphConnection*                      ConnectionManager;                                       // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ServerStopDebugging();
		void ServerStartDebugging();
		void ServerSetPeriodFrameForClass(class UClass* Class, int32_t PeriodFrame);
		void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);
		void ServerSetConditionalActorBreakpoint(class AActor* Actor);
		void ServerPrintCullDistances();
		void ServerPrintAllActorInfo(const class FString& str);
		void ServerCellInfo();
		void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
