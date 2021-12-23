class WoodRamp_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\Wood_Ramp.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WOODRAMP;
	GhostPreview = "WoodRamp_Preview_DZ";
};

class WoodFloor_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\Wood_Floor.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_FLOORCEILING;
	maintainBuilding[] = {{"PartWoodLumber",4}};
	GhostPreview = "WoodFloor_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class WoodFloorStairs_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_stairs.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_WOODFLOORSTAIRS;
	maintainBuilding[] = {{"PartWoodLumber",4}};
	GhostPreview = "Wood_Floor_Stairs_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};	
};

class WoodFloorHalf_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\half_floor.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_FLOORCEILINGHALF;
	maintainBuilding[] = {{"PartWoodLumber",2}};
	constructioncount = 2;
	GhostPreview = "WoodFloorHalf_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_half.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class WoodFloorQuarter_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2.5,0};
	model = "\z\addons\dayz_epoch\models\quarter_floor.p3d";
	armor = 500;
	displayName = $STR_EPOCH_FLOORCEILINGQUARTER;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	GhostPreview = "WoodFloorQuarter_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_quarter.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class WoodFloor4x_DZ: ModularItems {
	scope = 2;
	offset[] = {0,6,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_2x2.p3d";
	armor = 4000;
	displayName = $STR_EPOCH_FLOORCEILING4x;
	maintainBuilding[] = {{"PartWoodLumber",4}};
	GhostPreview = "WoodFloor4x_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_2x2_wreck.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};	
};

class WoodTriangleFloor_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_tri_floor.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_TRIANGLE_WOODFLOOR;
	maintainBuilding[] = {{"PartWoodLumber",2}};
	GhostPreview = "WoodTriangleFloor_Preview_DZ";	
};

class WoodLargeWall_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWOODWALL;
	upgradeBuilding[] = {"WoodLargeWallWin_DZ",{"ItemToolbox","Handsaw_DZE"},{{"PartGlass",1}}};
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
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall_door.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWALLWITHDOORWAY;
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	upgradeBuilding[] = {"Land_DZE_LargeWoodDoor",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
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
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall_win.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWALLWITHWINDOW;
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
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WOODWALL;
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	upgradeBuilding[] = {"WoodSmallWallWin_DZ",{"ItemToolbox","Handsaw_DZE"},{{"PartGlass",1}}};
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
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\third_wall.p3d";
	armor = 600;
	displayName = $STR_EPOCH_WOODWALLTHIRDPART;
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
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall_win.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WALLWITHWINDOW;
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
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall_door.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WALLWITHDOORWAY;
	upgradeBuilding[] = {"Land_DZE_WoodDoor",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	GhostPreview = "WoodSmallWallDoor_Preview_DZ";
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

class WoodTriangleWall_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3.5,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\apex_tri\apex_tri.p3d";
	armor = 1500;
	displayName = $STR_EPOCH_TRIANGLE_WOODWALL;
	GhostPreview = "Wood_Triangle_Wall_Preview_DZ";
	maintainBuilding[] = {{"PartWoodLumber",1}};
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

class WoodGateFrame_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage_frame.p3d";
	armor = 2800;
	displayName = $STR_EPOCH_WOODGATEFRAME;
	maintainBuilding[] = {{"PartWoodLumber",4}};
	upgradeBuilding[] = {"Land_DZE_WoodGate",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",8},{"PartWoodLumber",2},{"equip_nails",1}}};
	GhostPreview = "WoodGate_Preview_DZ";
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

class WoodStairs_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs.p3d";
	armor = 600;
	displayName = $STR_EPOCH_WOODSTAIRSWITHSUPPORTS;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	upgradeBuilding[] = {"WoodStairsRails_DZ",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodLumber",2}}};
	GhostPreview = "WoodStairs_Preview_DZ";
};

class WoodStairsRails_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs_rail.p3d";
	armor = 700;
	displayName = $STR_EPOCH_WOODSTAIRSRAILS;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	GhostPreview = "WoodStairs_Preview_DZ";
};

class WoodStairsSans_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs_sans.p3d";
	armor = 500;
	displayName = $STR_EPOCH_WOODSTAIRS;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	upgradeBuilding[] = {"WoodStairs_DZ",{"ItemToolbox","Handsaw_DZE"},{{"PartWoodLumber",2}}};
	GhostPreview = "WoodStairsSans_Preview_DZ";
};

class WoodLadder_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_ladder.p3d";
	armor = 300;
	displayName = $STR_EPOCH_WOODLADDER;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	GhostPreview = "WoodLadder_Preview_DZ";
	ladders[] = {{"start1","end1"}};
};

class WoodHandrail_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\railing\railing.p3d";
	armor = 300;
	displayName = $STR_EPOCH_WOODRAIL;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	GhostPreview = "Wood_Handrail_Preview_DZ";
};

class WoodPillar_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\pillar\corner_pillar.p3d";
	armor = 700;
	displayName = $STR_EPOCH_WOODPILLAR;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	GhostPreview = "Wood_Pillar_Preview_DZ";
};

///////////////////////////////////////////////////////////////////////////////////////////////////

class SimpleFootbridge_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0.05};
	useModelCenter = 1;
	model = "mbg_killhouses\m\MBG_Woodplanks.p3d";
	armor = 200;
	nounderground = 0;
	displayName = $STR_EQUIP_NAME_SIMPLE_FOOTBRIDGE;
	maintainBuilding[] = {{"ItemPlank",1}};
};

class WoodenFootbridge_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3.5,0};
	useModelCenter = 1;
	model = "ca\misc_acr\scaffoldingsmall\misc_crossing0st.p3d";
	armor = 200;
	nounderground = 0;
	displayName = $STR_EQUIP_NAME_WOODEN_FOOTBRIDGE;
	maintainBuilding[] = {{"ItemPlank",1}};
};

class Windbreak_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3,-0.1};
	model = "ca\structures\Misc\Misc_WindBreak\Misc_WindBreak.p3d";
	armor = 1000;
	nounderground = 0;
	displayName = $STR_EQUIP_NAME_WINDBREAK;
	maintainBuilding[] = {{"ItemPlank",1}};
};
