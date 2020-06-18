class WoodenFence_ghost_DZ: NonStrategic
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence_wood_ghost.p3d";
	displayName = $STR_BLD_name_WoodenFence_ghost;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	destrType = "DestructNo";
	armor = 1000;
	vehicleClass = "DayZ Epoch Buildables";
}; 
class WoodenFence_1_foundation_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_ground.p3d";
	displayName = $STR_BLD_name_WoodenFence_1_foundation;
	GhostPreview = "WoodenFence_ghost_DZ";
	armor = 1000;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_1_frame_DZ",{"ItemToolbox","ItemHatchet"},{{"ItemPlank",4},{"equip_nails",1}}};
	vehicleClass = "DayZ Epoch Buildables";	
	destrType = "DestructBuilding";
}; 
class WoodenFence_1_frame_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_frame.p3d";
	displayName = $STR_BLD_name_WoodenFence_1_frame;
	GhostPreview = "WoodenFence_ghost_DZ";
	armor = 1200;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_quaterpanel_DZ",{"ItemToolbox","ItemHatchet"},{{"ItemPlank",4},{"equip_nails",1}}};	
	vehicleClass = "DayZ Epoch Buildables";
	destrType = "DestructBuilding";
}; 
class WoodenFence_quaterpanel_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_stage1.p3d";
	displayName = $STR_BLD_name_WoodenFence_quaterpanel;
	armor = 1400;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_halfpanel_DZ",{"ItemToolbox","ItemHatchet"},{{"ItemPlank",4},{"equip_nails",1}}};	
	vehicleClass = "DayZ Epoch Buildables";
	destrType = "DestructBuilding";
}; 
class WoodenFence_halfpanel_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_stage2.p3d";
	displayName = $STR_BLD_name_WoodenFence_halfpanel;
	armor = 1600;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_thirdpanel_DZ",{"ItemToolbox","ItemHatchet"},{{"ItemPlank",4},{"equip_nails",1}}};
	vehicleClass = "DayZ Epoch Buildables";	
	destrType = "DestructBuilding";
}; 
class WoodenFence_thirdpanel_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_stage3.p3d";
	displayName = $STR_BLD_name_WoodenFence_thirdpanel;
	armor = 1800;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_1_DZ",{"ItemToolbox","ItemHatchet"},{{"ItemPlank",4},{"equip_nails",1}}};	
	vehicleClass = "DayZ Epoch Buildables";
	destrType = "DestructBuilding";
}; 
class WoodenFence_1_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1.p3d";
	displayName = $STR_BLD_name_WoodenFence_1;
	armor = 2000;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_2_DZ",{"ItemToolbox","ItemHatchet"},{{"ItemPlank",8},{"equip_nails",2}}};	
	vehicleClass = "DayZ Epoch Buildables";
	destrType = "DestructBuilding";
};
 
class WoodenFence_2_DZ: ModularItems
{
	scope = 2;
	armor = 2200;
	model = "z\addons\dayz_buildings\models\fence2.p3d";
	displayName = $STR_BLD_name_WoodenFence_2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_3_DZ",{"ItemToolbox","ItemHatchet"},{{"ItemPlank",8},{"equip_nails",2}}};	
	vehicleClass = "DayZ Epoch Buildables";
	destrType = "DestructBuilding";
}; 
class WoodenFence_3_DZ: ModularItems
{
	scope = 2;
	armor = 2400;
	model = "z\addons\dayz_buildings\models\fence3.p3d";
	displayName = $STR_BLD_name_WoodenFence_3;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_4_DZ",{"ItemToolbox","ItemHatchet"},{{"ItemPlank",8},{"equip_nails",2}}};
	vehicleClass = "DayZ Epoch Buildables";
	destrType = "DestructBuilding";
}; 
class WoodenFence_4_DZ: ModularItems
{
	scope = 2;
	armor = 2600;
	model = "z\addons\dayz_buildings\models\fence4.p3d";
	displayName = $STR_BLD_name_WoodenFence_4;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_5_DZ",{"ItemToolbox","ItemHatchet"},{{"ItemLog",5},{"equip_nails",2}}};
	vehicleClass = "DayZ Epoch Buildables";
	destrType = "DestructBuilding";
}; 
class WoodenFence_5_DZ: ModularItems
{
	scope = 2;
	armor = 2800;
	model = "z\addons\dayz_buildings\models\fence5.p3d";
	displayName = $STR_BLD_name_WoodenFence_5;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_6_DZ",{"ItemToolbox","ItemHatchet"},{{"PartWoodPlywood",4},{"ItemPlank",2},{"equip_nails",2}}};
	vehicleClass = "DayZ Epoch Buildables";
	destrType = "DestructBuilding";
}; 

class WoodenFence_6_DZ: ModularItems
{
	scope = 2;
	armor = 3000;
	model = "z\addons\dayz_buildings\models\fence6.p3d";
	displayName = $STR_BLD_name_WoodenFence_6;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_7_DZ",{"ItemToolbox","ItemHatchet"},{{"ItemWoodLadder",1},{"equip_nails",1}}};
	vehicleClass = "DayZ Epoch Buildables";
	destrType = "DestructBuilding";
};

class WoodenFence_7_DZ: ModularItems
{
	scope = 2;
	armor = 3000;
	model = "z\addons\dayz_buildings\models\fence7.p3d";
	displayName = $STR_BLD_name_WoodenFence_7;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	ladders[] = {{"ladderstart","ladderend"}};
	vehicleClass = "DayZ Epoch Buildables";
	destrType = "DestructBuilding";
}; 