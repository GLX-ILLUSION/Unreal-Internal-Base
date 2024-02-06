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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
	 */
	struct UInAppPurchaseComponent_TryPurchaseItemAsync_Params
	{
	public:
		struct FPurchaseItemDetails                                ItemDetails;                                             // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
	 */
	struct UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params
	{
	public:
		int32_t                                                    InNumPages;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
	 */
	struct UInAppPurchaseComponent_TryGetItemsDetailsAsync_Params
	{
	public:
		TArray<class FString>                                      ItemIDs;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
	 */
	struct UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params
	{
	public:
		struct FPurchaseConfirmation                               PurchaseConfirmations;                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
	 */
	struct UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
	 */
	struct UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params
	{
	public:
		class FString                                              LogMessage;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
	 */
	struct UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params
	{
	public:
		TArray<struct FPurchaseConfirmation>                       PurchaseHistory;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
	 */
	struct UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
	 */
	struct UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params
	{
	public:
		TArray<struct FPurchaseItemDetails>                        ItemsDetails;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
	 */
	struct UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Params
	{	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
	 */
	struct UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params
	{
	public:
		class AActor*                                              InStabilizationDepthActor;                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetFocusActor;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
	 */
	struct UMagicLeapHMDFunctionLibrary_SetFocusActor_Params
	{
	public:
		class AActor*                                              InFocusActor;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetStabilizationActor;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
	 */
	struct UMagicLeapHMDFunctionLibrary_SetBaseRotation_Params
	{
	public:
		struct FRotator                                            InBaseRotation;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
	 */
	struct UMagicLeapHMDFunctionLibrary_SetBasePosition_Params
	{
	public:
		struct FVector                                             InBasePosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
	 */
	struct UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Params
	{
	public:
		struct FQuat                                               InBaseOrientation;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
	 */
	struct UMagicLeapHMDFunctionLibrary_SetAppReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
	 */
	struct UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
	 */
	struct UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
	 */
	struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
	 */
	struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
	 */
	struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
	 */
	struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
	 */
	struct UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
	 */
	struct UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params
	{
	public:
		struct FMagicLeapHeadTrackingState                         State;                                                   // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
	 */
	struct UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params
	{
	public:
		unsigned char                                              UnknownData_1J62[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
	 */
	struct UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Params
	{
	public:
		struct FMagicLeapGraphicsClientPerformanceInfo             PerformanceInfo;                                         // 0x0000(0x001C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
	 */
	struct UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Params
	{
	public:
		struct FMagicLeapTrackingMeshInfo                          NewMeshInfo;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FMagicLeapMeshBlockRequest>                  RequestedMesh;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
	 */
	struct UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Vertices;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Triangles;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Normals;                                                 // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              Confidence;                                              // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
	 */
	struct UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
	 */
	struct UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Params
	{
	public:
		class UMRMeshComponent*                                    InMRMeshPtr;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
	 */
	struct UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Params
	{	};

	/**
	 * Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
	 */
	struct UMagicLeapMeshTrackerComponent_ConnectMRMesh_Params
	{
	public:
		class UMRMeshComponent*                                    InMRMeshPtr;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
	 */
	struct UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Params
	{	};

	/**
	 * Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
	 */
	struct UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params
	{
	public:
		struct FMagicLeapTrackingMeshInfo                          NewMeshInfo;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FMagicLeapMeshBlockRequest>                  RequestedMesh;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
	 */
	struct UMagicLeapRaycastComponent_RequestRaycast_Params
	{
	public:
		struct FMagicLeapRaycastQueryParams                        RequestParams;                                           // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ResultDelegate;                                          // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
	 */
	struct UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params
	{
	public:
		struct FMagicLeapRaycastHitResult                          HitResult;                                               // 0x0000(0x0024)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
	 */
	struct UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             UpVector;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Width;                                                   // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HorizontalFovDegrees;                                    // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CollideWithUnobserved;                                   // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5LMX[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UserData;                                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMagicLeapRaycastQueryParams                        ReturnValue;                                             // 0x0038(0x0038)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
