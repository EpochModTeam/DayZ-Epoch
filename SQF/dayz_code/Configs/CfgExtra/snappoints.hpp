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
			"Fort_RazorWire"
		};
		radius = 5;
	};
	//snap points
	class Land_HBarrier5Preview: Barrier{ //fix for broken offsets in ghost
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.75,0.1,"Back"},
		{0,0.75,0.1,"Front"},
		{-2.85,0,0.1,"Left"},
		{2.85,0,0.1,"Right"},
		{0,0,0.9,"Top"}
		};
	};
	class Land_HBarrier5_DZ: Land_HBarrier5Preview {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.75,0,"Back"},
		{0,0.75,0,"Front"},
		{-2.85,0,0,"Left"},
		{2.85,0,0,"Right"},
		{0,0,0.9,"Top"}
		};
	}; 
	
	class Land_HBarrier3ePreview: Barrier { //whitelist inheritance
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.75,0,"Back"},
		{0,0.75,0,"Front"},
		{-1.7,0,0,"Left"},
		{1.7,0,0,"Right"},
		{0,0,0.9,"Top"}
		};
	};
	class Land_HBarrier3_DZ: Land_HBarrier3ePreview{}; //point inheritance

	class Land_HBarrier1Preview: Barrier {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.75,0,"Back"},
		{0,0.75,0,"Front"},
		{-0.6,0,0,"Left"},
		{0.6,0,0,"Right"},
		{0,0,0.9,"Top"}
		};
	};
	class Land_HBarrier1_DZ: Land_HBarrier1Preview{};
		
	class Fort_RazorWirePreview: Barrier {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.95,-0.3,"Back"},
		{0,0.95,-0.3,"Front"},
		{-4.1,0,-0.3,"Left"},
		{4.1,0,-0.3,"Right"},
		{0,0,1,"Top"}
		};
	};
	class Fort_RazorWire: Fort_RazorWirePreview {};
	
	class Sandbag1_DZ: Barrier {
		points[] = {
		{0,0,0,"Pivot"},
		{-1.5,0,0,"Left"},
		{1.5,0,0,"Right"},
		{0,0,0.4,"Top"}
		};
	};
	
	class BagFenceRound_DZ: Barrier {
		points[] = {
		{0,0,0,"Pivot"},
		{-1.295,0.38,0,"Left"},
		{1.295,0.38,0,"Right"},
		{0,0,0.4,"Top"}
		};
	};
	
	//Snapping whitelists for Floors, walls and stairs
	class FloorsWallsStairs {
		snapTo[] = {
			"WoodFloorQuarter_DZ",
			"WoodFloorHalf_DZ",
			"WoodFloor_DZ",
			"WoodStairs_DZ",
			"WoodStairsSans_DZ",
			"WoodSmallWallDoor_DZ",
			"WoodSmallWall_DZ",
			"WoodSmallWallWin_DZ",
			"Land_DZE_WoodDoor",
			"Land_DZE_WoodDoorLocked",
			"WoodLargeWall_DZ",
			"Land_DZE_LargeWoodDoor",
			"WoodLargeWallWin_DZ",
			"WoodLargeWallDoor_DZ",
			"Land_DZE_GarageWoodDoor",
			"Land_DZE_GarageWoodDoorLocked",
			"Land_DZE_LargeWoodDoorLocked",
			"WoodSmallWallThird_DZ",
			"CinderWall_DZ",
			"CinderWallDoorway_DZ",
			"CinderWallDoorLocked_DZ",
			"CinderWallDoor_DZ",
			"CinderWallSmallDoorway_DZ",
			"CinderWallDoorSmallLocked_DZ",
			"CinderWallHalf_DZ",
			"CinderWallDoorSmall_DZ",
			"MetalFloor_DZ"
		};
		radius = 7;
	};
	
	class WoodFloorQuarter_Preview_DZ: FloorsWallsStairs { //fix for broken offsets in ghost
		points[] = {
		{0,0,0,"Pivot"},
		{0,-1.23,0,"Back"},
		{0,1.23,0,"Front"},
		{-1.24,0,0,"Left"},
		{1.24,0,0,"Right"}
		};
	};
	
	class WoodFloorQuarter_DZ: FloorsWallsStairs { 
		points[] = {
		{0,0,0,"Pivot"},
		{0,-1.23,0.137726,"Back"},
		{0,1.23,0.137726,"Front"},
		{-1.24,0,0.137726,"Left"},
		{1.24,0,0.137726,"Right"}
		};
	};
	
	class WoodFloorHalf_Preview_DZ: FloorsWallsStairs { //fix for broken offsets in ghost
		points[] = {
		{0,0,0,"Pivot"},
		{0,-2.34,0,"Back"},
		{0,2.34,0,"Front"},
		{-1.25,0,0,"Left"},
		{1.25,0,0,"Right"}
		};
	};
	class WoodFloorHalf_DZ: FloorsWallsStairs{
		points[] = {
		{0,0,0,"Pivot"},
		{0,-2.34,0.1407,"Back"},
		{0,2.34,0.1407,"Front"},
		{-1.25,0,0.1407,"Left"},
		{1.25,0,0.1407,"Right"}
		};
	};
	
	class WoodFloor_Preview_DZ: FloorsWallsStairs {
		points[] = {
		{0,0,0,"Pivot"},
		{0,-2.33,0.130,"Back"},
		{0,2.33,0.130,"Front"},
		{-2.45,0,0.130,"Left"},
		{2.45,0,0.130,"Right"}
		};
		radius = 10;
	};
	class WoodFloor_DZ: WoodFloor_Preview_DZ{};
	
	class Stairs_DZE: FloorsWallsStairs {
		points[] = {
		{0,0,0,"Pivot"},
		{1.56055,-0.78,1.5,"Back"},
		{1.56055,0.78,1.5,"Front"},
		{1.73926,0.05,2.9,"Top"},
		{-1.73926,0.05,0,"Bottom"}
		};
	};
	class WoodStairs_DZ: Stairs_DZE {};
	class WoodStairs_Preview_DZ: Stairs_DZE {};
	class WoodStairsSans_Preview_DZ: Stairs_DZE {};
	class WoodStairsSans_DZ: Stairs_DZE {};

	class WoodSmall_DZE: FloorsWallsStairs { // Small wood walls
		points[] = {
		{0,0,0,"Pivot"},
		{-2.285, 0, 1.5,"Left"},
		{2.285, 0, 1.5,"Right"},
		{0, 0, 3,"Top"}
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
	class WoodDoor_Preview_DZ: WoodSmall_DZE{};
	
	class WoodLarge_DZE: FloorsWallsStairs { //Large wood walls
		points[] = {
		{0,0,0,"Pivot"},
		{-2.45, 0, 1.5,"Left"},
		{2.45, 0, 1.5,"Right"},
		{0, 0, 3,"Top"}
		};
	};
	class WoodLargeWall_Preview_DZ: WoodLarge_DZE {};
	class WoodLargeWallWin_Preview_DZ: WoodLarge_DZE {};
	class WoodLargeWallDoor_Preview_DZ: WoodLarge_DZE {};
	class WoodSmallWallThird_Preview_DZ: WoodLarge_DZE {
		points[] = {
		{0,0,0,"Pivot"},
		{-2.445, 0, 1.5,"Left"},
		{2.445, 0, 1.5,"Right"},
		{0, 0, 1.17,"Top"}
		};
	};
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
	
	class Cinder_DZE: FloorsWallsStairs { //All cinder walls and doors
		points[] = {
		{0,0,0,"Pivot"},
		{-2.752, 0, 1.5,"Left"},
		{2.752, 0, 1.5,"Right"},
		{0, 0, 3.37042,"Top"}
		};
		radius = 10;
	};
	class CinderWall_Preview_DZ: Cinder_DZE {};
	class CinderWallDoorway_Preview_DZ: Cinder_DZE {};
	class CinderWallSmallDoorway_Preview_DZ: Cinder_DZE {}; 
	class CinderWallHalf_Preview_DZ: Cinder_DZE {
		points[] = {
		{0,0,0,"Pivot"},
		{-2.752, 0, 1.5,"Left"},
		{2.752, 0, 1.5,"Right"},
		{0, 0, 1.5,"Top"}
		};
	};
	class CinderWall_DZ: Cinder_DZE {};
	class CinderWallDoorway_DZ: Cinder_DZE {};
	class CinderWallDoorLocked_DZ: Cinder_DZE {};
	class CinderWallDoor_DZ: Cinder_DZE {};
	class CinderWallSmallDoorway_DZ: Cinder_DZE {};
	class CinderWallDoorSmallLocked_DZ: Cinder_DZE {};
	class CinderWallHalf_DZ: Cinder_DZE {
		points[] = {
		{0,0,0,"Pivot"},
		{-2.752, 0, 1.5,"Left"},
		{2.752, 0, 1.5,"Right"},
		{0, 0, 1.5,"Top"}
		};
	};
	class CinderWallDoorSmall_DZ: Cinder_DZE {};
	
	class MetalFloor_Preview_DZ: FloorsWallsStairs { //fix for broken offsets in ghost
		points[] = {
		{0,0,0.011,"Pivot"},
		{0, -2.64, 0.009,"Back"},
		{0, 2.64, 0.009,"Front"},
		{-2.64, 0, 0.009,"Left"},
		{2.64, 0, 0.009,"Right"}
		};
		radius = 12;
	};
	class MetalFloor_DZ: FloorsWallsStairs{
		points[] = {
		{0,0,0,"Pivot"},
		{0, -2.64, 0.15,"Back"},
		{0, 2.64, 0.15,"Front"},
		{-2.64, 0, 0.15,"Left"},
		{2.64, 0, 0.15,"Right"}
		};
		radius = 12;
	};
	
	
	//Non essential Items that only snap to themselves, do whitelist inheritance if you want these to snap
	class WoodCrate_DZ {
		snapTo[] = {
			"WoodCrate_DZ"
		};
		radius = 5;
		points[] = {
		{0,0,0,"Pivot"},
		{0,-0.47,0,"Back"},
		{0,0.47,0,"Front"},
		{-0.47,0,0,"Left"},
		{0.47,0,0,"Right"},
		{0,0,0.47,"Top"}
		};
	};
		
	class MetalPanel_DZ {
		snapTo[] = {
			"MetalPanel_DZ"
		};
		radius = 5;
		points[] = {
		{0,0,0,"Pivot"},
		{-1.5,0,0,"Left"},
		{1.5,0,0,"Right"}
		};
	};
	
		class MetalGate_DZ {
		snapTo[] = {
			"MetalGate_DZ"
		};
		radius = 5;
		points[] = {
		{0,0,0,"Pivot"},
		{-4.1,0,0,"Left"}
		};
	};
	
	class StickFence_DZ {
		snapTo[] = {
			"StickFence_DZ"
		};
		radius = 10;
		points[] = {
		{0,0,0,"Pivot"},
		{-2.95,0,0.3,"Left"},
		{2.95,0,0.3,"Right"}
		};
	};
	
	class Fence_corrugated_DZ {
		snapTo[] = {
			"Fence_corrugated_DZ"
		};
		radius = 10;
		points[] = {
		{0,0,0,"Pivot"},
		{-1.95,0,0.88,"Left"},
		{1.95,0,0.88,"Right"}
		};
	};
	
	class WoodRamp_Preview_DZ {
		snapTo[] = {
			"WoodRamp_DZ"
		};
		radius = 7;
		points[] = {
		{0,0,0,"Pivot"},
		{0.65,-1.7,1.2,"Back"},
		{0.65,1.5,1.2,"Front"},
		{3.34,-0.115,2.82,"Top"}
		};
	};
	class WoodRamp_DZ: WoodRamp_Preview_DZ{};
	
	class WoodLadder_Preview_DZ {
		snapTo[] = {
			"WoodLadder_DZ"
		};
		radius = 5;
		points[] = {
		{0,0,0,"Pivot"},
		{-0.4,0,1.725,"Left"},
		{0.4,0,1.725,"Right"}
		};
	};
	class WoodLadder_DZ: WoodLadder_Preview_DZ{};
	
	class VaultStorageLocked {
		snapTo[] = {
			"VaultStorageLocked",
			"VaultStorage"
		};
		radius = 5;
		points[] = {
		{0,0,0,"Pivot"},
		{0,0.284,0.615,"Back"},
		{0,0,1.23,"Top"},
		{-0.362,0,0.615,"Left"},
		{0.362,0,0.615,"Right"}
		};
		
	};
	class VaultStorage: VaultStorageLocked {};
};
