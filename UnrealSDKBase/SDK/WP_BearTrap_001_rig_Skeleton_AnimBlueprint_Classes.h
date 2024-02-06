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
	 * AnimBlueprintGeneratedClass WP_BearTrap_001_rig_Skeleton_AnimBlueprint.WP_BearTrap_001_rig_Skeleton_AnimBlueprint_C
	 * Size -> 0x0088 (FullSize[0x0340] - InheritedSize[0x02B8])
	 */
	class UWP_BearTrap_001_rig_Skeleton_AnimBlueprint_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_2GUR[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x02F8(0x0048)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_WP_BearTrap_001_rig_Skeleton_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
