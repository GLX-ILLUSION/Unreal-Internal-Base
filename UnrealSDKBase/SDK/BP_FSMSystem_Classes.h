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
	 * BlueprintGeneratedClass BP_FSMSystem.BP_FSMSystem_C
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UBP_FSMSystem_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CurStateType;                                            // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WYJC[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OnlyServerCanActiveEnterStateSet[0x50];                  // 0x00C0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void LuaServerChangeState(unsigned char Type, unsigned char nextType, int64_t intArg, class AActor* actorArg);
		void ReceiveTick(float DeltaSeconds);
		void LuaMultiCastChangeState(unsigned char Type, unsigned char nextType, int64_t intArg, class AActor* arctorArg);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		class FString GetModuleName();
		void ReceiveTick__Overridden(float DeltaSeconds);
		void LuaServerChangeState__Overridden(unsigned char Type, unsigned char nextType, int64_t intArg, class AActor* actorArg);
		void LuaMultiCastChangeState__Overridden(unsigned char Type, unsigned char nextType, int64_t intArg, class AActor* arctorArg);
		void ExecuteUbergraph_BP_FSMSystem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
