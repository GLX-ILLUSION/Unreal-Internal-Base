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
	 * Enum MagicLeapAR.ELuminARLineTraceChannel
	 */
	enum class ELuminARLineTraceChannel : uint8_t
	{
		None                          = 0,
		FeaturePoint                  = 1,
		InfinitePlane                 = 2,
		PlaneUsingExtent              = 3,
		PlaneUsingBoundaryPolygon     = 4,
		FeaturePointWithSurfaceNormal = 5,
		MAX                           = 6
	};

	/**
	 * Enum MagicLeapAR.ELuminARTrackingState
	 */
	enum class ELuminARTrackingState : uint8_t
	{
		Tracking        = 0,
		NotTracking     = 1,
		StoppedTracking = 2,
		MAX             = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
