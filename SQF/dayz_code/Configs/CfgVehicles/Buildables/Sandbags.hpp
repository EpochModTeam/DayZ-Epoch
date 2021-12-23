class Sandbag1_DZ: BuiltItems {
	scope = 2;
	model = "\ca\misc2\BagFenceLong.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
	mapSize = 2;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_BUILT_SANDBAG;
	simulation = "house";
	destrType = "DestructNo";
	armor = 2500;
	offset[] = {0,2.5,0};
	constructioncount = 3;
	nounderground = 0;
	removeoutput[] = {{"ItemSandbag",1}};
	//Remove vanilla dismantle action
	class UserActions {delete Dismantle;};
};

class BagFenceRound_DZ: BuiltItems {
	scope = 2;
	model = "\ca\misc2\BagFenceRound.p3d";
	icon = "\Ca\misc3\data\Icons\icon_bagFenceRound_ca.paa";
	mapSize = 2;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_21_ROUND;
	simulation = "house";
	destrType = "DestructNo";
	armor = 2500;
	offset[] = {0,2.5,0};
	constructioncount = 3;
	nounderground = 0;
	removeoutput[] = {{"BagFenceRound_DZ_kit",1}};
};

class Land_HBarrier1_DZ: ModularItems { // BuiltItems
	scope = 2;
	model = "\ca\misc2\HBarrier1.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier1_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 2;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_21_HBARRIER;
	//GhostPreview = "Land_HBarrier1Preview";
	simulation = "house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",1}};
	armor = 7500;
	offset[] = {0,2,0};
	constructioncount = 4;
	nounderground = 0;
};

class Land_HBarrier3_DZ: ModularItems { // BuiltItems
	scope = 2;
	model = "\ca\misc2\HBarrier3.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier3_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 3.5;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_21_3XHBARRIER;
	//GhostPreview = "Land_HBarrier3ePreview";
	simulation = "house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",2}};
	armor = 9000;
	offset[] = {0,2.5,0};
	constructioncount = 8;
	nounderground = 0;
};

class Land_HBarrier5_DZ: ModularItems { // BuiltItems
	scope = 2;
	model = "\ca\misc2\HBarrier5.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 7;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_21_5XHBARRIER;
	//GhostPreview = "Land_HBarrier5Preview";
	simulation = "house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",3}};
	armor = 10000;
	offset[] = {0,4,0};
	constructioncount = 8;
	nounderground = 0;
};

class Land_HBarrier5Curved_DZ: ModularItems {
	scope = 2;
	model = "\ca\misc2\HBarrier5_round15.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 7;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_HBARRIER5CURVED;
	simulation = "house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",3}};
	armor = 10000;
	offset[] = {0,4,0};
	constructioncount = 8;
	nounderground = 0;
};

class Land_WarfareBarrier5x_DZ: ModularItems {
	scope = 2;
	model = "\ca\misc3\WF\WF_hesco_5x.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 7;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_WBARRIER5;
	simulation = "house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",3}};
	armor = 10000;
	offset[] = {0,5,0};
	constructioncount = 8;
	nounderground = 0;
};

class Land_WarfareBarrier10x_DZ: ModularItems {
	scope = 2;
	model = "\ca\misc3\WF\WF_hesco_10x.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 7;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_WBARRIER10;
	simulation = "house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",4}};
	armor = 15000;
	offset[] = {0,9,0};
	constructioncount = 8;
	nounderground = 0;
};

class Land_WarfareBarrier10xTall_DZ: ModularItems {
	scope = 2;
	model = "\ca\misc3\WF\WF_hesco_big_10x.p3d";
	icon = "\Ca\misc2\data\Icons\icon_hescoBarrier5_ca.paa";
	picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	mapSize = 7;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_WBARRIER10TALL;
	simulation = "house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",5}};
	armor = 20000;
	offset[] = {0,9,0};
	constructioncount = 8;
	nounderground = 0;
};

class SandNest_DZ: ModularItems {	// BuiltItems
	scope = 2;
	model = "\ca\Misc_E\fortified_nest_small_ep1";
	icon = "\Ca\misc3\data\Icons\icon_fortNestSmall_ca.paa";
	mapSize = 5;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_21_NEST;
	//GhostPreview = "Land_fortified_nest_smallPreview";
	simulation = "house";
	expansion = 1;
	nameSound = "obj_house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",1},{"PartWoodLumber",1}};
	armor = 7500;
	offset[] = {0,4.5,-0.1};
	constructioncount = 5;
	nounderground = 0;
};

class SandNestLarge_DZ: ModularItems {
	scope = 2;
	model = "\ca\misc3\fortified_nest_big.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortnestbig_ca.paa";
	mapSize = 6;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_LARGENEST;
	simulation = "house";
	expansion = 1;
	nameSound = "obj_house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",2},{"PartWoodLumber",1}};
	armor = 12500;
	offset[] = {0,8,0};
	constructioncount = 7;
	nounderground = 0;
	
};

class HeavyBagFence_DZ: ModularItems {
	scope = 2;
	model = "\ca\misc3\fort_bagfence_long.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortbagfencelong_ca.paa";
	mapSize = 3;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_HBF;		// "Heavy Bag Fence"
	simulation = "house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",1}};
	armor = 5000;
	offset[] = {0,2.5,0};
	constructioncount = 3;
	nounderground = 0;
};

class HeavyBagFenceCorner_DZ: ModularItems {
	scope = 2;
	model = "\ca\misc3\fort_bagfence_corner.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortbagfencecorner_ca.paa";
	mapSize = 4;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_HBF_CORNER;	// "Heavy Bag Fence (Corner)"
	simulation = "house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",1}};
	armor = 6250;
	offset[] = {0,3,0};
	constructioncount = 4;
	nounderground = 0;
};

class HeavyBagFenceRound_DZ: ModularItems {
	scope = 2;
	model = "\ca\misc3\fort_bagfence_round.p3d";
	icon = "\Ca\misc3\data\Icons\icon_fortbagfenceround_ca.paa";
	mapSize = 6;
	vehicleClass = "DayZ Epoch Buildables";
	displayName = $STR_EQUIP_NAME_HBF_ROUND;	// "Heavy Bag Fence (Round)"
	simulation = "house";
	destrType = "DestructBuilding";
	maintainBuilding[] = {{"ItemSandbag",1},{"PartWoodPile",1}};
	armor = 7500;
	offset[] = {0,4,0};
	constructioncount = 5;
	nounderground = 0;
};
