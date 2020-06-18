class MetalFence_ghost_DZ: NonStrategic
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence_ghost.p3d";
	displayName = $STR_BLD_name_MetalFence_ghost;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	destrType = "DestructNo";
	armor = 1000;
	vehicleClass = "DayZ Epoch Buildables";
}; 

class MetalFence_1_foundation_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_foundation.p3d";
	displayName = $STR_BLD_name_MetalFence_1_foundation;
	icon = "\ca\data\data\Unknown_object.paa";
	GhostPreview = "MetalFence_ghost_DZ";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_1_frame_DZ",{"ItemToolbox","ItemSledge"},{{"ItemPlank",4},{"ItemRSJ",1}}};
	vehicleClass = "DayZ Epoch Buildables";
	armor = 1000;
	destrType = "DestructBuilding";
}; 

class MetalFence_1_frame_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_stage1.p3d";
	displayName = $STR_BLD_name_MetalFence_1_frame;
	icon = "\ca\data\data\Unknown_object.paa";
	GhostPreview = "MetalFence_ghost_DZ";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_halfpanel_DZ",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	vehicleClass = "DayZ Epoch Buildables";
	armor = 1500;
	destrType = "DestructBuilding";
}; 

class MetalFence_halfpanel_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_stage2.p3d";
	displayName = $STR_BLD_name_MetalFence_halfpanel;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_thirdpanel_DZ",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	vehicleClass = "DayZ Epoch Buildables";
	armor = 2000;
	destrType = "DestructBuilding";
}; 

class MetalFence_thirdpanel_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_stage3.p3d";
	displayName = $STR_BLD_name_MetalFence_thirdpanel;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_1_DZ",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	vehicleClass = "DayZ Epoch Buildables";
	armor = 2500;
	destrType = "DestructBuilding";
}; 

class MetalFence_1_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1.p3d";
	displayName = $STR_BLD_name_MetalFence_1;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_2_DZ",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",4},{"ItemScrews",1},{"ItemRSJ",2}}};
	vehicleClass = "DayZ Epoch Buildables";
	armor = 3000;
	destrType = "DestructBuilding";
};  
class MetalFence_2_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence2.p3d";
	displayName = $STR_BLD_name_MetalFence_2;		
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_3_DZ",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",4},{"ItemScrews",1},{"ItemRSJ",2}}};
	vehicleClass = "DayZ Epoch Buildables";
	armor = 3500;
	destrType = "DestructBuilding";
}; 
class MetalFence_3_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence3.p3d";
	displayName = $STR_BLD_name_MetalFence_3;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_4_DZ",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemRSJ",4}}};
	vehicleClass = "DayZ Epoch Buildables";
	armor = 4000;
	destrType = "DestructBuilding";
}; 
class MetalFence_4_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence4.p3d";
	displayName = $STR_BLD_name_MetalFence_4;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_5_DZ",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemRSJ",2}}};
	vehicleClass = "DayZ Epoch Buildables";
	armor = 4500;
	destrType = "DestructBuilding";
}; 
class MetalFence_5_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence5.p3d";
	displayName = $STR_BLD_name_MetalFence_5;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_6_DZ",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemPole",4},{"equip_metal_sheet",4}}};
	vehicleClass = "DayZ Epoch Buildables";	
	armor = 5000;
	destrType = "DestructBuilding";
}; 
class MetalFence_6_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence6.p3d";
	displayName = $STR_BLD_name_MetalFence_6;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_7_DZ",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemPole",6},{"PartGeneric",2}}};
	vehicleClass = "DayZ Epoch Buildables";
	armor = 5500;
	destrType = "DestructBuilding";
}; 
class MetalFence_7_DZ: ModularItems 
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence7.p3d";
	displayName = $STR_BLD_name_MetalFence_7;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	offset[] = {0,4,0};		
	ladders[]={{"ladderstart","ladderend"}};	
	vehicleClass = "DayZ Epoch Buildables";
	armor = 5500;
	destrType = "DestructBuilding";
}; 