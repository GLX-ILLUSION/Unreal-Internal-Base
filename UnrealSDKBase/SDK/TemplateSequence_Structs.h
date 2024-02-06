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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum TemplateSequence.ETemplateSectionPropertyScaleType
	 */
	enum class ETemplateSectionPropertyScaleType : uint8_t
	{
		FloatProperty                 = 0,
		TransformPropertyLocationOnly = 1,
		TransformPropertyRotationOnly = 2,
		MAX                           = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
	 * Size -> 0x000C
	 */
	struct FTemplateSequenceBindingOverrideData
	{
	public:
		TWeakObjectPtr<class UObject>                              Object;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridesDefault;                                       // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDR8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TemplateSequence.TemplateSectionPropertyScale
	 * Size -> 0x00C8
	 */
	struct FTemplateSectionPropertyScale
	{
	public:
		struct FGuid                                               ObjectBinding;                                           // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieScenePropertyBinding                          PropertyBinding;                                         // 0x0010(0x0014) NoDestructor, NativeAccessSpecifierPublic
		ETemplateSectionPropertyScaleType                          PropertyScaleType;                                       // 0x0024(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZMO[0x3];                                   // 0x0025(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FMovieSceneFloatChannel                             FloatChannel;                                            // 0x0028(0x00A0) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
