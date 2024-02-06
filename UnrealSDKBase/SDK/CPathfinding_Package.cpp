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
	 * 		Name   -> Function CPathfinding.CPathVolume.FindPathSynchronous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBranchFailSuccessEnum                             Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCPathNode>                          Path                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		ECPathfindingFailReason                            FailReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SmoothingPasses                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeLimit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACPathVolume::FindPathSynchronous(EBranchFailSuccessEnum* Branches, TArray<struct FCPathNode>* Path, ECPathfindingFailReason* FailReason, const struct FVector& Start, const struct FVector& End, int32_t SmoothingPasses, int32_t UserData, float TimeLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CPathfinding.CPathVolume.FindPathSynchronous");
		
		ACPathVolume_FindPathSynchronous_Params params {};
		params.Start = Start;
		params.End = End;
		params.SmoothingPasses = SmoothingPasses;
		params.UserData = UserData;
		params.TimeLimit = TimeLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branches != nullptr)
			*Branches = params.Branches;
		if (Path != nullptr)
			*Path = params.Path;
		if (FailReason != nullptr)
			*FailReason = params.FailReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CPathfinding.CPathVolume.DrawDebugPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCPathNode>                          Path                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DrawPoints                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACPathVolume::DrawDebugPath(TArray<struct FCPathNode> Path, float Duration, bool DrawPoints, const struct FColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CPathfinding.CPathVolume.DrawDebugPath");
		
		ACPathVolume_DrawDebugPath_Params params {};
		params.Path = Path;
		params.Duration = Duration;
		params.DrawPoints = DrawPoints;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CPathfinding.CPathVolume.DrawDebugNodesAroundLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VoxelLimit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACPathVolume::DrawDebugNodesAroundLocation(const struct FVector& WorldLocation, int32_t VoxelLimit, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CPathfinding.CPathVolume.DrawDebugNodesAroundLocation");
		
		ACPathVolume_DrawDebugNodesAroundLocation_Params params {};
		params.WorldLocation = WorldLocation;
		params.VoxelLimit = VoxelLimit;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CPathfinding.CPathVolume.DebugDrawNeighbours
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACPathVolume::DebugDrawNeighbours(const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CPathfinding.CPathVolume.DebugDrawNeighbours");
		
		ACPathVolume_DebugDrawNeighbours_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACPathVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACPathVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CPathfinding.CPathVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACPathCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACPathCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CPathfinding.CPathCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CPathfinding.CPathDynamicObstacle.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCPathDynamicObstacle::OnEndOverlap(class AActor* Owner, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CPathfinding.CPathDynamicObstacle.OnEndOverlap");
		
		UCPathDynamicObstacle_OnEndOverlap_Params params {};
		params.Owner = Owner;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CPathfinding.CPathDynamicObstacle.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCPathDynamicObstacle::OnBeginOverlap(class AActor* Owner, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CPathfinding.CPathDynamicObstacle.OnBeginOverlap");
		
		UCPathDynamicObstacle_OnBeginOverlap_Params params {};
		params.Owner = Owner;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCPathDynamicObstacle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCPathDynamicObstacle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CPathfinding.CPathDynamicObstacle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CPathfinding.CPathAsyncFindPath.OnPathFound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCPathResult                                PathResult                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCPathAsyncFindPath::OnPathFound(struct FCPathResult* PathResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CPathfinding.CPathAsyncFindPath.OnPathFound");
		
		UCPathAsyncFindPath_OnPathFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PathResult != nullptr)
			*PathResult = params.PathResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CPathfinding.CPathAsyncFindPath.FindPathAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACPathVolume*                                Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SmoothingPasses                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeLimit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCPathAsyncFindPath* UCPathAsyncFindPath::FindPathAsync(class ACPathVolume* Volume, const struct FVector& StartLocation, const struct FVector& EndLocation, int32_t SmoothingPasses, int32_t UserData, float TimeLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CPathfinding.CPathAsyncFindPath.FindPathAsync");
		
		UCPathAsyncFindPath_FindPathAsync_Params params {};
		params.Volume = Volume;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.SmoothingPasses = SmoothingPasses;
		params.UserData = UserData;
		params.TimeLimit = TimeLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCPathAsyncFindPath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCPathAsyncFindPath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CPathfinding.CPathAsyncFindPath");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACPathVolumeGroundPrio.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACPathVolumeGroundPrio::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CPathfinding.CPathVolumeGroundPrio");
		return ptr;
	}

}


