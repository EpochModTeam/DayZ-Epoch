///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	modularVectors.hpp
//
//	Author:	Victor the Cleaner
//	Date:	August 2021
//
//	Helper array vectors for "Remove" and "Deconstruct" of modular objects.
//	Similar to snappoints.hpp, but customized to specific objects for improved visual appeal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
// Known Values
#define mX1 5.28  // metal floor, width (x,y)
#define mZ1 0.3   // metal floor, height (z)
#define pZ1 3.05  // metal pillar, height (z)
#define cZ1 3.37  // cinder wall full, height (z)
#define cH1 1.5   // cinder wall half, height (z)
#define gZ1 6.8   // cinder gate frame, height (z)

// Metal
#define mX2 2.64  // metal floor, half width
#define mX4 1.32  // metal floor, quarter width
#define mZ2 0.15  // metal floor, half height
#define pZ2 1.525 // metal pillar, half height (z)

// Cinder
#define cX1 mX1   // cinder wall full, width (x)
#define cX2 2.64  // cinder wall full, half width
#define cZ2 1.685 // cinder wall full, half height
#define cH2 0.75  // cinder wall half, half height
#define gUP 5.055 // cinder gate frame, upper left/right (3/4 z)

/*
// Metal (derived)
#define mX2 mX1 / 2 // metal floor, half width
#define mX4 mX1 / 4 // metal floor, quarter width
#define mZ2 mZ1 / 2 // metal floor, half height
#define pZ2 pZ1 / 2 // metal pillar, half height (z)

// Cinder (derived)
#define cX1 mX1     // cinder wall full, width (x)
#define cX2 cX1 / 2 // cinder wall full, half width
#define cZ2 cZ1 / 2 // cinder wall full, half height
#define cH2 cH1 / 2 // cinder wall half, half height
#define gUP cZ2 * 3 // cinder gate frame, upper left/right (3/4 z)
*/

class Helpers;
class HelperVectors: Helpers {

	class vector {
		size = 3;
		radius = 8;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Metal Objects
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class MetalFloor_DZ: vector {
		points[] = {
			{    0,    0, mZ2 },	// Pivot
			{    0, -mX2, mZ2 },	// Back
			{    0,  mX2, mZ2 },	// Front
			{ -mX2,    0, mZ2 },	// Left
			{  mX2,    0, mZ2 }	// Right
		};
	};
	class Land_wreck_metal_floor: vector {
		points[] = {
			{    0, -mX2, mZ2 },	// Back
			{    0,  mX2, mZ2 },	// Front
			{ -mX2,    0, mZ2 },	// Left
			{  mX2,    0, mZ2 }	// Right
		};
	};
	class MetalFloor_Half_DZ: vector {
		points[] = {
	//		{    0,    0, mZ2 },	// Pivot (removed)
			{    0, -mX2, mZ2 },	// Back
			{    0,  mX2, mZ2 },	// Front
			{ -mX4,    0, mZ2 },	// Left
			{  mX4,    0, mZ2 }	// Right
		};
	};
	class MetalFloor_Quarter_DZ: vector {
		points[] = {
	//		{    0,    0, mZ2 },	// Pivot (removed)
			{    0, -mX4, mZ2 },	// Back
			{    0,  mX4, mZ2 },	// Front
			{ -mX4,    0, mZ2 },	// Left
			{  mX4,    0, mZ2 }	// Right
		};
		radius = 4;
	};
	class MetalFloor4x_DZ: vector {
		points[] = {
			{    0,    0, mZ2 },	// Pivot
			{    0, -mX1, mZ2 },	// Back
			{    0,  mX1, mZ2 },	// Front
			{ -mX1,    0, mZ2 },	// Left
			{  mX1,    0, mZ2 }	// Right
		};
		radius = 15;
	};
	class Land_metal_floor_2x2_wreck: MetalFloor4x_DZ {};

	class MetalPillar_DZ: vector {
		points[] = {
			{0, 0,   0 },	// Pivot
			{0, 0, pZ1 },	// Top
			{0, 0, pZ2 }	// Center (replaces L/R)
		};
		radius = 4;
	};
	class Metal_Drawbridge_DZ: vector {
		points[] = {
			{     0, 0,    0 },	// Bottom
			{ -2.40, 0,    3 },	// Left (adjusted)
			{  2.46, 0,    3 },	// Right (adjusted)
			{     0, 0, 6.05 },	// Top
			{     0, 0,    3 }	// center (added)
		};
	};
	class Metal_DrawbridgeLocked_DZ: Metal_Drawbridge_DZ {};

