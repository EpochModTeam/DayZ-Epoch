class WoodenFence_1_foundation_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_ground.p3d";
	displayName = $STR_BLD_name_WoodenFence_1_foundation;
	armor = 1000;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_1_frame_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};
}; 
class WoodenFence_1_frame_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_frame.p3d";
	displayName = $STR_BLD_name_WoodenFence_1_frame;
	armor = 1200;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_quaterpanel_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};	
}; 
class WoodenFence_quaterpanel_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_stage1.p3d";
	displayName = $STR_BLD_name_WoodenFence_quaterpanel;
	armor = 1400;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_halfpanel_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};	
}; 
class WoodenFence_halfpanel_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_stage2.p3d";
	displayName = $STR_BLD_name_WoodenFence_halfpanel;
	armor = 1600;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_thirdpanel_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};
}; 
class WoodenFence_thirdpanel_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1_stage3.p3d";
	displayName = $STR_BLD_name_WoodenFence_thirdpanel;
	armor = 1800;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_1_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};	
}; 
class WoodenFence_1_DZ: ModularItems
{
	scope = 2;
	model = "z\addons\dayz_buildings\models\fence1.p3d";
	displayName = $STR_BLD_name_WoodenFence_1;
	armor = 2000;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_2_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",8},{"equip_nails",2}}};	
};
 
class WoodenFence_2_DZ: ModularItems
{
	scope = 2;
	armor = 2200;
	model = "z\addons\dayz_buildings\models\fence2.p3d";
	displayName = $STR_BLD_name_WoodenFence_2;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_3_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",8},{"equip_nails",2}}};	
}; 
class WoodenFence_3_DZ: ModularItems
{
	scope = 2;
	armor = 2400;
	model = "z\addons\dayz_buildings\models\fence3.p3d";
	displayName = $STR_BLD_name_WoodenFence_3;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_4_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",8},{"equip_nails",2}}};
}; 
class WoodenFence_4_DZ: ModularItems
{
	scope = 2;
	armor = 2600;
	model = "z\addons\dayz_buildings\models\fence4.p3d";
	displayName = $STR_BLD_name_WoodenFence_4;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_5_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemLog",5},{"equip_nails",2}}};
}; 
class WoodenFence_5_DZ: ModularItems
{
	scope = 2;
	armor = 2800;
	model = "z\addons\dayz_buildings\models\fence5.p3d";
	displayName = $STR_BLD_name_WoodenFence_5;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_6_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",4},{"ItemPlank",2},{"equip_nails",2}}};
}; 

class WoodenFence_6_DZ: ModularItems
{
	scope = 2;
	armor = 3000;
	model = "z\addons\dayz_buildings\models\fence6.p3d";
	displayName = $STR_BLD_name_WoodenFence_6;
	offset[] = {0,4,0};	
	upgradeBuilding[] = {"WoodenFence_7_DZ",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemWoodLadder",1},{"equip_nails",1}}};
};

class WoodenFence_7_DZ: ModularItems
{
	scope = 2;
	armor = 3000;
	model = "z\addons\dayz_buildings\models\fence7.p3d";
	displayName = $STR_BLD_name_WoodenFence_7;
	offset[] = {0,4,0};	
	ladders[] = {{"ladderstart","ladderend"}};
	GhostPreview = "WoodenFence_7_Preview_DZ";
}; 