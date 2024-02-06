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
	 * AnimBlueprintGeneratedClass ABP_man_Aiden_001_rig_Skeleton_Cloth.ABP_man_Aiden_001_rig_Skeleton_Cloth_C
	 * Size -> 0x1758 (FullSize[0x1A10] - InheritedSize[0x02B8])
	 */
	class UABP_man_Aiden_001_rig_Skeleton_Cloth_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_GIAJ[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x02F8(0x01D8) ContainsInstancedReference
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_3;                           // 0x04D0(0x0700)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0BD0(0x0020)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_2;                           // 0x0BF0(0x0700)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x12F0(0x0020)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics;                             // 0x1310(0x0700)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_man_Aiden_001_rig_Skeleton_Cloth(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
