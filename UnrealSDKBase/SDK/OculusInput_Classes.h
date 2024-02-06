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
	 * Class OculusInput.OculusHandComponent
	 * Size -> 0x00A0 (FullSize[0x08A0] - InheritedSize[0x0800])
	 */
	class UOculusHandComponent : public UPoseableMeshComponent
	{
	public:
		EOculusHandType                                            SkeletonType;                                            // 0x0800(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOculusHandType                                            MeshType;                                                // 0x0801(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConfidenceBehavior                                        ConfidenceBehavior;                                      // 0x0802(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESystemGestureBehavior                                     SystemGestureBehavior;                                   // 0x0803(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDSK[0x4];                                   // 0x0804(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  SystemGestureMaterial;                                   // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitializePhysics;                                      // 0x0810(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateHandScale;                                        // 0x0811(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTQA[0x6];                                   // 0x0812(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MaterialOverride;                                        // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EBone, class FName>                                   BoneNameMappings;                                        // 0x0820(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FOculusCapsuleCollider>                      CollisionCapsules;                                       // 0x0870(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bSkeletalMeshInitialized;                                // 0x0880(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYM2[0x1F];                                  // 0x0881(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusInput.OculusInputFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOculusInputFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool IsPointerPoseValid(EOculusHandType DeviceHand, int32_t ControllerIndex);
		bool IsHandTrackingEnabled();
		TArray<struct FOculusCapsuleCollider> InitializeHandPhysics(EOculusHandType SkeletonType, class USkinnedMeshComponent* HandComponent, float WorldToMeters);
		ETrackingConfidence GetTrackingConfidence(EOculusHandType DeviceHand, int32_t ControllerIndex);
		struct FTransform GetPointerPose(EOculusHandType DeviceHand, int32_t ControllerIndex);
		bool GetHandSkeletalMesh(class USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, float WorldToMeters);
		float GetHandScale(EOculusHandType DeviceHand, int32_t ControllerIndex);
		EOculusHandType GetDominantHand(int32_t ControllerIndex);
		struct FQuat GetBoneRotation(EOculusHandType DeviceHand, EBone BoneId, int32_t ControllerIndex);
		class FString GetBoneName(EBone BoneId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