	class Door_DZ: vector {
		points[] = {
			{  0, 0,    0 },	// Pivot
			{ -1, 0, 1.34 },	// Left
			{  1, 0, 1.34 },	// Right
			{  0, 0, 2.67 }		// Top
		};
		radius = 4;
	};
	class DoorFrame_DZ: Door_DZ {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Glass Objects
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class GlassFloor_DZ: MetalFloor_DZ {};
	class GlassFloor_Half_DZ: MetalFloor_Half_DZ {};
	class GlassFloor_Quarter_DZ: MetalFloor_Quarter_DZ {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Cinder Objects
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class CinderWallHalf_DZ: vector {
		points[] = {
			{    0, 0,   0 },	// Bottom
			{ -cX2, 0, cH2 },	// Left (replacement)
			{  cX2, 0, cH2 },	// Right (replacement)
			{    0, 0, cH1 }	// Top
		};
	};
	class CinderWallHalf_Gap_DZ: CinderWallHalf_DZ {};

	class Land_wreck_cinder: vector {
		points[] = {
			{ -1.64, 0, 0.25 },	// Left (replacement)
			{  1.64, 0, 0.25 }	// Right (replacement)
		};
	};
	class CinderWall_DZ {
		points[] = {
			{    0, 0,   0 },	// Bottom
			{ -cX2, 0, cZ2 },	// Left
			{  cX2, 0, cZ2 },	// Right
			{    0, 0, cZ1 },	// Top
			{    0, 0, cZ2 }	// Center (added)
		};
	};
	class CinderWallDoorSmall_DZ: CinderWall_DZ {};
	class CinderWallDoorSmallLocked_DZ: CinderWall_DZ {};
	class CinderWallWindow_DZ: CinderWall_DZ {};
	class CinderWallWindowLocked_DZ: CinderWall_DZ {};
	class CinderDoorHatch_DZ: CinderWall_DZ {};
	class CinderDoorHatchLocked_DZ: CinderWall_DZ {};
	class CinderWallDoor_DZ: CinderWall_DZ {};		// garage door
	class CinderWallDoorLocked_DZ: CinderWall_DZ {};	// garage door
	class CinderGarageOpenTop_DZ: CinderWall_DZ {};
	class CinderGarageOpenTopLocked_DZ: CinderWall_DZ {};

	class CinderGateFrame_DZ: vector {
		points[] = {
			{    0, 0,   0 },	// Bottom
			{ -mX2, 0, cZ2 },	// Lower Left
			{  mX2, 0, cZ2 },	// Lower Right
			{ -mX2, 0, gUP },	// Upper Left	(added)
			{  mX2, 0, gUP },	// Upper Right	(added)
			{    0, 0, gZ1 }	// Top
		};
		radius = 10;
	};
	class CinderGate_DZ: vector {
		points[] = {
			{    0, 0,   0 },	// Bottom
			{ -mX2, 0, cZ2 },	// Lower Left
			{  mX2, 0, cZ2 },	// Lower Right
			{ -mX2, 0, gUP },	// Upper Left	(added)
			{  mX2, 0, gUP },	// Upper Right	(added)
			{    0, 0, gZ1 },	// Top
			{    0, 0, cZ1 }	// Center	(added)
		};
		radius = 10;
	};
	class CinderGateLocked_DZ: CinderGate_DZ {};

	class Concrete_Bunker_DZ: vector {
		points[] = {
			{     0,  2.1, 2.8 },	// Front (added)
			{     0, -2.1, 2.8 },	// Back (adjusted)
			{ -2.34,    0, 2.8 },	// Left (adjusted)
			{  2.34,    0, 2.8 },	// Right (adjusted)
			{     0,    0, 3.4 }	// Top
		};
		radius = 7;
	};
	class Concrete_Bunker_Locked_DZ: Concrete_Bunker_DZ {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Wood Objects
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class WoodFloor4x_DZ: vector {
		points[] = {
			{     0,     0, 0.130 },	// Pivot (adjusted)
			{     0, -4.64, 0.130 },	// Back
			{     0,  4.64, 0.130 },	// Front
			{ -4.96,     0, 0.130 },	// Left
			{  4.95,     0, 0.130 }		// Right
		};
		radius = 15;
	};
	class Land_wood_floor_2x2_wreck: WoodFloor4x_DZ {};

