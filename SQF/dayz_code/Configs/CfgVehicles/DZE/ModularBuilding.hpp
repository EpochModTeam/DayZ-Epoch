class ModularItems: NonStrategic{
	placement = "vertical";
	class DestructionEffects {
		class Sound {
			simulation = "sound";
			type = "DestrHouse";
			position = "destructionEffect1";
			intensity = 1;
			interval = 1;
			lifeTime = 0.05;
		};
		class DestroyPhase1 {
			simulation = "destroy";
			type = "DelayedDestruction";
			lifeTime = 2.5;
			position = "";
			intensity = 1;
			interval = 1;
		};
		class DamageAround1 {
			simulation = "damageAround";
			type = "DamageAroundHouse";
			position = "";
			intensity = 0.1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class MetalFloor_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,4,0};
	model="\z\addons\dayz_epoch\models\metal_floor.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 3000;
	displayName = $STR_EPOCH_METALFLOOR;
	vehicleClass = "Fortifications";
	GhostPreview = "MetalFloor_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wreck_metal_floor.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class WoodRamp_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,4,0};
	model="\z\addons\dayz_epoch\models\Wood_Ramp.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 2000;
	displayName = $STR_EPOCH_WOODRAMP;
	vehicleClass = "Fortifications";
	GhostPreview = "WoodRamp_Preview_DZ";
};
class CinderWallHalf_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\cinder_wall_half.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 2200;
	displayName = $STR_EPOCH_CINDERBLOCKWALL_HALF;
	vehicleClass = "Fortifications";
	upgradeBuilding[] = {"CinderWall_DZ",{{"CinderBlocks",4},{"MortarBucket",1}}};
	maintainBuilding[] = {{"MortarBucket",1}};
	GhostPreview = "CinderWallHalf_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d"; /* path to the object*/
			/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class CinderWall_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,1.65};
	model="\z\addons\dayz_epoch\models\cinder_wall_full.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 3400;
	displayName = $STR_EPOCH_CINDERBLOCKWALL;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"MortarBucket",1}};
	GhostPreview = "CinderWall_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d"; /* path to the object*/
			/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class CinderWallDoorway_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,2,0};
	model="\z\addons\dayz_epoch\models\steel_garage_frame.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 3400;
	displayName = $STR_EPOCH_BLOCKGARAGEDOORWAY;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"MortarBucket",1}};
	upgradeBuilding[] = {"CinderWallDoor_DZ",{{"ItemPole",3},{"ItemTankTrap",3}}};
	GhostPreview = "CinderWallDoorway_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d"; /* path to the object*/
			/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class CinderWallSmallDoorway_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,2,0};
	model="\z\addons\dayz_epoch\models\Steel_door_frame.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 3400;
	displayName = $STR_EPOCH_BLOCKDOORWAY;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"MortarBucket",1}};
	upgradeBuilding[] = {"CinderWallDoorSmall_DZ",{{"ItemPole",1},{"ItemTankTrap",1}}};
	GhostPreview = "CinderWallSmallDoorway_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d"; /* path to the object*/
			/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodFloor_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,4,0};
	model="\z\addons\dayz_epoch\models\Wood_Floor.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 2000;
	displayName = $STR_EPOCH_FLOORCEILING;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodLumber",4}};
	GhostPreview = "WoodFloor_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d"; /* path to the object*/
			/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class WoodFloorHalf_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,4,0};
	model="\z\addons\dayz_epoch\models\half_floor.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = $STR_EPOCH_FLOORCEILINGHALF;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodLumber",2}};
	constructioncount = 2;
	GhostPreview = "WoodFloorHalf_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wood_wreck_half.p3d"; /* path to the object*/
			/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class WoodFloorQuarter_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,4,0};
	model="\z\addons\dayz_epoch\models\quarter_floor.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 600;
	displayName = $STR_EPOCH_FLOORCEILINGQUARTER;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	GhostPreview = "WoodFloorQuarter_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wood_wreck_quarter.p3d"; /* path to the object*/
			/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodLargeWall_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\large_wall.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWOODWALL;
	vehicleClass = "Fortifications";
	upgradeBuilding[] = {"WoodLargeWallWin_DZ",{{"PartGlass",1}}};
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	GhostPreview = "WoodLargeWall_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodLargeWallDoor_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\large_wall_door.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWALLWITHDOORWAY;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	upgradeBuilding[] = {"Land_DZE_LargeWoodDoor",{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	GhostPreview = "WoodLargeWallDoor_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class WoodLargeWallWin_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\large_wall_win.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWALLWITHWINDOW;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	GhostPreview = "WoodLargeWallWin_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodSmallWall_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\small_wall.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 2000;
	displayName = $STR_EPOCH_WOODWALL;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	upgradeBuilding[] = {"WoodSmallWallWin_DZ",{{"PartGlass",1}}};
	GhostPreview = "WoodSmallWall_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class WoodSmallWallThird_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\third_wall.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 600;
	displayName = $STR_EPOCH_WOODWALLTHIRDPART;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	GhostPreview = "WoodSmallWallThird_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class WoodSmallWallWin_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\small_wall_win.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 2000;
	displayName = $STR_EPOCH_WALLWITHWINDOW;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	GhostPreview = "WoodSmallWallWin_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class WoodSmallWallDoor_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\small_wall_door.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 2000;
	displayName = $STR_EPOCH_WALLWITHDOORWAY;
	vehicleClass = "Fortifications";
	upgradeBuilding[] = {"Land_DZE_WoodDoor",{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	GhostPreview = "WoodSmallWallDoor_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d"; /* path to the object*/
			/* Warning, if you use a custom rubble model, it has to be defined in the cfgvehicles (see below)*/
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};
class WoodStairs_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\wood_stairs.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 600;
	displayName = $STR_EPOCH_WOODSTAIRSWITHSUPPORTS;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	upgradeBuilding[] = {"WoodStairsRails_DZ",{{"PartWoodLumber",2}}};
	GhostPreview = "WoodStairs_Preview_DZ";
};
class WoodLadder_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\wood_ladder.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 300;
	displayName = $STR_EPOCH_WOODLADDER;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	GhostPreview = "WoodLadder_Preview_DZ";
	ladders[] = {{"start1","end1"}};
};

