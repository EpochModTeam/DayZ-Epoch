class CinderWallHalf_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\cinder_wall_half.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_CINDERBLOCKWALL_HALF;
	upgradeBuilding[] = {"CinderWall_DZ",{"ItemToolbox"},{{"CinderBlocks",4},{"MortarBucket",1}}};
	maintainBuilding[] = {{"MortarBucket",1}};
	GhostPreview = "CinderWallHalf_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderWall_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\cinder_wall_full.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_CINDERBLOCKWALL;
	maintainBuilding[] = {{"MortarBucket",1}};
	GhostPreview = "CinderWall_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderWallDoorway_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\steel_garage_frame.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_BLOCKGARAGEDOORWAY;
	maintainBuilding[] = {{"MortarBucket",1}};
	upgradeBuilding[] = {"CinderWallDoor_DZ",{"ItemToolbox"},{{"ItemPole",3},{"ItemTankTrap",3}}};
	GhostPreview = "CinderWallDoorway_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderWallSmallDoorway_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\Steel_door_frame.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_BLOCKDOORWAY;
	maintainBuilding[] = {{"MortarBucket",1}};
	upgradeBuilding[] = {"CinderWallDoorSmall_DZ",{"ItemToolbox"},{{"ItemPole",1},{"ItemTankTrap",1}}};
	GhostPreview = "CinderWallSmallDoorway_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderGateFrame_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3,0};
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_frame.p3d";
	armor = 4000;
	displayName = $STR_EPOCH_CINDERGATEFRAME;
	maintainBuilding[] = {{"MortarBucket",3}};
	upgradeBuilding[] = {"CinderGate_DZ",{"ItemToolbox"},{{"equip_metal_sheet",6},{"ItemRSJ",2},{"ItemScrews",2}}};
	GhostPreview = "CinderGate_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderGarageOpenTopFrame_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\cinder\CinderGaragenotop\cindergarage_notop_frame.p3d";
	armor = 3000;
	displayName = $STR_EPOCH_CINDEROPENTOPGARAGEDOORWAY;
	maintainBuilding[] = {{"MortarBucket",1}};
	upgradeBuilding[] = {"CinderGarageOpenTop_DZ",{"ItemToolbox"},{{"ItemPole",3},{"ItemTankTrap",3}}};
	GhostPreview = "CinderGarageOpenTop_Preview_DZ";
	class DestructionEffects : DestructionEffects 
	{
		class Ruin1 
		{
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};