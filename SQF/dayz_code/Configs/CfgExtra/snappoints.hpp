/*
Created by Raymix
*/

class SnapBuilding {
	//Barriers whitelist
	class Barrier {
		snapTo[] = {
			"Land_HBarrier5_DZ",
			"Land_HBarrier3_DZ",
			"Land_HBarrier1_DZ",
			"Sandbag1_DZ",
			"BagFenceRound_DZ",
			"Fort_RazorWire",
			"WoodFloorQuarter_DZ",
			"WoodFloorHalf_DZ",
			"WoodFloor_DZ",
			"WoodTriangleFloor_DZ",
			"WoodFloorStairs_DZ",
			"WoodStairs_DZ",
			"WoodStairsSans_DZ",
			"WoodStairsRails_DZ",
			"WoodSmallWallDoor_DZ",
			"WoodSmallWall_DZ",
			"WoodSmallWallWin_DZ",
			"Land_DZE_WoodDoor",
			"Land_DZE_WoodDoorLocked",
			"WoodLargeWall_DZ",
			"Land_DZE_LargeWoodDoor",
			"WoodLargeWallWin_DZ",
			"WoodLargeWallDoor_DZ",
			"WoodTriangleWall_DZ",
			"Land_DZE_GarageWoodDoor",
			"Land_DZE_GarageWoodDoorLocked",
			"Land_DZE_LargeWoodDoorLocked",
			"Land_DZE_WoodOpenTopGarageDoor",
			"Land_DZE_WoodOpenTopGarageLocked",
			"WoodGateFrame_DZ",
			"Land_DZE_WoodGate",
			"Land_DZE_WoodGateLocked",
			"WoodSmallWallThird_DZ",
			"CinderWall_DZ",
			"CinderWallDoorway_DZ",
			"CinderWallDoorLocked_DZ",
			"CinderWallDoor_DZ",
			"CinderWallSmallDoorway_DZ",
			"CinderWallDoorSmallLocked_DZ",		
			"CinderDoorHatch_DZ",			
			"CinderDoorHatchLocked_DZ",			
			"CinderWallHalf_DZ",
			"CinderWallHalf_Gap_DZ",
			"CinderWallDoorSmall_DZ",
			"CinderWallWindow_DZ",
			"CinderWallWindowLocked_DZ",
			"CinderGarageOpenTopFrame_DZ",
			"CinderGarageOpenTop_DZ",
			"CinderGarageOpenTopLocked_DZ",		
			"CinderGateFrame_DZ",
			"CinderGate_DZ",
			"CinderGateLocked_DZ",	
			"Metal_Drawbridge_DZ",
			"Metal_DrawbridgeLocked_DZ",			
			"MetalFloor_DZ",
			"MetalFloor_Half_DZ",
			"MetalFloor_Quarter_DZ",	
			"GlassFloor_DZ",
			"GlassFloor_Half_DZ",
			"GlassFloor_Quarter_DZ",			
			"WoodenFence_1_frame_DZ",	
			"WoodenFence_1_foundation_DZ",		
			"WoodenFence_quaterpanel_DZ",
			"WoodenFence_halfpanel_DZ",		
			"WoodenFence_thirdpanel_DZ",	
			"WoodenFence_1_DZ",
			"WoodenFence_2_DZ",
			"WoodenFence_3_DZ",
			"WoodenFence_4_DZ",
			"WoodenFence_5_DZ",
			"WoodenFence_6_DZ",
			"WoodenFence_7_DZ",
			"MetalFence_1_foundation_DZ",
			"MetalFence_1_frame_DZ",	
			"MetalFence_halfpanel_DZ",
			"MetalFence_thirdpanel_DZ",
			"MetalFence_1_DZ",
			"MetalFence_2_DZ",
			"MetalFence_3_DZ",
			"MetalFence_4_DZ",
			"MetalFence_5_DZ",
			"MetalFence_6_DZ",
			"MetalFence_7_DZ",
			"WoodenGate_foundation_DZ",	
			"WoodenGate_1_DZ",
			"WoodenGate_2_DZ",
			"WoodenGate_3_DZ",
			"WoodenGate_4_DZ",
			"Concrete_Bunker_DZ",
			"Concrete_Bunker_Locked_DZ",
			"MetalPanel_DZ",
			"MetalGate_DZ",
			"Fence_corrugated_DZ",
			"StickFence_DZ",
			"WoodHandrail_DZ",
			"DoorFrame_DZ",
			"Door_DZ",
			"DoorLocked_DZ",
			"WoodFloor4x_DZ",
			"MetalFloor4x_DZ"			
		};
		radius = 5;
	};
	class Land_HBarrier5Preview: Barrier { //fix for broken offsets in ghost
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-0.75,0.1,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,0.75,0.1,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-2.85,0,0.1,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.85,0,0.1,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,0.9,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class Land_HBarrier5_DZ: Land_HBarrier5Preview {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-0.75,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,0.75,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-2.85,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.85,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,0.9,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	}; 
	
