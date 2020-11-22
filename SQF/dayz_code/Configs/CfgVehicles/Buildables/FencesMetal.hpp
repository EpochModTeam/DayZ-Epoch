class MetalFence_ghost_DZ: DZE_Ghost_Previews
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence_ghost.p3d";
	displayName = $STR_BLD_name_MetalFence_ghost;
}; 

class MetalFence_1_foundation_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_foundation.p3d";
	displayName = $STR_BLD_name_MetalFence_1_foundation;
	GhostPreview = "MetalFence_ghost_DZ";
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_1_frame_DZ",{"ItemToolbox","ItemSledge"},{{"ItemPlank",4},{"ItemRSJ",1}}};
	armor = 1000;
}; 

class MetalFence_1_frame_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_stage1.p3d";
	displayName = $STR_BLD_name_MetalFence_1_frame;
	GhostPreview = "MetalFence_ghost_DZ";
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_halfpanel_DZ",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	armor = 1500;
}; 

class MetalFence_halfpanel_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_stage2.p3d";
	displayName = $STR_BLD_name_MetalFence_halfpanel;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_thirdpanel_DZ",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	armor = 2000;
}; 

class MetalFence_thirdpanel_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1_stage3.p3d";
	displayName = $STR_BLD_name_MetalFence_thirdpanel;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_1_DZ",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",3},{"ItemScrews",1}}};
	armor = 2500;
}; 

class MetalFence_1_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence1.p3d";
	displayName = $STR_BLD_name_MetalFence_1;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_2_DZ",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",4},{"ItemScrews",1},{"ItemRSJ",2}}};
	armor = 3000;
};  
class MetalFence_2_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence2.p3d";
	displayName = $STR_BLD_name_MetalFence_2;		
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_3_DZ",{"ItemToolbox","ItemSledge"},{{"ItemMetalSheet",4},{"ItemScrews",1},{"ItemRSJ",2}}};
	armor = 3500;
}; 
class MetalFence_3_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence3.p3d";
	displayName = $STR_BLD_name_MetalFence_3;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_4_DZ",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemRSJ",4}}};
	armor = 4000;
}; 
class MetalFence_4_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence4.p3d";
	displayName = $STR_BLD_name_MetalFence_4;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_5_DZ",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemRSJ",2}}};
	armor = 4500;
}; 
class MetalFence_5_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence5.p3d";
	displayName = $STR_BLD_name_MetalFence_5;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_6_DZ",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemPole",4},{"equip_metal_sheet",4}}};
	armor = 5000;
}; 
class MetalFence_6_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence6.p3d";
	displayName = $STR_BLD_name_MetalFence_6;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"MetalFence_7_DZ",{"ItemToolbox","ItemSledge"},{{"ItemScrews",1},{"ItemPole",6},{"PartGeneric",2}}};
	armor = 5500;
}; 
class MetalFence_7_DZ: ModularItems 
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\metal_fence7.p3d";
	displayName = $STR_BLD_name_MetalFence_7;
	offset[] = {0,4,0};		
	ladders[]={{"ladderstart","ladderend"}};	
	armor = 5500;
}; 