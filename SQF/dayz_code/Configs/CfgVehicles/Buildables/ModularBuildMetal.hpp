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
	offset[] = {0,2.5,0};	// {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_quarter.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_METALFLOORQUARTER;
	GhostPreview = "MetalFloor_Quarter_Preview_DZ";
};

class MetalFloor4x_DZ: ModularItems {
	scope = 2;	
	offset[] = {0,7,0};	// {0,6,0};
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
	offset[] = {0,2.5,0};	// {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\glass_floor_quarter.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_GLASSFLOORQUARTER;
	maintainBuilding[] = {{"PartGlass",1}};
	GhostPreview = "GlassFloor_Quarter_Preview_DZ";
};

///////////////////////////////////////////////////////////////////////////////////////////////////

class MetalContainer1A_DZ: ModularItems {
	scope = 2;
	offset[] = {0,5,0};
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1A.p3d";	// red
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1A;
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"equip_metal_sheet",2}};
	constructioncount = 3;
};

class MetalContainer1B_DZ: ModularItems {
	scope = 2;
	offset[] = {0,5,0};
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1B.p3d";	// green
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1B;
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"equip_metal_sheet",2}};
	constructioncount = 3;
};

class MetalContainer1G_DZ: ModularItems {
	scope = 2;
	offset[] = {0,5,0};
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo1G.p3d";	// white
	armor = 20000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_1G;
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"equip_metal_sheet",2}};
	constructioncount = 3;
};

class MetalContainer2D_DZ: ModularItems {
	scope = 2;
	offset[] = {0,5,0};
	model = "ca\buildings2\Misc_Cargo\Misc_Cargo2D.p3d";	// 2x red
	armor = 40000;
	displayName = $STR_EQUIP_NAME_METAL_CONTAINER_2D;
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"equip_metal_sheet",4}};
	constructioncount = 5;
};

class BarbedGate_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "ca\misc2\BarbGate.p3d";
	armor = 3000;
	displayName = $STR_EQUIP_NAME_BARBED_GATE;
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemWire",1}};
	constructioncount = 2;

	class AnimationSources
	{
		class Door01 {
		  source = "User";
		  animPeriod = 1;
		  initPhase = 0;
		};
	};
	class UserActions
	{
		class CloseDoor
		{
			position = "";
			displayName = "Close Door";
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase 'Door01' == 1";
			statement = "this animate ['Door01', 0];";
		};
		class OpenDoor
		{
			position = "";
			displayName = "Open Door";
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase 'Door01' == 0";
			statement = "this animate ['Door01', 1];";
		};
	};
};