	class Land_HBarrier3ePreview: Barrier { //whitelist inheritance
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-0.75,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,0.75,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.7,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.7,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,0.9,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class Land_HBarrier3_DZ: Land_HBarrier3ePreview {}; //point inheritance

	class Land_HBarrier1Preview: Barrier {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-0.75,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,0.75,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-0.6,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{0.6,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,0.9,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class Land_HBarrier1_DZ: Land_HBarrier1Preview {};
		
	class Fort_RazorWirePreview: Barrier {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-0.95,-0.3,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,0.95,-0.3,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-4.1,0,-0.3,$STR_EPOCH_ACTION_SNAP_LEFT},
			{4.1,0,-0.3,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,1,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class Fort_RazorWire: Fort_RazorWirePreview {};
	
	class Sandbag1_DZ: Barrier {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-1.5,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.5,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,0.4,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class BagFenceRound_DZ: Barrier {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-1.295,0.38,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.295,0.38,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,0.4,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	//Snapping whitelists for Floors, walls and stairs
	class FloorsWallsStairs: Barrier {
		radius = 7;
	};
	
	class WoodFloorQuarter_Preview_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-1.2,0.130,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,1.11,0.130,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.2,0,0.130,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.3,0,0.130,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class WoodFloorQuarter_DZ: WoodFloorQuarter_Preview_DZ {};	

	class WoodFloorHalf_Preview_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-2.33,0.130,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,2.33,0.130,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.18,0,0.130,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.32,0,0.130,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class WoodFloorHalf_DZ: WoodFloorHalf_Preview_DZ {};
	
	class WoodFloor_Preview_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-2.32,0.130,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,2.32,0.130,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-2.494,0,0.130,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.45,0,0.130,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
		radius = 10;
	};
	class WoodFloor_DZ: WoodFloor_Preview_DZ {};
	
	class WoodTriangleFloor_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-1.3,0.130,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,1.3,0.130,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.258,0.027,0.130,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.258,0.027,0.130,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
		radius = 10;
	};	
	
	class WoodTriangleFloor_Preview_DZ: WoodTriangleFloor_DZ {};
	
	class WoodFloorStairs_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-2.32,3.14,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,2.32,3.14,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-2.54,0,3.14,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.48,0,3.14,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};		
	};
	class Wood_Floor_Stairs_Preview_DZ: WoodFloorStairs_DZ {};	
	
	class Stairs_DZE: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{0,3.65,3,$STR_EPOCH_ACTION_SNAP_FRONT},
			{0,1.8,0,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{-0.81,1.8,1.5,$STR_EPOCH_ACTION_SNAP_LEFT},
			{0.78,1.8,1.5,$STR_EPOCH_ACTION_SNAP_RIGHT}			
		};
	};
	class WoodStairs_DZ: Stairs_DZE {};
	class WoodStairs_Preview_DZ: Stairs_DZE {};
	class WoodStairsSans_Preview_DZ: Stairs_DZE {};
	class WoodStairsSans_DZ: Stairs_DZE {};
	class WoodStairsRails_DZ: Stairs_DZE {};