	class WoodFloor_DZ: vector {
		points[] = {
			{      0,     0, 0.130 },	// Pivot (adjusted)
			{      0, -2.32, 0.130 },	// Back
			{      0,  2.32, 0.130 },	// Front
			{ -2.494,     0, 0.130 },	// Left
			{  2.450,     0, 0.130 }	// Right
		};
		radius = 8;
	};
	class Land_wood_wreck_floor: vector {
		points[] = {
			{      0, -2.32, 0.130 },	// Back
			{      0,  2.32, 0.130 },	// Front
			{ -2.494,     0, 0.130 },	// Left
			{  2.450,     0, 0.130 }	// Right
		};
		radius = 8;
	};
	class WoodFloorStairs_DZ: vector {
		points[] = {
			{  -2.3,   1.4,   0.3 },	// Pivot/bottom step (adjusted)
			{     0, -2.32, 3.114 },	// Back
			{     0,  2.32, 3.114 },	// Front
			{ -2.52,     0, 3.114 },	// Left
			{  2.46,     0, 3.114 }		// Right
		};
		radius = 8;
	};
	class WoodFloorHalf_DZ: vector {
		points[] = {
	//		{     0,     0,     0 },	// Pivot (removed)
			{     0, -2.33, 0.107 },	// Back
			{     0,  2.33, 0.107 },	// Front
			{ -1.18,     0, 0.107 },	// Left
			{  1.32,     0, 0.107 }		// Right
		};
	};
	class Land_wood_wreck_half: WoodFloorHalf_DZ {};

	class WoodFloorQuarter_DZ: vector {
		points[] = {
	//		{    0,    0,     0 },	// Pivot (removed)
			{    0, -1.2, 0.107 },	// Back
			{    0, 1.11, 0.107 },	// Front
			{ -1.2,    0, 0.107 },	// Left
			{  1.3,    0, 0.107 }	// Right
		};
		radius = 4;
	};
	class Land_wood_wreck_quarter: WoodFloorQuarter_DZ {};

	class WoodTriangleFloor_DZ: vector {
		points[] = {
	//		{      0,     0,     0 },	// Pivot (removed)
			{      0,  -1.3, 0.092 },	// Back
			{      0,   1.3, 0.092 },	// Front
			{ -1.258, 0.027, 0.092 },	// Left
			{  1.258, 0.027, 0.092 }	// Right
		};
		radius = 4;
	};
	class WoodSmallWallThird_DZ: vector {
		points[] = {
			{      0, 0,     0 },	// Pivot
			{ -2.445, 0, 0.585 },	// Left (lowered)
			{  2.445, 0, 0.585 },	// Right (lowered)
			{      0, 0,  1.17 }	// Top
		};
	};
	class Land_wood_wreck_third: vector {
		points[] = {
			{      0, 0,     0 },	// Pivot (bottom)
			{ -2.445, 0, 0.585 },	// Left (lowered)
			{  2.445, 0, 0.585 }	// Right (lowered)
		};
	};

//	class WoodTriangleWall_DZ: vector {

// Small wood walls
//	class WoodSmallWallDoor_DZ: vector {	// doorway
//	class WoodSmallWallWin_DZ: vector {	// window

	class WoodSmallWall_DZ: vector {
		points[] = {
			{      0, 0,   0 },	// Pivot (bottom)
			{ -2.285, 0, 1.5 },	// Left
			{  2.285, 0, 1.5 },	// Right
			{      0, 0,   3 },	// Top
			{      0, 0, 1.5 }	// Center (added)
		};
	};
	class Land_DZE_WoodDoor: WoodSmallWall_DZ {};
	class Land_DZE_WoodDoorLocked: WoodSmallWall_DZ {};
	class Land_DZE_WoodOpenTopGarageDoor: WoodSmallWall_DZ {};
	class Land_DZE_WoodOpenTopGarageLocked: WoodSmallWall_DZ {};

	class Land_wood_wreck_frame: vector {
		points[] = {
			{      0, 0,   0 },	// Pivot (bottom)
			{ -2.285, 0, 1.5 },	// Left
			{  2.285, 0, 1.5 },	// Right
			{      0, 0,   3 }	// Top
		};
	};

// Large wood walls
//	class WoodLargeWallDoor_DZ		// doorway
//	class WoodLargeWallWin_DZ: vector {	// window

