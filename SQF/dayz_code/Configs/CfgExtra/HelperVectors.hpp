///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	modularVectors.hpp
//
//	Author:	Victor the Cleaner
//	Date:	August 2021
//
//	Helper array vectors for Remove and Deconstruct of modular objects.
//	Similar to snappoints.hpp, but customized to specific objects for improved visual appeal.
//
//	Pivot or Bottom entry should always be listed first in the array.
//
//	Any object with an animating door should have its helper listed last in the array.
//	fn_displayHelpers.sqf will check this to prevent the helper from floating in mid air.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

class Helpers;
class HelperVectors: Helpers {

	class vector {
		size = 3;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Metal
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class MetalFloor4x_DZ: vector {
		points[] = {
			{      0,     0, 0.141 },	// Pivot
			{      0, -5.27, 0.141 },	// Back
			{      0,  5.27, 0.141 },	// Front
			{  -5.27,     0, 0.141 },	// Left
			{   5.27,     0, 0.141 }	// Right
		};
	};
	class Land_metal_floor_2x2_wreck: MetalFloor4x_DZ {};

	class MetalFloor_DZ: vector {
		points[] = {
			{      0, -0.003, 0.141 },	// Pivot
			{      0, -2.638, 0.141 },	// Back
			{      0,  2.632, 0.141 },	// Front
			{ -2.635, -0.003, 0.141 },	// Left
			{  2.635, -0.003, 0.141 }	// Right
		};
	};
	class ElevatorStart_DZ: MetalFloor_DZ {};
	class ElevatorStop_Transparent_DZ: MetalFloor_DZ {};

	class Land_wreck_metal_floor: vector {
		points[] = {
			{      0, -2.638, 0.141 },	// Back
			{      0,  2.632, 0.141 },	// Front
			{ -2.635, -0.003, 0.141 },	// Left
			{  2.635, -0.003, 0.141 }	// Right
		};
	};

	class MetalFloor_Half_DZ: vector {
		points[] = {
			{  -0.006, -2.623, 0.132 },	// Back
			{  -0.006,  2.647, 0.132 },	// Front
			{ -1.3235,  0.012, 0.132 },	// Left
			{  1.3115,  0.012, 0.132 }	// Right
		};
	};

	class MetalFloor_Quarter_DZ: vector {
		points[] = {
			{  -0.006, -1.2055, 0.132 },	// Back
			{  -0.006,  1.4295, 0.132 },	// Front
			{ -1.3235,   0.112, 0.132 },	// Left
			{  1.3115,   0.112, 0.132 }	// Right
		};
	};

	class MetalPillar_DZ: vector {
		points[] = {
			{0, 0, 0.004 },	// Pivot
			{0, 0, 1.510 },	// Center
			{0, 0, 3.024 }	// Top
		};
	};

	class MetalContainer1A_DZ {
		points[] = {
			{    0,     0, -1.26788 },	// Pivot
			{    0, -3.05,        0 },	// Back
			{    0,  3.05,        0 },	// Front
			{ -1.2,     0,        0 },	// Left
			{  1.2,     0,        0 },	// Right
			{    0,     0,  1.26788 }	// Top
		};
	};
	class MetalContainer1B_DZ: MetalContainer1A_DZ {};
	class MetalContainer1G_DZ: MetalContainer1A_DZ {};

	class MetalContainer2D_DZ {
		points[] = {
			{    0,     0, -2.54288 },	// Pivot
			{    0, -3.05,        0 },	// Back
			{    0,  3.05,        0 },	// Front
			{ -1.2,     0,        0 },	// Left
			{  1.2,     0,        0 },	// Right
			{    0,     0,  2.54288 }	// Top
		};
	};

	class Metal_Drawbridge_DZ: vector {
		points[] = {
			{ 0.0245,  0.008,     0 },	// Bottom
			{  -2.40,  0.008, 3.025 },	// Left (adjusted)
			{   2.46,  0.008, 3.025 },	// Right (adjusted)
			{ 0.0245,  0.008,  6.05 },	// Top
			{ 0.0245, -0.242, 3.025 }	// Center (added)
		};
	};
	class Metal_DrawbridgeLocked_DZ: Metal_Drawbridge_DZ {};

