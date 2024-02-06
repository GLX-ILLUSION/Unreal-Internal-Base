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
	 * Enum MRMesh.EMeshTrackerVertexColorMode
	 */
	enum class EMeshTrackerVertexColorMode : uint8_t
	{
		None       = 0,
		Confidence = 1,
		Block      = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MRMesh.MRMeshConfiguration
	 * Size -> 0x0001
	 */
	struct FMRMeshConfiguration
	{
	public:
		unsigned char                                              UnknownData_VF8A[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
