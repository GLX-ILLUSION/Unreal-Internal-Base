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
	 * Function GLTFExporter.GLTFExporter.ExportToGLTF
	 */
	struct UGLTFExporter_ExportToGLTF_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGLTFExportOptions*                                  Options;                                                 // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XINZ[0x50];                                  // 0x0020(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGLTFExportMessages                                 OutMessages;                                             // 0x0070(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GLTFExporter.GLTFCameraActor.OnMouseY
	 */
	struct AGLTFCameraActor_OnMouseY_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GLTFExporter.GLTFCameraActor.OnMouseX
	 */
	struct AGLTFCameraActor_OnMouseX_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GLTFExporter.GLTFCameraActor.OnMouseWheelAxis
	 */
	struct AGLTFCameraActor_OnMouseWheelAxis_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GLTFExporter.GLTFExportOptions.ResetToDefault
	 */
	struct UGLTFExportOptions_ResetToDefault_Params
	{	};

	/**
	 * Function GLTFExporter.GLTFHotspotActor.EndCursorOver
	 */
	struct AGLTFHotspotActor_EndCursorOver_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GLTFExporter.GLTFHotspotActor.Clicked
	 */
	struct AGLTFHotspotActor_Clicked_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                ButtonPressed;                                           // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GLTFExporter.GLTFHotspotActor.BeginCursorOver
	 */
	struct AGLTFHotspotActor_BeginCursorOver_Params
	{
	public:
		class UPrimitiveComponent*                                 TouchedComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GLTFExporter.GLTFProxyOptions.ResetToDefault
	 */
	struct UGLTFProxyOptions_ResetToDefault_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
