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
	 * Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UMagicLeapHandMeshingComponent : public UActorComponent
	{
	public:
		void SetUseWeightedNormals(bool bInUseWeightedNormals);
		bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		bool DestroyClient();
		bool CreateClient();
		bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