	class WoodLargeWall_DZ: vector {
		points[] = {
			{     0, 0,   0 },	// Pivot
			{ -2.45, 0, 1.5 },	// Left
			{  2.45, 0, 1.5 },	// Right
			{     0, 0,   3 },	// Top
			{     0, 0, 1.5 }	// Center (added)
		};
	};
	class Land_DZE_LargeWoodDoor: WoodLargeWall_DZ {};
	class Land_DZE_LargeWoodDoorLocked: WoodLargeWall_DZ {};
	class Land_DZE_GarageWoodDoor: WoodLargeWall_DZ {};
	class Land_DZE_GarageWoodDoorLocked: WoodLargeWall_DZ {};

	class WoodGateFrame_DZ: vector {
		points[] = {
			{     0, 0,    0 },	// Bottom
			{ -2.43, 0,  1.5 },	// Lower Left
			{  2.45, 0,  1.5 },	// Lower Right
			{ -2.43, 0,  4.5 },	// Upper Left (added)
			{  2.45, 0,  4.5 },	// Upper Right (added)
			{     0, 0, 6.05 }	// Top
		};
		radius = 9;
	};
	class Land_DZE_WoodGate: vector {
		points[] = {
			{     0, 0,    0 },	// Bottom
			{ -2.43, 0,  1.5 },	// Lower Left
			{  2.45, 0,  1.5 },	// Lower Right
			{ -2.43, 0,  4.5 },	// Upper Left (added)
			{  2.45, 0,  4.5 },	// Upper Right (added)
			{     0, 0, 6.05 },	// Top
			{     0, 0,    3 }	// Center (added)
		};
		radius = 9;
	};
	class Land_DZE_WoodGateLocked: Land_DZE_WoodGate {};

	class WoodRamp_DZ: vector {
		points[] = {
			{     0,    0,    0 },	// Pivot
			{  -1.5, 3.14,  1.2 },	// Left
			{   1.7, 3.14,  1.2 },	// Right
			{ 0.115, 5.78, 2.82 }	// Top
		};
		radius = 15;
	};
	class WoodStairs_DZ: vector {
		points[] = {
			{     0,    0,   0 },	// Pivot (Bottom Step)
			{     0, 3.65,   3 },	// Front (Top Step)
	//		{     0,  1.8,   0 },	// Bottom (removed)
			{ -0.81,  1.8, 1.5 },	// Left
			{  0.78,  1.8, 1.5 }	// Right
		};
		radius = 5;
	};
	class WoodStairsSans_DZ: WoodStairs_DZ {};
	class WoodStairsRails_DZ: WoodStairs_DZ {};

	class WoodLadder_DZ: vector {
		points[] = {
			{    0, 0,     0 },	// Pivot
			{ -0.4, 0, 1.725 },	// Left
			{  0.4, 0, 1.725 },	// Right
			{    0, 0, 3.45  }	// Top (added)
		};
		size = 2;
		radius = 4;
	};
	class WoodHandrail_DZ: vector {
		points[] = {
			{     0, 0,   0},	// Pivot
			{ -1.16, 0, 0.5},	// Left
			{   1.2, 0, 0.5},	// Right
			{     0, 0, 1  }	// Top
		};
		size = 2;
		radius = 3;
	};

	class WoodPillar_DZ: MetalPillar_DZ {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Storage
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class GunRack_DZ: vector {
		points[] = {
			{ -0, -0.1, -0.2 }	// Center
		};
		size = 2;
		radius = 2;
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
		radius = 2;
	};
	class WoodCrate2_DZ: WoodCrate_DZ {};

	class StorageCrate_DZ: vector {
		points[] = {
			{ 0, 0, 0.08 }	// Top
		};
		size = 2;
		radius = 2;
	};
	class CamoStorageCrate_DZ: vector {
		points[] = {
			{ 0, 0, 0.45 }	// Top
		};
		size = 2;
		radius = 2;
	};
	class OutHouse_DZ: vector {
		points[] = {
			{ -0.59,     0, 0 },	// Left
			{  0.59,     0, 0 },	// Right
			{     0,  0.75, 0 },	// Front
			{     0, -0.55, 0 }	// Back
		};
		size = 2;
		radius = 2;
	};
	class StorageShed_DZ: vector {
		points[] = {
			{  -1.9,     0, 1.5 },	// Left
			{  1.47,     0, 1.5 },	// Right
			{     0,     0, 2.8 },	// Top
			{     0,   1.1, 1.5 },	// Front
			{     0, -1.25, 1.5 }	// Back
		};
		radius = 5;
	};
	class StorageShed2_DZ: StorageShed_DZ {};

