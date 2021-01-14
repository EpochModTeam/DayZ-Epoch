//	Note: If adding a custom wreck model make sure the p3d model name is used as the class name with the prefix Land_ 
//	E.g.: wood_wreck_frame.p3d = Land_ + wood_wreck_frame = Land_wood_wreck_frame

class Land_wood_wreck_frame : ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
	displayName = $STR_WOOD_WALL_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Land_wood_wreck_third : ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
	displayName = $STR_WOOD_WALL_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Land_wood_wreck_half : ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_half.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Land_wood_wreck_floor : ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Land_wood_wreck_quarter : ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wood_wreck_quarter.p3d";
	displayName = $STR_WOOD_FLOOR_WRECK;
	removeoutput[] = {{"PartWoodPlywood",{0,1}},{"PartWoodLumber",{0,1}}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Land_wreck_cinder: ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
	displayName = $STR_CINDER_WALL_WRECK;
	removeoutput[] = {{"CinderBlocks",{0,1}}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Land_wreck_metal_floor: ruins	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\wreck_metal_floor.p3d";
	displayName = $STR_METAL_FLOOR_WRECK;
	removeoutput[] = {{"ItemPole",{0,2}},{"equip_metal_sheet",{0,2}}};
	vehicleClass = "DayZ Epoch Buildables";
};

class Land_metal_floor_2x2_wreck: ruins {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\floors\metal_floor_2x2_wreck.p3d";
	displayName = $STR_METAL_FLOOR_WRECK;
	removeoutput[] = {{"ItemPole",{0,4}},{"equip_metal_sheet",{0,4}}};
	vehicleClass = "DayZ Epoch Buildables";
};