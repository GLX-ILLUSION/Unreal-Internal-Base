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
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
	 */
	struct UClothingSimulationInteractor_SetNumSubsteps_Params
	{
	public:
		int32_t                                                    NumSubsteps;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
	 */
	struct UClothingSimulationInteractor_SetNumIterations_Params
	{
	public:
		int32_t                                                    NumIterations;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	 */
	struct UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params
	{
	public:
		float                                                      InStiffness;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	 */
	struct UClothingSimulationInteractor_PhysicsAssetUpdated_Params
	{	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
	 */
	struct UClothingSimulationInteractor_GetSimulationTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
	 */
	struct UClothingSimulationInteractor_GetNumSubsteps_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
	 */
	struct UClothingSimulationInteractor_GetNumKinematicParticles_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
	 */
	struct UClothingSimulationInteractor_GetNumIterations_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
	 */
	struct UClothingSimulationInteractor_GetNumDynamicParticles_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
	 */
	struct UClothingSimulationInteractor_GetNumCloths_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
	 */
	struct UClothingSimulationInteractor_GetClothingInteractor_Params
	{
	public:
		class FString                                              ClothingAssetName;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClothingInteractor*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	 */
	struct UClothingSimulationInteractor_EnableGravityOverride_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	 */
	struct UClothingSimulationInteractor_DisableGravityOverride_Params
	{	};

	/**
	 * Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	 */
	struct UClothingSimulationInteractor_ClothConfigUpdated_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