	class WoodSmall_DZE: FloorsWallsStairs { // Small wood walls
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.285,0,1.5,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.285,0,1.5,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,3,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class WoodSmallWallDoor_Preview_DZ: WoodSmall_DZE {};
	class WoodSmallWall_Preview_DZ: WoodSmall_DZE {};
	class WoodSmallWallWin_Preview_DZ: WoodSmall_DZE {};
	class WoodSmallWallDoor_DZ: WoodSmall_DZE {};
	class WoodSmallWall_DZ: WoodSmall_DZE {};
	class WoodSmallWallWin_DZ: WoodSmall_DZE {};
	class Land_DZE_WoodDoor: WoodSmall_DZE {};
	class Land_DZE_WoodDoorLocked: WoodSmall_DZE {};
	class Land_DZE_WoodOpenTopGarageDoor: WoodSmall_DZE {};
	class Land_DZE_WoodOpenTopGarageLocked: WoodSmall_DZE {};
	class Wood_GarageOpenTop_Preview_DZ: WoodSmall_DZE {};
	class WoodDoor_Preview_DZ: WoodSmall_DZE {};
	
	class WoodLarge_DZE: FloorsWallsStairs { //Large wood walls
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.45,0,1.5,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.45,0,1.5,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,3,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class WoodLargeWall_Preview_DZ: WoodLarge_DZE {};
	class WoodLargeWallWin_Preview_DZ: WoodLarge_DZE {};
	class WoodLargeWallDoor_Preview_DZ: WoodLarge_DZE {};
	
	class WoodSmallWallThird_Preview_DZ: WoodLarge_DZE {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.445,0,1.5,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.445,0,1.5,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,1.17,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class WoodTriangleWall_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,0,2.62,$STR_EPOCH_ACTION_SNAP_TOP},
			{-1.26,0,1.32,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.26,0,1.32,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
		radius = 10;
	};	
	
	class Wood_Triangle_Wall_Preview_DZ: WoodTriangleWall_DZ {};
	
	class WoodSmallWallThird_DZ: WoodSmallWallThird_Preview_DZ{};
	class WoodLargeWall_DZ: WoodLarge_DZE {};
	class Land_DZE_LargeWoodDoor: WoodLarge_DZE {};
	class WoodLargeWallWin_DZ: WoodLarge_DZE {};
	class WoodLargeWallDoor_DZ: WoodLarge_DZE {};
	class Land_DZE_GarageWoodDoor: WoodLarge_DZE {};
	class GarageWoodDoor_Preview_DZ: WoodLarge_DZE {};
	class Land_DZE_GarageWoodDoorLocked: WoodLarge_DZE {};
	class Land_DZE_LargeWoodDoorLocked: WoodLarge_DZE {};
	class LargeWoodDoor_Preview_DZ: WoodLarge_DZE {};
	
	class WoodGateFrame_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{-2.43,0,1.5,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.45,0,1.5,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,6.05,$STR_EPOCH_ACTION_SNAP_TOP}
		};
		radius = 10;
	};	
	
	class Land_DZE_WoodGate: WoodGateFrame_DZ {};
	class Land_DZE_WoodGateLocked: WoodGateFrame_DZ {};	
	class WoodGate_Preview_DZ: WoodGateFrame_DZ {};		
	
	class Cinder_DZE: FloorsWallsStairs { //All cinder walls and doors
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{-2.64,0,1.685,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.64,0,1.685,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,3.37042,$STR_EPOCH_ACTION_SNAP_TOP}
		};
		radius = 10;
	};
	
	class CinderWallDoorway_Preview_DZ: Cinder_DZE {};
	class CinderWallSmallDoorway_Preview_DZ: Cinder_DZE {}; 	
	class CinderWall_DZ: Cinder_DZE {};
	class CinderWall_Preview_DZ: Cinder_DZE {};	
	class CinderWallDoorway_DZ: Cinder_DZE {};
	class CinderWallDoorLocked_DZ: Cinder_DZE {};
	class CinderWallDoor_DZ: Cinder_DZE {};
	class CinderWallSmallDoorway_DZ: Cinder_DZE {};
	class CinderWallDoorSmallLocked_DZ: Cinder_DZE {};
	class CinderWallDoorSmall_DZ: Cinder_DZE {};	
	class CinderWallWindow_DZ: Cinder_DZE {};
	class CinderWallWindowLocked_DZ: Cinder_DZE {};
	class CinderWallWindow_Preview_DZ: Cinder_DZE {};
	class CinderGarageOpenTop_Preview_DZ: Cinder_DZE {};
	class CinderGarageOpenTopFrame_DZ: Cinder_DZE {};
	class CinderGarageOpenTop_DZ: Cinder_DZE {};
	class CinderGarageOpenTopLocked_DZ: Cinder_DZE {};	
	class CinderDoorHatch_Preview_DZ: Cinder_DZE {};
	class CinderDoorHatch_DZ: Cinder_DZE {};
	class CinderDoorHatchLocked_DZ: Cinder_DZE {};
	
