class MetalFloor_DZ: ModularItems {
	scope = 2;	
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\metal_floor.p3d";
	armor = 3000;
	displayName = $STR_EPOCH_METALFLOOR;	
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

class MetalFloor_Half_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_half.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_METALFLOORHALF;
	GhostPreview = "MetalFloor_Half_Preview_DZ";
};

class MetalFloor_Quarter_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_quarter.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_METALFLOORQUARTER;
	GhostPreview = "MetalFloor_Quarter_Preview_DZ";
};

class MetalFloor4x_DZ: ModularItems {
	scope = 2;	
	offset[] = {0,6,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_2x2.p3d";
	armor = 6000;
	displayName = $STR_EPOCH_METALFLOOR4x;	
	GhostPreview = "MetalFloor4x_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_2x2_wreck.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class DoorFrame_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	armor = 1200;
	model = "\z\addons\dayz_epoch\models\Steel_door_frame_single.p3d";
	displayName = $STR_EPOCH_DOORWAY;
	GhostPreview = "DoorFrame_Preview_DZ";	
	maintainBuilding[] = {{"PartGeneric",1}};
	upgradeBuilding[] = {"Door_DZ",{"ItemToolbox"},{{"ItemPole",1},{"ItemTankTrap",1}}};
};

class MetalPillar_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\cinder\pillar\metal_cornerpillar.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_METALPILLAR;
	maintainBuilding[] = {{"PartGeneric",1}};
	GhostPreview = "MetalPillar_Preview_DZ";
};

class GlassFloor_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_GLASSFLOOR;
	maintainBuilding[] = {{"PartGlass",1}};
	GhostPreview = "GlassFloor_Preview_DZ";
};

class GlassFloor_Half_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor_half.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_GLASSFLOORHALF;
	maintainBuilding[] = {{"PartGlass",1}};
	GhostPreview = "GlassFloor_Half_Preview_DZ";
};

class GlassFloor_Quarter_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor_quarter.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_GLASSFLOORQUARTER;
	maintainBuilding[] = {{"PartGlass",1}};
	GhostPreview = "GlassFloor_Quarter_Preview_DZ";
};