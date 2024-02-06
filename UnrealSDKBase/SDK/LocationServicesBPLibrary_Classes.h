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
	 * Class LocationServicesBPLibrary.LocationServices
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULocationServices : public UBlueprintFunctionLibrary
	{
	public:
		bool StopLocationServices();
		bool StartLocationServices();
		bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);
		bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
		class ULocationServicesImpl* GetLocationServicesImpl();
		struct FLocationServicesData GetLastKnownLocation();
		bool AreLocationServicesEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class LocationServicesBPLibrary.LocationServicesImpl
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULocationServicesImpl : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnLocationChanged;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