class WoodStairsRails_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\wood_stairs_rail.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 700;
	displayName = $STR_EPOCH_WOODSTAIRSRAILS;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	GhostPreview = "WoodStairs_Preview_DZ";
};

class WoodStairsSans_DZ: ModularItems {
	scope = public;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\wood_stairs_sans.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 500;
	displayName = $STR_EPOCH_WOODSTAIRS;
	vehicleClass = "Fortifications";
	maintainBuilding[] = {{"PartWoodLumber",1}};
	upgradeBuilding[] = {"WoodStairs_DZ",{{"PartWoodLumber",2}}};
	GhostPreview = "WoodStairsSans_Preview_DZ";
};

// ghost models
class CinderWallSmallDoorway_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\Steel_door_frame_ghost.p3d"; // todo change this
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Cinder Doorway Preview";
	vehicleClass = "Fortifications";
};
class CinderWallDoorway_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\steel_garage_frame_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Cinder Garage Doorway Preview";
	vehicleClass = "Fortifications";
};
class MetalFloor_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\metal_floor_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Metal Floor Preview";
	vehicleClass = "Fortifications";
};
class WoodRamp_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\Wood_Ramp_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wood Ramp Preview";
	vehicleClass = "Fortifications";

};
class CinderWallHalf_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\cinder_wall_half_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Cinder Block Wall 1/2 Preview";
	vehicleClass = "Fortifications";
};
class CinderWall_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\cinder_wall_full_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Cinder Block Wall Preview";
	vehicleClass = "Fortifications";
};

class WoodFloorQuarter_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\quarter_floor_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Floor 1/4 Preview";
	vehicleClass = "Fortifications";
};
class WoodFloorHalf_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\half_floor_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Floor 1/2 Preview";
	vehicleClass = "Fortifications";
};
class WoodSmallWall_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\small_wall_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Small Wall Preview";
	vehicleClass = "Fortifications";
};
class WoodSmallWallThird_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\third_wall_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Small Wall Preview 1/3";
	vehicleClass = "Fortifications";
};
class WoodSmallWallWin_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\small_wall_win_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Small Wall Window Preview";
	vehicleClass = "Fortifications";
};
class WoodFloor_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\Wood_Floor_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wood Floor Preview";
	vehicleClass = "Fortifications";
};
class WoodSmallWallDoor_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\small_wall_door_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Small Wall Door Preview";
	vehicleClass = "Fortifications";
};
class WoodLargeWall_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\large_wall_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Large Wall Preview";
	vehicleClass = "Fortifications";
};
class WoodLargeWallDoor_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\large_wall_door_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Large Wall Door Preview";
	vehicleClass = "Fortifications";
};
class WoodLargeWallWin_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\large_wall_win_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Large Wall Window Preview";
	vehicleClass = "Fortifications";
};

class WoodStairs_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\wood_stairs_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wood Stairs Preview";
	vehicleClass = "Fortifications";
};
class WoodStairsSans_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\wood_stairs_sans_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wood Stairs Sans Preview";
	vehicleClass = "Fortifications";
};

class WoodLadder_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\wood_ladder_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wood Stairs Sans Preview";
	vehicleClass = "Fortifications";
};
class WoodDoor_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\small_wall_door_anim_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Door Preview";
	vehicleClass = "Fortifications";
};
class LargeWoodDoor_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\large_wall_door_anim_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Large Door Preview";
	vehicleClass = "Fortifications";
};
class GarageWoodDoor_Preview_DZ: NonStrategic {
	scope = public;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\z\addons\dayz_epoch\models\Garage_door_anim_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Garage Door Preview";
	vehicleClass = "Fortifications";
};
