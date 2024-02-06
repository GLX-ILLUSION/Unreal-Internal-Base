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
	 * Class MagicLeap.InAppPurchaseComponent
	 * Size -> 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
	 */
	class UInAppPurchaseComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             InAppPurchaseLogMessage;                                 // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GetItemsDetailsSuccess;                                  // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GetItemsDetailsFailure;                                  // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             PurchaseConfirmationSuccess;                             // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             PurchaseConfirmationFailure;                             // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GetPurchaseHistorySuccess;                               // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GetPurchaseHistoryFailure;                               // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LX4G[0x8];                                   // 0x0120(0x0008) MISSED OFFSET (PADDING)

	public:
		bool TryPurchaseItemAsync(const struct FPurchaseItemDetails& ItemDetails);
		bool TryGetPurchaseHistoryAsync(int32_t InNumPages);
		bool TryGetItemsDetailsAsync(TArray<class FString> ItemIDs);
		void PurchaseConfirmationSuccess__DelegateSignature(const struct FPurchaseConfirmation& PurchaseConfirmations);
		void PurchaseConfirmationFailure__DelegateSignature();
		void InAppPurchaseLogMessage__DelegateSignature(const class FString& LogMessage);
		void GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation> PurchaseHistory);
		void GetPurchaseHistoryFailure__DelegateSignature();
		void GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails> ItemsDetails);
		void GetItemsDetailsFailure__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeap.LuminApplicationLifecycleComponent
	 * Size -> 0x0050 (FullSize[0x0190] - InheritedSize[0x0140])
	 */
	class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
	{
	public:
		class FScriptMulticastDelegate                             DeviceHasReactivatedDelegate;                            // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DeviceWillEnterRealityModeDelegate;                      // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DeviceWillGoInStandbyDelegate;                           // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             FocusLostDelegate;                                       // 0x0170(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             FocusGainedDelegate;                                     // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
	 * Size -> 0x0090 (FullSize[0x01F0] - InheritedSize[0x0160])
	 */
	class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHeadTrackingLost;                                      // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnHeadTrackingRecovered;                                 // 0x0170(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnHeadTrackingRecoveryFailed;                            // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnHeadTrackingNewSessionStarted;                         // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HPOK[0x50];                                  // 0x01A0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeap.MagicLeapHMDFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor);
		void SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor);
		void SetBaseRotation(const struct FRotator& InBaseRotation);
		void SetBasePosition(const struct FVector& InBasePosition);
		void SetBaseOrientation(const struct FQuat& InBaseOrientation);
		bool SetAppReady();
		bool IsRunningOnMagicLeapHMD();
		int32_t GetPlatformAPILevel();
		int32_t GetMLSDKVersionRevision();
		int32_t GetMLSDKVersionMinor();
		int32_t GetMLSDKVersionMajor();
		class FString GetMLSDKVersion();
		int32_t GetMinimumAPILevel();
		bool GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State);
		bool GetHeadTrackingMapEvents();
		bool GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo* PerformanceInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeap.MagicLeapMeshTrackerComponent
	 * Size -> 0x0098 (FullSize[0x0290] - InheritedSize[0x01F8])
	 */
	class UMagicLeapMeshTrackerComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_FQ2I[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		class FScriptMulticastDelegate                             OnMeshTrackerUpdated;                                    // 0x0200(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       ScanWorld;                                               // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapMeshType                                         MeshType;                                                // 0x0211(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNMF[0x6];                                   // 0x0212(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       BoundingVolume;                                          // 0x0218(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapMeshLOD                                          LevelOfDetail;                                           // 0x0220(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJ0W[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PerimeterOfGapsToFill;                                   // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Planarize;                                               // 0x0228(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SCO[0x3];                                   // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DisconnectedSectionArea;                                 // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequestNormals;                                          // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequestVertexConfidence;                                 // 0x0231(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapMeshVertexColorMode                              VertexColorMode;                                         // 0x0232(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATCP[0x5];                                   // 0x0233(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FColor>                                      BlockVertexColors;                                       // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        VertexColorFromConfidenceZero;                           // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        VertexColorFromConfidenceOne;                            // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveOverlappingTriangles;                              // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2AW[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMRMeshComponent*                                    MRMesh;                                                  // 0x0270(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BricksPerFrame;                                          // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3YW[0x14];                                  // 0x027C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);
		void OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
		int32_t GetNumQueuedBlockUpdates();
		void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		void DisconnectBlockSelector();
		void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		void ConnectBlockSelector();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeap.MagicLeapSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMagicLeapSettings : public UObject
	{
	public:
		bool                                                       bEnableZI;                                               // 0x0028(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVulkanForZI;                                         // 0x0029(0x0001) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMLAudioForZI;                                        // 0x002A(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5OC[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeap.MagicLeapMeshBlockSelectorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapMeshBlockSelectorInterface : public UInterface
	{
	public:
		void SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeap.MagicLeapRaycastComponent
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class UMagicLeapRaycastComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_N6MZ[0x68];                                  // 0x00B0(0x0068) MISSED OFFSET (PADDING)

	public:
		bool RequestRaycast(const struct FMagicLeapRaycastQueryParams& RequestParams, const class FScriptDelegate& ResultDelegate);
		void RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& HitResult);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeap.MagicLeapRaycastFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FMagicLeapRaycastQueryParams MakeRaycastQueryParams(const struct FVector& Position, const struct FVector& Direction, const struct FVector& UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
