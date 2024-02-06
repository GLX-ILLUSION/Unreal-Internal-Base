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
	 * Enum OpenXRHandTracking.EQuatSwizzleAxisB
	 */
	enum class EQuatSwizzleAxisB : uint8_t
	{
		X      = 0,
		Y      = 1,
		Z      = 2,
		W      = 3,
		MinusX = 4,
		MinusY = 5,
		MinusZ = 6,
		MinusW = 7,
		MAX    = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