	class Door_DZ: vector {
		points[] = {
			{   0.01, 0, -0.008 },	// Pivot
			{ -0.995, 0,  1.327 },	// Left
			{  1.015, 0,  1.327 },	// Right
			{   0.01, 0,  2.662 }	// Top
		};
	};
	class DoorFrame_DZ: Door_DZ {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Glass
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class GlassFloor_DZ: vector {
		points[] = {
			{      0, -0.002, 0.141 },	// Pivot
			{      0, -2.627, 0.141 },	// Back
			{      0,  2.623, 0.141 },	// Front
			{ -2.625, -0.002, 0.141 },	// Left
			{  2.625, -0.002, 0.141 }	// Right
		};
	};
	class ElevatorStop_Glass_DZ: GlassFloor_DZ {};
	
	class GlassFloor_Half_DZ: vector {
		points[] = {
			{  -0.032, -2.628, 0.141 },	// Back
			{  -0.032,  2.622, 0.141 },	// Front
			{ -1.3445, -0.003, 0.141 },	// Left
			{  1.2805, -0.003, 0.141 }	// Right
		};
	};

	class GlassFloor_Quarter_DZ: vector {
		points[] = {
			{   0.005, -1.3295, 0.141 },	// Back
			{   0.005,  1.2955, 0.141 },	// Front
			{ -1.3075,  -0.017, 0.141 },	// Left
			{  1.3175,  -0.017, 0.141 }	// Right
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Cinder
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class CinderWall_DZ: vector {
		points[] = {
			{      0, 0,   0 },	// Bottom
			{ -2.625, 0, 1.7 },	// Left
			{  2.625, 0, 1.7 },	// Right
			{      0, 0, 3.4 },	// Top
			{      0, 0, 1.7 }	// Center (added)
		};
	};
	class CinderWallDoorSmall_DZ:		CinderWall_DZ {};	// door
	class CinderWallDoorSmallLocked_DZ:	CinderWall_DZ {};	// door
	class CinderWallWindow_DZ:		CinderWall_DZ {};	// window
	class CinderWallWindowLocked_DZ:	CinderWall_DZ {};	// window
	class CinderDoorHatch_DZ:		CinderWall_DZ {};	// door hatch
	class CinderDoorHatchLocked_DZ:		CinderWall_DZ {};	// door hatch
	class CinderWallDoor_DZ:		CinderWall_DZ {};	// garage door
	class CinderWallDoorLocked_DZ:		CinderWall_DZ {};	// garage door
	class CinderGarageOpenTop_DZ:		CinderWall_DZ {};	// open top garage doors
	class CinderGarageOpenTopLocked_DZ:	CinderWall_DZ {};	// open top garage doors

	class CinderWallHalf_DZ: vector {
		points[] = {
			{      0, 0,    0 },	// Bottom
			{ -2.625, 0, 0.75 },	// Left (replacement)
			{  2.625, 0, 0.75 },	// Right (replacement)
			{      0, 0,  1.5 }	// Top
		};
	};
	class CinderWallHalf_Gap_DZ: CinderWallHalf_DZ {};

	class Land_wreck_cinder: vector {
		points[] = {
			{ -1.64, 0, 0.25 },	// Left (replacement)
			{  1.64, 0, 0.25 }	// Right (replacement)
		};
	};

	class CinderGateFrame_DZ: vector {
		points[] = {
			{      0, 0,   0 },	// Bottom
			{ -2.625, 0, 1.7 },	// Lower Left
			{  2.625, 0, 1.7 },	// Lower Right
			{ -2.625, 0, 5.1 },	// Upper Left	(added)
			{  2.625, 0, 5.1 },	// Upper Right	(added)
			{      0, 0, 6.8 }	// Top
		};
	};

	class CinderGate_DZ: vector {
		points[] = {
			{      0, 0,   0 },	// Bottom
			{ -2.625, 0, 1.7 },	// Lower Left
			{  2.625, 0, 1.7 },	// Lower Right
			{ -2.625, 0, 5.1 },	// Upper Left	(added)
			{  2.625, 0, 5.1 },	// Upper Right	(added)
			{      0, 0, 6.8 },	// Top
			{      0, 0, 3.4 }	// Center	(added)
		};
	};
	class CinderGateLocked_DZ: CinderGate_DZ {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Wood
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class WoodFloor4x_DZ: vector {
		points[] = {
			{ -0.012,     0, 0.139 },	// Pivot
			{ -0.012, -4.65, 0.139 },	// Back
			{ -0.012,  4.65, 0.139 },	// Front
			{ -4.912,     0, 0.139 },	// Left
			{  4.888,     0, 0.139 }	// Right
		};
	};
	class Land_wood_floor_2x2_wreck: WoodFloor4x_DZ {};

	class WoodFloor_DZ: vector {
		points[] = {
			{ -0.029, -0.013, 0.139 },	// Pivot
			{ -0.029, -2.338, 0.139 },	// Back
			{ -0.029,  2.312, 0.139 },	// Front
			{ -2.479, -0.013, 0.139 },	// Left
			{  2.421, -0.013, 0.139 }	// Right
		};
	};

	class Land_wood_wreck_floor: vector {
		points[] = {
			{ -0.029, -2.338, 0.139 },	// Back
			{ -0.029,  2.312, 0.139 },	// Front
			{ -2.479, -0.013, 0.139 },	// Left
			{  2.421, -0.013, 0.139 }	// Right
		};
	};

	class WoodFloorHalf_DZ: vector {
		points[] = {
			{  0.081, -2.320, 0.116 },	// Back
			{  0.081,  2.330, 0.116 },	// Front
			{ -1.144,  0.005, 0.116 },	// Left
			{  1.306,  0.005, 0.116 }	// Right
		};
	};
	class Land_wood_wreck_half: WoodFloorHalf_DZ {};

	class WoodFloorQuarter_DZ: vector {
		points[] = {
			{  0.047, -1.2045, 0.114 },	// Back
			{  0.047,  1.1205, 0.114 },	// Front
			{ -1.178,  -0.042, 0.114 },	// Left
			{  1.272,  -0.042, 0.114 }	// Right
		};
	};
	class Land_wood_wreck_quarter: WoodFloorQuarter_DZ {};

	class WoodFloorStairs_DZ: vector {
		points[] = {
			{    -2.3,     1.4,   0.3 },	// Bottom step (added)
			{ -0.0275, -2.3375, 3.125 },	// Back
			{ -0.0275,  2.3125, 3.125 },	// Front
			{ -2.4775, -0.0125, 3.125 },	// Left
			{  2.4225, -0.0125, 3.125 }	// Right
		};
	};

	class WoodTriangleFloor_DZ: vector {
		points[] = {
			{      0,  -1.3, 0.1 },	// Back
			{      0, 1.288, 0.1 },	// Front
			{ -1.258, 0.027, 0.1 },	// Left
			{  1.258, 0.027, 0.1 }	// Right
		};
	};

	class WoodSmallWall_DZ: vector { // Small wood walls
		points[] = {
			{ -0.039, 0.016, 0.027 },	// Pivot (bottom)
			{ -2.324, 0.016, 1.527 },	// Left
			{  2.246, 0.016, 1.527 },	// Right
			{ -0.039, 0.016, 3.027 },	// Top
			{ -0.039, 0.016, 1.527 }	// Center (added)
		};
	};
	class Land_DZE_WoodDoor: WoodSmallWall_DZ {};
	class Land_DZE_WoodDoorLocked: WoodSmallWall_DZ {};

	class Land_DZE_WoodOpenTopGarageDoor: vector {
		points[] = {
			{ -0.023, 0.016, 0.019 },	// Pivot
			{ -2.308, 0.016, 1.519 },	// Left
			{  2.262, 0.016, 1.519 },	// Right
			{ -0.023, 0.016, 3.019 }	// Top
		};
	};
	class Land_DZE_WoodOpenTopGarageLocked: Land_DZE_WoodOpenTopGarageDoor {};

	class Land_wood_wreck_frame: vector {
		points[] = {
			{ -0.023, 0.016, 0.019 },	// Pivot (bottom)
			{ -2.308, 0.016, 1.519 },	// Left
			{  2.262, 0.016, 1.519 },	// Right
			{ -0.023, 0.016, 3.019 }	// Top
		};
	};

	class WoodLargeWall_DZ: vector { // Large wood walls
		points[] = {
			{ -0.024, 0.018, 0.038 },	// Pivot
			{ -2.464, 0.018, 1.538 },	// Left
			{  2.416, 0.018, 1.538 },	// Right
			{ -0.024, 0.018, 3.038 },	// Top
			{ -0.024, 0.018, 1.538 }	// Center (added)
		};
	};

	class Land_DZE_LargeWoodDoor: vector {		// door
		points[] = {
			{ -0.041, 0.018, 0.03 },	// Pivot
			{ -2.481, 0.018, 1.53 },	// Left
			{  2.399, 0.018, 1.53 },	// Right
			{ -0.041, 0.018, 3.03 },	// Top
			{ -0.041, 0.018, 1.53 }		// Center (added)
		};
	};
	class Land_DZE_LargeWoodDoorLocked: Land_DZE_LargeWoodDoor {};

	class Land_DZE_GarageWoodDoor: vector {		// garage door
		points[] = {
			{ -0.023, 0.022, 0.018 },	// Pivot
			{ -2.463, 0.022, 1.518 },	// Left
			{  2.417, 0.022, 1.518 },	// Right
			{ -0.023, 0.022, 3.018 },	// Top
			{ -0.023, 0.022, 1.518 }	// Center (added)
		};
	};
	class Land_DZE_GarageWoodDoorLocked: Land_DZE_GarageWoodDoor {};

	class WoodSmallWallThird_DZ: vector {
		points[] = {
			{ -0.023, -0.018,  0.002 },	// Pivot
			{ -2.463, -0.018, 0.5845 },	// Left (lowered)
			{  2.417, -0.018, 0.5845 },	// Right (lowered)
			{ -0.023, -0.018,  1.167 }	// Top
		};
	};

	class Land_wood_wreck_third: vector {
		points[] = {
			{ -0.023, -0.018,  0.002 },	// Pivot
			{ -2.463, -0.018, 0.5845 },	// Left (lowered)
			{  2.417, -0.018, 0.5845 }	// Right (lowered)
		};
	};

	class WoodGateFrame_DZ: vector {
		points[] = {
			{  0.022, 0.02, 0.025 },	// Bottom
			{ -2.418, 0.02, 1.525 },	// Lower Left
			{  2.462, 0.02, 1.525 },	// Lower Right
			{ -2.418, 0.02, 4.525 },	// Upper Left (added)
			{  2.462, 0.02, 4.525 },	// Upper Right (added)
			{  0.022, 0.02, 6.025 }		// Top
		};
	};

	class Land_DZE_WoodGate: vector {
		points[] = {
			{  0.022, 0.02, 0.025 },	// Bottom
			{ -2.418, 0.02, 1.525 },	// Lower Left
			{  2.462, 0.02, 1.525 },	// Lower Right
			{ -2.418, 0.02, 4.525 },	// Upper Left (added)
			{  2.462, 0.02, 4.525 },	// Upper Right (added)
			{  0.022, 0.02, 6.025 },	// Top
			{  0.022, 0.02, 3.025 }		// Center (added)
		};
	};
	class Land_DZE_WoodGateLocked: Land_DZE_WoodGate {};

	class WoodPillar_DZ: vector {
		points[] = {
			{    0, 0, 0.016 },	// Pivot
			{    0, 0, 1.516 },	// Front
			{    0, 0, 3.016 }	// Top
		};
	};

	class WoodStairs_DZ: vector {
		points[] = {
			{ -0.02, 0.012, -0.02 },	// Pivot (Bottom Step)
			{ -0.02, 3.662,  2.98 },	// Front (Top Step)
			{ -0.81, 1.812,  1.48 },	// Left
			{  0.77, 1.812,  1.48 }		// Right
		};
	};
	class WoodStairsSans_DZ: WoodStairs_DZ {};
	class WoodStairsRails_DZ: WoodStairs_DZ {};

	class WoodRamp_DZ: vector {
		points[] = {
			{  0.065,    0, -0.18 },	// Pivot
			{ -1.585, 3.15,  0.95 },	// Left
			{  1.715, 3.15,  0.95 },	// Right
			{  0.065, 6.30,  2.82 }		// Top
		};
	};

	class WoodLadder_DZ: vector {
		points[] = {
			{    0, 0,     0 },	// Pivot
			{ -0.4, 0, 1.725 },	// Left
			{  0.4, 0, 1.725 },	// Right
			{    0, 0, 3.450 }	// Top (added)
		};
		size = 2;
	};

	class WoodHandrail_DZ: vector {
		points[] = {
			{  0.016, 0.001, 0.002 },	// Pivot
			{ -1.164, 0.001, 0.491 },	// Left
			{  1.196, 0.001, 0.491 },	// Right
			{  0.016, 0.001,  0.98 }	// Top
		};
		size = 2;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Fortifications
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class Concrete_Bunker_DZ: vector {
		points[] = {
			{ -0.04,    2.1,  2.8 },	// Front (added)
			{ -0.04,   -2.1,  2.8 },	// Back (adjusted)
			{ -2.34, -0.007,  2.8 },	// Left (adjusted)
			{  2.34, -0.007,  2.8 },	// Right (adjusted)
			{ -0.04, -0.007, 3.41 }		// Top
		};
	};
	class Concrete_Bunker_Locked_DZ: Concrete_Bunker_DZ {};

	class Land_HBarrier1_DZ: vector {
		points[] = {
			{  0.01, -0.41, 0.075 },	// Back
			{  0.01,  0.39, 0.075 },	// Front
			{ -0.24, -0.01, 0.075 },	// Left
			{  0.26, -0.01, 0.075 },	// Right
			{  0.01, -0.01,   0.4 }		// Top
		};
	};

	class Land_HBarrier3_DZ: vector {
		points[] = {
			{     0, -0.45,   0 },	// Back
			{     0,   0.4,   0 },	// Front
			{ -1.40,     0,   0 },	// Left
			{  1.35,     0,   0 },	// Right
			{     0,     0, 0.4 }	// Top
		};
	};

	class Land_HBarrier5_DZ: vector {
		points[] = {
			{    0, -0.4, 0.04 },	// Back
			{    0,  0.6, 0.04 },	// Front
			{ -2.5,  0.1, 0.04 },	// Left
			{  2.5,  0.1, 0.04 },	// Right
			{    0,  0.1, 0.5  }	// Top
		};
	};

	class Land_HBarrier5Curved_DZ: vector {
		points[] = {
			{  0.07,  -0.77,     0 },	// Back
			{ -0.05,   0.26,     0 },	// Front
			{ -2.55,  -0.31,     0 },	// Left
			{  2.43,   0.42,     0 },	// Right
			{  0.01, -0.255,  0.55 }	// Top
		};
	};

	class Sandbag1_DZ: vector {
		points[] = {
			{ 0, 0, -0.1 }		// Pivot (Center)
		};
	};

	class BagFenceRound_DZ: vector {
		points[] = {
			{ 0, -0.30, -0.1 }	// Pivot (Center)
		};
	};

	class HeavyBagFence_DZ: vector {
		points[] = {
			{ 0, 0, 0.1 }		// Center
		};
	};

	class HeavyBagFenceCorner_DZ: vector {
		points[] = {
			{ -1.3,  1.5, 0.1 },	// Front Left
			{  1.5, -1.2, 0.1 },	// Back Right
			{ -1.3, -1.2, 0.1 }	// Back Left (Corner)
		};
	};

	class HeavyBagFenceRound_DZ: vector {
		points[] = {
			{ -2.8,  -1.2, 0.18 },	// Left
			{  2.8,  -1.2, 0.18 },	// Right
			{    0, 1.075, 0.18 }	// Front
		};
	};

	class SandNest_DZ: vector {
		points[] = {
			{ -1.75,  0.8, -0.44 },	// Left
			{  1.75,  0.8, -0.44 },	// Right
			{     0, -1.9, -0.44 }	// Back
		};
	};

	class SandNestLarge_DZ: vector {
		points[] = {
			{    0,    0,    -1 },	// Pivot
			{ -4.5,    0, -0.44 },	// Left
			{  4.5,    0, -0.44 },	// Right
			{    0,  3.8, -0.44 },	// Front
			{    0, -5.2, -0.44 }	// Back
		};
	};

	class Land_WarfareBarrier5x_DZ: vector {
		points[] = {
			{      0, -0.28, 0.1375 },	// Back
			{      0,  0.28, 0.1375 },	// Front
			{ -3.575,     0, 0.1375 },	// Left
			{  3.575,     0, 0.1375 },	// Right
			{      0,     0, 0.4750 }	// Top
		};
	};

	class Land_WarfareBarrier10x_DZ: vector {
		points[] = {
			{    0, -0.28, 0.1547 },	// Back
			{    0,  0.28, 0.1547 },	// Front
			{ -7.5,     0, 0.1547 },	// Left
			{  7.5,     0, 0.1547 },	// Right
			{    0,     0, 0.4922 }		// Top
		};
	};

	class Land_WarfareBarrier10xTall_DZ: vector {
		points[] = {
			{    0, -0.91, -0.3874 },	// Back
			{    0,  0.91, -0.3874 },	// Front
			{ -7.5,     0, -0.3874 },	// Left
			{  7.5,     0, -0.3874 },	// Right
			{    0,     0,  1.2651 }	// Top
		};
	};

	class ConcreteBarrier_DZ {
		points[] = {
			{ 0, 0, 0 }		// Center
		};
	};
	class ConcreteBarrierStriped_DZ: ConcreteBarrier_DZ {};

	class ConcretePipe_DZ {
		points[] = {
			{ -1.125,     0,      0 },	// Left
			{  1.125,     0,      0 },	// Right
			{      0,     0,  1.125 },	// Top
			{      0,     0, -1.125 }	// Bottom
		};
	};

	class DragonTeeth_DZ {
		points[] = {
			{  0, 0, 0 },		// Pivot
			{ -4, 0, 0 },		// Left
			{  4, 0, 0 }		// Right
		};
	};
	class DragonTeethBig_DZ: DragonTeeth_DZ {};

	class Fort_RazorWire: vector {
		points[] = {
			{    0,     0,    0 },		// Pivot
			{ -4.1,     0, -0.3 },		// Left
			{  4.1,     0, -0.3 }		// Right
		};
	};

	class FortifiedWire_DZ: vector {
		points[] = {
			{    0,     0,    0 },		// Pivot
			{ -2.4,     0, -0.3 },		// Left
			{  2.4,     0, -0.3 }		// Right
		};
	};

	class BarbedGate_DZ {
		points[] = {
			{ -1.8, 0.04, 0.2, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.8, 0.04, 0.2, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};

	class StickFence_DZ: vector {
		points[] = {
			{     0, 0, 0.6 },	// Top
			{ -2.95, 0,   0 },	// Left
			{  2.95, 0,   0 }	// Right
		};
		size = 2;
	};

	class MetalGate_DZ: vector {
		points[] = {
			{ -4, 0, 0.3 },		// Left
			{  0, 0, 0.3 }		// Right
		};
	};

	class MetalPanel_DZ: vector {
		points[] = {
			{    0, 0, -0.8 },	// Pivot
			{ -1.5, 0,  0.5 },	// Left
			{  1.5, 0,  0.5 },	// Right
			{    0, 0,    2 }	// Top
		};
	};

	class Fence_corrugated_DZ: vector {
		points[] = {
			{     0, 0,  1.3 },	// Top
			{     0, 0, -0.4 },	// Bottom
			{ -1.95, 0,  0.4 },	// Left
			{  1.95, 0,  0.4 }	// Right
		};
	};

	class WoodenFence_1_foundation_DZ: vector {	
		points[] = {
			{      0, 0, 0.5 },	// Pivot
			{ -2.535, 0, 0.5 },	// Left
			{  2.535, 0, 0.5 }	// Right
		};
	};

	class WoodenFence_1_frame_DZ: vector {
		points[] = {
			{      0, 0, 0.95 },	// Top
			{ -2.535, 0, 0.95 },	// Left
			{  2.535, 0, 0.95 }	// Right
		};
	};
	class WoodenFence_quaterpanel_DZ: WoodenFence_1_frame_DZ {};
	class WoodenFence_halfpanel_DZ: WoodenFence_1_frame_DZ {};
	class WoodenFence_thirdpanel_DZ: WoodenFence_1_frame_DZ {};
	class WoodenFence_1_DZ: WoodenFence_1_frame_DZ {};

	class WoodenFence_2_DZ: vector {
		points[] = {
			{      0, 0,  0.5 },	// Pivot
			{ -2.535, 0,  1.6 },	// Left
			{  2.535, 0,  1.6 },	// Right
			{      0, 0, 2.68 }	// Top
		};
	};
	class WoodenFence_3_DZ: WoodenFence_2_DZ {};

	class WoodenFence_4_DZ: vector {
		points[] = {
			{      0, 0,  0.5 },	// Pivot
			{ -2.535, 0,    2 },	// Left
			{  2.535, 0,    2 },	// Right
			{      0, 0, 3.58 }	// Top
		};
	};
	class WoodenFence_5_DZ: WoodenFence_4_DZ {};
	class WoodenFence_6_DZ: WoodenFence_4_DZ {};
	class WoodenFence_7_DZ: WoodenFence_4_DZ {};
	class WoodenFence_7_Preview_DZ: WoodenFence_4_DZ {};

	class MetalFence_1_foundation_DZ: WoodenFence_1_foundation_DZ {};

	class MetalFence_1_frame_DZ: vector {
		points[] = {
			{      0, 0, 1.4 },	// Top
			{ -2.535, 0, 1.4 },	// Left
			{  2.535, 0, 1.4 }	// Right
		};
	};
	class MetalFence_halfpanel_DZ: MetalFence_1_frame_DZ {};
	class MetalFence_thirdpanel_DZ: MetalFence_1_frame_DZ {};	
	class MetalFence_1_DZ: MetalFence_1_frame_DZ {};

	class MetalFence_2_DZ: WoodenFence_2_DZ {};
	class MetalFence_3_DZ: WoodenFence_2_DZ {};
	class MetalFence_4_DZ: WoodenFence_4_DZ {};
	class MetalFence_5_DZ: WoodenFence_4_DZ {};
	class MetalFence_6_DZ: WoodenFence_4_DZ {};
	class MetalFence_7_DZ: WoodenFence_4_DZ {};
	class MetalFence_7_Preview_DZ: WoodenFence_4_DZ {};

	class WoodenGate_foundation_DZ: vector {
		points[] = {
			{ -2.535, 0, 0.95 },	// Left
			{  2.535, 0, 0.95 }	// Right
		};
	};

	class WoodenGate_1_DZ: vector {
		points[] = {
			{      0, 0,    0 },	// Pivot
			{ -2.535, 0, 0.95 },	// Left
			{  2.535, 0, 0.95 },	// Right
			{      0, 0,    2 }	// Top
		};
	};

	class WoodenGate_2_DZ: WoodenFence_2_DZ {};
	class WoodenGate_3_DZ: WoodenFence_2_DZ {};	

	class WoodenGate_4_DZ: vector {
		points[] = {
			{      0, 0,    0 },	// Pivot
			{ -2.535, 0,  1.9 },	// Left
			{  2.535, 0,  1.9 },	// Right
			{      0, 0, 3.58 }	// Top
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Storage
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class GunRack_DZ: vector {
		points[] = {
			{ -0.0575, -0.0995, -0.140 }	// Center
		};
		size = 2;
	};
	class GunRack2_DZ: GunRack_DZ {};

	class WoodCrate_DZ: vector {
		points[] = {
			{     0,     0, -0.47 },	// Bottom
			{     0, -0.47,     0 },	// Back
			{     0,  0.47,     0 },	// Front
			{ -0.47,     0,     0 },	// Left
			{  0.47,     0,     0 },	// Right
			{     0,     0,  0.47 }		// Top
		};
		size = 2;
	};
	class WoodCrate2_DZ: WoodCrate_DZ {};

	class StorageCrate_DZ: vector {
		points[] = {
			{ 0, 0, 0.08 }	// Top
		};
		size = 2;
	};

	class CamoStorageCrate_DZ: vector {
		points[] = {
			{ 0, 0, 0.45 }	// Top
		};
		size = 2;
	};

	class OutHouse_DZ: vector {
		points[] = {
			{ -0.59,  0.0675, 0 },	// Left
			{  0.59,  0.0675, 0 },	// Right
			{     0,  0.7175, 0 },	// Front
			{     0, -0.5825, 0 }	// Back
		};
		size = 2;
	};

	class StorageShed_DZ: vector {
		points[] = {
			{     -2, -0.075, 1.5 },	// Left
			{   1.57, -0.075, 1.5 },	// Right
			{ -0.215, -0.075,   3 },	// Top
			{ -0.215,    1.2, 1.5 },	// Front
			{ -0.215,  -1.35, 1.5 }		// Back
		};
	};
	class StorageShed2_DZ: StorageShed_DZ {};

	class Wooden_shed_DZ: vector {
		points[] = {
			{  0.7, -1.64,    0 },	// Back
			{  0.7,  1.64,    0 },	// Front
			{  3.1,     0,    0 },	// Right
			{  0.7,     0,  1.6 },	// Top
			{ -1.7,     0,    0 }	// Left (cull on open door)
		};
	};
	class Wooden_shed2_DZ: Wooden_shed_DZ {};

	class WoodShack_DZ: vector{
		points[] = {
			{     0,  2.4,   0 },	// Front
			{ -1.18, 0.65,   0 },	// Left
			{  1.18, 0.65,   0 },	// Right
			{     0, -1.1, 1.1 }	// Top
		};
	};
	class WoodShack2_DZ: WoodShack_DZ {};

	class StashSmall: vector {
		points[] = {
			{ 0, 0, 0.3 }	// Top
		};
		size = 2;
	};
	class StashSmall1: StashSmall {};
	class StashSmall2: StashSmall {};
	class StashSmall3: StashSmall {};
	class StashSmall4: StashSmall {};

	class StashMedium: vector {
		points[] = {
			{ 0, 0, 0.8 }	// Top
		};
		size = 2;
	};
	class StashMedium1: StashMedium {};
	class StashMedium2: StashMedium {};
	class StashMedium3: StashMedium {};
	class StashMedium4: StashMedium {};

	class TentStorage: vector {
		points[] = {
			{ 0, 0, 0.55 }	// Top
		};
		size = 2;
	};
	class TentStorage0: TentStorage {};
	class TentStorage1: TentStorage {};
	class TentStorage2: TentStorage {};
	class TentStorage3: TentStorage {};
	class TentStorage4: TentStorage {};
	class TentStorageWinter: TentStorage {};
	class TentStorageWinter0: TentStorage {};
	class TentStorageWinter1: TentStorage {};
	class TentStorageWinter2: TentStorage {};
	class TentStorageWinter3: TentStorage {};
	class TentStorageWinter4: TentStorage {};
	class IC_Tent: TentStorage {};

	class DomeTentStorage: vector {
		points[] = {
			{ 0.25, 0, 0.7 }	// Top
		};
		size = 2;
	};
	class DomeTentStorage0: DomeTentStorage {};
	class DomeTentStorage1: DomeTentStorage {};
	class DomeTentStorage2: DomeTentStorage {};
	class DomeTentStorage3: DomeTentStorage {};
	class DomeTentStorage4: DomeTentStorage {};
	class DesertTentStorage: DomeTentStorage {};
	class DesertTentStorage0: DomeTentStorage {};
	class DesertTentStorage1: DomeTentStorage {};
	class DesertTentStorage2: DomeTentStorage {};
	class DesertTentStorage3: DomeTentStorage {};
	class DesertTentStorage4: DomeTentStorage {};
	class WinterDomeTentStorage: DomeTentStorage {};
	class WinterDomeTentStorage0: DomeTentStorage {};
	class WinterDomeTentStorage1: DomeTentStorage {};
	class WinterDomeTentStorage2: DomeTentStorage {};
	class WinterDomeTentStorage3: DomeTentStorage {};
	class WinterDomeTentStorage4: DomeTentStorage {};
	class IC_DomeTent: DomeTentStorage {};

	class LockboxStorage: vector {
		points[] = {
			{ 0, 0, 0.25 }	// Top
		};
		size = 2;
	};
	class LockboxStorageLocked: LockboxStorage {};
	class LockboxStorage2: LockboxStorage {};
	class LockboxStorage2Locked: LockboxStorage {};
	class LockboxStorageWinter: LockboxStorage {};
	class LockboxStorageWinterLocked: LockboxStorage {};
	class LockboxStorageWinter2: LockboxStorage {};
	class LockboxStorageWinter2Locked: LockboxStorage {};

	class VaultStorage: vector {
		points[] = {
			{      0,      0,     0 },	// Pivot
			{      0,  0.284, 0.615 },	// Front
			{      0, -0.284, 0.615 },	// Back (Door Center)
			{      0,      0,  1.23 },	// Top
			{ -0.362,      0, 0.615 },	// Left
			{  0.362,      0, 0.615 }	// Right
		};
		size = 2;
	};
	class VaultStorageLocked: VaultStorage {};
	class VaultStorage2: VaultStorage {};
	class VaultStorage2Locked: VaultStorage {};
	class VaultStorageBroken: VaultStorage {};
	class VaultStorageBroken2: VaultStorage {};

	class TallSafe: vector {
		points[] = {
			{     0,     0, 0 },	// Pivot
			{     0,  0.35, 1 },	// Front
			{     0, -0.35, 1 },	// Back (Door Center)
			{     0,     0, 2 },	// Top
			{ -0.42,     0, 1 },	// Left
			{  0.42,     0, 1 }	// Right
		};
		size = 2;
	};
	class TallSafeLocked: TallSafe {};
	class TallSafeBroken: TallSafe {};
};