	class CinderWallHalf_Preview_DZ: Cinder_DZE {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{-2.64,0,1.685,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.64,0,1.685,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,1.5,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class CinderWallHalf_DZ: CinderWallHalf_Preview_DZ {};
	class CinderWallHalf_Gap_DZ: CinderWallHalf_Preview_DZ {};	
	class CinderWallHalf_Gap_Preview_DZ: CinderWallHalf_Preview_DZ {};

	class CinderGateFrame_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{-2.64,0,1.685,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.64,0,1.685,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,6.8,$STR_EPOCH_ACTION_SNAP_TOP}
		};
		radius = 10;
	};	
	
	class CinderGate_DZ: CinderGateFrame_DZ {};
	class CinderGateLocked_DZ: CinderGateFrame_DZ {};	
	class CinderGate_Preview_DZ: CinderGateFrame_DZ {};	

	class MetalFloor_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0, -2.63,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0, 2.63,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-2.63,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.63,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
		radius = 12;
	};
	
	class MetalFloor_Preview_DZ: MetalFloor_DZ {};
	
	class MetalFloor_Quarter_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-1.2,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,1.42,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.31,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.31,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
		radius = 12;
	};
	class MetalFloor_Quarter_Preview_DZ: MetalFloor_Quarter_DZ {};
	
	class MetalFloor_Half_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-2.62,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,2.65,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.31,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.31,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
		radius = 10;
	};
	class MetalFloor_Half_Preview_DZ: MetalFloor_Half_DZ {};
	
	class GlassFloor_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-2.63,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,2.63,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-2.63,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.63,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
		radius = 12;
	};
	
	class GlassFloor_Preview_DZ: GlassFloor_DZ {};
	
	class GlassFloor_Quarter_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-1.33,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,1.3,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.31,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.32,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
		radius = 10;
	};
	
	class GlassFloor_Quarter_Preview_DZ: GlassFloor_Quarter_DZ {};
	
	class GlassFloor_Half_DZ: FloorsWallsStairs {
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-2.63,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,2.64,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.34,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.29,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
		radius = 12;
	};
	
	class GlassFloor_Half_Preview_DZ: GlassFloor_Half_DZ {};
	
	class Metal_Drawbridge_DZ: FloorsWallsStairs {
		radius = 10;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{-2.4,0,1.685,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.46,0,1.685,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,6.05,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};	
	
	class Drawbridge_Preview_DZ: Metal_Drawbridge_DZ {};
	class Metal_DrawbridgeLocked_DZ: Metal_Drawbridge_DZ {};
		
	class MetalPanel_DZ: FloorsWallsStairs {
		radius = 5;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-1.5,0,0.7,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.5,0,0.7,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,2,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class Concrete_Bunker_DZ: FloorsWallsStairs {
		radius = 20;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.54,0,1,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.44,0,1,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,3.4,$STR_EPOCH_ACTION_SNAP_TOP}
		};	
	};
	
	class Concrete_Bunker_Locked_DZ: Concrete_Bunker_DZ {};
	class Concrete_Bunker_Preview_DZ: Concrete_Bunker_DZ {};
	
	class MetalGate_DZ: FloorsWallsStairs {
		radius = 5;
		points[] = {
			{-2,0,0.3,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-4.1,0,0.3,$STR_EPOCH_ACTION_SNAP_LEFT},
			{0,0,0.3,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	
	class Fence_corrugated_DZ: FloorsWallsStairs {
		radius = 10;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-1.95,0,0.88,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.95,0,0.88,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	
	class Woodenfence: FloorsWallsStairs {
		radius = 10;		
	};
	class WoodenFence_1_foundation_DZ: Woodenfence {	
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.535, 0, 0.95,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.535, 0, 0.95,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0, 0, 1.78042,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};	
	
	class WoodenFence_1_frame_DZ: WoodenFence_1_foundation_DZ {};
	class WoodenFence_quaterpanel_DZ: WoodenFence_1_foundation_DZ {};	
	class WoodenFence_halfpanel_DZ: WoodenFence_1_foundation_DZ {};
	class WoodenFence_thirdpanel_DZ: WoodenFence_1_foundation_DZ {};	
	class WoodenFence_1_DZ: WoodenFence_1_foundation_DZ {};
	
	class WoodenFence_4_DZ: Woodenfence {	
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.535, 0, 0.95,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.535, 0, 0.95,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0, 0, 3.58042,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class WoodenGate_4_DZ: WoodenFence_4_DZ {};	
	class WoodenFence_5_DZ: WoodenFence_4_DZ {};	
	class WoodenFence_6_DZ: WoodenFence_4_DZ {};
	class WoodenFence_7_DZ: WoodenFence_4_DZ {};
	class WoodenFence_ghost_DZ: WoodenFence_4_DZ {};	

	class WoodenFence_2_DZ: Woodenfence {	
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.535, 0, 0.95,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.535, 0, 0.95,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0, 0, 2.68042,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class WoodenFence_3_DZ: WoodenFence_2_DZ {};	
	class WoodenGate_foundation_DZ: WoodenFence_2_DZ {};	
	class WoodenGate_1_DZ: WoodenFence_2_DZ {};
	class WoodenGate_2_DZ: WoodenFence_2_DZ {};	
	class WoodenGate_3_DZ: WoodenFence_2_DZ {};	
	
	class WoodenGate_ghost_DZ: Woodenfence {	
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.535, 0, -0.95,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.535, 0, -0.95,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0, 0, 2.6,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};	
	class Metalfence: Woodenfence {};
	
	class MetalFence_1_foundation_DZ: Metalfence {	
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.535, 0, 0.95,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.535, 0, 0.95,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0, 0, 1.78042,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class MetalFence_1_frame_DZ: MetalFence_1_foundation_DZ {};	
	class MetalFence_halfpanel_DZ: MetalFence_1_foundation_DZ {};	
	class MetalFence_thirdpanel_DZ: MetalFence_1_foundation_DZ {};		
	class MetalFence_1_DZ: MetalFence_1_foundation_DZ {};
	
	class MetalFence_2_DZ: Metalfence {	
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.575, 0, 0.95,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.575, 0, 0.95,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0, 0, 2.68042,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class MetalFence_3_DZ: MetalFence_2_DZ {};
	
	class MetalFence_4_DZ: Metalfence {	
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.575, 0, 0.95,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.575, 0, 0.95,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0, 0, 3.58042,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class MetalFence_5_DZ: MetalFence_4_DZ {};
	class MetalFence_6_DZ: MetalFence_4_DZ {};
	class MetalFence_7_DZ: MetalFence_4_DZ {};	
	class MetalFence_ghost_DZ: MetalFence_4_DZ {};
	
	class StickFence_DZ: FloorsWallsStairs {
		radius = 10;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-2.95,0,0.3,$STR_EPOCH_ACTION_SNAP_LEFT},
			{2.95,0,0.3,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	
	class WoodHandrail_DZ: FloorsWallsStairs {
		radius = 10;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-1.16,0,0.5,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.2,0,0.5,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,1,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class Wood_Handrail_Preview_DZ: WoodHandrail_DZ {};
	
	class Door_DZ: FloorsWallsStairs {
		radius = 10;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-1,0,1.5,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.01,0,1.5,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,2.67,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class DoorFrame_Preview_DZ: Door_DZ {};
	class DoorFrame_DZ: Door_DZ {};
	class DoorLocked_DZ: Door_DZ {};
	
	class WoodFloor4x_DZ: FloorsWallsStairs {
		radius = 20;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-4.64,0.130,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,4.64,0.130,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-4.96,0,0.130,$STR_EPOCH_ACTION_SNAP_LEFT},
			{4.95,0,0.130,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	
	class WoodFloor4x_Preview_DZ: WoodFloor4x_DZ {};	
	
	class MetalFloor4x_DZ: FloorsWallsStairs {
		radius = 20;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-5.27,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,5.27,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-5.27,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{5.27,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	
	class MetalFloor4x_Preview_DZ: MetalFloor4x_DZ {};
	
	//Non essential Items that only snap to themselves, do whitelist inheritance if you want these to snap
	class WoodCrate_DZ {
		snapTo[] = {
			"WoodCrate_DZ",
			"WoodCrate2_DZ",
			"GunRack_DZ",
			"GunRack2_DZ",
			"StorageCrate_DZ"
		};
		radius = 5;
		points[] = {
			{0,0,-0.47,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{0,-0.47,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,0.47,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-0.47,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{0.47,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,0.47,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class WoodCrate2_DZ: WoodCrate_DZ {};
	
	class GunRack_DZ: WoodCrate_DZ {
		radius = 5;
		points[] = {
			{0,-0.1,-0.51,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{0,-0.54,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,0.41,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-0.45,-0.1,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{0.33,-0.1,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,-0.1,0.22,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class GunRack2_DZ: GunRack_DZ {};	
	
	class StorageCrate_DZ: WoodCrate_DZ {
		points[] = {
			{0,0,-0.22,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{0,-0.2,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,0.2,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-0.44,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{0.44,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,0.08,$STR_EPOCH_ACTION_SNAP_TOP}
		};		
	};
	
	class StorageShed_DZ {
		snapTo[] = {
			"StorageShed_DZ",
			"StorageShed2_DZ"
		};
		radius = 10;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-1.1,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,1.2,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.7,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.7,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,2,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	
	class StorageShed2_DZ: StorageShed_DZ {};
	class StorageShed_Preview_DZ: StorageShed_DZ {};
	
	class WoodShack_DZ {
		snapTo[] = {
			"WoodShack_DZ",
			"WoodShack2_DZ"
		};
		radius = 10;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,-1.1,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,2.4,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.18,0.6,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{1.18,0.6,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,1.1,$STR_EPOCH_ACTION_SNAP_TOP}		
		};
	};
	
	class WoodShack2_DZ: WoodShack_DZ {};
	
	class Wooden_shed_DZ {
		snapTo[] = {
			"Wooden_shed_DZ",
			"Wooden_shed2_DZ"
		};
		radius = 10;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0.6,-1.64,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0.6,1.64,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-1.7,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{3.1,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT},
			{0,0,1.6,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};	

	class Wooden_shed2_DZ: Wooden_shed_DZ {};
	
	class OutHouse_DZ {
		snapTo[] = {
			"OutHouse_DZ"
		};
		radius = 10;
		points[] = {
			{0,0,-1.25,$STR_EPOCH_ACTION_SNAP_BOTTOM},
			{0,-0.55,0,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,0.75,0,$STR_EPOCH_ACTION_SNAP_FRONT},
			{-0.59,0,0,$STR_EPOCH_ACTION_SNAP_LEFT},
			{0.59,0,0,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	
	class WoodRamp_Preview_DZ {
		snapTo[] = {
			"WoodRamp_DZ"
		};
		radius = 7;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0.65,-1.7,1.2,$STR_EPOCH_ACTION_SNAP_BACK},
			{0.65,1.5,1.2,$STR_EPOCH_ACTION_SNAP_FRONT},
			{3.34,-0.115,2.82,$STR_EPOCH_ACTION_SNAP_TOP}
		};
	};
	class WoodRamp_DZ: WoodRamp_Preview_DZ {};
	
	class WoodLadder_Preview_DZ {
		snapTo[] = {
			"WoodLadder_DZ"
		};
		radius = 5;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{-0.4,0,1.725,$STR_EPOCH_ACTION_SNAP_LEFT},
			{0.4,0,1.725,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
	};
	class WoodLadder_DZ: WoodLadder_Preview_DZ {};
	
	class VaultStorageLocked {
		snapTo[] = {
			"VaultStorageLocked",
			"VaultStorage",
			"VaultStorage2",
			"VaultStorage2Locked",
			"VaultStorageBroken",
			"VaultStorageBroken2"
			
		};
		radius = 5;
		points[] = {
			{0,0,0,$STR_EPOCH_ACTION_SNAP_PIVOT},
			{0,0.284,0.615,$STR_EPOCH_ACTION_SNAP_BACK},
			{0,0,1.23,$STR_EPOCH_ACTION_SNAP_TOP},
			{-0.362,0,0.615,$STR_EPOCH_ACTION_SNAP_LEFT},
			{0.362,0,0.615,$STR_EPOCH_ACTION_SNAP_RIGHT}
		};
		
	};
	class VaultStorage: VaultStorageLocked {};
	class VaultStorage2: VaultStorageLocked {};
	class VaultStorage2Locked: VaultStorageLocked {};
	class VaultStorageBroken: VaultStorageLocked {};
	class VaultStorageBroken2: VaultStorageLocked {};	
};
