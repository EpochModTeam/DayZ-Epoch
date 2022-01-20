///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Created by Raymix
//
//	Updated by Victor the Cleaner
//	- Removed snapTo whitelist
//	- Removed radius attribute
//	- Removed obsolete classes
//	- Objects may now snap to any other object
//
///////////////////////////////////////////////////////////////////////////////////////////////////

class SnapBuilding {

	class Plastic_Pole_EP1_DZ {
		points[] = {
			{ 0, 0, -0.47, $STR_EPOCH_ACTION_SNAP_PIVOT}
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Metal
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class MetalFloor4x_DZ { // f=5.25 / 2.625
		points[] = {
			{      0,      0, 0.141, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{      0,  -5.25, 0.141, $STR_EPOCH_ACTION_SNAP_BACK_CENTER},
			{ -2.625,  -5.25, 0.141, $STR_EPOCH_ACTION_SNAP_BACK_LEFT},
			{  2.625,  -5.25, 0.141, $STR_EPOCH_ACTION_SNAP_BACK_RIGHT},
			{      0,   5.25, 0.141, $STR_EPOCH_ACTION_SNAP_FRONT_CENTER},
			{ -2.625,   5.25, 0.141, $STR_EPOCH_ACTION_SNAP_FRONT_LEFT},
			{  2.625,   5.25, 0.141, $STR_EPOCH_ACTION_SNAP_FRONT_RIGHT},
			{  -5.25,      0, 0.141, $STR_EPOCH_ACTION_SNAP_LEFT_CENTER},
			{  -5.25, -2.625, 0.141, $STR_EPOCH_ACTION_SNAP_LEFT_BACK},
			{  -5.25,  2.625, 0.141, $STR_EPOCH_ACTION_SNAP_LEFT_FRONT},
			{   5.25,      0, 0.141, $STR_EPOCH_ACTION_SNAP_RIGHT_CENTER},
			{   5.25, -2.625, 0.141, $STR_EPOCH_ACTION_SNAP_RIGHT_BACK},
			{   5.25,  2.625, 0.141, $STR_EPOCH_ACTION_SNAP_RIGHT_FRONT}
		};
	};
	class MetalFloor4x_Preview_DZ: MetalFloor4x_DZ {};

	class MetalFloor_DZ { // f=5.25 / 2.625
		points[] = {
			{      0, -0.003, 0.141, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{      0, -2.628, 0.141, $STR_EPOCH_ACTION_SNAP_BACK},
			{      0,  2.622, 0.141, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -2.625, -0.003, 0.141, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.625, -0.003, 0.141, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class MetalFloor_Preview_DZ: MetalFloor_DZ {};
	class ElevatorStart_DZ: MetalFloor_DZ {};
	class ElevatorStop_Transparent_DZ: MetalFloor_DZ {};
	
	class MetalFloor_Half_DZ { // f=5.25 / 2.625 / 1.3125
		points[] = {
			{  -0.006,  0.012, 0.132, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{  -0.006, -2.613, 0.132, $STR_EPOCH_ACTION_SNAP_BACK},
			{  -0.006,  2.637, 0.132, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -1.3185,  0.012, 0.132, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.3065,  0.012, 0.132, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class MetalFloor_Half_Preview_DZ: MetalFloor_Half_DZ {};

	class MetalFloor_Quarter_DZ { // f=5.25 / 2.625 / 1.3125
		points[] = {
			{  -0.006,   0.112, 0.132, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{  -0.006, -1.2005, 0.132, $STR_EPOCH_ACTION_SNAP_BACK},
			{  -0.006,  1.4245, 0.132, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -1.3185,   0.112, 0.132, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.3065,   0.112, 0.132, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class MetalFloor_Quarter_Preview_DZ: MetalFloor_Quarter_DZ {};

	class Metal_Drawbridge_DZ {
		points[] = {
			{  0.0245, 0.008,    0, $STR_EPOCH_ACTION_SNAP_BOTTOM},
			{ -2.6005, 0.008,  1.7, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.6495, 0.008,  1.7, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{  0.0245, 0.008, 6.05, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};	
	class Drawbridge_Preview_DZ: Metal_Drawbridge_DZ {};
	class Metal_DrawbridgeLocked_DZ: Metal_Drawbridge_DZ {};

	class MetalPillar_DZ { // h=3.024
		points[] = {
			{      0,      0, 0.004, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{      0, -0.199, 1.516, $STR_EPOCH_ACTION_SNAP_BACK},
			{      0,  0.199, 1.516, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -0.199,      0, 1.516, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.199,      0, 1.516, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0,      0, 3.028, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class MetalPillar_Preview_DZ: MetalPillar_DZ {};

	class MetalContainer1A_DZ {
		points[] = {
			{    0,     0, -1.26788, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{    0, -3.05, -1.26788, $STR_EPOCH_ACTION_SNAP_BACK_CENTER},
			{ -1.2, -3.05,        0, $STR_EPOCH_ACTION_SNAP_BACK_LEFT},
			{  1.2, -3.05,        0, $STR_EPOCH_ACTION_SNAP_BACK_RIGHT},
			{    0, -3.05,  1.26788, $STR_EPOCH_ACTION_SNAP_BACK_TOP},
			{    0,  3.05, -1.26788, $STR_EPOCH_ACTION_SNAP_FRONT_CENTER},
			{ -1.2,  3.05,        0, $STR_EPOCH_ACTION_SNAP_FRONT_LEFT},
			{  1.2,  3.05,        0, $STR_EPOCH_ACTION_SNAP_FRONT_RIGHT},
			{    0,  3.05,  1.26788, $STR_EPOCH_ACTION_SNAP_FRONT_TOP},
			{ -1.2,     0,        0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.2,     0,        0, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0,     0,  1.26788, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class MetalContainer1B_DZ: MetalContainer1A_DZ {};
	class MetalContainer1G_DZ: MetalContainer1A_DZ {};

	class MetalContainer2D_DZ {
		points[] = {
			{    0,     0, -2.54288, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{    0, -3.05, -2.54288, $STR_EPOCH_ACTION_SNAP_BACK_CENTER},
			{ -1.2, -3.05,   -1.275, $STR_EPOCH_ACTION_SNAP_BACK_LEFT},
			{  1.2, -3.05,   -1.275, $STR_EPOCH_ACTION_SNAP_BACK_RIGHT},
			{    0, -3.05,  2.54288, $STR_EPOCH_ACTION_SNAP_BACK_TOP},
			{    0,  3.05, -2.54288, $STR_EPOCH_ACTION_SNAP_FRONT_CENTER},
			{ -1.2,  3.05,   -1.275, $STR_EPOCH_ACTION_SNAP_FRONT_LEFT},
			{  1.2,  3.05,   -1.275, $STR_EPOCH_ACTION_SNAP_FRONT_RIGHT},
			{    0,  3.05,  2.54288, $STR_EPOCH_ACTION_SNAP_FRONT_TOP},
			{ -1.2,     0,   -1.275, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.2,     0,   -1.275, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0,     0,  2.54288, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class Door_DZ {
		points[] = {
			{   0.01, 0, -0.008, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -0.995, 0,  1.327, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.015, 0,  1.327, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{   0.01, 0,  2.662, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class DoorLocked_DZ: Door_DZ {};
	class DoorFrame_DZ: Door_DZ {};
	class DoorFrame_Preview_DZ: Door_DZ {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Glass
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class GlassFloor_DZ { // f=5.25 / 2.625 / 1.3125
		points[] = {
			{      0, -0.002, 0.141, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{      0, -2.627, 0.141, $STR_EPOCH_ACTION_SNAP_BACK},
			{      0,  2.623, 0.141, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -2.625, -0.002, 0.141, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.625, -0.002, 0.141, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class GlassFloor_Preview_DZ: GlassFloor_DZ {};
	class ElevatorStop_Glass_DZ: GlassFloor_DZ {};
	
	class GlassFloor_Half_DZ { // f=5.25 / 2.625 / 1.3125
		points[] = {
			{  -0.032, -0.003, 0.141, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{  -0.032, -2.628, 0.141, $STR_EPOCH_ACTION_SNAP_BACK},
			{  -0.032,  2.622, 0.141, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -1.3445, -0.003, 0.141, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.2805, -0.003, 0.141, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class GlassFloor_Half_Preview_DZ: GlassFloor_Half_DZ {};

	class GlassFloor_Quarter_DZ { // f=5.25 / 2.625 / 1.3125
		points[] = {
			{   0.005,  -0.017, 0.141, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{   0.005, -1.3295, 0.141, $STR_EPOCH_ACTION_SNAP_BACK},
			{   0.005,  1.2955, 0.141, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -1.3075,  -0.017, 0.141, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.3175,  -0.017, 0.141, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class GlassFloor_Quarter_Preview_DZ: GlassFloor_Quarter_DZ {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Cinder
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class Cinder_DZE { // All cinder walls and doors
		points[] = {
			{      0, 0,   0, $STR_EPOCH_ACTION_SNAP_BOTTOM},
			{ -2.625, 0, 1.7, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.625, 0, 1.7, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0, 0, 3.4, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class CinderWall_DZ:				Cinder_DZE {};	// wall
	class CinderWall_Preview_DZ:			Cinder_DZE {};	// wall
	class CinderWallSmallDoorway_DZ:		Cinder_DZE {};	// doorway
	class CinderWallSmallDoorway_Preview_DZ:	Cinder_DZE {};	// doorway
	class CinderWallDoorSmall_DZ:			Cinder_DZE {};	// door
	class CinderWallDoorSmallLocked_DZ:		Cinder_DZE {};	// door
	class CinderDoorHatch_DZ:			Cinder_DZE {};	// door hatch
	class CinderDoorHatchLocked_DZ:			Cinder_DZE {};	// door hatch
	class CinderDoorHatch_Preview_DZ:		Cinder_DZE {};	// door hatch
	class CinderWallWindow_DZ:			Cinder_DZE {};	// window
	class CinderWallWindowLocked_DZ:		Cinder_DZE {};	// window
	class CinderWallWindow_Preview_DZ:		Cinder_DZE {};	// window
	class CinderWallDoorway_DZ:			Cinder_DZE {};	// garage doorway
	class CinderWallDoorway_Preview_DZ:		Cinder_DZE {};	// garage doorway
	class CinderWallDoor_DZ:			Cinder_DZE {};	// garage door
	class CinderWallDoorLocked_DZ:			Cinder_DZE {};	// garage door
	class CinderGarageOpenTopFrame_DZ:		Cinder_DZE {};	// open top garage frame only
	class CinderGarageOpenTop_DZ:			Cinder_DZE {};	// open top garage doors
	class CinderGarageOpenTopLocked_DZ:		Cinder_DZE {};	// open top garage doors
	class CinderGarageOpenTop_Preview_DZ:		Cinder_DZE {};	// open top garage doors

	class CinderWallHalf_DZ: Cinder_DZE {
		points[] = {
			{      0, 0,   0, $STR_EPOCH_ACTION_SNAP_BOTTOM},
			{ -2.625, 0, 1.7, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.625, 0, 1.7, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0, 0, 1.5, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class CinderWallHalf_Preview_DZ: CinderWallHalf_DZ {};
	class CinderWallHalf_Gap_DZ: CinderWallHalf_DZ {};
	class CinderWallHalf_Gap_Preview_DZ: CinderWallHalf_DZ {};

	class CinderGateFrame_DZ {
		points[] = {
			{      0, 0,   0, $STR_EPOCH_ACTION_SNAP_BOTTOM},
			{ -2.625, 0, 1.7, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.625, 0, 1.7, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0, 0, 6.8, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class CinderGate_DZ: CinderGateFrame_DZ {};
	class CinderGateLocked_DZ: CinderGateFrame_DZ {};
	class CinderGate_Preview_DZ: CinderGateFrame_DZ {};

	///////////////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Wood
	//
	///////////////////////////////////////////////////////////////////////////////////////////////////

	class WoodFloor4x_DZ { // LR=9.76 / FB=9.3
		points[] = {
			{ -0.012,      0, 0.139, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -0.012,  -4.65, 0.139, $STR_EPOCH_ACTION_SNAP_BACK_CENTER},
			{ -2.452,  -4.65, 0.139, $STR_EPOCH_ACTION_SNAP_BACK_LEFT},
			{  2.428,  -4.65, 0.139, $STR_EPOCH_ACTION_SNAP_BACK_RIGHT},
			{ -0.012,   4.65, 0.139, $STR_EPOCH_ACTION_SNAP_FRONT_CENTER},
			{ -2.452,   4.65, 0.139, $STR_EPOCH_ACTION_SNAP_FRONT_LEFT},
			{  2.428,   4.65, 0.139, $STR_EPOCH_ACTION_SNAP_FRONT_RIGHT},
			{ -4.892,      0, 0.139, $STR_EPOCH_ACTION_SNAP_LEFT_CENTER},
			{ -4.892, -2.325, 0.139, $STR_EPOCH_ACTION_SNAP_LEFT_BACK},
			{ -4.892,  2.325, 0.139, $STR_EPOCH_ACTION_SNAP_LEFT_FRONT},
			{  4.868,      0, 0.139, $STR_EPOCH_ACTION_SNAP_RIGHT_CENTER},
			{  4.868, -2.325, 0.139, $STR_EPOCH_ACTION_SNAP_RIGHT_BACK},
			{  4.868,  2.325, 0.139, $STR_EPOCH_ACTION_SNAP_RIGHT_FRONT}
		};
	};
	class WoodFloor4x_Preview_DZ: WoodFloor4x_DZ {};	

	class WoodFloor_DZ { // LR=4.88 / FB=4.65
		points[] = {
			{ -0.029, -0.013, 0.139, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -0.029, -2.338, 0.139, $STR_EPOCH_ACTION_SNAP_BACK},
			{ -0.029,  2.312, 0.139, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -2.469, -0.013, 0.139, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.411, -0.013, 0.139, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class WoodFloor_Preview_DZ: WoodFloor_DZ {};

	class WoodFloorHalf_DZ { // LR=2.44 / FB=4.65
		points[] = {
			{  0.081,  0.005, 0.116, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{  0.081, -2.320, 0.116, $STR_EPOCH_ACTION_SNAP_BACK},
			{  0.081,  2.330, 0.116, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -1.139,  0.005, 0.116, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.301,  0.005, 0.116, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class WoodFloorHalf_Preview_DZ: WoodFloorHalf_DZ {};

	class WoodFloorQuarter_DZ { // LR=2.44 / FB=2.325
		points[] = {
			{  0.047,  -0.042, 0.114, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{  0.047, -1.2045, 0.114, $STR_EPOCH_ACTION_SNAP_BACK},
			{  0.047,  1.1205, 0.114, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -1.173,  -0.042, 0.114, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.267,  -0.042, 0.114, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class WoodFloorQuarter_Preview_DZ: WoodFloorQuarter_DZ {};	

	class WoodFloorStairs_DZ { // LR=4.88 / FB=4.65
		points[] = {
			{ -0.0275, -0.0125, 0.125, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -0.0275, -2.3375, 3.125, $STR_EPOCH_ACTION_SNAP_BACK},
			{ -0.0275,  2.3125, 3.125, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -2.4675, -0.0125, 3.125, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.4125, -0.0125, 3.125, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};		
	};
	class Wood_Floor_Stairs_Preview_DZ: WoodFloorStairs_DZ {};	

	class WoodTriangleFloor_DZ {
		points[] = {
			{      0,     0, 0.1, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{      0,  -1.3, 0.1, $STR_EPOCH_ACTION_SNAP_BACK},
			{      0, 1.288, 0.1, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -1.258, 0.027, 0.1, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.258, 0.027, 0.1, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};	
	class WoodTriangleFloor_Preview_DZ: WoodTriangleFloor_DZ {};

	////////	Small Wooden Walls	////////

	class WoodSmall_DZE { // LR=4.57
		points[] = {
			{ -0.039, 0.021, 0.029, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.324, 0.021, 1.529, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.246, 0.021, 1.529, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.039, 0.021, 3.029, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class WoodSmallWall_DZ:			WoodSmall_DZE {};	// wall
	class WoodSmallWall_Preview_DZ:		WoodSmall_DZE {};	// wall
	class WoodSmallWallDoor_DZ:		WoodSmall_DZE {};	// doorway
	class WoodSmallWallDoor_Preview_DZ:	WoodSmall_DZE {};	// doorway
	class WoodSmallWallWin_DZ:		WoodSmall_DZE {};	// window
	class WoodSmallWallWin_Preview_DZ:	WoodSmall_DZE {};	// window
	class Land_DZE_WoodDoor:		WoodSmall_DZE {};	// door
	class Land_DZE_WoodDoorLocked:		WoodSmall_DZE {};	// door
	class WoodDoor_Preview_DZ:		WoodSmall_DZE {};	// door

	class Land_DZE_WoodOpenTopGarageDoor {	// garage door
		points[] = {
			{ -0.023, 0.016, 0.019, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.308, 0.016, 1.519, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.262, 0.016, 1.519, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.023, 0.016, 3.019, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class Land_DZE_WoodOpenTopGarageLocked:	Land_DZE_WoodOpenTopGarageDoor {};
	class Wood_GarageOpenTop_Preview_DZ:	Land_DZE_WoodOpenTopGarageDoor {};

	////////	Large Wooden Walls	////////

	class WoodLarge_DZE { // LR=4.88
		points[] = {
			{ -0.024, 0.018, 0.038, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.464, 0.018, 1.538, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.416, 0.018, 1.538, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.024, 0.018, 3.038, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class WoodLargeWall_DZ:			WoodLarge_DZE {};	// wall
	class WoodLargeWall_Preview_DZ:		WoodLarge_DZE {};

	class WoodLargeWallDoor_DZ {		// doorway
		points[] = {
			{ -0.041, 0.018, 0.028, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.481, 0.018, 1.528, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.399, 0.018, 1.528, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.041, 0.018, 3.028, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class WoodLargeWallDoor_Preview_DZ: WoodLargeWallDoor_DZ {};

	class Land_DZE_LargeWoodDoor {		// door
		points[] = {
			{ -0.041, 0.018, 0.03, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.481, 0.018, 1.53, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.399, 0.018, 1.53, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.041, 0.018, 3.03, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class Land_DZE_LargeWoodDoorLocked: Land_DZE_LargeWoodDoor {};
	class LargeWoodDoor_Preview_DZ: Land_DZE_LargeWoodDoor {};

	class WoodLargeWallWin_DZ {		// window
		points[] = {
			{ -0.023, 0.021, 0.039, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.463, 0.021, 1.539, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.417, 0.021, 1.539, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.023, 0.021, 3.039, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class WoodLargeWallWin_Preview_DZ: WoodLargeWallWin_DZ {};

	class Land_DZE_GarageWoodDoor {		// garage
		points[] = {
			{ -0.023, 0.022, 0.018, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.463, 0.022, 1.518, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.417, 0.022, 1.518, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.023, 0.022, 3.018, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class Land_DZE_GarageWoodDoorLocked: Land_DZE_GarageWoodDoor {};
	class GarageWoodDoor_Preview_DZ: Land_DZE_GarageWoodDoor {};

	class WoodSmallWallThird_DZ { // 4.88m
		points[] = {
			{ -0.023, -0.018, 0.002, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.463, -0.018, 1.502, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.417, -0.018, 1.502, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.023, -0.018, 1.167, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class WoodSmallWallThird_Preview_DZ: WoodSmallWallThird_DZ {};

	class WoodTriangleWall_DZ {
		points[] = {
			{     0, 0,    0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.26, 0, 1.32, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.26, 0, 1.32, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{     0, 0, 2.59, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};	
	class Wood_Triangle_Wall_Preview_DZ: WoodTriangleWall_DZ {};

	class WoodGateFrame_DZ { // 4.88m
		points[] = {
			{  0.022, 0.02, 0.025, $STR_EPOCH_ACTION_SNAP_BOTTOM},
			{ -2.418, 0.02, 1.525, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.462, 0.02, 1.525, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{  0.022, 0.02, 6.025, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class Land_DZE_WoodGate:	WoodGateFrame_DZ {};
	class Land_DZE_WoodGateLocked:	WoodGateFrame_DZ {};	
	class WoodGate_Preview_DZ:	WoodGateFrame_DZ {};		

	class WoodPillar_DZ {	
		points[] = {
			{    0,      0, 0.016, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{    0, -0.158, 1.516, $STR_EPOCH_ACTION_SNAP_BACK},
			{    0,  0.158, 1.516, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -0.2,      0, 1.516, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.2,      0, 1.516, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0,      0, 3.016, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class Wood_Pillar_Preview_DZ: WoodPillar_DZ {};

	class Stairs_DZE {
		points[] = {
			{ -0.02, 0.012, -0.02, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -0.02, 1.337, -0.02, $STR_EPOCH_ACTION_SNAP_BOTTOM},
			{ -0.02, 3.662,  2.98, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -0.81, 1.812,  1.48, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.77, 1.812,  1.48, $STR_EPOCH_ACTION_SNAP_RIGHT}			
		};
	};
	class WoodStairsSans_DZ:		Stairs_DZE {};
	class WoodStairsSans_Preview_DZ:	Stairs_DZE {};
	class WoodStairs_DZ:			Stairs_DZE {};
	class WoodStairs_Preview_DZ:		Stairs_DZE {};
	class WoodStairsRails_DZ:		Stairs_DZE {};

	class WoodRamp_DZ {
		points[] = {
			{  0.065,    0, -0.18, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.585, 3.15,  0.95, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.715, 3.15,  0.95, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{  0.065, 6.30,  2.82, $STR_EPOCH_ACTION_SNAP_TOP},
			{  0.065, 6.30, -0.18, $STR_EPOCH_ACTION_SNAP_FRONT}
		};
	};
	class WoodRamp_Preview_DZ: WoodRamp_DZ {};

	class WoodLadder_DZ {
		points[] = {
			{    0, 0,     0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -0.4, 0, 1.725, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.4, 0, 1.725, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0, 0, 3.450, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class WoodLadder_Preview_DZ: WoodLadder_DZ {};

	class WoodHandrail_DZ {
		points[] = {
			{  0.016, 0.001, 0.002, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.164, 0.001, 0.491, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.196, 0.001, 0.491, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{  0.016, 0.001,  0.98, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class Wood_Handrail_Preview_DZ: WoodHandrail_DZ {};

	class SimpleFootbridge_DZ {
		points[] = {
			{ 0,    0, 0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ 0, -3.0, 0, $STR_EPOCH_ACTION_SNAP_BACK},
			{ 0,  3.0, 0, $STR_EPOCH_ACTION_SNAP_FRONT}
		};
	};

	class WoodenFootbridge_DZ {
		points[] = {
			{ 0,    0, 0.05, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ 0, -2.4, 0.05, $STR_EPOCH_ACTION_SNAP_BACK},
			{ 0,  2.4, 0.05, $STR_EPOCH_ACTION_SNAP_FRONT}
		};
	};

	class Windbreak_DZ {
		points[] = {
			{      0, 0, 0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.975, 0, 0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.975, 0, 0, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Fortifications
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class Land_HBarrier1_DZ {
		points[] = {
			{  0.01, -0.01, -0.665, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{  0.01, -0.81,  0.075, $STR_EPOCH_ACTION_SNAP_BACK},
			{  0.01,  0.79,  0.075, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -0.59, -0.01,  0.075, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.61, -0.01,  0.075, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{  0.01, -0.01,  0.835, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class Land_HBarrier3_DZ {
		points[] = {
			{    0, -0.03, -0.62, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{    0, -0.78,  0.12, $STR_EPOCH_ACTION_SNAP_BACK},
			{    0,  0.72,  0.12, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -1.7, -0.03,  0.12, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.7, -0.03,  0.12, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0, -0.03,  0.88, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class Land_HBarrier5_DZ {
		points[] = {
			{     0,  0.1, -0.7, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{     0, -0.7, 0.04, $STR_EPOCH_ACTION_SNAP_BACK},
			{     0,  0.9, 0.04, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -2.85,  0.1, 0.04, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.85,  0.1, 0.04, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{     0,  0.1,  0.8, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class Land_HBarrier5Curved_DZ {
		points[] = {
			{  0.01, -0.255, -0.6975, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{  0.12,  -1.07,  0.0425, $STR_EPOCH_ACTION_SNAP_BACK},
			{ -0.10,   0.56,  0.0425, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -2.90,  -0.31,  0.0425, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.78,   0.42,  0.0425, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{  0.01, -0.255,  0.9025, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class Sandbag1_DZ {
		points[] = {
			{    0, 0, -0.4, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.5, 0,    0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.5, 0,    0, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0, 0,  0.4, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class BagFenceRound_DZ {
		points[] = {
			{      0,    0, -0.4, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.295, 0.38,    0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.295, 0.38,    0, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0,    0,  0.4, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class SandNest_DZ {
		points[] = {
			{     0,   0,    -1, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.75, 0.8, -0.44, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.75, 0.8, -0.44, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};

	class SandNestLarge_DZ {
		points[] = {
			{    0,    0,    -1, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -4.5,    0, -0.44, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  4.5,    0, -0.44, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0,  3.8, -0.44, $STR_EPOCH_ACTION_SNAP_FRONT},
			{    0, -5.2, -0.44, $STR_EPOCH_ACTION_SNAP_BACK}
		};
	};

	class HeavyBagFence_DZ {
		points[] = {
			{    0, 0, -0.377709, $STR_EPOCH_ACTION_SNAP_PIVOT},		// -0,3
			{ -1.5, 0,       0.1, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.5, 0,       0.1, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0, 0,       0.5, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class HeavyBagFenceCorner_DZ {
		points[] = {
			{    0,    0, -0.377709, $STR_EPOCH_ACTION_SNAP_PIVOT},		// -0.3
			{  1.5, -1.2,       0.1, $STR_EPOCH_ACTION_SNAP_BACK_RIGHT},
			{    0, -1.2,       0.5, $STR_EPOCH_ACTION_SNAP_BACK_CENTER},
			{ -1.5, -1.2,       0.1, $STR_EPOCH_ACTION_SNAP_BACK_LEFT},
			{ -1.3,    0,       0.5, $STR_EPOCH_ACTION_SNAP_LEFT_CENTER},
			{ -1.3,  1.5,       0.1, $STR_EPOCH_ACTION_SNAP_LEFT_FRONT}
		};
	};

	class HeavyBagFenceRound_DZ {
		points[] = {
			{     0,      0, -0.293546, $STR_EPOCH_ACTION_SNAP_PIVOT},	// -0.2158
			{ -2.78,   -1.2,    0.1842, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.78,   -1.2,    0.1842, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{     0,  1.075,    0.5842, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class Land_WarfareBarrier5x_DZ {
		points[] = {
			{      0,     0,  -0.55, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{      0, -0.63, 0.1375, $STR_EPOCH_ACTION_SNAP_BACK},
			{      0,  0.63, 0.1375, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -3.925,     0, 0.1375, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  3.925,     0, 0.1375, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0,     0, 0.8250, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class Land_WarfareBarrier10x_DZ {
		points[] = {
			{     0,     0, -0.5328, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{     0, -0.63,  0.1547, $STR_EPOCH_ACTION_SNAP_BACK},
			{     0,  0.63,  0.1547, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -7.85,     0,  0.1547, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  7.85,     0,  0.1547, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{     0,     0,  0.8422, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class Land_WarfareBarrier10xTall_DZ {
		points[] = {
			{     0,     0, -1.0749, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{     0, -1.26, -0.3874, $STR_EPOCH_ACTION_SNAP_BACK},
			{     0,  1.26, -0.3874, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -7.85,     0, -0.3874, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  7.85,     0, -0.3874, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{     0,     0,  1.6151, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class ConcreteBarrier_DZ {
		points[] = {
			{    0, 0, -0.4, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.3, 0,    0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.3, 0,    0, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0, 0,  0.3, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class ConcreteBarrierStriped_DZ: ConcreteBarrier_DZ {};

	class ConcreteWall_DZ {
		points[] = {
			{ -0.031, 0,   -1.75, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.276, 0, -0.0125, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.214, 0, -0.0125, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.031, 0,   1.725, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class ConcretePipe_DZ {
		points[] = {
			{      0,     0,      0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{      0, -1.45, -1.225, $STR_EPOCH_ACTION_SNAP_BACK_CENTER},
			{ -1.225, -1.45,      0, $STR_EPOCH_ACTION_SNAP_BACK_LEFT},
			{  1.225, -1.45,      0, $STR_EPOCH_ACTION_SNAP_BACK_RIGHT},
			{      0, -1.45,  1.225, $STR_EPOCH_ACTION_SNAP_BACK_TOP},
			{      0,  1.45, -1.225, $STR_EPOCH_ACTION_SNAP_FRONT_CENTER},
			{ -1.225,  1.45,      0, $STR_EPOCH_ACTION_SNAP_FRONT_LEFT},
			{  1.225,  1.45,      0, $STR_EPOCH_ACTION_SNAP_FRONT_RIGHT},
			{      0,  1.45,  1.225, $STR_EPOCH_ACTION_SNAP_FRONT_TOP},
			{ -1.225,     0,      0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.225,     0,      0, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0,     0,  1.225, $STR_EPOCH_ACTION_SNAP_TOP},
			{      0,     0, -1.225, $STR_EPOCH_ACTION_SNAP_BOTTOM}
		};
	};

	class DragonTeeth_DZ {
		points[] = {
			{    0, 0, 0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -4.5, 0, 0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  4.5, 0, 0, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};

	class DragonTeethBig_DZ {
		points[] = {
			{    0, 0, 0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -4.9, 0, 0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  4.9, 0, 0, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};

	class Fort_RazorWire {
		points[] = {
			{    0,     0,    0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{    0, -0.95, -0.3, $STR_EPOCH_ACTION_SNAP_BACK},
			{    0,  0.95, -0.3, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -4.1,     0, -0.3, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  4.1,     0, -0.3, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0,     0,    1, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class FortifiedWire_DZ {
		points[] = {
			{    0,     0,    0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{    0, -0.95, -0.3, $STR_EPOCH_ACTION_SNAP_BACK},
			{    0,  0.95, -0.3, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -2.9,     0, -0.3, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.9,     0, -0.3, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0,     0,    1, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class BarbedGate_DZ {
		points[] = {
			{ -1.88, 0.04, 0.2, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.88, 0.04, 0.2, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};

	class Concrete_Bunker_DZ {
		points[] = {
			{  -0.04, -0.007, 0.01, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.527, -0.007, 1.71, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.447, -0.007, 1.71, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{  -0.04, -0.007, 3.41, $STR_EPOCH_ACTION_SNAP_TOP}
		};	
	};
	class Concrete_Bunker_Locked_DZ: Concrete_Bunker_DZ {};
	class Concrete_Bunker_Preview_DZ: Concrete_Bunker_DZ {};

	class MetalPanel_DZ {
		points[] = {
			{    0, 0,   0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.5, 0, 0.7, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.5, 0, 0.7, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{    0, 0,   2, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};

	class MetalGate_DZ {
		points[] = {
			{   -2, 0, 0.3, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -4.1, 0, 0.3, $STR_EPOCH_ACTION_SNAP_LEFT},
			{    0, 0, 0.3, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	
	class Fence_corrugated_DZ {
		points[] = {
			{     0, 0, -0.45, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -1.99, 0,  0.00, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.99, 0,  0.00, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	
	class StickFence_DZ {
		points[] = {
			{     0, 0,   0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.95, 0, 0.3, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.95, 0, 0.3, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};

	class WoodenFence_1_foundation_DZ {	
		points[] = {
			{      0, 0,       0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.535, 0,    0.95, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.535, 0,    0.95, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0, 0, 1.78042, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};	
	
	class WoodenFence_1_frame_DZ: WoodenFence_1_foundation_DZ {};
	class WoodenFence_quaterpanel_DZ: WoodenFence_1_foundation_DZ {};	
	class WoodenFence_halfpanel_DZ: WoodenFence_1_foundation_DZ {};
	class WoodenFence_thirdpanel_DZ: WoodenFence_1_foundation_DZ {};	
	class WoodenFence_1_DZ: WoodenFence_1_foundation_DZ {};
	
	class WoodenFence_4_DZ {	
		points[] = {
			{      0, 0,       0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.535, 0,    0.95, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.535, 0,    0.95, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0, 0, 3.58042, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class WoodenGate_4_DZ: WoodenFence_4_DZ {};	
	class WoodenFence_5_DZ: WoodenFence_4_DZ {};	
	class WoodenFence_6_DZ: WoodenFence_4_DZ {};
	class WoodenFence_7_DZ: WoodenFence_4_DZ {};
	class WoodenFence_ghost_DZ: WoodenFence_4_DZ {};	

	class WoodenFence_2_DZ {	
		points[] = {
			{      0, 0,       0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.535, 0,    0.95, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.535, 0,    0.95, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0, 0, 2.68042, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class WoodenFence_3_DZ: WoodenFence_2_DZ {};	
	class WoodenGate_foundation_DZ: WoodenFence_2_DZ {};	
	class WoodenGate_1_DZ: WoodenFence_2_DZ {};
	class WoodenGate_2_DZ: WoodenFence_2_DZ {};	
	class WoodenGate_3_DZ: WoodenFence_2_DZ {};	
	
	class WoodenGate_ghost_DZ {	
		points[] = {
			{      0, 0,     0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.535, 0, -0.95, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.535, 0, -0.95, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0, 0,   2.6, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};	

	class MetalFence_1_foundation_DZ {	
		points[] = {
			{      0, 0,       0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.535, 0,    0.95, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.535, 0,    0.95, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0, 0, 1.78042, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class MetalFence_1_frame_DZ: MetalFence_1_foundation_DZ {};	
	class MetalFence_halfpanel_DZ: MetalFence_1_foundation_DZ {};	
	class MetalFence_thirdpanel_DZ: MetalFence_1_foundation_DZ {};		
	class MetalFence_1_DZ: MetalFence_1_foundation_DZ {};
	
	class MetalFence_2_DZ {	
		points[] = {
			{      0, 0,       0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.575, 0,    0.95, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.575, 0,    0.95, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0, 0, 2.68042, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class MetalFence_3_DZ: MetalFence_2_DZ {};
	
	class MetalFence_4_DZ {	
		points[] = {
			{      0, 0,       0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -2.575, 0,    0.95, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  2.575, 0,    0.95, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0, 0, 3.58042, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class MetalFence_5_DZ: MetalFence_4_DZ {};
	class MetalFence_6_DZ: MetalFence_4_DZ {};
	class MetalFence_7_DZ: MetalFence_4_DZ {};	
	class MetalFence_ghost_DZ: MetalFence_4_DZ {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//						Storage
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class WoodCrate_DZ {
		points[] = {
			{     0,     0, -0.47, $STR_EPOCH_ACTION_SNAP_BOTTOM},
			{     0, -0.47,     0, $STR_EPOCH_ACTION_SNAP_BACK},
			{     0,  0.47,     0, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -0.47,     0,     0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.47,     0,     0, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{     0,     0,  0.47, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class WoodCrate2_DZ: WoodCrate_DZ {};

	class GunRack_DZ {
		points[] = {
			{ -0.0575, -0.0995, -0.505, $STR_EPOCH_ACTION_SNAP_BOTTOM},
			{ -0.0575, -0.5745, -0.140, $STR_EPOCH_ACTION_SNAP_BACK},
			{ -0.0575,  0.3755, -0.140, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -0.4475, -0.0995, -0.140, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.3325, -0.0995, -0.140, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.0575, -0.0995,  0.225, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class GunRack2_DZ: GunRack_DZ {};	

	class StorageCrate_DZ {
		points[] = {
			{     0,    0, -0.22, $STR_EPOCH_ACTION_SNAP_BOTTOM},
			{     0, -0.2,     0, $STR_EPOCH_ACTION_SNAP_BACK},
			{     0,  0.2,     0, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -0.44,    0,     0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.44,    0,     0, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{     0,    0,  0.08, $STR_EPOCH_ACTION_SNAP_TOP}
		};		
	};

	class StorageShed_DZ {
		points[] = {
			{ -0.215, -0.075,   0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{ -0.215,  -1.35, 1.5, $STR_EPOCH_ACTION_SNAP_BACK},
			{ -0.215,    1.2, 1.5, $STR_EPOCH_ACTION_SNAP_FRONT},
			{     -2, -0.075, 1.5, $STR_EPOCH_ACTION_SNAP_LEFT},
			{   1.57, -0.075, 1.5, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{ -0.215, -0.075,   3, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class StorageShed2_DZ: StorageShed_DZ {};
	class StorageShed_Preview_DZ: StorageShed_DZ {};

	class WoodShack_DZ {
		points[] = {
			{     0, 0.65, -1.1, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{     0, -1.1,    0, $STR_EPOCH_ACTION_SNAP_BACK},
			{     0,  2.4,    0, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -1.18, 0.65,    0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  1.18, 0.65,    0, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{     0, 0.65,  1.1, $STR_EPOCH_ACTION_SNAP_TOP}		
		};
	};
	class WoodShack2_DZ: WoodShack_DZ {};

	class Wooden_shed_DZ {
		points[] = {
			{  0.7,     0, -1.6, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{  0.7, -1.64,    0, $STR_EPOCH_ACTION_SNAP_BACK},
			{  0.7,  1.64,    0, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -1.7,     0,    0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  3.1,     0,    0, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{  0.7,     0,  1.6, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};	
	class Wooden_shed2_DZ: Wooden_shed_DZ {};

	class OutHouse_DZ {
		points[] = {
			{     0,  0.0675, -1.25, $STR_EPOCH_ACTION_SNAP_BOTTOM},
			{     0, -0.5825,     0, $STR_EPOCH_ACTION_SNAP_BACK},
			{     0,  0.7175,     0, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -0.59,  0.0675,     0, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.59,  0.0675,     0, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};

	class VaultStorageLocked {
		points[] = {
			{      0,     0,     0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{      0, 0.284, 0.615, $STR_EPOCH_ACTION_SNAP_FRONT},
			{ -0.362,     0, 0.615, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.362,     0, 0.615, $STR_EPOCH_ACTION_SNAP_RIGHT},
			{      0,     0,  1.23, $STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class VaultStorage: VaultStorageLocked {};
	class VaultStorage2: VaultStorageLocked {};
	class VaultStorage2Locked: VaultStorageLocked {};
	class VaultStorageBroken: VaultStorageLocked {};
	class VaultStorageBroken2: VaultStorageLocked {};

	class TallSafeLocked {
		points[] = {
			{     0,    0,     0, $STR_EPOCH_ACTION_SNAP_PIVOT},
			{     0, 0.35, 0.615, $STR_EPOCH_ACTION_SNAP_FRONT},
			{     0,    0,     2, $STR_EPOCH_ACTION_SNAP_TOP},
			{ -0.42,    0, 0.615, $STR_EPOCH_ACTION_SNAP_LEFT},
			{  0.42,    0, 0.615, $STR_EPOCH_ACTION_SNAP_RIGHT}
		};		
	};

	class TallSafe: TallSafeLocked {};
	class TallSafeBroken: TallSafeLocked {};	
};
