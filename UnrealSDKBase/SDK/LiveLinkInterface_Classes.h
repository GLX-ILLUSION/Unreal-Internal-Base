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
	 * Class LiveLinkInterface.LiveLinkSourceFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkSourceFactory : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkFrameInterpolationProcessor : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkFrameTranslator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkFrameTranslator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkVirtualSubject
	 * Size -> 0x0138 (FullSize[0x0160] - InheritedSize[0x0028])
	 */
	class ULiveLinkVirtualSubject : public UObject
	{
	public:
		unsigned char                                              UnknownData_2A09[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Role;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FLiveLinkSubjectName>                        Subjects;                                                // 0x0038(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class ULiveLinkFrameTranslator*>                    FrameTranslators;                                        // 0x0048(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bRebroadcastSubject;                                     // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6MA0[0x107];                                 // 0x0059(0x0107) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkFramePreProcessor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkFramePreProcessor : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkSourceSettings
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class ULiveLinkSourceSettings : public UObject
	{
	public:
		ELiveLinkSourceMode                                        Mode;                                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UEK3[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLiveLinkSourceBufferManagementSettings             BufferSettings;                                          // 0x0030(0x0058) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              ConnectionString;                                        // 0x0088(0x0010) Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Factory;                                                 // 0x0098(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkRole
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkRole : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkBasicRole
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkBasicRole : public ULiveLinkRole
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkAnimationRole
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkAnimationRole : public ULiveLinkBasicRole
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkTransformRole
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkTransformRole : public ULiveLinkBasicRole
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkCameraRole
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkCameraRole : public ULiveLinkTransformRole
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkController
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkController : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkCurveRemapSettings
	 * Size -> 0x0050 (FullSize[0x00F0] - InheritedSize[0x00A0])
	 */
	class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
	{
	public:
		struct FLiveLinkCurveConversionSettings                    CurveConversionSettings;                                 // 0x00A0(0x0050) Edit, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkLightRole
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkLightRole : public ULiveLinkTransformRole
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkInterface.LiveLinkSubjectSettings
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class ULiveLinkSubjectSettings : public UObject
	{
	public:
		TArray<class ULiveLinkFramePreProcessor*>                  PreProcessors;                                           // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class ULiveLinkFrameInterpolationProcessor*                InterpolationProcessor;                                  // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ULiveLinkFrameTranslator*>                    Translators;                                             // 0x0040(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              Role;                                                    // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameRate                                          FrameRate;                                               // 0x0058(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRebroadcastSubject;                                     // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LW9E[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
