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
	 * Class OculusMR.OculusMR_CastingCameraActor
	 * Size -> 0x00F0 (FullSize[0x0330] - InheritedSize[0x0240])
	 */
	class AOculusMR_CastingCameraActor : public ASceneCapture2D
	{
	public:
		class UVRNotificationsComponent*                           VRNotificationComponent;                                 // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          CameraColorTexture;                                      // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          CameraDepthTexture;                                      // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOculusMR_PlaneMeshComponent*                        PlaneMeshComponent;                                      // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           ChromaKeyMaterial;                                       // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           OpaqueColoredMaterial;                                   // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            ChromaKeyMaterialInstance;                               // 0x0270(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            CameraFrameMaterialInstance;                             // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            BackdropMaterialInstance;                                // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DefaultTexture_White;                                    // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EABQ[0x58];                                  // 0x0290(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTextureRenderTarget2D*>                      BackgroundRenderTargets;                                 // 0x02E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class ASceneCapture2D*                                     ForegroundCaptureActor;                                  // 0x02F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UTextureRenderTarget2D*>                      ForegroundRenderTargets;                                 // 0x0300(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<double>                                             PoseTimes;                                               // 0x0310(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UOculusMR_Settings*                                  MRSettings;                                              // 0x0320(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOculusMR_State*                                     MRState;                                                 // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusMR.OculusMR_PlaneMeshComponent
	 * Size -> 0x0018 (FullSize[0x0490] - InheritedSize[0x0478])
	 */
	class UOculusMR_PlaneMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_TAW2[0x8];                                   // 0x0478(0x0008) Fix Super Size
		unsigned char                                              UnknownData_Z1BV[0x10];                                  // 0x0480(0x0010) MISSED OFFSET (PADDING)

	public:
		bool SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
		void ClearCustomMeshTriangles();
		void AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
		static UClass* StaticClass();
	};

	/**
	 * Class OculusMR.OculusMR_Settings
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UOculusMR_Settings : public UObject
	{
	public:
		EOculusMR_ClippingReference                                ClippingReference;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTrackedCameraResolution;                             // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUQ5[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WidthPerView;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeightPerView;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CastingLatency;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              BackdropColor;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandPoseStateLatency;                                    // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ChromaKeyColor;                                          // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChromaKeySimilarity;                                     // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChromaKeySmoothRange;                                    // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChromaKeySpillRange;                                     // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOculusMR_PostProcessEffects                               ExternalCompositionPostProcessEffects;                   // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCasting;                                              // 0x0051(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EOculusMR_CompositionMethod                                CompositionMethod;                                       // 0x0052(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EOculusMR_CameraDeviceEnum                                 CapturingCamera;                                         // 0x0053(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L6TF[0x44];                                  // 0x0054(0x0044) MISSED OFFSET (PADDING)

	public:
		void SetIsCasting(bool Val);
		void SetCompositionMethod(EOculusMR_CompositionMethod Val);
		void SetCapturingCamera(EOculusMR_CameraDeviceEnum Val);
		void SaveToIni();
		void LoadFromIni();
		bool GetIsCasting();
		EOculusMR_CompositionMethod GetCompositionMethod();
		EOculusMR_CameraDeviceEnum GetCapturingCamera();
		int32_t GetBindToTrackedCameraIndex();
		void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class OculusMR.OculusMR_State
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UOculusMR_State : public UObject
	{
	public:
		struct FTrackedCamera                                      TrackedCamera;                                           // 0x0028(0x0078) NativeAccessSpecifierPublic
		class USceneComponent*                                     TrackingReferenceComponent;                              // 0x00A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ScalingFactor;                                           // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DW2P[0x4];                                   // 0x00B0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       ChangeCameraStateRequested;                              // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BindToTrackedCameraIndexRequested;                       // 0x00B5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSPY[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusMR.OculusMRFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool SetTrackingReferenceComponent(class USceneComponent* Component);
		bool SetMrcScalingFactor(float ScalingFactor);
		bool IsMrcEnabled();
		bool IsMrcActive();
		class USceneComponent* GetTrackingReferenceComponent();
		class UOculusMR_Settings* GetOculusMRSettings();
		float GetMrcScalingFactor();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
