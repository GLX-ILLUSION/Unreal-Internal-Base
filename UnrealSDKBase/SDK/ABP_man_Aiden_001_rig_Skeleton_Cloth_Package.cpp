/**
 * Name: GreedIsGood
 * Version: fodase
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_man_Aiden_001_rig_Skeleton_Cloth.ABP_man_Aiden_001_rig_Skeleton_Cloth_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_man_Aiden_001_rig_Skeleton_Cloth_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_man_Aiden_001_rig_Skeleton_Cloth.ABP_man_Aiden_001_rig_Skeleton_Cloth_C.AnimGraph");
		
		UABP_man_Aiden_001_rig_Skeleton_Cloth_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_man_Aiden_001_rig_Skeleton_Cloth.ABP_man_Aiden_001_rig_Skeleton_Cloth_C.ExecuteUbergraph_ABP_man_Aiden_001_rig_Skeleton_Cloth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_man_Aiden_001_rig_Skeleton_Cloth_C::ExecuteUbergraph_ABP_man_Aiden_001_rig_Skeleton_Cloth(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_man_Aiden_001_rig_Skeleton_Cloth.ABP_man_Aiden_001_rig_Skeleton_Cloth_C.ExecuteUbergraph_ABP_man_Aiden_001_rig_Skeleton_Cloth");
		
		UABP_man_Aiden_001_rig_Skeleton_Cloth_C_ExecuteUbergraph_ABP_man_Aiden_001_rig_Skeleton_Cloth_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_man_Aiden_001_rig_Skeleton_Cloth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_man_Aiden_001_rig_Skeleton_Cloth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_man_Aiden_001_rig_Skeleton_Cloth.ABP_man_Aiden_001_rig_Skeleton_Cloth_C");
		return ptr;
	}

}