	class Wooden_shed_DZ: vector {
		points[] = {
			{  0.6, -1.5,   0 },	// Back
			{  0.6,  1.5,   0 },	// Front
			{    3,    0,   0 },	// Right
			{  0.6,    0, 1.5 },	// Top
			{ -1.6,    0,   0 }	// Left (cull on open door)
		};
		radius = 7;
	};
	class Wooden_shed2_DZ: Wooden_shed_DZ {};

	class WoodShack_DZ: vector{
		points[] = {
			{     0,  2.4,   0 },	// Front
			{ -1.18,  0.6,   0 },	// Left
			{  1.18,  0.6,   0 },	// Right
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
		radius = 5;
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
		radius = 5;
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
			{      0, -0.284, 0.615 },	// Back (door center)
			{      0,      0,  1.23 },	// Top
			{ -0.362,      0, 0.615 },	// Left
			{  0.362,      0, 0.615 }	// Right
		};
		size = 2;
		radius = 3;
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
			{     0, -0.35, 1 },	// Back (door center)
			{     0,     0, 2 },	// Top
			{ -0.42,     0, 1 },	// Left
			{  0.42,     0, 1 }	// Right
		};
		size = 2;
		radius = 3;
	};
	class TallSafeLocked: TallSafe {};
	class TallSafeBroken: TallSafe {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Fortifications
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class Land_HBarrier1_DZ: vector {
		points[] = {
			{     0, -0.4,   0 },	// Back
			{     0,  0.4,   0 },	// Front
			{ -0.25,    0,   0 },	// Left
			{  0.25,    0,   0 },	// Right
			{     0,    0, 0.4 }	// Top
		};
		radius = 3;
	};
	class Land_HBarrier3_DZ: vector {
		points[] = {
			{     0, -0.4,   0 },	// Back
			{     0,  0.4,   0 },	// Front
			{ -1.35,    0,   0 },	// Left
			{  1.35,    0,   0 },	// Right
			{     0,    0, 0.4 }	// Top
		};
		radius = 5;
	};
	class Land_HBarrier5_DZ: vector {
		points[] = {
			{    0, -0.4,   0 },	// Back
			{    0,  0.5,   0 },	// Front
			{ -2.5,    0,   0 },	// Left
			{  2.5,    0,   0 },	// Right
			{    0,    0, 0.5 }	// Top
		};
		radius = 8;
	};
	class Sandbag1_DZ: vector {
		points[] = {
			{    0,    0, -0.1 }	// Pivot (center)
	//		{ -1.5, -0.1, -0.1 },	// Left
	//		{  1.5, -0.1, -0.1 }	// Right
		};
		radius = 4;
	};
	class BagFenceRound_DZ: vector {
		points[] = {
			{      0, -0.30, -0.1 }		// Pivot (center)
	//		{ -1.295,  0.38, -0.1 },	// Left
	//		{  1.295,  0.38, -0.1 }		// Right
		};
		radius = 3;
	};
	class StickFence_DZ: vector {
		points[] = {
			{     0, 0, 0.6 },	// Top
			{ -2.95, 0,   0 },	// Left
			{  2.95, 0,   0 }	// Right
		};
		size = 2;
		radius = 7;
	};
	class MetalGate_DZ: vector {
		points[] = {
			{ -4, 0, 0.3 },		// Left
			{  0, 0, 0.3 }		// Right
		};
		radius = 10;
	};
	class MetalPanel_DZ: vector {
		points[] = {
			{    0, 0, -0.8 },	// Pivot
			{ -1.5, 0,  0.5 },	// Left
			{  1.5, 0,  0.5 },	// Right
			{    0, 0,    2 }	// Top
		};
		radius = 5;
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

	class WoodenGate_foundation_DZ: vector {
		points[] = {
		//	{      0, 0, 0.95 },	// Top
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
};
